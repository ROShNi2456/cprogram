#include<stdio.h>
#include<math.h>

float squareArea (float side);
float circularArea (float  rad);
float reactangleArea(float a , float b);

int main() {
    float a= 5.0;
    float b = 70.0;

    printf("area is: %f" , reactangleArea(a,b) ); 
    return 0;
}