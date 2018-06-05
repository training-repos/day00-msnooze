void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int	compteur;

	compteur = 'z';
	while (compteur >= 97)
	{
		ft_putchar(compteur);
		compteur = compteur - 1;
	}
}
