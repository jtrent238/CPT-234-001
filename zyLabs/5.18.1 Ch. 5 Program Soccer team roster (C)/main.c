#include <stdio.h>

int main(void) {

   /* Type your code here. */

   const int NUM_PLAYERS = 5;
   
   //int playerNum;
   int jerseyNum[NUM_PLAYERS];
   int jerseyNumNew = 0;
   int playerRating[NUM_PLAYERS];
   int playerRatingNew = 0;
   int userPlayer = 0;
   int userNum = 0;
   
   char menu = 'x';
   
   for (int i = 0; i < NUM_PLAYERS; i++) {
      printf("Enter player %d's jersey number:" "\n", i + 1);
      scanf("%d", &jerseyNum[i]);
      printf("Enter player %d's rating:" "\n" "\n", i + 1);
      scanf("%d", &playerRating[i]);
   }
   
   //if (playerRating [2] == 5) {
   //   playerRating[2] = 6;
   //}
   
   printf("ROSTER" "\n");
      for (int j = 0; j < NUM_PLAYERS; j++) {
         printf("Player %d -- Jersey number: %d, Rating: %d" "\n", j + 1, jerseyNum[j], playerRating[j]);
      }
   
   printf("\n");
   
   printf("MENU" "\n");
   printf("u - Update player rating" "\n");
   printf("a - Output players above a rating" "\n");
   printf("r - Replace player" "\n");
   printf("o - Output roster" "\n");
   printf("q - Quit" "\n" "\n");
   printf("Choose an option:");
   scanf(" %c", &menu);
   
   while (menu != 'q') {
      switch(menu){
         case 'o':
            printf("ROSTER" "\n");
            for (int j = 0; j < NUM_PLAYERS; j++) {
               printf("Player %d -- Jersey number: %d, Rating: %d" "\n", j + 1, jerseyNum[j], playerRating[j]);
            }
            printf("\n");
            break;
         case 'u':
            printf("Enter a jersey number:");
            scanf("%d", &userPlayer);
            printf("Enter a new rating for player:");
            scanf("%d", &playerRatingNew);
            for (int f = 0; f < NUM_PLAYERS; f++) {
               if (jerseyNum[f] == userPlayer) {
                   playerRating[f] = playerRatingNew;
                }
            }
            break;
            
         case 'r':
            printf("Enter a jersey number:");
            scanf("%d", &userPlayer);
            printf("Enter a new jersey number:");
            scanf("%d", &jerseyNumNew);
            printf("Enter a new rating for player:");
            scanf("%d", &playerRatingNew);
            
            for (int f = 0; f < NUM_PLAYERS; f++) {
               if (jerseyNum[f] == userPlayer) {
                  jerseyNum[f] = jerseyNumNew;
                  playerRating[f] = playerRatingNew;
                }
            }
            
            break;
            
         case 'a':
            printf("Enter a rating:");
            scanf("%d", &userNum);
            printf("ABOVE %d", userNum);
            
            for (int f = 0; f < NUM_PLAYERS; f++) {
               if (jerseyNum[f] < userNum) {
                  printf("Player %d -- Jersey number: %d, Rating: %d", f + 1, jerseyNum[f], playerRating[f]);
               }
            }
            break;
      }
      
      printf("MENU" "\n");
      printf("u - Update player rating" "\n");
      printf("a - Output players above a rating" "\n");
      printf("r - Replace player" "\n");
      printf("o - Output roster" "\n");
      printf("q - Quit" "\n" "\n");
      printf("Choose an option:");
      scanf(" %c", &menu);
      
      
   }
   
   printf("\n");
   

   
   
   //if (menu == 'a') {
         // printf("ABOVE %d" "\n", userInput);
         // //for (int e = userInput; e < NUM_PLAYERS; e++) {
         // //   printf("Player %d -- Jersey number: %d, Rating: %d" "\n" "\n", e + 1, jerseyNum[e], playerRating[e]);
         // //}
         
   // }

   // if (menu == 'u') {
      // printf("Enter a jersey number:");
      // scanf("%d", &userPlayer);
      // printf("Enter a new rating for player:");
      // scanf("%d", &playerRating);
      // for (int f = 0; f < NUM_PLAYERS; f++) {
         
            // if (jerseyNum[f] == userPlayer) {
               // playerRating[f] = playerRating;
            // }
         // }
   // }
   
   // if (menu == 'r') {
   // }
   
   // if (menu == 'o') {
   // }
   
   // if (menu == 'q') {
   // }
   
   

   
   return 0;
}