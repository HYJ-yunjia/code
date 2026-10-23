#include <stdio.h>
#include <math.h> 

int main(int argc, char const *argv[])
{
    float a,b,c,s,area;
    printf("请输入任意三个数：");
    scanf("%f%f%f",&a,&b,&c);
    printf("a=%f,b=%f,c=%f\n",a,b,c);

    if((b*b-4*a*c)>=0)
    {
        float x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        float x2 = (-b - sqrt(b*b-4*a*c))/(2*a);

        printf("方程的根：%f\n",x1);
        printf("方程的根：%f\n",x2);
    }else{
        printf("不满足条件。");
    }

    return 0;
}
