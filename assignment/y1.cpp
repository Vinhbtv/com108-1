#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void KiemTraSoNguyen();
main(){
	TiepTuc:
	printf("Menu\n");
	printf("\n1. Kiem tra so nguyen\n2. Tim Uoc so chung cua boi cua 2 so\n3. Chuong trinh tinh tien cho quan Karaoke\n4. Tinh tien dien\n5. Chuc nang doi tien\n6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n7. Xay dung chuong trinh vay tien mua xe\n8. Sap xep thong tin sinh vien\n9. Xay dung game FPOLY-LOTT(2/15)\n10. Xay dung chuong trinh tinh toan phan so\n");
	int chon;
	printf("Chon mot chuc nang :");
	char chucNang; 
	scanf("%d",&chucNang);
	switch(chucNang){
	case 1:KiemTraSoNguyen();
	break; 
	case 2:
	printf("Tim Uoc so chung cua 2 so\n");
	break;
	case 3:
	printf("Chuong trinh tinh tien quan Karaoke\n ");
	break;
	case 4:
	printf("Tinh tien dien\n");
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
	printf("Khong hop vui long nhap (1-10)\n");
	}
	

char ct[1];
printf("Thoat chuong trinh go (n|N): ");
scanf("%s",&ct);
if(stricmp(ct,"N")==0) exit(0);//ham thoat chuong trinh
else goto TiepTuc;
void KiemTraSoNguyen();

	float x;
	printf("Nhap x=");	scanf("%f",&x);
	// kiem tra x co phai la so nguyen hay khong
	if(x==(int)x){
		printf("%.2f la so nguyen\n",x);
	}else{
		printf("%.2f khong phai so nguyen\n",x);
		}
	// kiem tra x co phai la so nguyen to khong
	if(x>1&&x==(int)x){
		int ktr=1;
		for(int i=2;i<sqrt(x);i++)
		if((int)x%i==0){
			int ktr =0;
			break;
		}
		if(ktr ==1)
			 printf("%.2f la so nguyen to\n",x);
			else printf("%.2f khong phai so nguyen to\n",x);
		
		}else printf("%.2f khong phai so nguyen to\n",x);
		
	
	// kiem tra x co phai la so chinh phuong khong
	if(x>1 && x==(int)x && sqrt(x)==(int)sqrt(x))
	printf("%.2f la so chinh phuong\n",x);
	else printf("%.2f khong phai so chinh phuong",x);

}
 
