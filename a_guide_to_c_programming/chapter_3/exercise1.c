#include <stdio.h>

/* C program to calculate the volume and surface area of a box*/

main(){
    int height = 10;
    float length = 11.5;
    float width = 2.5;

    float volume;
    float surfaceArea;

    volume = length * height * width;
    surfaceArea = (2*length*width) + (2*length*height) + (2*height*width);

    printf("The volume of the box is %5.2f cubic meters", volume);
    printf("\nAnd the surface area of the box is %5.2f meters squared", surfaceArea);
    
}