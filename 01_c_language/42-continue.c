#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sec = 0,min = 0,hour = 0;
    int count_sec = 0;//秒数的累加
    while (1)
    {
        printf("HH:MM:SS->%02d:%02d:%02d\n",hour,min,sec);
        count_sec++;
        sec++;
        if(sec<60) 
        continue;//如果秒数小于60，结束本次循环，结束本次循环，继续执行下一次循环
        min++;
        sec=0;
        if(min<60) 
        continue;//如果分钟小于60，结束本次循环，结束本次循环，继续执行下一次循环
        hour++;
        min=0;
        if(hour<24) 
        continue;//如果小时小于24，结束本次循环，结束本次循环，继续执行下一次循环
        break;//时间到了00：00：00，表示一天时间结束，要退出整个循环
    }
    printf("cout_sec=%d\n",count_sec);
    return 0;
}
