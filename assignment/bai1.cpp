#include<stdio.h>
int main(){
	printf("Menu\n");
	printf("\n1. Kiem tra so nguyen\n2. Tim Uoc so chung cua boi cua 2 so\n3. Chuong trinh tinh tien cho quan Karaoke\n4. Tinh tien dien\n5. Chuc nang doi tien\n6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n7. Xay dung chuong trinh vay tien mua xe\n8. Sap xep thong tin sinh vien\n9. Xay dung game FPOLY-LOTT(2/15)\n10. Xay dung chuong trinh tinh toan phan so\n");
	int chon;
	printf("Chon mot chuc nang :");
	char chucNang; 
	scanf("%d",&chucNang);
	switch(chucNang){
	case 1:
	printf("\nKiem tra so nguyen");
	break; 
	case 2:
	printf("\nTim Uoc so chung cua 2 so");
	break;
	case 3:
	printf("\n Chuong trinh tinh tien quan Karaoke ");
	break;
	case 4:
	printf("\nTinh tien dien");
	break;
	case 5:
	printf("Chuc nang doi tien\n");
	break;
	case 6:
	printf("Xay dung chuc nag tinh lai xuat vay nga hang vay tra gop\n");
	break;
	case 7:
	printf("Xay dung chuong trinh vay tien mau xe\n");
	break;
	case 8:
	printf("Sap xep thong tin sinh vien\n");
	break;
	case 9:
	printf("Xay dung game FPOLY-LOTT(2/15)\n");	
	break;
	case 10:
	printf("Xay dung chuong trinh tinh toan phan so\n");
	break;
	default:
	printf("Khong hop le...Nhap lai ");
	break;	
	}
	return 0;
}
