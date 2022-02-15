#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Compiler version gcc  6;
int rockpapersisers(char you,char comp){
  //draw cases
  // rr pp ss
  if(you==comp){
    return 0;
  }
  //other cases
  // rp pr rs sr ps sp
  if(you=='r' && comp=='p'){
    return -1;
  }
  else if(you=='p' && comp=='r'){
    return 1;
  }
  if(you=='r' && comp=='s'){
    return 1;
  }
  else if(you=='s' && comp=='r'){
    return -1;
  }
  if(you=='p' && comp=='s'){
    return -1;
  }
  else if(you=='s' && comp=='p'){
    return 1;
  }
  
}

int main(){
  char you,comp;
  int number;
  srand (time (0));
  number = rand()%100 + 1;
  if(number<33){
    comp = 'r';
  }
  else if(number>33 && number<66){
    comp = 'p';
  }
  else if(number>66){
    comp = 's';
  }
 
  printf("Enter 'r' for rock 'p' for paper 's' for sisers :\n");
  scanf("%c" ,&you);
  int result = rockpapersisers(you,comp);
  printf("You choose %c and comp choose %c\n",you,comp);
  if(result==0){
    printf("Game draw!!");
  }
  else if(result==1){
    printf("You won");
  }
  else{
    printf("You loose");
  }
  
    return 0;
}
