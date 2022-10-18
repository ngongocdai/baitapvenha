#include<stdio.h>
int main(){
double a=0;
printf ("nhap luong nhan vien");
scanf("%lf",&a);
if (a==15000000)
{
	printf("luong rong=%lf,thue 30%%",15000000*70/100);
}
else if(7000000<=a<=15000000)
{
	printf("thue 20%%,luong=%lf",a*70/100);
}
else if(a<7000000)
{
	printf("thue 10%%,luong=%lf",a*90/100);
}
else
{
	printf("nhap sai luong nhan vien");
}
}



