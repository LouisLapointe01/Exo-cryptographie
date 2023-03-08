#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xor.h"


int dh_crypt(int argc, char **argv)
{
  char* source; 
  char* dest; 
  char* type; 
  char* key;
 
  char c;

  for (int i=0;i<argc;i++)
  {
    if (strcmp(argv[i],"-h") == 0)
    {
      FILE* help;
      help=fopen("help.txt","r");
      do 
      {
        c = fgetc(help); 
        printf ("%c", c);
      }
      while (c != EOF);
      fclose(help);
      printf("\n");
      return 0;
    }
    if (strcmp(argv[i],"-i") == 0)
      source = argv[i+1];
    if (strcmp(argv[i],"-o") == 0)
      dest = argv[i+1];
    if (strcmp(argv[i],"-k") == 0)
      key = argv[i+1];
    if (strcmp(argv[i],"-m") == 0)
    {
      type = argv[i+1];
    }

  }
  if (source == NULL || dest == NULL || key == NULL || type == NULL)
  {
    printf("Veuillez retapper une insctruction\n");
    return 0;
  }
  if (strcmp(type,"xor") == 0)
    xor(source, dest, key);

return 0;
}