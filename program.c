#include <stdio.h>
#include <math.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))


// function for calculating the value
float U(int x, int y) {
    if ((x / pow(y, 2)) < 1) {
        float t1 = M_E * cos(M_PI * pow(x, 2)) - y;
        float t2 = tan( cbrt(x * pow(y, 2)) - (1 / cbrt(x)) );
        return MAX(t1, t2);
    } else {
        return sin(x * y - pow(x, 2) - pow(y, 2));
    }
}


// output values to the console
int main(void) {
    for(float x = 1; x <= 3; x = x + 1.3) {
        for (float y = 2; y <= 4; y = y + 1.5) {
            printf("x = %f, y = %f, f(x, y) = %f \n", x, y, U(x, y));
        }
    }
    return 0;
}