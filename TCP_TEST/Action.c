/*********************************************************************
 * Created by Mercury Interactive Windows Sockets Recorder
 *
 * Created on: Tue Dec 30 16:04:06
 *********************************************************************/

#include "lrs.h"
#include "def.h"

Action()
{
	int sendLoginCount=0,sendCrossCount=0;
    int loginIndex,loginIndex2;
	char* clientId = guid_gen();
	char clientId2[100];
	char* clientId3;
	int clientIdlen;
    char* loginSrc = "<?xml version=\"1.0\" encoding=\"UTF-8\" ?>\n<Parament>\n" 	
						"    <ClientId>$ClientId</ClientId>\n"
						"    <ServerIP>$IP</ServerIP>\n"
						"    <ServerPort>$Port</ServerPort>\n"
						"    <Username></Username>\n"
						"    <Password></Password>\n"
					 "</Parament>";
	char* loginStr;
	int loginStrLen;
	char* loginStrLenHex;
	char loginStrLenStr[5];
	char send_loginHeader[100]="\\x12$Len\\x00\\x010";
	char* send_loginHeaderf;
	char send_loginStr[1500]="";

	
	//添加路口相关字符串
	char* crossSrc= "<?xml version=\"1.0\" encoding=\"UTF-8\" ?>\n<Parament>\n" 	
						"    <ClientId>$ClientId</ClientId>\n"
						"    <CrossId>$CrossId</CrossId>\n"
					 "</Parament>";
	char* send_addCrossHeader = "\\x12$Len\\x00\\x02";
	char* crossId = lr_eval_string("<db_crossId>");
	char* crossStr;
	char send_crossStr[1700];
	char crossStrLenStr[5];
	int crossStrLen;
	char* send_addCrossHeaderf;
	int crossAddIndex,crossAddIndex2;

	strcpy(clientId2,lr_eval_string(clientId));
	clientId3 = clientId;


	//登陆数据
	loginStr = strreplace(loginStr,loginSrc,"$ClientId",clientId,strlen(loginSrc));
	loginStr = strreplace(loginStr,loginStr,"$IP","127.0.0.1",strlen(loginStr));
	loginStr = strreplace(loginStr,loginStr,"$Port","18888",strlen(loginStr));
	lr_output_message("loginStr:%s",loginStr);

	loginStrLen = strlen(loginStr)+1;
	//lr_output_message("loginStrLen:%d",loginStrLen);
	//itoa(loginStrLen,loginStrLenStr,16);
    sprintf(loginStrLenStr, "%X", loginStrLen);
	//lr_output_message("loginStrLenStr:%s",loginStrLenStr);
	if(strlen(loginStrLenStr)==2)
	{
		char tmpH[5];
		strcpy(tmpH,loginStrLenStr);
		strcpy(loginStrLenStr,"\\x00\\x00\\x00\\x");
		strcat(loginStrLenStr,tmpH);
	}else{
		char tmpH[5];
		char tmpD[5];
		strcpy(tmpH,loginStrLenStr);
		strcpy(tmpH+1,"\0");
		strcpy(tmpD,loginStrLenStr+strlen(loginStrLenStr)-2);
		strcpy(loginStrLenStr,"\\x00\\x00\\x0");
		strcat(loginStrLenStr,tmpH);
		strcat(loginStrLenStr,"\\x");
		strcat(loginStrLenStr,tmpD);
		//lr_output_message("tmpH:%s",tmpH);
		//lr_output_message("tmpD:%s",tmpD);
	}
	//lr_output_message("loginStrLenStr:%s",loginStrLenStr);

	send_loginHeaderf = strreplace(send_loginHeaderf,send_loginHeader,"$Len",loginStrLenStr,strlen(send_loginHeader));
	//lr_output_message("send_loginHeader:%s",send_loginHeaderf);
	strcpy(send_loginStr,send_loginHeaderf);
	
	//lr_output_message("send_loginStr:%s",send_loginStr);

	for(loginIndex=0,loginIndex2=strlen(send_loginStr);loginIndex<strlen(loginStr);loginIndex++,loginIndex2++)
	{
		char loginHex[5];
		sprintf(loginHex,"\\x%.2X",loginStr[loginIndex]);
		//strcat(send_loginBody,loginHex);
		strcat(send_loginStr+loginIndex2,loginHex);
	}
	strcat(send_loginStr+loginIndex2,"\\x0A");
	lr_output_message("send_loginStr:%s",send_loginStr);


	//创建TCP连接
	lr_start_transaction("login");
    lrs_create_socket("socket0", "TCP", "LocalHost=0", "RemoteHost=127.0.0.1:1234",LrsLastArg);
	for(sendLoginCount = 0;sendLoginCount < 10;sendLoginCount++)
	{
		//lr_output_message("send_loginStr:%s",send_loginStr);
		lr_output_message("sendLoginCount:%d",sendLoginCount);
		lrs_set_send_buffer("socket0",send_loginStr,strlen(send_loginStr));
		lrs_send("socket0","buf0",LrsLastArg);	
		lrs_receive("socket0", "buf1", LrsLastArg);
		{
			char* login_recv;
			int login_recvlen;
			int i;
			lrs_get_last_received_buffer("socket0",&login_recv,&login_recvlen);
			if(login_recvlen!=0)
			{
				lr_end_transaction("login", LR_AUTO);
				lr_output_message("%s",login_recv+15);
				
			
				//添加路口
				lr_output_message("clientId3:%s",lr_eval_string(clientId2));
				crossStr = strreplace(crossStr,crossSrc,"$ClientId",clientId3,strlen(crossSrc));
				crossStr = strreplace(crossStr,crossStr,"$CrossId",crossId,strlen(crossStr));
				lr_output_message("crossStr:%s",crossStr);
				crossStrLen = strlen(crossStr)+1;
				sprintf(crossStrLenStr,"%X",crossStrLen);
				if(strlen(crossStrLenStr)==2)
				{
					char tmpH[5];
					strcpy(tmpH,crossStrLenStr);
					strcpy(crossStrLenStr,"\\x00\\x00\\x00\\x");
					strcat(crossStrLenStr,tmpH);
				}else{
					char tmpH[5];
					char tmpD[5];
					strcpy(tmpH,crossStrLenStr);
					strcpy(tmpH+1,"\0");
					strcpy(tmpD,crossStrLenStr+strlen(crossStrLenStr)-2);
					strcpy(crossStrLenStr,"\\x00\\x00\\x0");
					strcat(crossStrLenStr,tmpH);
					strcat(crossStrLenStr,"\\x");
					strcat(crossStrLenStr,tmpD);
					//lr_output_message("cross_tmpH:%s",tmpH);
					//lr_output_message("cross_tmpD:%s",tmpD);
				}
				//lr_output_message("crossStrLenStr:%s",crossStrLenStr);
			
				send_addCrossHeaderf = strreplace(send_addCrossHeaderf,send_addCrossHeader,"$Len",crossStrLenStr,strlen(send_addCrossHeader));
				//lr_output_message("send_addCrossHeaderf:%s",send_addCrossHeaderf);
				strcpy(send_crossStr,send_addCrossHeaderf);
				//lr_output_message("send_crossStr:%s",send_crossStr);
			
				for(crossAddIndex=0,crossAddIndex2=strlen(send_crossStr);crossAddIndex<strlen(crossStr);crossAddIndex++,crossAddIndex2++)
				{
					char crossHex[5];
					sprintf(crossHex,"\\x%.2X",crossStr[crossAddIndex]);
					//strcat(send_loginBody,loginHex);
					strcat(send_crossStr+crossAddIndex2,crossHex);
				}
				strcat(send_crossStr+crossAddIndex2,"\\x0A");
				lr_output_message("send_crossStr:%s",send_crossStr);
				//lr_output_message("send_loginStr:%s",send_loginStr);
	
				lr_start_transaction("addCross");
				for(sendCrossCount=0;sendCrossCount<10;sendCrossCount++)
				{
					lr_output_message("send_crossStr:%s",send_crossStr);
					lr_output_message("sendCrossCount:%d",sendCrossCount);
					lrs_set_send_buffer("socket0",send_crossStr,strlen(send_crossStr));
					lrs_send("socket0","buf0",LrsLastArg);
					lrs_receive("socket0","buf1",LrsLastArg);
		
					{
						char* cross_recv;
						int cross_recvlen;
						lrs_get_last_received_buffer("socket0",&cross_recv,&cross_recvlen);
						
						if(cross_recvlen!=0)
						{
							lr_end_transaction("addCross", LR_AUTO);
							lr_output_message("cross_recv:%s",cross_recv+15);
							break;
						}else{
							//lr_end_transaction("addCross", LR_FAIL);
						}
						
					}
				}
				if(sendCrossCount>10)
				{
					lr_end_transaction("addCross", LR_FAIL);
				}
				
				break;
				
			}else{
				//lr_end_transaction("login", LR_FAIL);
			}
			
		}
	}
	

	if(sendLoginCount>10)
	{
		lr_end_transaction("login", LR_FAIL);
	}

	while(1)
	{
		char* recv;
		int recvlen;

		lrs_receive("socket0","buf3",LrsLastArg);
		lrs_get_last_received_buffer("socket0",&recv,&recvlen);
				
		if(recvlen!=0)
		{
			lr_output_message("recv:%s",recv+15);
		}else{
			
		}
				
	}

    lrs_close_socket("socket0");

    return 0;
}
