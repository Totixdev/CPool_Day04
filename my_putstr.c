#include<stdio.h>

int	main(char *str)
{
  
  char chaine[6];
  
  chaine[0] = 's';
  chaine[1] = 'a';
  chaine[2] = 'l';
  chaine[3] = 'u';
  chaine[4] = 't';
  chaine[5] = '\0';

  str = &chaine[0];
  
  printf("%s\n" , chaine);
  printf("L'adresse de la chaine 0 est %p\n" , str);
  
 return 0;
}



// Je ne trouve pas mon erreur
