#include <stdio.h>

struct Abstract {
int width, height;
};

void calc(struct Abstract * obj);

int main() {
    struct Abstract Square = {5, 7};
    calc(&Square);

    
    return 0;
}

void calc(struct Abstract * obj) {
    int res = obj->width * obj->height;
    printf("Result: %d\n", res);
}