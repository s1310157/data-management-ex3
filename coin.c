#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char name[20];
    printf("Who are you?\n> ");
    scanf("%s", name); 
    printf("Hello, %s!\n", name);

    srand(time(0)); 
    printf("Tossing a coin...\n");
    int head = 0;
    int tail = 0;
    for(int i = 1; i <= 3; i++) {
        if(rand() % 2){
            printf("Round %d: Heads\n", i);
            head++;
        }else{
            printf("Round %d: Tails\n", i);
            tail++;
        }
    }
    printf("Heads: %d, Tails: %d\n", head, tail);

    if(heads > tails){
        printf("You won!\n");
        }else{
        printf("You lost!\n");
    }
    return 0;
}