/* WAP to print the first 10 natural numbers */

#include<stdio.h>
int main() {

    int i;

    // Natural numbers are all positive numbers from 1 to n
    for(i = 1; i <= 10; i++) {
        printf("%d ",i);
    }

    return 0;
}