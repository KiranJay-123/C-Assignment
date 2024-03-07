#include<stdio.h>
// incremet/ decrement

int main()
{
	int a = 10;
	//++ pre increment
	 int k = ++a ; // k = 11
	 // k =  a + 1

	 // ++a  ->  a = a + 1
	 printf("a = %d k = %d \n",a,k);// 11 11

	//++ post increment
	 a = 10;
	 k = a++ ; //k = 10++
	 printf("a = %d k = %d \n",a,k);// 11 10
	
	 a = 5;
	 printf("a = %d \n",a++);//5
	 printf("a = %d \n",a);//6

	 
	 printf("a = %d \n",5++);//Error -Lvalue Errror
	return 0;
}






i
