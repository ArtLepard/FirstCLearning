#include <stdio.h>
#include <string.h>

struct Car {
    int speed;
    char name[50];
    char steeringWeel[60];
    float weight;
};

int main() {
    struct Car bmw;
    bmw.speed = 250;
                                                                                        //   Bmw.name = "BMW M9";
    strcpy(bmw.name,"BMW M9 HARACTERICTICS");
    strcpy(bmw.steeringWeel,"Left");
    bmw.weight = 2500.00f; 

    struct Car Mersedes = {300, "Mersedes S63 HARACTERICTICS", "left", 3200.00f};


    printf("\n%s\n MaximumSpeed:%d\n SteeringWeel:%s\n Weight:%.2f\n\n", Mersedes.name, Mersedes.speed, Mersedes.steeringWeel, Mersedes.weight );
    printf("%s\n MaximumSpeed:%d\n SteeringWeel:%s\n Weight:%.2f\n", bmw.name, bmw.speed, bmw.steeringWeel, bmw.weight );



    
    

    return 0;

}