#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0,sum = 0;
    
loop:
    i++;
    printf("i=%d ",i);
    sum+=i;

    if(i<100)
    {
        goto loop;
    }
    printf("sum=%d",sum);

    return 0;
}
