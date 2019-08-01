#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	return (str);
}

int		main()
{
	char	ss[100] = "rumiT";
	char	*s = ss;
	
	printf("%s\n", ft_strrev(ss));
	return (0);
}
