/*
** my_put_nbr.c in /home/arnhol_m/rendu/perso/minitalk/client
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Mon Jan  4 10:50:53 2016 
** Last update Mon Jan  4 10:50:55 2016 
*/

 int	 my_put_nbr(int nb) 
 { 
   int   i;
   if (nb == -2147483648)
     {
       my_putstr("-2147483648");
       return (0);
     }
   else if (nb < 0) 
     { 
       my_putchar('-'); 
       nb = -nb;
     }
   i = 1;
   while (nb / i > 9) 
     i = i * 10; 
   while (i != 0) 
     {
       my_putchar(48 + (nb / i) % 10);
       nb = nb % i;
       i = i / 10;
     } 
} 
