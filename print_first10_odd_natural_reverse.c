/* WAP to print first 10 odd natural numbers in reverse order */

#include<stdio.h>
int main() {

    int i;

    for(i = 19; i >= 1; i-=2) {
        printf("%d ", i);
    }

    /*
        for(i = 10; i >= 1; i--) {
            printf("%d ", i*2-1);
        }
    */
    return 0;
}