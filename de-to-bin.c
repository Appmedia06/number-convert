#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void show_binaryint(int);
void show_binarydouble(double);
int main(void)
{
    double num;
    printf("input decimal number: ");
    scanf("%lf", &num);
    long t = (int)num;
    double m = num - t;
    show_binaryint(t);
    show_binarydouble(m);
    return 0;
}
void show_binaryint(int num)
{
    int i,b[SIZE]={0};
    for(i=1;i<=SIZE;i++)
    {
        b[SIZE-i] = num % 2;
        num/=2;
    }
    for(i=0;i<SIZE;i++)
        printf("%d",b[i]);
}
void show_binarydouble(double num)
{
    int arr[SIZE],len=0;
    while(num-(int)num)
    {
        int temp;
        temp = (int)(num*2);
        arr[len++]=temp;
        if(len==SIZE)
            break;
        num = num*2 - (int)(num*2);
    }
    printf(".");
    
    for(int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
}