#include <stdio.h>

#define PI 3.14f
#define FRAC 4.0f / 3.0f

int main(void)
{
        int radius = 10;
        printf("Radius: ");
        scanf_s("%d", &radius);
        radius = radius * radius * radius;
        printf("Volume : %f", FRAC * PI * radius);
        return 0;
}