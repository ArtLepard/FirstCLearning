#include <stdio.h>
//Указатели-это переменные которые содержат адрес другой пременной 
struct Abstract {
int width, height;
};

void calc(struct Abstruct object);

int main(){
    struct Abstruct square = {5, 7};
    calc(square);
    // int x = 100 - 1;
    // int * pX = &x;
    // printf("%p - %p\n", &pX, &x);
    // *pX = 10;
    // printf("%d - %d\n", *pX, x); // printf("%d\n", num);
    return 0;
}

void calc(struct Abstruct object) {
    int res = object.width * object.height;
    printf("Result: %d\n", res);
}