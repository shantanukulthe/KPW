//program to print 5 to 1 numbers on screen
#include<stdio.h>
void Display()
{
	int i=5;
	while(i>0)
	{
		printf("%d\t",i);
		i--;
	}
}
int main()
{
	Display();
	return 0;
}