#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	return (write(1, str, ft_strlen(str)));
}

int	main()
{
	char	*str = "";
	printf("\nResult = %d\n", ft_putstr(str));
}
