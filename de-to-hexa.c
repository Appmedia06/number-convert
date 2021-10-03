#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void show_hexadecimalint(int);
void show_hexadecimaldouble(double);
int main(void)
{
    double num;
    printf("input decimal number: ");
    scanf("%lf", &num);
    long t = (int)num;
    double m = num - t;
    show_hexadecimalint(t);
    show_hexadecimaldouble(m);
    return 0;
}
void show_hexadecimalint(int num)
{
    int i,b[SIZE]={0};
    for(i=1;i<=SIZE;i++)
    {
        b[SIZE-i] = num % 16;
        num/=16;
    }
    for(i=0;i<SIZE;i++)
        printf("%d",b[i]);
}
void show_hexadecimaldouble(double num)
{
    int arr[SIZE],len=0;
    while(num-(int)num)
    {
        int temp;
        temp = (int)(num*16);
        arr[len++]=temp;
        if(len==SIZE)
            break;
        num = num*16 - (int)(num*16);
    }
    printf(".");
    
    for(int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
}