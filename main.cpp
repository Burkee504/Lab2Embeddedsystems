#include "mbed.h"
/*Embedded Lab2 */
// main() runs in its own thread in the OS

int t_1 = 0;
int t_2 = 1;
int next_term = 0;

int max_terms =10;

int main()
{
    printf("Finbonachi series: %d,%d,\r\n", t_1, t_2);
    for(int i=0; i<5 ; i++) {
        printf("loop %d \r\n", i);

    }
}

