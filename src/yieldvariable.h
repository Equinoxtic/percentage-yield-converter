#ifndef YIELDVARIABLE_H_
#define YIELDVARIABLE_H_

#include<stdio.h>

typedef struct {
	float value;
} YieldVariable;

void set_yield_variable_value(YieldVariable *_var, float n_value);
float get_yield_variable_value(YieldVariable *_var);

#endif // yieldvariable.h
