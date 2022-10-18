#include<stdio.h>
int main(){
	double a;
	printf ("nhap doanh so ban hang");
	scanf("%lf",&a);
	if(a<= 100000000)
	{
	printf("hoa hong 5%%");
	}
	else if(100000000<a<=300000000)
	{
	printf("hoa hong 10%%");
	}
	else if(a>300000000)
	{
	printf("hoa hong 20%%");
	}
	else
	{
	printf("nhap sai doanh so");
	}
}
	
		
 


		
	

