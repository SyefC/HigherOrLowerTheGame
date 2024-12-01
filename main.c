#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//
int main() {
    printf("**************************\n");
    printf("        THE GAME       \n");
    printf("     Higher Or Lower\n");
    printf("Rules: If Your Number Is Higher than your opponent You Win But If Opponent Number Is Higher Than Yours You Lose!\n");
     printf("**************************    \n");
    char y[3];
    char n[2];
    printf("list: type y or n\n");
   printf("Play?\n");
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
               else {
              printf("opponent num: %d\n",sub);
              printf("You Lose! (Run Code Again To Play Again)");
               }
             }
             else {
                printf("opponent num: %d\n",num1);
                printf("You Lose! (Run Code Again To Play Again)\n)");
             }
        }
    }
    else {
        printf("exited");
        return 1;
    }
    return 0;
}
