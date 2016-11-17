# 1 "d:\\my\\study\\performance\\lrtest-script\\tcp_test\\\\combined_TCPTest.c"
# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 502 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 562 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1005 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "d:\\my\\study\\performance\\lrtest-script\\tcp_test\\\\combined_TCPTest.c" 2

# 1 "vuser_init.c" 1
 





# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrs.h" 1
 



 
# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrs_err.h" 1
 






 
























 




 





 

 







 








































 










# 6 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrs.h" 2


































































































 
 




 




 
enum{
	LRS_NO_DELAY
};

 
enum{
	LOCAL_ADDRESS,
	LOCAL_HOSTNAME,
	LOCAL_PORT,
	REMOTE_ADDRESS,
	REMOTE_HOSTNAME,
	REMOTE_PORT
};

 
enum{
	Mismatch,
	EndMarker
};
 
enum{
	MISMATCH_SIZE,
	MISMATCH_CONTENT
};
 
enum{
	EndMarker_None,
	StringTerminator,
	BinaryStringTerminator,
	RecordingSize
};

 
enum{
	RecieveOption_None = 0,
	NoOption = 0,
	OffsetSize = 1,
	LeftRightBoundaries = 2,
	LeftBoundarySize = 3
};


 
int		LrsStartup(int ver_info);
int		LrsCleanup(void);
int		LrsCreateSocket(char *s_desc, char *s_type, ...);
int		LrsAcceptConnection(char *old_s_desc, char *new_s_desc);
int		LrsCloseSocket(char	*s_desc);
int		LrsDisableSocket(char *s_desc, int operation_to_disable);
int		LrsSend(char *s_desc, char *buf_desc, ...);
int		LrsLengthSend(char *s_desc, char	*buf_desc, int send_option, ...);
int		LrsSetSendBuffer(char *s_desc, char *buffer, int size);
int		LrsReceive(char	*s_desc, char *buf_desc, ...);
int		LrsReceiveEx(char *s_desc, char	*buf_desc, ...);
int		LrsLengthReceive(char *s_desc, char	*buf_desc, int receive_option, ...);
int		LrsSetReceiveOption(int option,	int value, ...);
int		LrsGetSocketHandler(char *s_desc);
int		LrsSetSocketHandler(char *s_desc,int s_handler);
int		LrsGetLastReceivedBuffer(char *s_desc, char **actual_buf, int *actual_bytes);
char*	LrsGetReceivedBuffer(char* s_desc, int sub_buf_offset, int	sub_buf_len, char*	encoding);
int		LrsGetLastReceivedBufferSize(char*	s_desc);
int		LrsGetBufferByName(char	*buf_desc, char	**actual_buf, int *actual_bytes);
char*	LrsGetStaticBuffer(char	*s_desc,char* buf_desc,int sub_buf_offset,int sub_buf_len,char* encoding);
int		LrsSaveParam(char* s_desc, char* buf_desc, char* param_name, int offset, int param_len);
int		LrsSaveParamEx(char* s_desc, char* whence, char* buf_desc, int offset, int param_len, char*	encoding, char*	param_name);
int		LrsSaveSearchedString(char*	s_desc,	char* buf_desc, char* param_name, char*	left_boundary, char* right_boundary,int ordinal, int offset, int param_len);
int		LrsFreeBuffer(char*	buffer);
void	LrsSetSendTimeout(long	tv_sec, long tv_usec);
void	LrsSetRecvTimeout(long	tv_sec,long	tv_usec);
void	LrsSetRecvTimeout2(long	tv_sec,long	tv_usec);
void	LrsSetAcceptTimeout(long tv_sec, long tv_usec);
void	LrsSetConnectTimeout(long	tv_sec,long	tv_usec);
char*	LrsEbcdicToAscii(char* s_desc, char* buf, long buf_length);
char*	LrsAsciiToEbcdic(char* s_desc, char* buf, long buf_length);
char*	LrsDecimalToHexString(char*	s_desc,	char* buf, long buf_length);
int		LrsHexStringToInt(char*	buf, long buf_length, int* mpiOutput);
char*	LrsGetUserBuffer(char* s_desc);
long	LrsGetUserBufferSize(char* s_desc);
int		LrsSetSocketOptions(char	*s_desc, int option, char *option_val);
char*	LrsGetSocketAttrib(char *s_desc, int attrib);
int		LrsExcludeSocket(char* s_desc);



