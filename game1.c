#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int num,guess , nguess=1;
 
        nguess = 0;
        srand(time(0));
        num=rand()%100;

        //will genrate random number from 1 to 100
        //printf("the number is %d\n\n",num);//it will not show which number is generated
        //the number is generated between 0 to 99, so we add 1 to it to get the number between 1 to 100
        do{
            printf("guess the number\n\n");
            scanf("%d",&guess);


            if (guess>num)
            {
                printf("lower number please\n\n");
            }
            else if(guess <num)
            {
            printf("higher number please\n\n");

            }
            else 
            {
                printf("You guessed it right in %d attempt\n\n",nguess);
            }
            nguess++;

        }while(guess!=num);


    }

