#include <stdio.h>

void print_one(void){
    printf("\n1\n");
}

void print_two(void){
    printf("\n2\n");
}

void print_three(void){
    printf("\n3\n");
}

void (*arr[3])() = {print_one, print_two, print_three};

int main (void){

    (*arr[0])();
    (*arr[1])();
    (*arr[2])();

    return 0;
}