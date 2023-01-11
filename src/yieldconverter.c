#ifndef MAIN_C_
#define MAIN_C_

#include<stdio.h>
#include<stdlib.h>
#include "yieldvariable.h"
#include "yieldutils.h"

void prompter(const char* prompt_string)
{
	printf("[%s] : ", prompt_string);
}

int main(int argc, char **argv)
{
	YieldVariable i,
				  o;

	char _i_input[8],
		_i_output[8];

	prompter("Output");		gets(_i_output);
	prompter("Input");		gets(_i_input);

	set_yield_variable_value(&o, atof(_i_output));
	set_yield_variable_value(&i, atof(_i_input));

	output_yield_percentage(&o, &i);

	return 0;
}

#endif // main.c
