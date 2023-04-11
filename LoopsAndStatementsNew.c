#include <stdio.h>
#include <stdbool.h>
#include "Func1.h"

int main () {

   info(); 
 

   bool res = true;
       int x = 0;
       while(res) {
       printf("Enter a num: ");
       scanf("%d", &x);
       if( x == 1)
       res = false;
       }

   for(float i = 100; i > 10; i /= 2){
      printf("%.1f ", i);
      }

                                       printf("\n");

   int y = 10;
      while(y < 30) {
      printf("%d ", y);
      y += 5;
      }

                                       printf("\n");

   bool ser = false;
      do {
      printf("Yes");
      } while(ser);

                                       printf("\n");

   for(int x = 0; x < 10; x++) {
     //  printf("%d ", x);
     //  if(x == 3)
     //  break;

   if(x % 2 == 0) 
      continue;
      printf("%d ", x);
      }  

                                       printf("\n");
   
   int arr[3][5] = {
     {1, 2, 3, 4, 5},
     {6, 7, 8, 9, 10},
     {11, 12, 13, 14, 15}
     };
     for(int w = 0; w < 3; w++)
     for(int e = 0; e < 5; e++) {
        printf("%d ", arr[w][e]); 
     }                                        
                                       printf("\n");                                                                   
          int min = arr[0][0];
          int max = arr[0][0];
          for(int z = 0; z < 3; z++) {
          for(int q = 0; q < 5; q++) {
             if(arr[z][q] < min) 
                 min = arr[z][q]; 
             if(arr[z][q] > max) 
                 min = arr[z][q]; 
     }}
       printf("Minimum: %d\n", min);
       printf("Maximum: %d\n", min);
         //int max = arr[0][0];
         //  for(int z = 0; z < 3; z++) {
         //  for(int q = 0; q < 5; q++) 
         //     if(arr[z][q] > max) 
         //         min = arr[z][q]; 
         //}
         //printf("Maximum: %d\n", min);


   
    




















    
    return 0;
}