/* WAP to print table of 5 */

#include<stdio.h>
int main() {

    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d\n", i * 5);
    }

    /*
        for(i = 5; i <= 50; i += 5) {
            printf("%d\n", i);
        }
    */
    return 0;
}