#include<stdio.h>
int main() {
	int a ;
	printf("please entre the seconds : ");
	scanf("%d",&a);
	float hours=a/3600 , minuts=a/60 ;
	printf ("hours is %f and min is %f and sec is %d", hours , minuts , a );
	return 0;
}
