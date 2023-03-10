#include <stdio.h>

// ! call by reference(add subtraction and replace function)
void add_sub(int *add_a, int *add_b)
{
    int temp1, temp2;
    temp1 = *add_a + *add_b;
    temp2 = *add_a - *add_b;
    *add_a = temp1;
    *add_b = temp2;
    return;
}
int main()
{
    int a = 10, b = 20;
    printf("The value of a is %d and the value of b is %d\n", a, b);
    add_sub(&a, &b);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    return 0;
}