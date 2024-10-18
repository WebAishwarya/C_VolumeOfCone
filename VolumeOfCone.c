#include <stdio.h>

int main() 
{
    float radius = 2;
    float height = 8;
    float VolumeOfCone;
    
    VolumeOfCone = (3.14 * radius * radius * height) / 3;
    
    printf("Value of radius is : %.2f\nValue of height is : %.2f\n\n", radius,height);
    printf("Volume of the cone : %.2f\n", VolumeOfCone);
    
    return 0;
}
