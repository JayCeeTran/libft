#include "libft.h"

/*char	*deci_to_hexa(int n, char *str)
{
	char	hexach[16] = "0000000000abcdef";
	int	divider;
	int	i;
	int	value;

	divider = 1;
	i = 0;
	while (n / divider >= 16)
		divider *= 16;
	while (divider > 0)
	{
		value = n / divider;
		if (value < 9)
			str[i] = value + 48;
		else if (value > 9)
			str[i] = hexach[value];
		n %= divider;
		divider /= 16;
		i++;
	}
	str[i] = '\0';
	return (str);
}*/
char	*ft_itoa_base(int n, char *str, int base)
{
	int	divider;
	int	i;

	divider = 1;
	i = 0;
	if (n < 0 && base == 10)
	{	
		str[i++] = '-';
		n *= (-1);
	}
	while (n / divider >= base)
		divider *= base;
	while (divider > 0)
	{	
		if (n / divider <= 9)
			str[i] = n / divider + 48;
		else if (n / divider > 9)
			str[i] = n / divider - 10 + 'a';
		n %= divider;
		divider /= base;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	test[100];
	ft_itoa(1000, test, 8);
	printf("%s\n", test);
	printf("%s\n", ft_itoa_base(1000, test, 2));
	printf("%s\n", ft_itoa_base(1000, test, 16));
	printf("%s\n", ft_itoa_base(-1000, test, 10));
}
