#include <stdio.h> 
#include <stdbool.h>

int main () {
    --------
    //-32768_32768; -0_65535
    short s = 1;  unsigned short us = 2; //("%d", x)
    // -2 147 483 648_2 147 483 648; 0_4 294 967 295
    int i = 10;  unsigned int ui = 20;
    // -2 147 483 648_2 147 483 648; 0_4 294 967 295
    long l = 100; unsigned long ul = 200; //("%Ld", x)
    // -9223372036854775807_9223372036854775807; 0_18 446 744 073 709 551 615
    long long ll = 1000; unsigned long long ull = 2000; //("%Ld", x)
    --------
    // -3.4E-38_3.4E+38;
    float f = 1,11; // ("%.2f", x)
    // -1.7E-308_1.7E308
    double d = 1,2222;
    //  -3.4E-4932_3.4E-4932
    long double ld = 1,3333333333; //("%.2Lf", x)
    --------
    // Без значения 
    void;
    --------
    // Символ
    char = 'C'; //("%c", c)
    // true_false
    bool isHasCar = true;

    

return 0;
}