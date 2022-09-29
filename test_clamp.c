#include <stdio.h>

int stu_clamp(int low , int high , int nb);
int main(void ) {
    int res;
    res = stu_clamp(10, 12, 14);
    printf("%d\n", res);
}
