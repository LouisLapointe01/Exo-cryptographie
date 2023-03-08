#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void xor(char* fichier_message, char* fichier_chiffre, char* key)
{
  FILE* fichier_mess;
  FILE* fichier_chiffrage;
  char caractere;
  fichier_mess=fopen(fichier_message,"r");
  fichier_chiffrage=fopen(fichier_chiffre,"w");

  int j=0;

  if (fichier_mess != NULL)
  {
    while (caractere != EOF)
    {
      caractere = fgetc(fichier_mess);
      fprintf(fichier_chiffrage, "%c", caractere^key[j]);
      j++;
      if (key[j]=='\0')
      {
        j=0;
      }
    } 
  }
}