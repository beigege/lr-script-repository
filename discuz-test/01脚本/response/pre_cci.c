# 1 "d:\\my\\study\\performance\\lrtest-script\\response\\\\combined_response.c"
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





 
 

















# 1 "d:\\my\\study\\performance\\lrtest-script\\response\\\\combined_response.c" 2

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


 
 


# 2 "d:\\my\\study\\performance\\lrtest-script\\response\\\\combined_response.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 3 "d:\\my\\study\\performance\\lrtest-script\\response\\\\combined_response.c" 2

# 1 "Action.c" 1
Action()
{


	web_add_cookie("HE44_2132_saltkey=OIroZHI2; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastvisit=1466483900; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_sid=GfWugR; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastact=1466491710%09home.php%09spacecp; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_ulastactivity=1b99UEDN%2FrOgSJYOdUlEyJb%2Fe3iZfUDxg4o7L%2BZQkwDt1O%2FJYmzP; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_nofavfid=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastcheckfeed=2%7C1466491620; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_editormode_e=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_smile=1D1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_visitedfid=2; DOMAIN=192.168.182.88");

	web_add_cookie("tjpctrl=1466493425619; DOMAIN=192.168.182.88");

	 

	 

	web_add_cookie("HE44_2132_lastact=1466492448%09forum.php%09; DOMAIN=192.168.182.88");

	web_url("forum.php", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=001&d=tab-install&r=0.4410959074320171&cid=full.firefox.com.cn", "Referer=", "ENDITEM", 
		"Url=http://i.firefoxchina.cn/newtab/master-ii/quickdialdata-0.json", "Referer=", "ENDITEM", 
		"Url=/static/image/common/background.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/switch_width.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/search.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/pt_item.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/chart.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_index.css?G0S", "ENDITEM", 
		"Url=/static/image/common/titlebg.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/nv.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/qmenu.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/nv_a.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/newarow.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/px.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/pn.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/scrolltop.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/js/ajax.js?G0S", "ENDITEM", 
		"LAST");

	web_submit_data("member.php", 
		"Action=http://192.168.182.88/member.php?mod=logging&action=login&loginsubmit=yes&infloat=yes&lssubmit=yes&inajax=1", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/forum.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=fastloginfield", "Value=username", "ENDITEM", 
		"Name=username", "Value={username}", "ENDITEM", 
		"Name=password", "Value=123456", "ENDITEM", 
		"Name=quickforward", "Value=yes", "ENDITEM", 
		"Name=handlekey", "Value=ls", "ENDITEM", 
		"LAST");

	web_add_cookie("HE44_2132_checkfollow=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastact=1466492473%09forum.php%09; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_checkpm=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_noticeTitle=1; DOMAIN=192.168.182.88");

	web_url("forum.php_2", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/forum.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/static/image/common/switch_style.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/user_online.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/arrwd.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/notice.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/favicon.ico", "Referer=", "ENDITEM", 
		"Url=/static/image/common/ico_notice.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"Url=/static/image/common/close.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM", 
		"LAST");

	return 0;
}
# 4 "d:\\my\\study\\performance\\lrtest-script\\response\\\\combined_response.c" 2

