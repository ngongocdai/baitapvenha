#include<stdio.h>
int main(){
	double a;
	printf("diem trung binh");
	scanf("%lf",&a);
	if(a>=9.0)
	{
		printf("diem trung binh la hang A");
	}
	else if(7>=a<9)
	{
		printf("diem trung binh la hang B");
	}
	else if(5>=a<=7)
	{
		printf("diem trung binh la hang C");
	}
	else if(a<5)
	{
	    printf("diem trung binh la hang F");
	}
	else
	{
		printf("hoc sinh khong co hang");
	}
	}
		
	

