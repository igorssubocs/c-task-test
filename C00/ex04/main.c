void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_is_negative(-1);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(1);
	ft_putchar('\n');

	return (0);
}