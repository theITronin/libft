
#include "libft.h"

size_t	p_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		state;

	i = 0;
	while (s1[i] != '\0')
	{
		state = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				state = 1;
			j++;
		}
		if (state == 0)
			return (i);
		i++;
	}
	return (i);
}

size_t	p_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		state;

	i = ft_strlen(s1);
	while (i > 0)
	{
		state = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				state = 1;
			j++;
		}
		if (state == 0)
			return (i);
		i--;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = p_start(s1, set);
	end = p_end(s1, set);
	str = malloc((end - start + 1) * sizeof(char));
	ft_strlcpy(str, &s1[start], end - start);
	return (str);
}

#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim("hola mundo", "hod"));
	return (0);
}