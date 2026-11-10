#include <stdio.h>

int main(){
    float radius,height;
    printf("Enter Radius of Circle: ");
    scanf("%f",&radius);
    float area_of_circle=3.14*radius*radius;
    printf("Area of Circle: %f\n",area_of_circle);
    printf("Enter Height of Cylinder: ");
    scanf("%f",&height);
    float volume_of_cylinder= area_of_circle*height;
    printf("Volume of Cylinder: %f",volume_of_cylinder);
    return 0;
}