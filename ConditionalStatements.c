#include <stdio.h>
#include <stdbool.h>


int main (){
    short x = 56;
    

    if(x >= 5 && x < 56 ) {
        if(x < 53 && x != 53){
        printf("X is lower then 53\n");
        }
        printf("Yes\n");
    }
     else if(x < 57){
        printf("X is lower then 57\n");
    } else {
        printf("No");
    }

    bool IsHasCar = true;
    if(x == 51) {
        IsHasCar = false;
    }
    if(IsHasCar) {
    printf("Ego Mashina\n");
    }
    else {
        printf("Ne ego Mashina\n");
    }


short res = 20;
switch(res) {
    case 10: printf("for res 10 is good");
    break;
    case 12: printf("for res 12 is good");
    break;
    case 20: printf("for res 20 is good");
    break;
    default: printf("Number is not good");
    break;
}
    
    return 0;

}