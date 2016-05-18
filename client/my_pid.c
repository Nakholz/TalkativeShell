/*
** my_pid.c in /home/arnhol_m/rendu/perso/minitalk/client
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Mon Jan  4 10:50:12 2016 
** Last update Mon Jan  4 10:50:13 2016 
*/

#include <unistd.h>
#include <stdio.h>
int	get_my_pid()
{
  pid_t	pid;
  pid = getpid();
  printf("my_pid = %d\n", pid);
}
