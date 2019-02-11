#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS 

int main(void) {

	/* Type your code here. */

	const int OIL_PRICE = 35;
	const int TIRE_PRICE = 19;
	const int CAR_WASH_PRICE = 7;
	const int CAR_WAX_PRICE = 12;
	const int NONE_PRICE = 0;

	char firstService1[25];
	char firstService2[25];
	char secondService1[25];
	char secondService2[25];

	int firstServicePrice = 0;
	int secondServicePrice = 0;
	int priceTotal = 0;

	printf("Davy's auto shop services" "\n");
	printf("Oil change -- $%d" "\n", OIL_PRICE);
	printf("Tire rotation -- $%d" "\n", TIRE_PRICE);
	printf("Car wash -- $%d" "\n", CAR_WASH_PRICE);
	printf("Car wax -- $%d" "\n", CAR_WAX_PRICE);

	printf("\n"); //blank line

	printf("Select first service:" "\n");
	scanf("%s", &firstService1);
	scanf("%s", &firstService2);
	printf("Select second service:" "\n");
	scanf("%s", &secondService1);
	scanf("%s", &secondService2);

	printf("\n"); //blank line

	printf("Davy's auto shop invoice" "\n");

	printf("\n"); //blank line

	if ((strcmp(firstService1, "Oil")== 0)&&(strcmp(firstService2, "change")== 0)) {
		firstServicePrice = OIL_PRICE;
		printf("Service 1: Oil change, $%d", firstServicePrice);
	}
		else if ((strcmp(firstService1, "Tire")== 0)&&(strcmp(firstService2, "rotation")== 0)) {
			firstServicePrice = TIRE_PRICE;
			printf("Service 1: Tire rotation, $%d", firstServicePrice);
		}
	


    else if ((strcmp(firstService1, "Car")== 0)&&(strcmp(firstService2, "wash")== 0)) {
	 firstServicePrice = CAR_WASH_PRICE;
	 printf("Service 1: Car wash, $%d", firstServicePrice);
     }


   else if ((strcmp(firstService1, "Car")== 0)&&(strcmp(firstService2, "wax")== 0)) {
	 firstServicePrice = CAR_WAX_PRICE;
	 printf("Service 1: Car wax, $%d", firstServicePrice);
   }
   	 else if (strcmp(firstService1, "-")==0) {
		 secondServicePrice = NONE_PRICE;
		 printf("Service 1: No service");
		 strcpy(secondService2, secondService1);
		 strcpy(secondService1, firstService2);
		 
	 }


   printf("\n"); //blank line

   //Service 2
    if ((strcmp(secondService1, "Oil")== 0)&&(strcmp(secondService2, "change")== 0)) {
	   secondServicePrice = OIL_PRICE;
	   printf("Service 2: Oil change, $%d", secondServicePrice);
   }
   
	   else if ((strcmp(secondService1, "Tire")== 0)&&(strcmp(secondService2, "rotation")== 0)) {
		   secondServicePrice = TIRE_PRICE;
		   printf("Service 2: Tire rotation, $%d", secondServicePrice);
	   }
   
 
  else if ((strcmp(secondService1, "Car")== 0)&&(strcmp(secondService2, "wash")== 0)) {
	 secondServicePrice = CAR_WASH_PRICE;
	 printf("Service 2: Car wash, $%d", secondServicePrice);
 }
   

	 else if ((strcmp(secondService1, "Car")== 0)&&(strcmp(secondService2, "wax")== 0)) {
		 secondServicePrice = CAR_WAX_PRICE;
		 printf("Service 2: Car wax, $%d", secondServicePrice);
	 }


	 else if (strcmp(secondService1, "-")==0) {
		 secondServicePrice = NONE_PRICE;
		 printf("Service 2: No service");
	 }


	 printf("\n"); //blank line
    printf("\n"); //blank line

	 priceTotal = firstServicePrice + secondServicePrice;

	 printf("Total: $%d", priceTotal);
	 printf("\n"); //blank line
	 return 0;
 }