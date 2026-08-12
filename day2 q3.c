/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include <stdio.h>

int main() {
   float length, breadth, area, perimeter;

   printf("enter length");
   scanf("%f", &length);

   printf("enter breadth");
   scanf("%f", &breadth);

   area = length * breadth;
   perimeter = 2 * (length+breadth);

   printf("area of rectangle = %.2f\n", area);
   printf("perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}


