#include <stdio.h>

int main(void) {
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;
   int batman;
   
   printf("Enter arrow base height:\n");
   scanf("%d", &arrowBaseHeight);
   
   printf("Enter arrow base width:\n");
   scanf("%d", &arrowBaseWidth);
   
   printf("Enter arrow head width:\n");
   scanf("%d", &arrowHeadWidth);

   
   
   
   while (arrowHeadWidth <= arrowBaseWidth) {
    printf("Enter arrow head width:");
    scanf("%d", &arrowHeadWidth);
    printf("\n");
}
     printf("\n");
   batman = arrowHeadWidth;
   for (int i = 0; i < arrowBaseHeight; ++i){
   for (int x = 0; x < arrowBaseWidth; ++x){
      printf("*");
   }
   printf("\n");
      
   }

   for (int b = 0; b < arrowHeadWidth; ++b){
   for (int a = 0; a < batman; ++a){
   printf( "*");}
   printf("\n");
   --batman;
   
   }
   
   return 0;
}