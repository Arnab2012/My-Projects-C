#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main()
{
  int a=0,b,c,d,e,f,g,h,i,j=0,k,l, n, factorial=1;
  int sum,sub,mul;
  float div,power;
  while(a!=7)
  {
    
  printf("What do you want?? \n Press 1 for Addition \n Press 2 for substraction \n Press 3 for multiplication \n Press 4 for divison \n Press 5 for power \n Press 6 for factorial \n Press 7 for exit \n");
  scanf("%d",&a);
  
  if(a==1)
  {
    printf("Enter two numbers \n");
    scanf("%d %d",&b,&c);
    sum=b+c;
    printf("The added value is %ld \n",sum);
  }
  else if(a==2)
  {
    printf("Enter two numbers \n");
    scanf("%d %d",&d,&e);
    sub=d-e;
    printf("The added value is %ld \n",sub);
  }
 else if(a==3)
  {
    printf("Enter two numbers \n");
    scanf("%d %d",&f,&g);
    mul=f*g;
    printf("The added value is %ld \n",mul);
  }
else if(a==4)
  {
    printf("Enter two numbers \n");
    scanf("%d %d",&h,&i);
    div=h/i;
    printf("The added value is %lf \n",div);
  }
 
else if(a==5){
    printf("Enter two numbers: \n");
    scanf("%d %d",&k,&l);
    power=pow(k,l);
    printf("%d to the power of %d is %f \n",k,l,power);
  
  }
 
 
 else if(a==6){
  printf("Enter the number: \n");
  scanf("%d",&n);
  
  for(i=1; i<=n; i++){
    factorial *= i;
  }
  printf("The factorial of %d is %ld \n",n,factorial);
  
 }}}

