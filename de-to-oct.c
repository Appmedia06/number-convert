#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void show_octalint(int);
void show_octaldouble(double);
int main(void)
{
    double num;
    printf("input decimal number: ");
    scanf("%lf", &num);
    long t = (int)num;
    double m = num - t;
    show_octalint(t);
    show_octaldouble(m);
    return 0;
}
void show_octalint(int num)
{
    int i,b[SIZE]={0};
    for(i=1;i<=SIZE;i++)
    {
        b[SIZE-i] = num % 8;
        num/=8;
    }
    for(i=0;i<SIZE;i++)
        printf("%d",b[i]);
}
void show_octaldouble(double num)
{
    int arr[SIZE],len=0;
    while(num-(int)num)
    {
        int temp;
        temp = (int)(num*8);
        arr[len++]=temp;
        if(len==SIZE)
            break;
        num = num*8 - (int)(num*8);
    }
    printf(".");
    
    for(int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
}