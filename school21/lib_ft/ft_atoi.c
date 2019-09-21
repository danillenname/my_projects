#include <stdio.h>

int is_space(char elem)
{
	if (elem == ' ' || elem == '\t' || elem == '\n' || elem == '\0')
		return (1);
	return (0);
}

int ft_atoi(char *str)
{
	int i;
	int sgn;
	int res;

	i = 0;
	sgn = 1;
	res = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		sgn = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sgn);
}