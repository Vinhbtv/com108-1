#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void chucnang1(){
    float so;  
   printf ("\nMoi nhap so: ");
   scanf ("%f", &so);
   
   if (so==(int)so){
       printf ("\n%g la so nguyen\n", so);
   } else 
         { printf ("\n%g khong phai la so nguyen\n", so);
   }
      
    if(so > 1 && so==(int)so) {
    	int sont = so;
		int i;
		int kiemtra = 1;
		for(i = 2; i <= sqrt(sont); i++)  {
			if(sont % i == 0) {
				kiemtra = 0;
				break;
			}
	}	
		if(kiemtra == 1) {
			printf("%d la so nguyen to \n", sont);
		} else {
			printf("%d khong phai la so nguyen to \n", sont);
	}	}		
	   else {
		printf ("%g khong phai la so nguyen to \n", so);
	} 
	

    if (so>0 && (sqrt(so)==(int)sqrt(so))){
    	printf ("%g la so chinh phuong\n", so);
	} else {
		printf ("%g khong phai la so chinh phuong\n", so);
	}
}

void chucnang2(){
    int a, b;
	printf("\nNhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	
	if(a == 0 && b == 0){
			printf("\nKhong ton tai UCLN, BCNN\n");
		} else if(a == 0 || b == 0) {
			printf("\nKhong co BCNN, UCLN = %d\n", (a == 0) ? b : a);
		} else if(a >0 && b>0){ 
			int bc = a * b;			
			while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
		
	else if(a < 0 && b >0){
		int bc = a * b;
		a = -a;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else if(a > 0 && b < 0){
		int bc = a * b;
		b = -b;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else{
    	int bc = a * b;
		a = -a;
		b = -b;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
}

void chucnang3(){
   int giobatdau, gioketthuc, thoigian, giogiamgia;
   float tien, giamgia, giolonhon4; 
   const int gio = 4;
    
   printf ("\nGio bat dau: ");
   scanf ("%d", &giobatdau);
   printf ("Gio ket thuc: ");
   scanf ("%d", &gioketthuc);
   thoigian = gioketthuc - giobatdau;
   giogiamgia = thoigian - 4;
   tien = thoigian*50000;
   giamgia = giogiamgia*50000;
   
   if (giobatdau >= 12 && gioketthuc <= 23){
       if (thoigian <= 4 && giobatdau < 14 || giobatdau >= 17){
           printf ("\nSo tien can thanh toan la: %g\n", tien);
       } else if (thoigian <= 4 && giobatdau >= 14 && giobatdau <17){
           printf ("\nSo tien can thanh toan la: %g\n", tien-(tien*0.1));
       } else if (thoigian > 4 && giobatdau < 14 || giobatdau >= 17){
    giolonhon4 = (gio*50000)+(giamgia-(giamgia*0.3));       
           printf ("\nSo tien can thanh toan la: %g\n", giolonhon4);
       } else {
    giolonhon4 = (gio*50000)+(giamgia-(giamgia*0.3));       
           printf ("\nSo tien can thanh toan la: %g\n", giolonhon4-(giolonhon4*0.1));
       } }
    else {
		 printf ("\nQuan chi hoat dong trong khoang 12h-23h\n");
	}
}

void chucnang4(){
	int kwh;
	
	do{
	printf ("\nMoi nhap so kWh dien: ");
	scanf ("%d", &kwh);}
	while (kwh < 0);
	if (kwh == 0){
		printf ("\nKhong can tra tien\n");}
	else{
	if (kwh >= 0 && kwh <= 50){
		printf ("So tien phai tra la: %g\n", 50.000*1.687);}
		else if (kwh <= 100){
			printf ("So tien phai tra la: %g\n", 50.000*1.734);}
		else if (kwh <= 200){
			printf ("So tien phai tra la: %g\n", 50.000*2.014);}
		else if (kwh <= 300){
			printf ("So tien phai tra la: %g\n", 50.000*2.536);}
		else if (kwh <= 400){
			printf ("So tien phai tra la: %g\n", 50.000*2.834);}
	else{
		printf ("So tien phai tra la: %g\n", 50.000*2.927);}
    }
}

void chucnang5(){
    int tien, menhgia[9] = {500, 200, 100, 50, 20, 19, 5, 2, 1}, i = 0;
    int soto[9] = {0};
	
	do{
		printf ("\nMoi nhap so tien: ");
		scanf ("%d", &tien);}
	while(tien <= 0);	
	while (i < 9){
		if (tien > menhgia[i]){
			break;}
		else{
			i++;}
	}
	
	while (i<9){
		soto[i] = tien / menhgia[i];
		tien = tien % menhgia[i];
		i++;}
	
	printf ("\nDoi duoc:");
	
	for (i=0; i<9; i++){
		if (soto[i] > 0){
			printf ("\n%d to %d", soto[i], menhgia[i]);}
	}
	printf ("\n");
}


void menu(){
    int luachon;
    printf ("\n+-------------------------Menu-------------------------+\n");
	printf ("\n  1.Kiem tra so nguyen");
	printf ("\n  2.Tim uoc so chung va boi so chung cua 2 so");
	printf ("\n  3.Tinh tien cho quan Karaoke");
	printf ("\n  4.Tinh tien dien");
	printf ("\n  5.Chuong trinh doi tien");
	printf ("\n  6.Tinh lai suat vay ngan hang vay tra gop");
	printf ("\n  7.Chuong trinh vay tien mua xe");
	printf ("\n  8.Sap xep thong tin sinh vien");
	printf ("\n  9.Xay dung game Fpoly-LOTT");
	printf ("\n  10.Chuong trinh tinh toan phan so");	
	printf ("\n  0.Thoat\n");
	printf ("\n+------------------------------------------------------+");
	printf ("\n\nChon chuong trinh: ");	
	scanf ("%d", &luachon);
	
	switch (luachon){
	    case 1:
	    chucnang1();
	    break;
	    
	    case 2: 
	    chucnang2();
	    break;
	    
	    case 3:
	    chucnang3();
	    break;
	    
	    case 4: 
	    chucnang4();
	    break;
	    
	    case 5:
	    chucnang5();
	    break;
	
	    case 0: exit(0);
	    
	}
}

int main(){
    while(true){
        menu();
    }
    
    return 0;
}



