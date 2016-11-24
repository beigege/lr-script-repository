# 1 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\newsbaidu\\\\combined_newsbaidu.c"
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





 
 

















# 1 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\newsbaidu\\\\combined_newsbaidu.c" 2

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


 
 


# 2 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\newsbaidu\\\\combined_newsbaidu.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 3 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\newsbaidu\\\\combined_newsbaidu.c" 2

# 1 "Action.c" 1
Action()
{
 
# 21 "Action.c"
	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=news.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=news.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=news.baidu.com");

	web_add_cookie("uid=38oGFVdjXZYvzlh6GsMOAg==; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("Hm_lvt_dd4738b5fb302cb062ef19107df5d2e4=1469502915,1469524684,1469600599,1470742249; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=img.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=img.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=img.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=d.hiphotos.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=d.hiphotos.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=d.hiphotos.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=g.hiphotos.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=g.hiphotos.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=g.hiphotos.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=e.hiphotos.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=e.hiphotos.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=e.hiphotos.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=b.hiphotos.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=b.hiphotos.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=b.hiphotos.baidu.com");

	web_add_cookie("LOCALGX=%u5317%u4EAC%7C%30%7C%u5317%u4EAC%7C%30; DOMAIN=news.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=log.news.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=log.news.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=log.news.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=hm.baidu.com");

	web_add_cookie("HMACCOUNT=437781BDE200FEBC; DOMAIN=hm.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=hm.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=hm.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=t2.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=t2.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=t2.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=passport.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=passport.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=passport.baidu.com");

	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=static.tieba.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=static.tieba.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=static.tieba.baidu.com");

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"SaveCount=count",
		"Text=百度新闻",
		"LAST");

    
	lr_start_transaction("open");


	web_url("news.baidu.com", 
		"URL=http://news.baidu.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=001&d=tab-install&r=0.5000569056903691&cid=full.firefox.com.cn", "Referer=", "ENDITEM", 
		"Url=http://i.firefoxchina.cn/bookmarks/updates-22.json", "Referer=", "ENDITEM", 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=002&d=0&r=0.039554905432021004&cid=full.firefox.com.cn", "Referer=", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/searchbox/icon-radio-checked-1x_056397d.jpg", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/searchbox/icon-radio-notchecked-1x_00b3956.jpg", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/navbar/icon-index_2c3bd00.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/navbar/icon-new_b295ac1.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/navbar/down-1x_f2091fe.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://i.firefoxchina.cn/newtab/master-ii/quickdialdata-0.json", "Referer=", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/m2_f7fc097.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/m5_7d63764.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/m4_f793fb1.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/img1_07ee3bc.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/img3_32c9dc6.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/arrow-down_6ce55cf.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/icon-mark_6324efc.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/m1_da03e52.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/m3_9bbb290.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/m6_535009b.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/columntitle/icon-more_7cf02b7.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/icon-line_05ccb9d.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/olist/icon-nums_7f1b1d2.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/sidebar/icon-search-hide_a475c94.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/carousel/icon-carousel_8fef694.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/mod_baijia/icon-more_62ae436.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://adu.g-fox.cn/adu.gif?channelid=full.firefox.com.cn&fxversion=19.0.2&ceversion=2013.3&ver=1_0&pk=%7B7e37d58a-1f34-4046-9965-4cfe030926e9%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn,semodifier&now=1479973355136", "Referer=", "ENDITEM", 
		"Url=http://img.baidu.com/hunter/alog/alog.min.js", "ENDITEM", 
		"Url=http://d.hiphotos.baidu.com/news/q%3D100/sign=42d15d17283fb80e0ad165d706d12ffb/bd3eb13533fa828be526ccc5f41f4134970a5a8a.jpg", "ENDITEM", 
		"Url=http://g.hiphotos.baidu.com/news/q%3D100/sign=4ed9be3700f79052e91f433e3cf2d738/a044ad345982b2b7bedff4e038adcbef76099b56.jpg", "ENDITEM", 
		"Url=http://d.hiphotos.baidu.com/news/q%3D100/sign=8a4c115ed81373f0f33f6b9f940f4b8b/a8014c086e061d955174be1d72f40ad162d9cae1.jpg", "ENDITEM", 
		"Url=http://e.hiphotos.baidu.com/news/q%3D100/sign=cfceb3534aa98226bec12f27ba82b97a/908fa0ec08fa513d029d5df8346d55fbb2fbd9e4.jpg", "ENDITEM", 
		"Url=http://d.hiphotos.baidu.com/news/q%3D100/sign=bf1549edf2edab64727249c0c736af81/7af40ad162d9f2d34c3613c9a0ec8a136327ccf4.jpg", "ENDITEM", 
		"Url=http://g.hiphotos.baidu.com/news/q%3D100/sign=df4f7093c0177f3e1634f80d40ce3bb9/d043ad4bd11373f08c858dbaad0f4bfbfbed0458.jpg", "ENDITEM", 
		"Url=http://www.g-fox.cn/live.gif?channelid=full.firefox.com.cn&fuod=true&fxversion=19.0.2&ceversion=2013.3&ver=4&actcode4=%7B7e37d58a-1f34-4046-9965-4cfe030926e9%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&dk=RSm3CvmslVzhlS0tFurXeFgRld4pIF6M9DMxr1QXve4UQvj4/lqFYw==&prevsessionlen=2&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn,semodifier", "Referer=", "ENDITEM", 
		"Url=http://b.hiphotos.baidu.com/news/q%3D100/sign=b9c9da8e0a3b5bb5b8d724fe06d2d523/4ec2d5628535e5dd76ec7efa7fc6a7efcf1b62d7.jpg", "ENDITEM", 
		"Url=http://b.hiphotos.baidu.com/news/q%3D100/sign=6830454546c2d562f408d4edd71190f3/960a304e251f95ca00c07993c0177f3e670952da.jpg", "ENDITEM", 
		"Url=/nocache/mp/b.jpg?cmd=3&0.7727538724741425", "ENDITEM", 
		"Url=http://log.news.baidu.com/v.gif?pid=107&type=0&action=pv&hostname=news.baidu.com&refer=http://news.baidu.com/&refer_hostname=news.baidu.com&byInputUrl=1&ra=24088955876245466", "ENDITEM", 
		"Url=http://hm.baidu.com/h.js?e9e114d958ea263de46e080563e254c4", "ENDITEM", 
		"Url=http://hm.baidu.com/hm.gif?cc=0&ck=1&cl=24-bit&ds=1366x768&et=0&ja=1&ln=zh-cn&lo=0&nv=1&rnd=440133519&si=e9e114d958ea263de46e080563e254c4&st=1&v=1.1.33&lv=1&tt=%E7%99%BE%E5%BA%A6%E6%96%B0%E9%97%BB%E6%90%9C%E7%B4%A2%E2%80%94%E2%80%94%E5%85%A8%E7%90%83%E6%9C%80%E5%A4%A7%E7%9A%84%E4%B8%AD%E6%96%87%E6%96%B0%E9%97%BB%E5%B9%B3%E5%8F%B0", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/navbar/icon-slogan_919150e.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://t2.baidu.com/it/u=http%3A%2F%2Fc.cnfolimg.com%2F20161115%2F12%2F15783953094717933080.jpg&fm=30", "ENDITEM", 
		"Url=http://hm.baidu.com/hm.gif?cc=0&ck=1&cl=24-bit&ds=1366x768&ep=refer*autopost*refer%3Ahttp%3A%2F%2Fnews.baidu.com%2F&et=4&ja=1&ln=zh-cn&lo=0&nv=0&rnd=273417690&si=e9e114d958ea263de46e080563e254c4&st=4&v=1.1.33&lv=1&api=8_0", "ENDITEM", 
		"Url=http://passport.baidu.com/passApi/js/uni_login_wrapper.js?cdnversion=1479973356453", "ENDITEM", 
		"Url=http://bd-hq.sinajs.cn/list=rt_hkHSI,rt_hkHSCCI,rt_hkHSCEI", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://bd-hq.sinajs.cn/list=s_sh000001,s_sz399001,s_sh000300", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://bd-hq.sinajs.cn/list=hf_CL,hf_GC,hf_CAD,hf_SI,hf_S,hf_C,hf_W", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://hq.sinajs.cn/?format=json&rn=14799733566252292276520566605&func=window.StandardBJTime=hq_json_sys_time;if%28typeof%28StandardBJTime_Callback%29==%27function%27%29StandardBJTime_Callback%28%29;&list=sys_time", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://bd-hq.sinajs.cn/list=gb_$dji,gb_ixic,gb_inx,nb_UKX,b_DAX,nb_NKY,b_TWSE,b_FSSTI", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/channel/ui/html/bg_stock_0046582d.png", "Referer=http://n.sinaimg.cn/finance/baidu/css/allCates.min.css", "ENDITEM", 
		"Url=/resource/js/news_zp_console.js", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/mod_headline_tab/icon-login_bcacef5.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://hq.sinajs.cn/random=14799733566729770211303473197&list=market_stock_sh", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://bd-hq.sinajs.cn/list=USDCNY,fx_shkdcny,fx_seurcny,fx_sgbpcny,fx_susdjpy,fx_seurusd,fx_sgbpusd", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://image.sinajs.cn/newchart/small/nsz399001.gif?14799733568876514", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://image.sinajs.cn/newchart/small/nsh000001.gif?14799733568872695", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://image.sinajs.cn/newchart/hk_stock/realtime_min_small/HSCEI.gif?1479973356870109", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://image.sinajs.cn/newchart/hk_stock/realtime_min_small/HSI.gif?147997335687043", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://image.sinajs.cn/newchart/hk_stock/realtime_min_small/HSCCI.gif?14799733568705923", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://image.sinajs.cn/newchart/small/nsh000300.gif?14799733568876306", "Referer=http://finance.sina.com.cn/iframe/1016/2016-03-03/9.html", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/footer/img/img2_000e014.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/btn-close_056d682.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/carousel/icon-dot_f3b2695.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/focustop/img/top_bg_f32315c.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/focustop/focustop/focustop_a273719.css", "ENDITEM", 
		"Url=http://ns2.bdstatic.com/static/fisp_static/common/img/sidebar/icon-merged_665a315.png", "Referer=http://ns1.bdstatic.com/static/fisp_static/common/module_static_include/module_static_include_a2763a9.css", "ENDITEM", 
		"Url=http://img.baidu.com/hunter/alog/dp.min.js?v=-17130", "ENDITEM", 
		"Url=http://img.baidu.com/hunter/alog/speed.min.js?v=160115", "ENDITEM", 
		"Url=http://static.tieba.baidu.com/tb/pms/img/st.gif?ts=764&sid=ivw1xa50k0x&ht=1&fs=1013&drt=403&lt=9184&product_id=107&page_id=newspc_107&browser=30&wtt=5376&dns=0&ct=0&st=2075&tt=2108&dct=14559&olt=14560&_screen=1366*768%7C1366*738", "ENDITEM", 
		"Url=http://hm.baidu.com/hm.gif?cc=0&ck=1&cl=24-bit&ds=1366x768&ep=%7B%22netAll%22%3A1934%2C%22netDns%22%3A0%2C%22netTcp%22%3A0%2C%22srv%22%3A141%2C%22dom%22%3A6393%2C%22loadEvent%22%3A14560%2C%22qid%22%3A%22%22%2C%22bdDom%22%3A0%2C%22bdRun%22%3A0%2C%22bdDef%22%3A0%7D&et=87&ja=1&ln=zh-cn&lo=0&nv=0&rnd=774298435&si=e9e114d958ea263de46e080563e254c4&st=4&v=1.1.33&lv=1", "ENDITEM", 
		"Url=http://hm.baidu.com/hm.gif?cc=0&ck=1&cl=24-bit&ds=1366x768&ep=%5B%7Bx%3A-434%2Cy%3A193%2Ct%3Aa%2Cu%3Ajavascript%253A%253B%7D%5D&et=2&ja=1&ln=zh-cn&lo=0&nv=0&rnd=2141775262&si=e9e114d958ea263de46e080563e254c4&st=4&v=1.1.33&lv=1", "ENDITEM", 
		"LAST");
lr_output_message("count:%s",lr_eval_string("{count}"));
if(atoi(lr_eval_string("{count}"))>=1){
	lr_end_transaction("open", 0);
}else{
	lr_end_transaction("open", 1);
}
    
	


	web_add_cookie("BAIDUID=C8FA1071AFE9C59C17E1CA7D63BA5B26:FG=1; DOMAIN=c.baidu.com");

	web_add_cookie("BIDUPSID=C8FA1071AFE9C59C17E1CA7D63BA5B26; DOMAIN=c.baidu.com");

	web_add_cookie("PSTM=1466136117; DOMAIN=c.baidu.com");

	web_url("c.gif", 
		"URL=http://c.baidu.com/c.gif?t=5&p=1&0.9939904258077097", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://news.baidu.com/", 
		"Mode=HTML", 
		"LAST");

	web_url("n", 
		"URL=http://news.baidu.com/n?m=rddata&v=index_data&rn1=17&callback=bdNewsJsonCallBack&ra=0.6490387840555705", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://news.baidu.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("Hm_lvt_e9e114d958ea263de46e080563e254c4=1479973356; DOMAIN=news.baidu.com");

	web_add_cookie("Hm_lpvt_e9e114d958ea263de46e080563e254c4=1479973356; DOMAIN=news.baidu.com");

	web_url("n_2", 
		"URL=http://news.baidu.com/n?m=rddata&v=index_data&type=house&fr=index&rn2=5&callback=bdNewsJsonCallBack_1&ra=0.3582189583285347", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://news.baidu.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/favicon.ico", "Referer=", "ENDITEM", 
		"LAST");
 
# 336 "Action.c"
	return 0;
}
# 4 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\newsbaidu\\\\combined_newsbaidu.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 5 "d:\\my\\study\\performance\\lr-script-repository\\road-lr\\newsbaidu\\\\combined_newsbaidu.c" 2

