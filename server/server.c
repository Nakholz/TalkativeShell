#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

void	list_sig(int sig)
{
  static int	i;
  static char	c;
  
  c = (sig << i) + c;
  i++;
  if (i > 7)
    {
      my_putchar(c);
      c = '\0';
      i = 0; 
    }
}

void	read_sig(int sig)
{
  if (sig == SIGUSR1)
    list_sig(0);
  else if (sig == SIGUSR2)
    list_sig(1);
}

int	main(int ac ,char **av)
{
  int	pid;
  
  pid = getpid();
  my_putstr("PID = ");
  my_put_nbr(pid);
  my_putchar('\n');
  signal(SIGUSR1, read_sig);
  signal(SIGUSR2, read_sig);
  while (42)
    pause();
}
