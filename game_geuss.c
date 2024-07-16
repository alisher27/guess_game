#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));

    int random_number=0;
    int guess_number;

    random_number =rand()%9+1;

    while(random_number!=guess_number){
        printf("Enter your  guess: ");
        scanf("%d", &guess_number);
       
        if (guess_number==random_number){
            printf("conguratulation\n");
            break;

        }else if (guess_number>random_number){
            printf("My number is lower than %d\n", guess_number);
        }else {
            printf("My number is greater than %d\n", guess_number);
        }

    }
        
    return 0;
}