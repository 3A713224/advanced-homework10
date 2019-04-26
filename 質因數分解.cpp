#include <stdio.h>
#include <stdlib.h>
void primefactor(int,int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int number,divide;
	printf("請輸入正整數:");
	scanf(" %d",&number);
	printf("%d=",number);
	primefactor(number,2);
	system("pause");
	return 0;
}
void primefactor(int num,int div)
{
	if(num==1 || div>num)
	{
		printf("\b\b \n");
		return;
	}
	else if(num%div==0)
	{
		printf("%d  ",div);
		primefactor(num/div,div);
	}
	else
	{
		div=(div==2?3 : div+2);
		primefactor(num,div);
	}
}
