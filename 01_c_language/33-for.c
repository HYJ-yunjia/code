#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 0; i<100;i++)
    {
        if(i%2 == 1){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}


