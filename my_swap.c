#include<stdio.h>
#include<unistd.h>

int	main(int *a, int *b)
{

  int c = 10;
  int d = 20;
  
  a = &c;
  b = &d;
  
  if(a = &c)
    {
      printf("La nouvelle valeur de c est %d\n" , *b);
    }    
  
  if(b =&d)
    {
      printf("La nouvelle valeur de d est %d\n" , *a);
    } 
  
  return 0; 
}

// Je n'arrive qu'a réaliser mes fonctions dans le main
