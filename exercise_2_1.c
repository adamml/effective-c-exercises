#include <stdio.h>

static unsigned int counter = 0;

void increment(void){
    counter++;
}

int retrieve(void){
    return counter;
}

int main(void){
    for(int i=0; i<5; i++){
        increment();
        printf("%d", retrieve());
    }
    return 0;
}