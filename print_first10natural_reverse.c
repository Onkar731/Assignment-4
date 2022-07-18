/* WAP to print the first 10 natural numbers in reverse order */

#include<stdio.h>
int main() {
    
    int i;

    // To print in reverse order initialize i with n value then decrease it upto 1
    for(i = 10; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}