//Get 4 floating point numbers from the user and save as array. Reverse the array and display the reverse version. Calculate and display the average of the original array.
#include <stdio.h>

 int main(){
     
     float flo[4];
     float sum = 0;
     
     for(int i = 0;i < 4; i++)
     {
         printf("Enter 4 floating point number %d: \n",i +1);
         scanf("%f",&flo[i]);
     }
     
     printf("Revese array:\n");
     for (int i = 3; i >= 0; i--)
     {
         printf("%.2f\n",flo[i]);
     }
     
     for (int i = 0; i < 4;i++)
     {
         sum += flo[i];
     }
     
    float Average = (sum / 4);
     
    printf("The average of the the float number is: %.2f", Average);
     
     
     return 0;
 }
