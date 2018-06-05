void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	compteur;

	compteur = 'a';
	while (compteur <= 122)
	{
		ft_putchar(compteur);
		compteur = compteur + 1;
	}
}
