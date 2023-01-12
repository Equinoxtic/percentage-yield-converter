#include<string.h>
#include "cligui.h"

void create_banner()
{
	const char* f_banner_str = "\n[Yield Percentage Calculator]\n~ Developed by: Lunaxtic <3\n\n";
	printf("%s", f_banner_str);
}

int create_prompt(const char* prompt_string)
{
	int res = 0;
	
	if (*prompt_string != 0) {
		res = 1;
		goto print_prompt;
	} else {
		res = -1;
		goto defer;
	}

print_prompt:
	printf("[%s] : ", prompt_string);
defer:
	return res;
}

