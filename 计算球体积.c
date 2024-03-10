#include <stdio.h>
#include <math.h>
#define PI 3.1415927

int main() {
    float radius, volume;

    //while (scanf("%f", &radius) == 1) {
    printf("«Î ‰»Î∞Îæ∂£∫\n");
    scanf("%f", &radius);
        volume = (4.0/3.0) * PI * pow(radius, 3);

        printf("%.3f\n", volume);
    //}

    return 0;
}
