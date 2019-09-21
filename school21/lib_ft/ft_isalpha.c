int ft_isalpha(int elem)
{
	if (elem >= 'a' && elem <= 'z' || elem >= 'A' && elem <= 'Z')
		return (1);
	return (0);
}