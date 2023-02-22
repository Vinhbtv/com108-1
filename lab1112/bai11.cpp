#include<stdio.h>
int main(){
	int a[5]={2,5,3,6,3}; 
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]==a[j]){
				printf("Vi tri cua cac phan tu co gia tri bang nhau trong mang two la: %d %d",i,j);
			}
		} 
	} 
	return 0;
} 
