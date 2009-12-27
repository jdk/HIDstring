#include <stdio.h>
#include <string.h>

int translate(int key, int *keyReport);
int translateWord(char *word, int *keyReport);

/*			ASCII #DEFINES				*/
#define ascii_excl				33
#define ascii_quote				34
#define ascii_pound				35
#define ascii_dollar			36
#define ascii_percent			37
#define ascii_amp				38
#define ascii_apostrophe		39
#define ascii_paren_right 		40
#define ascii_paren_left		41
#define ascii_star	 			42
#define ascii_plus	 			43
#define ascii_comma				44
#define ascii_minus				45
#define ascii_period			46
#define ascii_fw_slash			47
#define ascii_0					48
#define ascii_1					49
#define ascii_2					50
#define ascii_3					51
#define ascii_4					52
#define ascii_5					53
#define ascii_6					54
#define ascii_7					55
#define ascii_8					56
#define ascii_9					57
#define ascii_colon				58
#define ascii_semi_colon		59
#define ascii_less_than			60
#define ascii_equal				61
#define ascii_greater_than		62
#define ascii_questionmark		63
#define ascii_address			64
#define ascii_A					65
#define ascii_B					66
#define ascii_C					67
#define ascii_D					68
#define ascii_E					69
#define ascii_F					70
#define ascii_G					71
#define ascii_H					72
#define ascii_I					73
#define ascii_J					74
#define ascii_K					75
#define ascii_L					76
#define ascii_M					77
#define ascii_N					78
#define ascii_O					79
#define ascii_P					80
#define ascii_Q					81
#define ascii_R					82
#define ascii_S					83
#define ascii_T					84
#define ascii_U					85
#define ascii_V					86
#define ascii_W					87
#define ascii_X					88
#define ascii_Y					89
#define ascii_Z					90
#define ascii_brack_right		91
#define ascii_back_slash		92
#define ascii_brack_left		93
#define ascii_carrot			94
#define ascii_underscore		95
#define ascii_back_tick			96
#define ascii_a					97
#define ascii_b					98
#define ascii_c					99
#define ascii_d					100
#define ascii_e					101
#define ascii_f					102
#define ascii_g					103
#define ascii_h					104
#define ascii_i					105
#define ascii_j					106
#define ascii_k					107
#define ascii_l					108
#define ascii_m					109
#define ascii_n					110
#define ascii_o					111
#define ascii_p					112
#define ascii_q					113
#define ascii_r					114
#define ascii_s					115
#define ascii_t					116
#define ascii_u					117
#define ascii_v					118
#define ascii_w					119
#define ascii_x					120
#define ascii_y					121
#define ascii_z					122
#define ascii_curly_left		123
#define ascii_pipe				124
#define ascii_curly_right		125
#define ascii_tilde				126
#define ascii_DEL				127



/*  			HID #Defines		*/

#define HID_a					4
#define HID_b					5
#define HID_c					6
#define HID_d					7
#define HID_e					8
#define HID_f					9
#define HID_g					10
#define HID_h					11
#define HID_i					12
#define HID_j					13
#define HID_k					14
#define HID_l					15
#define HID_m					16
#define HID_n					17
#define HID_o					18
#define HID_p					19
#define HID_q					20
#define HID_r					21
#define HID_s					22
#define HID_t					23
#define HID_u					24
#define HID_v					25
#define HID_w					26
#define HID_x					27
#define HID_y					28
#define HID_z					29
#define HID_1					30
#define HID_excl				30
#define HID_2					31
#define HID_address				31
#define HID_3					32
#define HID_pound				32		
#define HID_4					33
#define HID_dollar				33		
#define HID_5					34
#define HID_percent				34
#define HID_6					35
#define HID_carrot				35			
#define HID_7					36
#define HID_amp					36
#define HID_8					37
#define HID_star				37
#define HID_9					38
#define HID_paren_right 		38	
#define HID_0					39
#define HID_paren_left			39
#define HID_return				40
#define HID_escape				41
#define HID_delete				76
#define HID_backspace			42
#define HID_tab					43
#define HID_space				44
#define HID_minus				45
#define HID_underscore			45
#define HID_equal				46
#define HID_plus				46
#define HID_brack_right			47
#define HID_curly_right			47
#define HID_brack_left			48
#define HID_curly_left			48
#define HID_back_slash			49
#define HID_pipe				49
#define HID_semi_colon			51
#define HID_colon				51
#define HID_apostrophe			52
#define HID_quote				52
#define HID_back_tick			53
#define HID_tilde				53
#define HID_comma				54
#define HID_less_than			54
#define HID_period				55
#define HID_greater_than		55
#define HID_fw_slash			56
#define HID_questionmark		56
#define HID_F1					58
#define HID_F2					59
#define HID_F3					60
#define HID_F4					61
#define HID_F5					62
#define HID_F6					63
#define HID_F7					64
#define HID_F8					65
#define HID_F9					66
#define HID_F10					67
#define HID_F11					68
#define HID_F12					69

