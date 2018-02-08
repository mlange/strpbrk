#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *ptr;

    char *str = "value1,value2,value3";

    ptr = strpbrk(str, ",'\0'");

    while (ptr)
    {
	printf("PTR [%s]\n", ptr);

	ptr = strpbrk(ptr+1, ",'\0'");
    }

    exit(0);
}
