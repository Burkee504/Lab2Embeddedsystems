#include "mbed.h"
/*Embedded Lab2 */
// This program uses printf and loops to print numbers in fibonacci sequence. 

int t_1 = 0;
int t_2 = 1;
int next_term = 0;

int max_terms =10;

int fib(int n){
    // input: position of the fib seq 
    // Output: the number in the seq 
    if( n == 0) 
    return 0;
    if(n == 1) 
    return 1;
    else
    return(fib(n-1) + fib(n-2));


}

int main()
{
    printf("Finbonachi series loop: %d,%d,", t_1, t_2);
    for(int i=2; i<max_terms; i++) {
        next_term = t_1 + t_2;
        printf("%d, ", next_term);
        t_1 = t_2;
        t_2 = next_term; 

    }
    printf("\r\n");

    printf("Finbonachi series recursive:");
    for(int i=0; i<max_terms; i++){
        printf("%d, ", fib(i));
    }
    printf("\r\n");

    while (true) {

    }
}

