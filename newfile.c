#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    int r = rand() % 20;
    printf("%d\n", r);
}