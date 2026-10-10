#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 15,b = 9,c;
    double x = 15, y = 8 ,z;
    c = a + b;
    printf("1:c = %d\n",c);
    c = a - b;
    printf("2:c = %d\n",c);
    c = a * b;
    printf("3:c = %d\n",c);
    c = a / b;
    printf("4:c = %d\n",c);
    c = a % b;
    printf("5:c = %d\n",c);
    //实数没有求余
    z = x + y;
    printf("1:z = %f\n",z);
    z = x - y;
    printf("2:z = %f\n",z);
    z = x * y;
    printf("3:z = %f\n",z);
    z = x / y;
    printf("4:z = %f\n",z);
    return 0;
}
