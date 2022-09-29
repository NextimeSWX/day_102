#include <unistd.h>

void stu_putchar (char c)
{
x    write(1, &c, 1);
}


int main(void)
{
    stu_putchar('b');
    stu_putchar('\n');
    return(0);
}

