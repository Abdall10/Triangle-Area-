#include <iostream>
using namespace std;
// Triangle Area 
int main() {

    double triangleArea,base,hight; 
    char choice;
    
    do {
    printf("Enter the base: \n");
    scanf("%lf", &base);

    printf("Enter the hight: \n");
    scanf("%lf", &hight);

// Triangle Area = 0.5*base*hight
   triangleArea=0.5*base*hight;
   printf("The area of the triangle is: %.2lf \n", triangleArea);

   printf("\n\nDo you want to calculate again? (y/n): "); 
   scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y'); // The loop continues if the user inputs 'y' or 'Y'
 return 0;
}


// ("%d",&base)