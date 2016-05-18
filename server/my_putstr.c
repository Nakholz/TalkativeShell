/*
** my_putstr.c in /home/nakholz/rendu/perso/GitHub/minitalk
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Wed May 18 00:48:14 2016 
** Last update Wed May 18 00:48:15 2016 
*/

int	 my_putstr(char *str)
{
  int	i;
  
  i = 0;
  while(str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
