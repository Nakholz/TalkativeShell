/*
** my_pid.c in /home/nakholz/rendu/perso/GitHub/minitalk
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Wed May 18 00:48:02 2016 
** Last update Wed May 18 00:48:02 2016 
*/

#include <unistd.h>
#include <stdio.h>
int	get_my_pid()
{
  pid_t	pid;
  pid = getpid();
  printf("my_pid = %d\n", pid);
}
