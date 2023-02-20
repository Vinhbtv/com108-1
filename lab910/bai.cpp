#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void tong2songuyen(){
	int a,b;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("tong cua a va b la: %d\n",a+b);
}
void giaiptbac2(){
	int a,b,c;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("Nhap c:");
	scanf("%d",&c);
	float delta = (float)b*b-4*a*c;
	if (delta<0){
	printf("Pt vo nghiem!\n");
}
	else if (delta==0){
		printf ("Pt co nghiem kep:\n"); 
	printf("x1 = x2 = %2.f\n",(float)(-b) / (2*a));	
	}
	else {
		printf("Pt co 2 nghiem phan biet:\n");
		printf("x1 = %2.f \n", ((float)-b + sqrt(delta)) / (2*a));
		printf("x2 = %2.f \n", ((float)-b + sqrt(delta)) / (2*a));
	}
}

void menu(){
	int chucNang;
	printf("MENU\n");
	printf("1. Cong 2 so nguyen\n");
	printf("2. Giai pt bac 2\n");
	printf("0. Exit \n");
	printf("Chon mot chuc nang:");
	scanf("%d",&chucNang);
	switch (chucNang){
		case 1:
			tong2songuyen();
			break;
		case 2:
			giaiptbac2();
			break;
		case 0:
			exit(0);
		default:
			printf("Khong hop le ...chon lai:\n");
	}
}

int main(){
	while (1){
		menu();
	}
} 

