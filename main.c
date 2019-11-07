#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YELLOW 555

int main(int argc, char **argv)
{
	const int cmp[4] = {strcmp(argv[1],"BCKG"), strcmp(argv[1], "RECT"), strcmp(argv[1], "LINE_H"), strcmp(argv[1],"LINE_V") };
	if (cmp[0] == 0)
		printf("uneo si BCKG\n");
	else if(cmp[1] == 0)
		printf("uneo si RECT\n");
	
	int broj  = 5;

	return 0;
}

int getColor(const char *argument)
{
	int cmp[5] = {strcmp(argument, "YELLOW"), strcmp(argument, "RED"), strcmp(argument, "BLUE"), strcmp(argument, "GREEN"), strcmp(argument, "PURPLE") };
	if(cmp[0] == 0)
		return YELLOW;
}
