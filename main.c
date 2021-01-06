#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    srand(time(0));
    int secretNumber = rand()%10;
    int guess,guessCount=0,guessLimit=3;
    int outOfGuesses = 0;
    
    while(guess!=secretNumber && outOfGuesses == 0){
        if(guessCount >= guessLimit){
            outOfGuesses = 1;
        }else{
            printf("Guess secret number : ");
            scanf("%d",&guess);
        }
        guessCount++;
    }
    if(outOfGuesses==1){
        printf("Lose! The number was %d",secretNumber);
    }else{
        printf("Won! The number was %d",secretNumber);
    }
    
    return (EXIT_SUCCESS);
}

