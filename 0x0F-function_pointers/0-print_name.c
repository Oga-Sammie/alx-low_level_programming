#include "function_pointers.h"
/**
* print_name -	Function that prints the name
* @name:	input string
* @f:		function pointer casted to char pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
