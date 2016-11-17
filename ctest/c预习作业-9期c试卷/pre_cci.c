# 1 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c"
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





 
 

















# 1 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 2 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c" 2

# 1 "ActionStrlenSizeof.c" 1
ActionStrlenSizeof()
{
    char str[]="testroad";
	lr_output_message("strlen:%d",strlen(str));
	lr_output_message("sizeof:%d",sizeof(str));
	lr_output_message("getstrlen:%d",getstrlen(str));
	lr_output_message("getsizeof:%d",getsizeof(str));
	return 0;
}

int getstrlen(char * str){
	int count=0;
	while(*str++){
		count++;
	}
	return count;

}
int getsizeof(char * str){
	int count=1;
	while(*str++){
		count++;
	}
	return count;
}
# 3 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c" 2

# 1 "ActionAverage.c" 1
ActionAverage()
{
	int a[]={1,2,3,4,5,6,7};
	lr_output_message("avg:%d",sizeof(a)/sizeof(int));
	lr_output_message("avg:%d",getavg(a,sizeof(a)/sizeof(int)));
	return 0;
}

int getavg(int * a,int len){
	int sum=0;
	int i;
	
	for(i=0;i<len;i++){
		sum+=*(a+i);
	}
	return (sum*1.0)/i;
}
# 4 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c" 2

# 1 "ActionABC.c" 1
ActionABC()
{
	int a,b,c;
	int flag=0;

	for(c=0;c<=10;c++){
		for(b=0;b<=10;b++){
			if((b*c*c*(c-1))==20){
				 
				 
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}

	}
	lr_output_message("c:%d",c);
	lr_output_message("b:%d",b);
	a=30-b*c*c;
	lr_output_message("a:%d",a);
	return 0;
}
# 5 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c" 2

# 1 "ActionGrade.c" 1
ActionGrade()
{
	lr_output_message("等级是：%c",getGrade(50));
	lr_output_message("分数范围是：%s",getScope('B'));
	return 0;
}

char getGrade(int score){
	char grade;
	if(score>=85 && score<=100){
		grade='A';
	}else if(score>=60 && score<=84){
		grade='B';
	}else if(score>=0 && score<60){
		grade='C';
	}else{
		return 'N';
	}
	return grade;

}
char * getScope(char c){
	
	switch(c){
		case 'A':{return "85-100";break;}
		case 'B':{return "60-84";break;}
		case 'C':{return "60以下";break;}
	}
}

# 6 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c" 2

# 1 "ActionSplitStr.c" 1
ActionSplitStr()
{
	char str[]="www.baidu.com,www.sina.com,www.cctv.com";
	char * url1 =  (char *)malloc(sizeof(char)*20);
	char * url2 =  (char *)malloc(sizeof(char)*20);
	char * url3 =  (char *)malloc(sizeof(char)*20);
	splitStr(url1,url2,url3,str,',');
	lr_output_message("url1:%s",url1);
	lr_output_message("url2:%s",url2);
	lr_output_message("url3:%s",url3);
	return 0;
}

void splitStr(char * url1,char * url2,char * url3,char * str,char c){
	
	int * indexs = (int *)malloc(sizeof(int)*3);
	int i=0,j,n,m=0;
	
	for(j=0;*(str+j)!='\0';j++){
		if(*(str+j)==c){
			lr_output_message("j:%d",j);
			lr_output_message("i:%d",i);
			*(indexs+i)=j;
			i++;
		}
		
	}
lr_output_message("j:%d",j);
lr_output_message("i:%d",i);

	strncpy(url1,str,*(indexs));
	
	str=str+*(indexs)+1;
	strncpy(url2,str,*(indexs+1)-*(indexs)-1);
	
	str=str+*(indexs+1)-*(indexs);
	strcpy(url3,str);
	

	
return ;
	
}
 
# 78 "ActionSplitStr.c"
 
# 106 "ActionSplitStr.c"
# 7 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 8 "d:\\my\\study\\performance\\lrtest-script\\ctest\\c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355\\\\combined_c\324\244\317\260\327\367\322\265-9\306\332c\312\324\276\355.c" 2

