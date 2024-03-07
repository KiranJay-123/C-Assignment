#include<stdio.h>

int main()
{
	int a = 10;
	float f1 = 20.125;
/*
	int k = a + f1 ;
	//     10 + 20F ;     10.000 + 20.000  => 30.....
	printf(" k = %d \n",k);// 30
*/
	float k = a + f1 ;
	//     10 + 20F ;     10.000 + 20.000  => 30.....
	printf(" k = %f \n",k);// 30.00

	char c1 = 'A';
	k = c1 + f1 ;

	char c5 = 3.142f;

	float x = 5 / 2 ;
	printf(" x = %f \n",x );

     x = 5 / 2.0f;
	 x = (float)5 / 2 ;

	printf(" x = %f \n",x );

	return 0;
}












