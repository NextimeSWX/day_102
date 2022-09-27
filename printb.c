#include <unistd.h>

void stu_putchar (char c)
{
    write(1, &c, 1);
}


int main(void)
{
    char a;

    a = 'a';
    a = a + 1;
    stu_putchar(a);
    stu_putchar('\n');
    return(0);
}

