#include <stdio.h>
#include <math.h>

float calculate_distance(float x1, float y1, float x2, float y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(){
    float x1, y1, x2, y2;

    while (scanf("%f %f %f %f", &x1, &y1, &x2, &y2)==4){
    float distance = calculate_distance(x1, y1, x2, y2);
    printf("%.2f\n",distance);
}

    return 0;

}
