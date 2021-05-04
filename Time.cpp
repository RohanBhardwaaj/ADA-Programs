#include <iostream>
#include <time.h>

void fun1()
{
	printf("Hello World !!");
}

void main()
{
	long start ,end ;
	start=time(NULL);
	fun1();
	end=time(NULL);
	printf("%u",end-start);
}
