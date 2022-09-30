#include <unistd.h>

char stu_print_digit(int nb) {
    return ('0' + nb);
}
void stu_putchar (char c) {
    write(1, &c, 1);
}

