#include<stdio.h>
int main(){
	printf("Menu\n");
	int chucNang;
	printf("1. Chuc nang tinh tien dien\n");
	printf("2. Chuc nang doi tien\n");
	printf("3. Chuc nang xay dung game FPOLY-LOTT\n");
	printf("4.Tim Uoc va Boi chung cua 2 so\n");
	printf("5. Sap xep thong tin sinh vien\n");
	printf("Moi ban chon mot chuc nang :");
	scanf("%d",&chucNang);
	switch(chucNang){
		case 1:
			printf("Ban chon chuc nang tinh tien dien\n");
			int n;
			printf("Nhap vao so kwh dien:%d");
			scanf("%f",&n);
			if(n>0&&n<50){
				printf("So tien can tra la: %f ",n*1678);
				break;
			}
	
		case 2:
			printf("Ban chon chuc nang doi tien\n");
			break;
		case 3:
			printf("Ban chon chuc nang Xay dung game FPOLY-LOTT\n");
			break;
		case 4:
			printf("Ban chon chuc nang tim Uoc va Boi chung cua 2 so\n");
			break;
		case 5:
			printf("Ban chon chuc nang sap xep thong tin sinh vien\n");
			break;
		default:
		  printf("Khong hop le");
		  break;
		  
	}
	return 0;
}
