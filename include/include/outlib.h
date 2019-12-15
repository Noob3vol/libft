#ifndef OUTLIB_H
# define OUTLIB_H
# define P(x) ft_putchar(x)
# define TEST ft_putendl("TEST");
# define DPUTSTR(x) ft_putstr(#x" = "); ft_putstr(x); ft_putchar('\n');
# define DPUTNBR(x) ft_putstr(#x" = "); ft_putnbr(x); ft_putchar('\n');

/*
**	print simple data (char, int, char * -o [], void *)
*/
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putendl(char *str);
void	ft_putnbr(int nbr);
void	ft_atoi(char *str);
void	ft_putstr_non_printable(char *str);
void	ft_print_memory(void *addr, int size);

/*
**	print table (char**, int *, char *, void *)
*/

void	ft_print_wordlist(char **wordlist);
void	ft_print_iarray(int **iarray, int size);
#endif
