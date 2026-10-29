#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a1[5];//定义一个数组，不对其初始化，元素的值为随机值
    for (int i = 0; i < 5; i++)
    {
        printf("a1[%d]=%d \n",i,a1[i]);
    }
    /**
     * a[0]=8
     * a[1]=0
     * a[2]=52
     * a[3]=0
     * a[4]=7410624
     */
    printf("********************************\n");
    int a2[5] = {1,2,3};//只给部分元素赋值，其余元素值为0
    for (int i = 0; i < 5; i++)
    {
        printf("a2[%d]=%d \n",i,a2[i]);
    }

    printf("********************************\n");
    static int a3[5];//static数组元素不赋初值，系统会自动赋0
    for (int i = 0; i < 5; i++)
    {
        printf("a3[%d]=%d \n",i,a3[i]);
    }

    printf("********************************\n");
    int a4[] = {1,2,3,4,5};//当全部数组元素赋初值时，可不指定数组长度
    for (int i = 0; i < 5; i++)
    {
        printf("a4[%d]=%d \n",i,a4[i]);
    }
    
    return 0;
}
