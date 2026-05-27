#include <stdio.h>

// void square(int n);
// void _square(int *n);

int main()
{
    // int num = 4;
    // square(num);
    // printf("number = %d\n", num);

    // _square(&num);
    // printf("number = %d\n", num);

    int a, b, *p1, *p2, x, y;
    a = 12, b = 4;
    p1 = &a;
    p2 = &b;
    x = (*p1) * (*p2)  - 6 ;
    y =  4* - (*p2)/(*p1) +10;
    printf("%p\n ", p1);
    printf("%p\n ", p2);
    printf("%u\n ", p1);
    printf("%x\n ", p1);
    printf("%u\n ", p2);
    printf("%x\n ", p2);
    return 0;
}

// // call by value
// void square(int n)
// {
//     n = n * n;
//     printf("Square = %d\n", n);
// }

// // call by point
// void _square(int *n)
// {
//     *n = (*n) * (*n);
//     printf("Square = %d\n", *n);
// }