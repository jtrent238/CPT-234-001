#include <stdio.h>

 double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight) {
    
    double pyramidVolume = 0.0;
    const double divide = 1/3;
    pyramidVolume = ((baseWidth * baseLength) * pyramidHeight) / 3;
    
    return pyramidVolume;
}

int main(void) {
   printf("Volume for 1.0, 1.0, 1.0 is: %f\n", PyramidVolume(1.0, 1.0, 1.0) );
   return 0;
}