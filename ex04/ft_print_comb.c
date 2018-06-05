void	ft_putchar(char c);
void	ft_print_comb(void)
{
	int A;
	int B;
	int C;

	A = 0;
	while (A <= 9)
	{
		B = A + 1;
		while (B <= 9)
		{
			C = B + 1;
			while (C <= 9)
			{
				ft_putchar(48 + A);
				ft_putchar(48 + B);
				ft_putchar(48 + C);
				if (!(A == 7 && B == 8 && C == 9))
				{
					ft_putchar(',');
					ft_putchar(32);
				}
				C++;
			}
			B++;
		}
		A++;
	}
}
