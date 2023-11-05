#include <stdio.h>
#define pi 3.14

int main() {
    int radius;
    float volume;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);
    volume = (4.0 / 3.0) * pi * (radius * radius * radius);
    printf("The volume of the sphere is %f.\n", volume);

    return 0;
}


