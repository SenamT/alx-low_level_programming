#include <stdio.h>
/**
 *main - Prints the alphabet in lower case, and then in upper case,
 *followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{

  char c;

  char d;

  c = 'a';
  d = 'A';
  while
    (c <= 'z')
    {
      putchar(c);
      c++;
    }
  while
    (d <= 'Z')
    {
      putchar(d);
      d++;
    }
  putchar('\n');
  return (0);
}
