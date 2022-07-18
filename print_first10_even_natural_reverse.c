/* WAP to print first 10 even natural numbers in reverse order */

#include<stdio.h>
int main() {

    int i;

    for(i = 20; i >= 1; i-=2) {
        printf("%d ", i);
    }

    /*
        for(i = 10; i >= 1; i--) {
            printf("%d ", i*2);
        }
    */
    return 0;
}