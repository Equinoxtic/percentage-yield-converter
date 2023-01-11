#include "yieldvariable.h"

void set_yield_variable_value(YieldVariable *_var, float n_value)
{
	_var->value = n_value;
}

float get_yield_variable_value(YieldVariable *_var)
{
	return _var->value;
}
