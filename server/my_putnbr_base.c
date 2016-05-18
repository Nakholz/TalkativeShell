/*
** my_putnbr_base.c in /home/nakholz/rendu/perso/GitHub/minitalk
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Wed May 18 00:46:54 2016 
** Last update Wed May 18 00:46:55 2016 
*/

void	my_putnbr_base(unsigned int nb, char *base)
{
  unsigned int   result;
  unsigned int   diviseur;
  unsigned int   size_base;

  size_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  diviseur = 1;
  while ((nb / diviseur) >= size_base)
    diviseur = diviseur * size_base;
  while (diviseur > 0)
    {
      result = (nb /diviseur) % size_base;
      my_putchar(base[result]);
      diviseur = diviseur / size_base;
    }
}
