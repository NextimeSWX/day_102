#include <unistd.h>

void stu_putchar (char c)
{
    write(1, &c, 1);
}


int main(void)
{
    char b;
    b = 'b';
    stu_putchar(b);
    stu_putchar('\n');
    return(0);
}

