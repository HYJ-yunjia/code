#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d个整数\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("数组的内容为：");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
    printf("数组的内容为：");
    for (int j = 0; j <10; j++)
    {
        printf("%d ",a[9-j]);
    }
    
    return 0;
}
