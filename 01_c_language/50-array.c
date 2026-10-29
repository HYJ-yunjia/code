#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d个整数\n",i+1);
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for (int j = 0; j < 9; j++)
    {
        if(a[j]<a[j+1]){
            max = a[j+1];
        }
    }
    printf("数组的内容是：");
    for (int k = 0; k < 10; k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
    printf("max=%d",max);
    
    return 0;
}
