#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); //nhap n tu ban phim
    if(n % 2 == 0) // kiem tra neu n chia het cho 2 la so chan
{
        printf("%d la so chan",n);
    }else{//nguoc lai la so le
        printf("%d la so le",n);    
    }
}
