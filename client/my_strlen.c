/*
** my_strlen.c in /home/nakholz/rendu/perso/GitHub/minitalk
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Wed May 18 00:44:53 2016 
** Last update Wed May 18 00:44:59 2016 
*/

int my_strlen(char *str)
{
  int	 i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return i;
}
