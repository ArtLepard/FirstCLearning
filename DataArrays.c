#include <stdio.h>

int main(){


int arr[2][5] ={
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5}
    };
arr[2][2] = 9;
printf("%d\n", arr[2][2]);

float numbers [3];
numbers [0] = 2.1f;
numbers [1] = 7.9f;
numbers [2] = 143.15f;
numbers [0] = 15.8f;
printf("%.2f\n", numbers[0]);

char word[] = {'W', 'o', 'r', 'l', 'd','\0'};
char words[] = "World";
word[3] = '1';
words[3] = '1';
printf("%s\n", words);
printf("%s\n", word);
    return 0;
}