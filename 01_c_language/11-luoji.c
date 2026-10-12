#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5,b = 6;
    (a>5)&&(b++);
    printf("a=%d,b=%d\n",a,b);
    (a<=5)||(b++);
    printf("a=%d,b=%d\n",a,b);

    int x = 5,y = 18;
    
    int ret = (x>=5)&&(y<20);//1
    printf("1:ret=%d\n",ret);

    ret = ((x+1)>=0)&&(y<17);//0
    printf("2:ret=%d\n",ret);

    ret = ((x-8)>=0)&&(y==18);//0
    printf("3:ret=%d\n",ret);

    ret = ((x-5)>0)&&(y!=18);//0
    printf("4:ret=%d\n",ret);

    ret = (x>=5)||(y<20);//1
    printf("5:ret=%d\n",ret);

    ret = ((x+1)>=0)||(y<17);//1
    printf("6:ret=%d\n",ret);

    ret = ((x-8)>=0)||(y==18);//1
    printf("7:ret=%d\n",ret);

    ret = ((x-5)>0)||(y!=18);//0
    printf("8:ret=%d\n",ret);

    return 0;
}
