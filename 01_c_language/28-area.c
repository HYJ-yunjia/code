#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a,b,c,s,area;
    printf("请输入三角形的三边边长：");
    scanf("%f%f%f",&a,&b,&c);
    printf("a=%f,b=%f,c=%f\n",a,b,c);

    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        s=(a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%f\n",area);
    }else{
        printf("不满足三角形的三边关系，请重新输入！");
    }

    return 0;
}
