#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Compiler version gcc  6.3.0

int main()
{
  int number, guess, nguesses=1;
  srand (time (0));
  number = rand()%100 + 1;
 //printf("The number is %d \n",number);
  
  do{
    printf("Guess the number between 1 to 100 : \n");
    scanf("%d",&guess);
    
    if(guess<number){
      printf("Higher number please! \n");
      
    }
    else if(guess>number){
      printf("lower number please! \n");
      
    }
    else{
      printf("You guessed the number in %d attempts \n",nguesses);
    }
    nguesses++;
    
  }while(number!= guess);
  

 
 return 0;
}
