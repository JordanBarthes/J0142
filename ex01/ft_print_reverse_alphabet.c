
void	ft_print_reverse_alphabet(void)
{
	char	lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		ft_putchar(lettre);
		lettre -= 1;
	}
}
