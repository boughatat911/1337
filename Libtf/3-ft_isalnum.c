int	ft_isalnum (int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '1' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
