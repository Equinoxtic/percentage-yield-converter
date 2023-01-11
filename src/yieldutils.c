#include "yieldvariable.h"
#include<math.h>

// Formula for getting yield percentage:
// % yield = input/output x 100 = n
// REFERENCE: https://en.wikipedia.org/wiki/Yield_(chemistry)

float get_yield_percentage(float output, float input)
{
	float f_yield = (output / input) * 100;
	return round(f_yield);
}

void output_yield_percentage(YieldVariable *output, YieldVariable *input)
{
	printf("Percentage (%%): %g", get_yield_percentage(output->value, input->value));
}
