#include "yieldvariable.h"
#include<math.h>

// Formula for getting yield percentage:
// % yield = input/output x 100 = n
// REFERENCE: https://en.wikipedia.org/wiki/Yield_(chemistry)

float get_yield_percentage(float output, float input, int should_round)
{
	float f_yield = (output / input) * 100;
	if (should_round == 1) {
		return round(f_yield);
	} else {
		return f_yield;
	}
}

void output_yield_percentage(YieldVariable *output, YieldVariable *input)
{
	const char* perc_s = "Percentage /";
	printf("\n[(Rounded) %s %%] : %g", perc_s, get_yield_percentage(output->value, input->value, 1));
	printf("\n[(Unrounded) %s %%] : %g", perc_s, get_yield_percentage(output->value, input->value, 0));
}