# 7 "vuser_init.c" 2



vuser_init()
{
    
	 
    return 0;
}

# 2 "d:\\my\\study\\performance\\lrtest-script\\tcp_test\\\\combined_TCPTest.c" 2

# 1 "Action.c" 1
 






# 1 "def.h" 1
char* guid_gen(){                          
	typedef struct _GUID    {
		unsigned long Data1;
		unsigned short Data2;
		unsigned short Data3;
		unsigned char Data4[8];
	} GUID;
	GUID m_guid;
	char buf[50];
	char pNameStr[50];
	CoCreateGuid(&m_guid);
	 
	 
	 
	sprintf (buf, "%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x", 
	m_guid.Data1, m_guid.Data2, m_guid.Data3,
	m_guid.Data4[0], m_guid.Data4[1], m_guid.Data4[2], m_guid.Data4[3],
	m_guid.Data4[4], m_guid.Data4[5], m_guid.Data4[6], m_guid.Data4[7]);
	 
	 
	return lr_eval_string(buf);
}

char* join(char *s1, char *s2)  
{  
    char *result = (char*)malloc(strlen(s1)+strlen(s2)+1); 
     
    if (result == 0) exit (1);  
  
    strcpy(result, s1);  
    strcat(result, s2);  
  
    return result;  
}

 
 
 
 
 
 
 
 
void Substitute(char *pInput, char *pOutput, char *pSrc, char *pDst)
{
    char    *pi, *po, *p;
    int     nSrcLen, nDstLen, nLen;

     
    pi = pInput;    
     
    po = pOutput;
     
    nSrcLen = strlen(pSrc);
    nDstLen = strlen(pDst);
 
     
    p = (char*)strstr(pi, pSrc);
    if(p)
    {
         
        while(p)
        {
             
            nLen = (int)(p - pi);
             
            memcpy(po, pi, nLen);
            memcpy(po + nLen, pDst, nDstLen);
             
            pi = p + nSrcLen;
             
            po = po + nLen + nDstLen;
             
            p = (char*)strstr(pi, pSrc);
        }
         
        strcpy(po, pi);
    }
    else
    {
         
        strcpy(po, pi);
    }
}

 




