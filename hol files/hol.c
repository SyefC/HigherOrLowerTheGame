#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//#####################################################################################################################################################
      long long generateLargeRandomNumber() {
    long long num = 0;
    for (int i = 0; i < 5; i++) {
        num = num * 100000 + (rand() % 100000);
    }
    return num;
}
int main() {     
   srand(time(NULL));                                                                                                                                   //#
    printf("**************************\n");                                                                                                          //#                                                                                                         
    printf("        THE GAME       \n");                                                                                                          //#
    printf("     Higher Or Lower\n");                                                                                                          //#
    printf("Rules: If Your Number Is Higher than your opponent You Win But If Opponent Number Is Higher Than Yours You Lose!\n");              //#
     printf("**************************    \n");                                                                                                 //#                                                                                                             //#        //#
    char y[3];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     //#
    char n[2];
    printf("list: type y or n\n");
   printf("Play?");
   fgets(y,3,stdin);
    if(strcmp(y, "y\n") == 0) {
        char answer[25];
        printf("List Of Diffulclty: type easy or medium or hard or extreme or quit\n");
        printf("Choose Diffulcalty:");
        fgets(answer,25,stdin);
        if(strcmp(answer,"easy\n") == 0) {
            srand(time(NULL));
             int num1 = rand() % 19;
             printf("guess a number 1 - 10 higher or lower.\n");
             printf("guess:");
             int guess;
             scanf("%d",&guess);
             if(guess > num1) {
                printf("opponent num: %d\n",num1);
                printf("You Win! (Run Code Again To Play Again)\n");
             }
             else if(guess == num1) {
                printf("opponent num: %d\n",num1);
                printf("Looks like it's a draw! (Run Code Again To Play Again)");
             }
             else if (guess > 10) {
                printf("cannot guess higher than 10!\n");
                printf("(Run Code Again To Play Again)\n");
             }
             else if (num1 > 10) {
               int sub = num1 - 8;
               if(guess > sub) {
                  printf("opponent num: %d\n",sub);
                  printf("You Win! (Run Code Again To Play Again)");
               }
               else if (guess < sub) {
              printf("opponent num: %d\n",sub);
              printf("You Lose! (Run Code Again To Play Again)");
               }
               else {
                  printf("Looks Like Its a Draw! (Run Code again to play)");
                  printf("opponent num: %d\n",sub);
               }
             }
             else {
                printf("opponent num: %d\n",num1);
                printf("You Lose! (Run Code Again To Play Again)\n)");
             }
        }
        else if(strcmp(answer,"medium\n") == 0) {
         srand(time(NULL));
         int num2 = rand() % 79;
         int guess;
         printf("Guess The Number 1 - 70 Higher Or Lower\n");
         printf("Guess:");
         scanf("%d",&guess);
         if(guess > num2) {
            printf("You Win! (Run Code Again to play)\n");
            printf("opponent num: %d\n",num2);
         }
         else if(guess < num2) {
            printf("You Lose! (Run Code Again to play)\n");
            printf("opponent num: %d\n",num2);
         }
         else if(guess == num2){
            printf("Looks Like it's a Draw! (Run Code Again To Play)\n");
            printf("opponent num: %d\n",num2);
         }
         else if(num2 > 70) {
            int lower = num2 - 12;
           if(guess > lower) {
            printf("You Win! (Run Code Again to play)\n");
            printf("opponent num: %d\n",num2);
         }
         else if(guess < lower) {
            printf("You Lose! (Run Code Again to play)\n");
            printf("opponent num: %d\n",num2);
         }
         else if(guess == lower){
            printf("Looks Like it's a Draw! (Run Code Again To Play)");
            printf("opponent num: %d\n",num2);
         }
         }
         else {
            printf("!!!ERROR!!!\n");
         }
        }
        else if(strcmp(answer,"hard\n") == 0) {
         int num3 = rand() % 1000;
         long long guess;
         printf("Guess The number 1 - 500\n");
         printf("Guess:");
         scanf("%d",&guess);
         if(guess > num3) {
            printf("You Win! (Run code again to play)\n");\
            printf("opponent num: %d",num3);
         }
         else if(guess < num3) {
            printf("You Lose! (Run code again to play)\n");
            printf("opponent num: %d",num3);
         }
         else if(guess == num3) {
            printf("Looks Like Its a draw! (Run code again to play)\n");
            printf("opponent num: %d",num3);
         }
         else if(num3 > 500) {
            num3 = 500;
              if(guess > num3) {
            printf("You Win! (Run code again to play)\n");\
            printf("opponent num: %d",num3);
         }
         else if(guess < num3) {
            printf("You Lose! (Run code again to play)\n");
            printf("opponent num: %d",num3);
         }
         else if(guess == num3) {
            printf("Looks Like Its a draw! (Run code again to play)\n");
            printf("opponent num: %d",num3);
         }
         }
         else {
            printf("!!!ERROR!!!\n");
         }
        }
             else if(strcmp(answer,"extreme\n") == 0) {
      long long num4 = generateLargeRandomNumber();
      int e;
      printf("Guess The Number From 1 - ???\n");
      printf("Guess:");
      scanf("%d",&e);
      if(e > num4) {
         printf("Is It The End?\n");
         printf("opponent num: %d\n",num4);
         printf("SECRET DIFFICULTY: impossible");
      }
      else if(e < num4) {
         printf("You Lose! (Run Code Again To Play)\n");
         printf("opponent num: %d",num4);
      }
      else if(e == num4) {
         printf("Looks Like Its A Draw! (Run Code Again To Play)\n");
         printf("opponent num: %d",num4);
      }
    }
    else if(strcmp(answer,"impossible\n") == 0) {
      printf("COMING SOON\n");
      return 0;
    }
    else {
        printf("exited");
        return 1;
    }
    return 0;
    }
}