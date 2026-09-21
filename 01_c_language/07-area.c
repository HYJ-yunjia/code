#include <stdio.h>
#define PI 3.141592653
int main(int argc, char const *argv[])
{
    float r = 0;
    float s = 0;
    float c = 0;
    printf("输入圆的半径>:");
    scanf("%f",&r);
    printf("r=%lf",r);
    printf("圆的面积是%lf",r * r * PI);
    printf("圆的周长是%lf",2 * r * PI);

    return 0;
}
