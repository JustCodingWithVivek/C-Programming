#include <stdio.h>

int main(){
    // int length=10,breadth=5;//if you want to use hard coded values
    int length,breadth;
    //Value Inputted from User
    printf("Enter Length of Rectangle: ");
    scanf("%d",&length);
    printf("Enter Breadth of Rectangle: ");
    scanf("%d",&breadth);
    int area_of_retangle;
    area_of_retangle=length*breadth;
    printf("Area of Rectangle is %d",area_of_retangle);
    return 0;
}