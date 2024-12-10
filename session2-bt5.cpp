#include<stdio.h>

int main(){
	int a,b,cv,dt;
	printf("hay nhap canh a :");
	scanf("%d", &a);
	printf("hay nhap canh b :");
	scanf("%d", &b);
	
	 
	cv = 2*(a+b);
	dt = a*b;
	
	printf("chu vi hinh chu nhat la = %d \n",cv); 
	printf("dien tich hinh chu nhat la = %d \n",dt); 
	
	return 0; 
} 
