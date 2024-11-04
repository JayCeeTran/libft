
#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	while(*s1)
	{
		if (*s1 == *s2)
		{
			s2++;
			s1++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}