#define HID_print_scr			70 	
#define HID_scroll				71
#define HID_pause				72
#define HID_insert				73
#define HID_home				74
#define HID_pageup				75

#define HID_end					77		
#define HID_pagedown			78
#define HID_right				79
#define HID_left				80
#define HID_down				81
#define HID_up					82	
#define HID_enter				88
#define HID_shift 				(1<<1)

#define MOD_CTRL_LEFT  			(1<<0)
#define MOD_SHIFT_LEFT			(1<<1)
#define MOD_ALT_LEFT			(1<<2)
#define MOD_COMMAND_LEFT		(1<<3)
#define MOD_CTRL_RIGHT			(1<<4)
#define MOD_SHIFT_RIGHT			(1<<5)
#define MOD_ALT_RIGHT			(1<<6)
#define MOD_COMMAND_RIGHT		(1<<7)



/*  		String Compare Macros 	*/
#define iz_F1(x) 			strcmp(x, "F1")==0
#define iz_F2(x) 			strcmp(x, "F2")==0
#define iz_F3(x) 			strcmp(x, "F3")==0
#define iz_F4(x) 			strcmp(x, "F4")==0
#define iz_F5(x) 			strcmp(x, "F5")==0
#define iz_F6(x) 			strcmp(x, "F6")==0
#define iz_F7(x) 			strcmp(x, "F7")==0
#define iz_F8(x) 			strcmp(x, "F8")==0
#define iz_F9(x) 			strcmp(x, "F9")==0
#define iz_F10(x) 			strcmp(x, "F10")==0
#define iz_F11(x) 			strcmp(x, "F11")==0
#define iz_F12(x) 			strcmp(x, "F12")==0
#define iz_return(x) 		strcmp(x, "return")==0
#define iz_enter(x)			strcmp(x, "enter")==0
#define iz_escape(x)		strcmp(x, "escape")==0
#define iz_backspace(x) 	strcmp(x, "backspace")==0
#define iz_delete(x)		strcmp(x, "delete")==0
#define iz_tab(x)			strcmp(x, "tab")==0
#define iz_space(x) 		strcmp(x, "space")==0
#define iz_print_scr(x)	 	strcmp(x, "printscreen")==0
#define iz_scroll(x)	  	strcmp(x, "scroll")==0
#define iz_pause(x)		  	strcmp(x, "pause")==0
#define iz_insert(x)	  	strcmp(x, "insert")==0
#define iz_home(x)			strcmp(x, "home")==0
#define iz_pageup(x)		strcmp(x, "pageup")==0
#define iz_pagedown(x)		strcmp(x, "pagedown")==0
#define iz_end(x)			strcmp(x, "end")==0	
#define iz_right(x) 		strcmp(x, "right")==0
#define iz_left(x) 			strcmp(x, "left")==0
#define iz_down(x) 			strcmp(x, "down")==0
#define iz_up(x) 			strcmp(x, "up")==0
#define iz_apostrophe(x) 	strcmp(x, "apostrophe")==0
