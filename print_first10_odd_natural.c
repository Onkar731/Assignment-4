/* WAP to print first 10 odd natural numbers */

#include<stdio.h>
int main() {

    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d ", 2*i-1);
    }
             // OR
    /*
        for(i = 1; i < 20; i+=2) {
            printf("%d ", i);
        }
    */
    return 0;
}