#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("%d\n", getpagesize()); 
	return 0; 
}