# 1 "response.c" 1
response()
{

	lr_think_time(26);

	web_url("forum.php_3",
		"URL=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://192.168.182.88/forum.php",
		"Snapshot=t7.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=/static/image/common/fav.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_forumdisplay.css?G0S", "ENDITEM",
		"URL=/static/image/common/feed.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_forumdisplay.css?G0S", "ENDITEM",
		"URL=/static/image/common/increase.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_forumdisplay.css?G0S", "ENDITEM",
		"URL=/static/js/smilies.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/common/atarget.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_forumdisplay.css?G0S", "ENDITEM",
		"URL=/static/image/common/refresh.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_forumdisplay.css?G0S", "ENDITEM",
		"URL=/static/image/editor/editor.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM",
		"URL=/static/image/common/fall.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_forumdisplay.css?G0S", "ENDITEM",
		"URL=/static/image/common/arw_l.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM",
		"URL=/data/cache/common_smilies_var.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/smile.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/biggrin.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/huffy.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/shocked.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/cry.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/sad.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/tongue.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/shy.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/titter.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/sweat.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/loveliness.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/funk.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/curse.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/dizzy.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/mad.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/lol.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/shutup.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/sleepy.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/hug.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/victory.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/handshake.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/call.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/time.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/smiley/default/kiss.gif", "Referer=http://192.168.182.88/forum.php?mod=forumdisplay&fid=2", "ENDITEM",
		"URL=/static/image/common/pollsmall.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_forumdisplay.css?G0S", "ENDITEM",
		"LAST");

	web_add_cookie("HE44_2132_lastact=1466492509%09forum.php%09viewthread; DOMAIN=192.168.182.88");

	lr_think_time(5);

 

	web_reg_save_param_ex(
		"ParamName=CorrelationParameter_1",
		"LB=/forum.php?mod=viewthread&",
		"RB=\" rel",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/forum.php*",
		"LAST");

	web_link("{username}post{postid}-title",
		"Text={username}post{postid}-title",
		"Snapshot=t8.inf",
		"EXTRARES",
		"URL=/data/cache/style_1_forum_moderator.css?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=3&extra=page%3D1", "ENDITEM",
		"URL=/static/image/common/midavt_shadow.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", "ENDITEM",
		"URL=/static/js/smilies.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=3&extra=page%3D1", "ENDITEM",
		"URL=/static/js/ajax.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=3&extra=page%3D1", "ENDITEM",
		"URL=/static/image/common/fastreply.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", "ENDITEM",
		"URL=/static/image/common/cls.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM",
		"URL=/static/image/common/share_btn.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", "ENDITEM",
		"URL=/static/image/common/ico_jdt.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", "ENDITEM",
		"URL=/static/image/common/edit.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", "ENDITEM",
		"URL=/static/image/common/loading.gif", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=3&extra=page%3D1", "ENDITEM",
		"URL=/data/cache/common_smilies_var.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=3&extra=page%3D1", "ENDITEM",
		"LAST");
 
# 92 "response.c"
	web_image("pn_reply.png",
			  "src=static/image/common/pn_reply.png",
			  "alt=»Ø¸´",
			  "LAST");
 




	lr_think_time(17);

	web_url("forum.php_5",
		"URL=http://192.168.182.88/forum.php?mod=ajax&action=checkpostrule&inajax=yes&ac=reply&infloat=yes&handlekey=reply",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=http://192.168.182.88/forum.php?mod=viewthread&{CorrelationParameter_1}&extra=page%3D1",
		"Snapshot=t10.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("forum.php_6",
		"Action=http://192.168.182.88/forum.php?mod=post&infloat=yes&action=reply&fid=2&extra=&{CorrelationParameter_1}&replysubmit=yes&inajax=1",
		"Method=POST",
		"RecContentType=text/xml",
		"Referer=http://192.168.182.88/forum.php?mod=viewthread&{CorrelationParameter_1}&extra=page%3D1",
		"Snapshot=t11.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=formhash", "Value=2c378799", "ENDITEM",
		"Name=handlekey", "Value=reply", "ENDITEM",
		"Name=noticeauthor", "Value=", "ENDITEM",
		"Name=noticetrimstr", "Value=", "ENDITEM",
		"Name=noticeauthormsg", "Value=", "ENDITEM",
		"Name=usesig", "Value=1", "ENDITEM",
		"Name=subject", "Value=", "ENDITEM",
		"Name=message", "Value={username}post{postid}-response{responseid}", "ENDITEM",
		"LAST");

	web_url("forum.php_7",
		"URL=http://192.168.182.88/forum.php?mod=viewthread&{CorrelationParameter_1}&extra=page%3D1",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=http://192.168.182.88/forum.php?mod=viewthread&{CorrelationParameter_1}&extra=page%3D1",
		"Snapshot=t12.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=/static/image/common/ico_lz.png", "Referer=http://192.168.182.88/forum.php?mod=viewthread&{CorrelationParameter_1}&extra=page%3D1", "ENDITEM",
		"URL=/static/image/common/rec_subtract.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", "ENDITEM",
		"URL=/static/js/common_extra.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&{CorrelationParameter_1}&extra=page%3D1", "ENDITEM",
		"URL=/static/image/common/rec_add.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", "ENDITEM",
		"URL=/static/image/common/popupcredit_bg.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", "ENDITEM",
		"LAST");

return 0;
}
# 5 "d:\\my\\study\\performance\\lrtest-script\\response\\\\combined_response.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\my\\study\\performance\\lrtest-script\\response\\\\combined_response.c" 2

