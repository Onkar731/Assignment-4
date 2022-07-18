/* WAP to print cubes of first 10 natural numbers */

#include<stdio.h>
int main() {

    int i;

    // To calculate cube of a number, we have to multiply itself with 3 times
    for(i = 1; i <= 10; i++) {
        printf("%d ", i*i*i);
    }

    return 0;
}