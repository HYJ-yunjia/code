#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, sum = 0;
    do
    {
        i++;
        printf("i=%d",i);
        sum+=i;
    }while(i<100);
    printf("\n");
    printf("sum=%d\n",sum);
    return 0;
}
