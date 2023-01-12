#ifndef YIELDUTILS_H_
#define YIELDUTILS_H_

#include<stdio.h>

float get_yield_percentage(float output, float input, int should_round);
void output_yield_percentage(YieldVariable *output, YieldVariable *input);

#endif // yieldutils.h
