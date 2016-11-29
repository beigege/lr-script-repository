# 1 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\bbstestroad-0response\\\\combined_bbstestroad-0response.c"
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





 
 

















# 1 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\bbstestroad-0response\\\\combined_bbstestroad-0response.c" 2

# 1 "globals.h" 1



 
 

# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1
 







# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1
 






















































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 596 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 609 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 647 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 715 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



 
 
 






# 10 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2












 






 











  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 





 
 
 


# 7 "globals.h" 2

# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2






 
 






# 2 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\bbstestroad-0response\\\\combined_bbstestroad-0response.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 3 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\bbstestroad-0response\\\\combined_bbstestroad-0response.c" 2

# 1 "Action.c" 1
Action()
{
	int len;
	int i;
 
# 66 "Action.c"
	web_url("bbs.testroad.org", 
		"URL=http://bbs.testroad.org/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=http://i.firefoxchina.cn/bookmarks/updates-22.json", "Referer=", "ENDITEM", 
		"Url=http://i.firefoxchina.cn/newtab/master-ii/quickdialdata-0.json", "Referer=", "ENDITEM", 
		"Url=/data/cache/common_extra.js?I6Q", "Referer=http://bbs.testroad.org/forum.php", "ENDITEM", 
		"Url=http://tcss.qq.com/heatmap/83/MzAyMTQ4ODM=.js?rand=9279443356", "Referer=http://bbs.testroad.org/forum.php", "ENDITEM", 
		"Url=http://static.youku.com/v1.0.0672/v/swf/loader.swf?VideoIDS=XNjg0MzgyOTEy&winType=BDskin&embedid=MTAzLjM3LjE0MC4xNwIxNzEwOTU3MjgCYmJzLnRlc3Ryb2FkLm9yZwIvZm9ydW0ucGhw&wd=&partnerid=0edbfd2e4fc91b72&vext="
		"pid%253D0edbfd2e4fc91b72%2526emb%253DMTAzLjM3LjE0MC4xNwIxNzEwOTU3MjgCYmJzLnRlc3Ryb2FkLm9yZwIvZm9ydW0ucGhw%2526bc%253D%2526cna%253D%2526vvlogext%253Dpc_i%25253D14695999014221cq%252526pc_u%25253D-%252526rvpvid%25253D-%252526rycid%25253D-%252526yvft%25253D1480402445000%252526vsidc%25253D1%252526seid%25253D1480402445852GFR%252526vstp%25253D3%252526svstp%25253D3%2526type%253D0%2526embsig%253D1_1480409756_1082ed6f9901ecc4dfb4710a6191825b", "Referer=http://bbs.testroad.org/forum.php", "ENDITEM", 
		"LAST");

	web_url("pingd", 
		"URL=http://pingtcss.qq.com/pingd?dm=bbs.testroad.org&url=/forum.php&arg=-&rdm=-&rurl=-&adt=-&rarg=-&pvi=8882643722&si=s2980148912&ui=0&ty=0&rt=forum&md=index&pn=1&qq=000&r2=30214883&scr=1366x768&scl=24-bit&lg=zh-cn&jv=1&pf=Win32&tz=-8&fl=-&ct=-&ext=bc=0;adid=&r3=99", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://bbs.testroad.org/forum.php", 
		"Mode=HTML", 
		"LAST");

	web_url("widget.html", 
		"URL=http://connect.qq.com/widget/shareqq/widget.html?url=http%3A%2F%2Fbbs.testroad.org%2Fforum.php&desc=&title=&summary=&pics=&flash=&site=&style=101&width=96&height=24&showcount=", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://bbs.testroad.org/forum.php", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("pgv_info=ssi=s2980148912; DOMAIN=bbs.testroad.org");

	web_add_cookie("eFID_2132_sendmail=1; DOMAIN=bbs.testroad.org");

	lr_think_time(5);

	web_url("forum-15-1.html", 
		"URL=http://bbs.testroad.org/forum-15-1.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://bbs.testroad.org/forum.php", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=http://tcss.qq.com/heatmap/83/MzAyMTQ4ODM=.js?rand=1176937836", "ENDITEM", 
		"Url=/data/cache/common_extra.js?I6Q", "ENDITEM", 
		"LAST");

	web_url("pingd_2", 
		"URL=http://pingtcss.qq.com/pingd?dm=bbs.testroad.org&url=/forum-15-1.html&arg=-&rdm=bbs.testroad.org&rurl=/forum.php&adt=-&rarg=-&pvi=8882643722&si=s2980148912&ui=0&ty=0&fi=15&rt=forum&md=forumdisplay&pn=1&qq=000&r2=30214883&scr=1366x768&scl=24-bit&lg=zh-cn&jv=1&pf=Win32&tz=-8&fl=-&ct=-&ext=bc=0;adid=&r3=171", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://bbs.testroad.org/forum-15-1.html", 
		"Mode=HTML", 
		"LAST");

	web_url("widget.html_2", 
		"URL=http://connect.qq.com/widget/shareqq/widget.html?url=http%3A%2F%2Fbbs.testroad.org%2Fforum-15-1.html&desc=&title=&summary=&pics=&flash=&site=&style=101&width=96&height=24&showcount=", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://bbs.testroad.org/forum-15-1.html", 
		"Mode=HTML", 
		"LAST");

	web_url("misc.php", 
		"URL=http://bbs.testroad.org/misc.php?mod=secqaa&action=update&idhash=qSSKSJiy&0.2474682664826603", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://bbs.testroad.org/forum-15-1.html", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"LAST");

    
	web_reg_save_param("response0",
		"LB=c=\"1\">",
		"RB=class=\"xi2\">0",
		"Ord=all",
		"Search=Body",
		"LAST");


	web_url("forum-15-2.html", 
		"URL=http://bbs.testroad.org/forum-15-2.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://bbs.testroad.org/forum-15-1.html", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/data/cache/common_extra.js?I6Q", "ENDITEM", 
		"Url=http://tcss.qq.com/heatmap/83/MzAyMTQ4ODM=.js?rand=1920234975", "ENDITEM", 
		"LAST");

	web_url("pingd_3", 
		"URL=http://pingtcss.qq.com/pingd?dm=bbs.testroad.org&url=/forum-15-2.html&arg=-&rdm=bbs.testroad.org&rurl=/forum-15-1.html&adt=-&rarg=-&pvi=8882643722&si=s2980148912&ui=0&ty=0&fi=15&rt=forum&md=forumdisplay&pn=2&qq=000&r2=30214883&scr=1366x768&scl=24-bit&lg=zh-cn&jv=1&pf=Win32&tz=-8&fl=-&ct=-&ext=bc=0;adid=&r3=3336", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://bbs.testroad.org/forum-15-2.html", 
		"Mode=HTML", 
		"LAST");

	web_url("widget.html_3", 
		"URL=http://connect.qq.com/widget/shareqq/widget.html?url=http%3A%2F%2Fbbs.testroad.org%2Fforum-15-2.html&desc=&title=&summary=&pics=&flash=&site=&style=101&width=96&height=24&showcount=", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://bbs.testroad.org/forum-15-2.html", 
		"Mode=HTML", 
		"LAST");

	web_url("misc.php_2", 
		"URL=http://bbs.testroad.org/misc.php?mod=secqaa&action=update&idhash=qSSKSJiy&0.18308906530268654", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://bbs.testroad.org/forum-15-2.html", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(30);

	web_url("forum.php", 
		"URL=http://bbs.testroad.org/forum.php?mod=ajax&action=forumchecknew&fid=15&time=1480409641&inajax=yes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://bbs.testroad.org/forum-15-2.html", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(32);

	web_url("forum.php_2", 
		"URL=http://bbs.testroad.org/forum.php?mod=ajax&action=forumchecknew&fid=15&time=1480409641&inajax=yes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://bbs.testroad.org/forum-15-2.html", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"LAST");

len=lr_paramarr_len("response0");
for(i=0;i<=len;i++){
	lr_output_message("获取的内容：%s",lr_paramarr_idx("response0",i));
}

	return 0;
}
# 4 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\bbstestroad-0response\\\\combined_bbstestroad-0response.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 5 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\bbstestroad-0response\\\\combined_bbstestroad-0response.c" 2