char *strreplace(char *dest, char *src, const char *oldstr, const char *newstr, int len)
{
	 
	char *needle;
	 
	char *tmp;

	 
	lr_output_message("newStr:%s",newstr);
	if(strcmp(oldstr, newstr)==0)
	{
		return src;
	}

	 
	dest = src;
	 
	while((needle = (char *) strstr(dest, oldstr)) && (needle -dest <= len))
	{
		 
		tmp=(char*)malloc(strlen(dest)+(strlen(newstr)-strlen(oldstr))+1);
		 
		strncpy(tmp, dest, needle-dest);
		 
		tmp[needle-dest]='\0';
		 
		strcat(tmp, newstr);
		 
		strcat(tmp, needle+strlen(oldstr));
		 
		dest = (char *)strdup(tmp);
		 
		free(tmp);
	}
	return dest;
}
# 8 "Action.c" 2


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


	 
	loginStr = strreplace(loginStr,loginSrc,"$ClientId",clientId,strlen(loginSrc));
	loginStr = strreplace(loginStr,loginStr,"$IP","127.0.0.1",strlen(loginStr));
	loginStr = strreplace(loginStr,loginStr,"$Port","18888",strlen(loginStr));
	lr_output_message("loginStr:%s",loginStr);

	loginStrLen = strlen(loginStr)+1;
	 
	 
    sprintf(loginStrLenStr, "%X", loginStrLen);
	 
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
		 
		 
	}
	 

	send_loginHeaderf = strreplace(send_loginHeaderf,send_loginHeader,"$Len",loginStrLenStr,strlen(send_loginHeader));
	 
	strcpy(send_loginStr,send_loginHeaderf);
	
	 

	for(loginIndex=0,loginIndex2=strlen(send_loginStr);loginIndex<strlen(loginStr);loginIndex++,loginIndex2++)
	{
		char loginHex[5];
		sprintf(loginHex,"\\x%.2X",loginStr[loginIndex]);
		 
		strcat(send_loginStr+loginIndex2,loginHex);
	}
	strcat(send_loginStr+loginIndex2,"\\x0A");
	lr_output_message("send_loginStr:%s",send_loginStr);


	 
	lr_start_transaction("login");
    LrsCreateSocket("socket0", "TCP", "LocalHost=0", "RemoteHost=127.0.0.1:1234","0");
	for(sendLoginCount = 0;sendLoginCount < 10;sendLoginCount++)
	{
		 
		lr_output_message("sendLoginCount:%d",sendLoginCount);
		LrsSetSendBuffer("socket0",send_loginStr,strlen(send_loginStr));
		LrsSend("socket0","buf0","0");	
		LrsReceive("socket0", "buf1", "0");
		{
			char* login_recv;
			int login_recvlen;
			int i;
			LrsGetLastReceivedBuffer("socket0",&login_recv,&login_recvlen);
			if(login_recvlen!=0)
			{
				lr_end_transaction("login", 2);
				lr_output_message("%s",login_recv+15);
				
			
				 
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
					 
					 
				}
				 
			
				send_addCrossHeaderf = strreplace(send_addCrossHeaderf,send_addCrossHeader,"$Len",crossStrLenStr,strlen(send_addCrossHeader));
				 
				strcpy(send_crossStr,send_addCrossHeaderf);
				 
			
				for(crossAddIndex=0,crossAddIndex2=strlen(send_crossStr);crossAddIndex<strlen(crossStr);crossAddIndex++,crossAddIndex2++)
				{
					char crossHex[5];
					sprintf(crossHex,"\\x%.2X",crossStr[crossAddIndex]);
					 
					strcat(send_crossStr+crossAddIndex2,crossHex);
				}
				strcat(send_crossStr+crossAddIndex2,"\\x0A");
				lr_output_message("send_crossStr:%s",send_crossStr);
				 
	
				lr_start_transaction("addCross");
				for(sendCrossCount=0;sendCrossCount<10;sendCrossCount++)
				{
					lr_output_message("send_crossStr:%s",send_crossStr);
					lr_output_message("sendCrossCount:%d",sendCrossCount);
					LrsSetSendBuffer("socket0",send_crossStr,strlen(send_crossStr));
					LrsSend("socket0","buf0","0");
					LrsReceive("socket0","buf1","0");
		
					{
						char* cross_recv;
						int cross_recvlen;
						LrsGetLastReceivedBuffer("socket0",&cross_recv,&cross_recvlen);
						
						if(cross_recvlen!=0)
						{
							lr_end_transaction("addCross", 2);
							lr_output_message("cross_recv:%s",cross_recv+15);
							break;
						}else{
							 
						}
						
					}
				}
				if(sendCrossCount>10)
				{
					lr_end_transaction("addCross", 1);
				}
				
				break;
				
			}else{
				 
			}
			
		}
	}
	

	if(sendLoginCount>10)
	{
		lr_end_transaction("login", 1);
	}

	while(1)
	{
		char* recv;
		int recvlen;

		LrsReceive("socket0","buf3","0");
		LrsGetLastReceivedBuffer("socket0",&recv,&recvlen);
				
		if(recvlen!=0)
		{
			lr_output_message("recv:%s",recv+15);
		}else{
			
		}
				
	}

    LrsCloseSocket("socket0");

    return 0;
}
# 3 "d:\\my\\study\\performance\\lrtest-script\\tcp_test\\\\combined_TCPTest.c" 2

# 1 "vuser_end.c" 1
 








vuser_end()
{
    LrsCleanup();

    return 0;
}

# 4 "d:\\my\\study\\performance\\lrtest-script\\tcp_test\\\\combined_TCPTest.c" 2

