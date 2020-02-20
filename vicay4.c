#include<stdio.h>
int main()
{
	int a;
    	printf("\tNumbers     \tSquares        \tCubes\n");
	for(a=0; a<=10; a++)
	{    
		printf("\t%d           \t%d           \t%d\n", a,(a*a),(a*a*a));	
	}
	
	return 0;
}
