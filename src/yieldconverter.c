#ifndef MAIN_C_
#define MAIN_C_

#include<stdio.h>
#include<stdlib.h>
#include "yieldvariable.h"
#include "yieldutils.h"
#include "cligui.h"

int main(int argc, char **argv)
{
	char* _cmd;

	#ifndef _WIN32
		_cmd = "powershell -command clear";
	#else
		_cmd = "clear";
	#endif

	system(_cmd);

	create_banner();

	YieldVariable i,
				  o;
	char _i_input[8],
		_i_output[8];

	create_prompt("Actual Yield / Output");			gets(_i_output);
	create_prompt("Theoritical Yield / Input");		gets(_i_input);
	set_yield_variable_value(&o, atof(_i_output));
	set_yield_variable_value(&i, atof(_i_input));

	output_yield_percentage(&o, &i);

	getchar();

	system(_cmd);

	return 0;
}

#endif // main.c
