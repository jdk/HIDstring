#include "translate.h"

// Recieves the ascii value of the keyReport and the pointer to the keyReport
// (keyReport is like a return value)
int translate(int key, int *keyReport)
{
	
	*(keyReport+1) = 0; // Default, overwritten if shift
	
	switch (key)
	{
		// !
		case ascii_excl:
			*keyReport =  HID_excl;
			*(keyReport+1) = HID_shift;
			break;
	
		// "
		case ascii_quote:
			*keyReport = HID_quote;
			*(keyReport+1) = HID_shift;
			break;

		// #
		case ascii_pound: 
			*keyReport = HID_pound;
			*(keyReport+1) = HID_shift;
			break;

		// $
		case ascii_dollar: 
			*keyReport = HID_dollar;
			*(keyReport+1) = HID_shift;
			break;
		
		// %
		case ascii_percent: 
			*keyReport = HID_percent;
			*(keyReport+1) = HID_shift;
			break;
		
		// &
		case ascii_amp: 
			*keyReport = HID_amp;
			*(keyReport+1) = HID_shift;
			break;
		
		// '
		case  ascii_apostrophe:
			*keyReport = HID_apostrophe;
			break;

		// (
		case ascii_paren_left: 
			*keyReport = HID_paren_left;
			*(keyReport+1) = HID_shift;
			break;

		// )
		case ascii_paren_right: 
			*keyReport = HID_paren_right;
			*(keyReport+1) = HID_shift;
			break;

		// *
		case ascii_star: 
			*keyReport = HID_star;
			*(keyReport+1) = HID_shift;
			break;

		// +
		case ascii_plus: 
			*keyReport = HID_plus;
			*(keyReport+1) = HID_shift;	
			break;

		// ,
		case ascii_comma: 
			*keyReport = HID_comma;
			break;

		// -
		case ascii_minus: 
			*keyReport = HID_minus;
			break;

		// .
		case ascii_period: 
			*keyReport = HID_period;
			break;

		// /
		case ascii_fw_slash: 
			*keyReport = HID_fw_slash;
			break;

		// 0
		case ascii_0: 
			*keyReport = HID_0;
			break;
		
		// 1
		case ascii_1: 
			*keyReport = HID_1;
			break;
		
		// 2
		case ascii_2: 
			*keyReport = HID_2;
			break;
		
		// 3
		case ascii_3: 
			*keyReport = HID_3;
			break;
		
		// 4
		case ascii_4: 
			*keyReport = HID_4;
			break;
		
		// 5
		case ascii_5: 
			*keyReport = HID_5;
			break;
		
		// 6
		case ascii_6: 
			*keyReport = HID_6;
			break;
		
		// 7
		case ascii_7: 
			*keyReport = HID_7;
			break;
		
		// 8
		case ascii_8: 
			*keyReport = HID_8;
			break;
		
		// 9
		case ascii_9: 
			*keyReport = HID_9;
			break;
		
		// :
		case ascii_colon: 
			*keyReport = HID_colon;
			*(keyReport+1) = HID_shift;
			break;
		
		// ;
		case ascii_semi_colon: 
			*keyReport = HID_semi_colon;
			break;
		
		// <
		case ascii_less_than: 
			*keyReport = HID_less_than;
			*(keyReport+1) = HID_shift;
			break;
		
		// =
		case ascii_equal: 
			*keyReport = HID_equal;
			break;
		
		// >
		case ascii_greater_than: 
			*keyReport = HID_greater_than;
			*(keyReport+1) = HID_shift;
			break;
		
		// ?
		case ascii_questionmark: 
			*keyReport = HID_questionmark;
			*(keyReport+1) = HID_shift;
			break;
		
		// @
		case ascii_address: 
			*keyReport = HID_address;
			*(keyReport+1) = HID_shift;
			break;

		// A
		case ascii_A: 
			*keyReport = HID_a;
			*(keyReport+1) = HID_shift;
			break;
		
		// B
		case ascii_B: 
			*keyReport = HID_b;
			*(keyReport+1) = HID_shift;
			break;

		// C
		case ascii_C: 
			*keyReport = HID_c;
			*(keyReport+1) = HID_shift;
			break;

		// D
		case ascii_D: 
			*keyReport = HID_d;
			*(keyReport+1) = HID_shift;
			break;

		// E
		case ascii_E: 
			*keyReport = HID_e;
			*(keyReport+1) = HID_shift;
			break;

		// F
		case ascii_F: 
			*keyReport = HID_f;
			*(keyReport+1) = HID_shift;
			break;

		// G
		case ascii_G: 
			*keyReport = HID_g;
			*(keyReport+1) = HID_shift;
			break;

		// H
		case ascii_H: 
			*keyReport = HID_h;
			*(keyReport+1) = HID_shift;
			break;

		// I
		case ascii_I: 
			*keyReport = HID_i;
			*(keyReport+1) = HID_shift;
			break;

		// J
		case ascii_J: 
			*keyReport = HID_j;
			*(keyReport+1) = HID_shift;
			break;

		// K
		case ascii_K: 
			*keyReport = HID_k;
			*(keyReport+1) = HID_shift;
			break;
		
		// L
		case ascii_L: 
			*keyReport = HID_l;
			*(keyReport+1) = HID_shift;
			break;
		
		// M
		case ascii_M: 
			*keyReport = HID_m;
			*(keyReport+1) = HID_shift;
			break;
	
		// N
		case ascii_N: 
			*keyReport = HID_n;
			*(keyReport+1) = HID_shift;
			break;
	
		// O
		case ascii_O: 
			*keyReport = HID_o;
			*(keyReport+1) = HID_shift;
			break;

		// P
		case ascii_P: 
			*keyReport = HID_p;
			*(keyReport+1) = HID_shift;
			break;

		// Q
		case ascii_Q: 
			*keyReport = HID_q;
			*(keyReport+1) = HID_shift;
			break;

		// R
		case ascii_R: 
			*keyReport = HID_r;
			*(keyReport+1) = HID_shift;
			break;

		// S
		case ascii_S: 
			*keyReport = HID_s;
			*(keyReport+1) = HID_shift;
			break;

		// T
		case ascii_T: 
			*keyReport = HID_t;
			*(keyReport+1) = HID_shift;
			break;

		// U
		case ascii_U: 
			*keyReport = HID_u;
			*(keyReport+1) = HID_shift;
			break;

		// V
		case ascii_V: 
			*keyReport = HID_v;
			*(keyReport+1) = HID_shift;
			break;

		// W
		case ascii_W: 
			*keyReport = HID_w;
			*(keyReport+1) = HID_shift;
			break;

		// X
		case ascii_X: 
			*keyReport = HID_x;
			*(keyReport+1) = HID_shift;
			break;

		// Y
		case ascii_Y: 
			*keyReport = HID_y;
			*(keyReport+1) = HID_shift;
			break;

		// Z
		case ascii_Z: 
			*keyReport = HID_z;
			*(keyReport+1) = HID_shift;
			break;

		// [
		case ascii_brack_right: 
			*keyReport = HID_brack_right;
			break;

		// \   /	
		case ascii_back_slash: 
			*keyReport = HID_back_slash;
			break;

		// ]
		case ascii_brack_left: 
			*keyReport = HID_brack_left;
			break;

		// ^
		case ascii_carrot: 
			*keyReport = HID_carrot;
			*(keyReport+1) = HID_shift;
			break;
	
		// _
		case ascii_underscore: 
			*keyReport = HID_underscore;
			*(keyReport+1) = HID_shift;
			break;

		// `
		case ascii_back_tick: 
			*keyReport = HID_back_tick;
			break;
	
		// a
		case ascii_a: 
			*keyReport = HID_a;
			break;

		// b
		case ascii_b: 
			*keyReport = HID_b;
			break;

		// c
		case ascii_c: 
			*keyReport = HID_c;
			break;

		// d
		case ascii_d: 
			*keyReport = HID_d;
			break;

		// e
		case ascii_e: 
			*keyReport = HID_e;
			break;

		// f
		case ascii_f: 
			*keyReport = HID_f;
			break;

		// g
		case ascii_g: 
			*keyReport = HID_g;
			break;

		// h
		case ascii_h: 
			*keyReport = HID_h;
			break;

		// i
		case ascii_i: 
			*keyReport = HID_i;
			break;

		// j
		case ascii_j: 
			*keyReport = HID_j;
			break;

		// k
		case ascii_k: 
			*keyReport = HID_k;
			break;

		// l
		case ascii_l: 
			*keyReport = HID_l;
			break;

		// m
		case ascii_m: 
			*keyReport = HID_m;
			break;

		// n
		case ascii_n: 
			*keyReport = HID_n;
			break;

		// o
		case ascii_o: 
			*keyReport = HID_o;
			break;

		// p
		case ascii_p: 
			*keyReport = HID_p;
			break;

		// q
		case ascii_q: 
			*keyReport = HID_q;
			break;

		// r
		case ascii_r: 
			*keyReport = HID_r;
			break;

		// s
		case ascii_s: 
			*keyReport = HID_s;
			break;

		// t
		case ascii_t: 
			*keyReport = HID_t;
			break;

		// u
		case ascii_u: 
			*keyReport = HID_u;
			break;
	
		// v
		case ascii_v: 
			*keyReport = HID_v;
			break;
	
		// w
		case ascii_w: 
			*keyReport = HID_w;
			break;
	
		// x
		case ascii_x: 
			*keyReport = HID_x;
			break;
	
		// y
		case ascii_y: 
			*keyReport = HID_y;
			break;
	

		// z
		case ascii_z: 
			*keyReport = HID_z;
			break;
	
		// {
		case ascii_curly_left: 
			*keyReport = HID_curly_left;
			*(keyReport+1) = HID_shift;
			break;
	
		// |
		case ascii_pipe: 
			*keyReport = HID_pipe;
			*(keyReport+1) = HID_shift;
			break;

		// }
		case ascii_curly_right: 
			*keyReport = HID_curly_right;
			*(keyReport+1) = HID_shift;
			break;
	
		// ~
		case ascii_tilde: 
			*keyReport = HID_tilde;
			*(keyReport+1) = HID_shift;
			break;

		default: //FAIL
		   //Null Values
			*keyReport = 0;	
		   	*(keyReport+1) = 0;
			fprintf(stderr, "Not a valid keyboard key\n\n");
			return(0);	   
	}
	
	//Success
	return(1);
}


