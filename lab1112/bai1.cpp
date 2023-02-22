#include<stdio.h>
int main (){
	int one[]={2,5,3,6,3};
	int two[5];
	int i; 
	for(i=0;i<5;i++){
		two[i]=one[i]+3;
	}
	
	for(int i=0;i<5;i++){
		printf("%d\t",one[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d\t",two[i]);
	}
	
	
	
	return 0; 
} 
