#include <stdio.h>
#include <stdlib.h>

int main(){
  int h=0, t=0;

  printf("Tossing a coin...\n");

  for(int i=1; i<=3; i++){
    printf("Round %d: ", i);

    if(rand()%2==1){ printf("Heads\n"); h++;}
    else{ printf("Tails\n"); t++;}

  }

  printf("Heads: %d, Tails: %d\n", h, t);

  if (h>t) printf("You won!\n");
  else printf("You lost.\n");

  return 0;
  
}
