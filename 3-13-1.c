#include<stdio.h>
void main()
{
	int number = 25;
	int a = 1, b = 2, c = 3;
	float real = 99.99;
	float point1 = 45.2, point2 = 30;
	char choice = 'a';
	char ch1 ='o' , ch2='z';
	printf("number = %d\n",number);
	printf("a=%d b=%d c=%d\n",a,b,c);
	printf("real=%f\n",real);
	printf("point1=%.1f point2=%.0f\n",point1,point2);
	printf("choice=%c\n",choice);
	printf("ch1= %c ch2=%c\n",ch1,ch2);
	
	short int number2 = 32764;
	printf("number2=%d",number2);
	
	char subject[12] ="Programming";
	char nick[4] ="com" ;
	char nick_1[4] = {'C','o','m','\0'};
	char name[] = "Jirasak";
}
