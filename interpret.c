#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short ax;
short bx;
short cx;
short dx;

#define LSIZ 128
#define RSIZ 100

int main(int argc, char *argv[])
{
  // declare shorts as registers
  //read file in as datatype array of chars[] so we can refer to each line
  char line[RSIZ][LSIZ];
  int i = 0;
  int tot = 0;
  const char s[2] = " ";
  char *token;
  char temp[100];
  char *saveptr;

  FILE *fp = fopen(argv[1], "r");
  while (!feof(fp))
  {
    while (fgets(line[i], LSIZ, fp))
    {
      line[i][strlen(line[i]) - 1] = '\0';
      i++;
    }
  }

  tot = i;
  printf("\n The content in the file is : \n\n");
  for (i = 0; i < tot; ++i)
  {
    printf("%s\n", line[i]);

    /////////////////////////////////////////////////////////
    ///// I/O
    if (strstr(line[i], "read"))
    {
      printf(" hi \n");
    }

    if (strstr(line[i], "print"))
    {
      printf(" hi \n");
    }

    ///////////////////////////////////////////////////////
    ////// MOVING DATA

    if (strstr(line[i], "mov"))
    {
      printf(" hi \n");
    }

    //////////////////////////////////////////////////////////
    ///// ARITHMETIC

    if (strstr(line[i], "add"))
    {
      printf(" hi \n");
    }
    if (strstr(line[i], "mul"))
    {
      printf(" hi \n");
    }
    if (strstr(line[i], "sub"))
    {
      printf(" hi \n");
    }
    if (strstr(line[i], "div"))
    {
      printf(" hi \n");
    }

    ////////////////////////////////////////////////////
    /////JMP STATEMENTS
    if (strstr(line[i], "jmp"))
    {
      printf("\n hi \n");
    }
    if (strstr(line[i], "je"))
    {
      printf("\n hi \n");
    }
    if (strstr(line[i], "jne"))
    {
      printf("\n hi \n");
    }
    if (strstr(line[i], "jg"))
    {
      printf("\n hi \n");
    }
    if (strstr(line[i], "jge"))
    {
      printf("\n hi \n");
    }
    if (strstr(line[i], "jl"))
    {
      printf("\n hi \n");
    }
    if (strstr(line[i], "jle"))
    {
      printf("\n hi \n");
    }
  }
  printf("\n");

  fclose(fp);

  //checking if lines printed
  printf("\n Checking if the lines are stored into my line array : \n");
  printf(" %s\n", line[0]);
  printf(" %s\n", line[1]);
  printf(" %s\n", line[2]);
  printf(" %s\n", line[3]);

  printf("\n Looking for token : \n");
  //looking for token
  //strtok changes string input

  strcpy(temp, line[1]);
  //printf("%s", temp);
  //token = strtok(temp, s);

  token = strtok_r(temp, s, &saveptr); 
    //while (token != NULL)
    //{
    printf(" %s", token);
    //token = strtok(NULL, s);
  
  //token = strtok

  printf("\n");
  printf("\n");
  return 0;

}

void reg(char array[], short ax, short bx, short cx, short dx)
{
}