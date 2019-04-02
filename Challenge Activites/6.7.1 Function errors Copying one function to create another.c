#include <stdio.h>

double CelsiusToKelvin(double valueCelsius) {
   double valueKelvin;

   valueKelvin = valueCelsius + 273.15;

   return valueKelvin;
}

double KelvinToCelsius(double valueKelvin) {
   
   double valueCelsius;
   
   valueCelsius = valueKelvin - 273.15;
   
   return valueCelsius;
}

int main(void) {
   double valueC;
   double valueK;

   valueC = 10.0;
   printf("%lf C is %lf K\n", valueC, CelsiusToKelvin(valueC));

   valueK = 283.15;
   printf("%lf is %lf C\n", valueK, KelvinToCelsius(valueK));

   return 0;
}