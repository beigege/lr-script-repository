#include "lrs.h"


Action()
{
	int rc;
	char s[]="haha";

 //--------------创建连接-----------------
 rc= lrs_create_socket("socket0", "TCP", "LocalHost=0", "RemoteHost=127.0.0.1:18888", LrsLastArg);
 if (rc==0){
//判断连接是否创建成功
  lr_output_message("Socket was successfully created ");
}
 else{
  lr_output_message("An error occurred while creating the socket, Error Code: %d", rc);
}
 lr_start_transaction("事务");
lrs_send("socket0", s, LrsLastArg); 

    return 0;
}

