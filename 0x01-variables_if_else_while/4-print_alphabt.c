#include <stdio.h>
/**
 *main - prints the alphabet in lowercase,
 *followed by a new line, except q and e
 *Return: Aways 0 (Sucess)
 */

int main(void)
{
  char c;

  c = 'a';
  while
    (c <= 'z')
    {
      if ((c != 'q' && c != 'e') && c <= 'z')
	putchar(c);
      c++;
    }
  putchar('\n');
  return (0);
}
