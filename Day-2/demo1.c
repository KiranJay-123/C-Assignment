#include<stdio.h>

/*
Data Types

-primary Data types

                            32/64 bit    
	1.int        %d           4 Bytes
	2.char       %c           1 Bytes
	3.float      %f           4 Bytes 
	4.double     %lf,%g,%f    8 Bytes

*/

int main()
{
	int n1=10,n2=20;
	char c1 = 'A'  ,c2 = 'B' ;// Char c1 = A -> Not OK
	float f1 = 3.142  ,f2 = 5 ;
	double d1 = 8.12 ,d2 = 9;

	printf("Interger : n1 = %d n2 = %d \n " ,n1,n2);
	printf("Char       c1 = %c c2 = %c \n " , c1,c2);
	printf("Float      f1 = %f f2 = %f \n",f1,f2);
	printf("Double     d1 = %lf d2 = %g \n",d1,d2);

	printf("Double     d1 = %lf d2 = %f \n",d1,d2);

   return 0;
}


