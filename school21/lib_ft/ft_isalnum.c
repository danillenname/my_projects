int ft_isalpha(int elem);
int ft_isnumber(int elem);

int ft_isalnum(int elem)
{
	return (ft_isalpha(elem) || ft_isnumber(elem));
}