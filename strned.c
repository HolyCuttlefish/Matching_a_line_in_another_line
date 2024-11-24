#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int strend(char *string, char *subString)
{
	char* comparison; 

	if(strlen(string) < strlen(subString)){ return 0; }

	comparison = (string + strlen(string)) - strlen(subString);

	for(; *comparison; ++comparison)
	{
		if(*comparison != *subString) { return 0; }

		++subString;
	}

	return 1;
}

int main()
{
	char searchString[] = "nerd";
	
	char oneString[] = "Hello, nerd!";
	char twoString[] = "Hello, nerd";
	char threeString[] = "nerd";
	char fourString[] = "ne";

	uint8_t result = strend(oneString, searchString);
	printf("%i\n", result);

	result = strend(twoString, searchString);
	printf("%i\n", result);

	result = strend(threeString, searchString);
	printf("%i\n", result);

	result = strend(fourString, searchString);
	printf("%i\n", result);

	return 0;
}
