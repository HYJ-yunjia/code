#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ge,shi,bai;
    for(int i=100;i<=1000;i++)
    {
        ge = i%10;
        shi = i%100/10;
        bai = i%1000/100;
        if(ge*ge*ge+shi*shi*shi+bai*bai*bai == i)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
