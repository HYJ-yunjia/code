//(条件a)?满足a输出b:不满足a输出c;
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,t,max,min;
    printf("请输入第一个数：");
    scanf("%d",&a);
    printf("请输入第二个数：");
    scanf("%d",&b);
    printf("请输入第三个数：");
    scanf("%d",&c);
    
    printf("a=%d,b=%d,c=%d\n",a,b,c);

    t = (a>b)?a:b;
    max = (t>c)?t:c;
    printf("max=%d\n",max);

    t = (a<b)?a:b;
    min = (t<c)?t:c;
    printf("min=%d\n",min);

    return 0;
}
