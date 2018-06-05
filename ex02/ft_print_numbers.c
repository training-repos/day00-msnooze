void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	compteur;

	compteur = 48;
	while (compteur <= 57)
	{
		ft_putchar(compteur);
		compteur = compteur + 1;
	}
}
