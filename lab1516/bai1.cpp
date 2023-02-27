#include <stdio.h>
#include <string.h>

struct dob
{
    int ngay;
    int thang;
    int nam;
};

struct sinhVien
{
    char maSV[50];      
    char ho[50];        
    char ten[50];       
    struct dob namsinh; 
    char queQuan[50];   
    char gioiTinh[50];
    char maLop[50];  
};

int main()
{
    sinhVien sv1, sv2, sv3;
    strcpy(sv1.maSV, "PD07814");
    strcpy(sv1.ho, "Bui");
    strcpy(sv1.ten, "Vinh");
    sv1.namsinh.ngay = 27;
    sv1.namsinh.thang = 01;
    sv1.namsinh.nam = 2004;
    strcpy(sv1.queQuan, "Quang Ngai");
    strcpy(sv1.gioiTinh, "Nam");
    strcpy(sv1.maLop, "WEB18311");
    printf("Sinh Vien 1: \nmaSV: %s \nHo:%s \nTen:%s \nNgaySinh:%d/%d/%d \nQueQuan:%s \nGioiTinh:%s \nLop:%s\n", sv1.maSV, sv1.ho, sv1.ten, sv1.namsinh.ngay, sv1.namsinh.thang, sv1.namsinh.nam, sv1.queQuan, sv1.gioiTinh, sv1.maLop);
    strcpy(sv2.maSV, "PD01111");
    strcpy(sv2.ho, "Le ");
    strcpy(sv2.ten, "Binh");
    sv2.namsinh.ngay = 25;
    sv2.namsinh.thang = 10;
    sv2.namsinh.nam = 2003;
    strcpy(sv2.queQuan, "Quang Ngai");
    strcpy(sv2.gioiTinh, "Nam");
    strcpy(sv2.maLop, "WEB18311");
    printf("\nSinh Vien 2: \nmaSV: %s \nHo:%s \nTen:%s \nNgaySinh:%d/%d/%d \nQueQuan:%s \nGioiTinh:%s \nLop:%s\n", sv2.maSV, sv2.ho, sv2.ten, sv2.namsinh.ngay, sv2.namsinh.thang, sv2.namsinh.nam, sv2.queQuan, sv2.gioiTinh, sv2.maLop);
    sv3 = sv1;
    strcpy(sv3.maSV, "PD12222");
    strcpy(sv3.ho, "Nguyen");
    strcpy(sv3.ten, "Dung");
    sv3.namsinh.ngay = 30;
    sv3.namsinh.thang = 01;
    sv3.namsinh.nam = 2002;
    strcpy(sv3.queQuan, " Quang Ngai");
    strcpy(sv3.gioiTinh, "Nam");
    strcpy(sv3.maLop, "WEB18311");
    printf("\nSinh Vien 3: \nmaSV: %s \nHo:%s \nTen:%s \nNgaySinh:%d/%d/%d \nQueQuan:%s \nGioiTinh:%s \nLop:%s\n", sv3.maSV, sv3.ho, sv3.ten, sv3.namsinh.ngay, sv3.namsinh.thang, sv3.namsinh.nam, sv3.queQuan, sv3.gioiTinh, sv3.maLop);

    return 0;