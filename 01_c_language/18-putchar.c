#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a1 = 65;
    char a2 = 'A';
    
    char b1 = 10;
    char b2 = '\n';
    
    putchar(a1);
    putchar(a2);
    putchar(b1);
    putchar(b2);

    putchar(65+1);
    putchar('A'+1);
    putchar('A'+' ');
    putchar('B'+' ');
    putchar('b'-' ');

    return 0;
}
