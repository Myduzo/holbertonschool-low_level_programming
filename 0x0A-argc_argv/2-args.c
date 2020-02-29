#include <stdio.h>
/**
* main - a program that prints its name, followed by a new line.
* @argc : int
* @argv[] : char
* Return: Always 0.
*/
int main(int argc,char *argv[])
{
  int i;
  for (i = 0; i < argc; i++)
  {
    _putchar(argv[i]);
    _putchar('\n');
  }
  return 0;
}