int translateWord(char *word, int *keyReport)
{
	*(keyReport+1) = 0; // Default zero, overwritten if shift
	if( iz_return(word) )
	{
		*keyReport = HID_return;	
	}	
	else if ( iz_escape(word) )
	{
		*keyReport = HID_escape;	
	}
	else if ( iz_delete(word) )
	{
		*keyReport = HID_delete;	
	}
	else if ( iz_backspace(word) )
	{
		*keyReport = HID_backspace;	
	}
	else if ( iz_tab(word) )
	{
		*keyReport = HID_tab;	
	}
	else if ( iz_space(word) )
	{
		*keyReport = HID_space;	
	}
	else if ( iz_F1(word) )
	{
		*keyReport = HID_F1;	
	}
	else if ( iz_F2(word) )
	{
		*keyReport = HID_F2;	
	}
	else if ( iz_F3(word) )
	{
		*keyReport = HID_F3;	
	}
	else if ( iz_F4(word) )
	{
		*keyReport = HID_F4;	
	}
	else if ( iz_F5(word) )
	{
		*keyReport = HID_F5;	
	}
	else if ( iz_F6(word) )
	{
		*keyReport = HID_F6;	
	}
	else if ( iz_F7(word) )
	{
		*keyReport = HID_F7;	
	}
	else if ( iz_F8(word) )
	{
		*keyReport = HID_F8;	
	}
	else if ( iz_F9(word) )
	{
		*keyReport = HID_F9;	
	}
	else if ( iz_F10(word) )
	{
		*keyReport = HID_F10;	
	}
	else if ( iz_F11(word) )
	{
		*keyReport = HID_F11;	
	}
	else if ( iz_F12(word) )
	{
		*keyReport = HID_F12;	
	}
	else if ( iz_print_scr(word) )
	{
		*keyReport = HID_print_scr;	
	}
	else if ( iz_scroll(word) )
	{
		*keyReport = HID_scroll;	
	}
	else if ( iz_pause(word) )
	{
		*keyReport = HID_pause;	
	}
	else if ( iz_insert(word) )
	{
		*keyReport = HID_insert;	
	}
	else if ( iz_home(word) )
	{
		*keyReport = HID_home;	
	}
	else if ( iz_pageup(word) )
	{
		*keyReport = HID_pageup;	
	}
	else if ( iz_end(word) )
	{
		*keyReport = HID_end;	
	}
	else if ( iz_pagedown(word) )
	{
		*keyReport = HID_pagedown;	
	}
	else if ( iz_right(word) )
	{
		*keyReport = HID_right;	
	}
	else if ( iz_left(word) )
	{
		*keyReport = HID_left;	
	}
	else if ( iz_down(word) )
	{
		*keyReport = HID_down;	
	}
	else if ( iz_up(word) )
	{
		*keyReport = HID_up;	
	}
	else if ( iz_enter(word) )
	{
		*keyReport = HID_enter;	
	}
	else if ( iz_apostrophe(word) )
	{
		*keyReport = HID_apostrophe;	
	}

	// Not found
	else
	{
		fprintf(stderr, "Not a valid keyboard key\n\n");
		return(0);
	}	
	return(1);
}

