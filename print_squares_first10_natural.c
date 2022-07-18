/* WAP to print squares of first 10 natural numbers */

#include<stdio.h>
int main() {

    int i;

    // To calculate square we have multiply a value with itself
    for(i = 1; i <= 10; i++) {
        printf("%d ", i * i);
    }

    return 0;
}