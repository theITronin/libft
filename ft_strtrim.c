
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
		while (set[j] != '\0' && s1[i] != set[j])
			j++;
		if (s1[i] == set[j])
			state = 1;
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
		while (set[j] != '\0' && s1[i] != set[j])
			j++;
		if (s1[i] == set[j])
			state = 1;
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
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("Hola Mundo", "Hod"));
	printf("%s\n", ft_strtrim("pqr", "Hod"));
	printf("%s\n", ft_strtrim("Hod", "Hod"));
	return (0);
}