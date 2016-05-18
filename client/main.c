/*
** main.c in /home/arnhol_m/rendu/perso/minitalk/client
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Mon Jan  4 10:49:50 2016 
** Last update Mon Jan  4 10:49:51 2016 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

void	send(int pid ,char c)
{
  int	i;
  char  w;
  
  i = 0;
  while (i < 8)
    {
      usleep(1000);
      w = (c >> i) & 1;
      if (w == 0)
	  kill(pid ,SIGUSR1);
      if (w == 1)
	kill(pid ,SIGUSR2);
      i++;
    }
}

void	cetc(int pid ,char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      send(pid ,str[i]);
      i++;
    }
}

int	main(int ac, char **av)
{
  int	pid;

  if (ac != 3)
    {
      my_putstr("wrong argument\n");
      exit(1);
    }
  pid = my_getnbr(av[1]);
  cetc(pid ,av[2]);
}
