int	ft_atoi(char *s)
{
	int	temp;
	int facteur;

	temp = 0;
	facteur = 1;
	if (*s == '-')
	{
		temp = -1;
		s++;
	}
	while (*s == '-')
	{
		temp *= 10;
		temp += (s* - '0');
		s++;
	}
	return (facteur * temp);
}

int	ft_atoi(char *s)
{
	int	temp;
	int	facteur;

	temp = 0;
	facteur = 1;

	if(*s == '-')
	{
		facteur = -1;
		s++;
	}
	while( *s == '-')
	{
		temp *= 10;
		temp += (s* - '0');
		s++;
	}
	return (temp * facteur);
}

int	ft_atoi(char *s)
{
	int	temp;
	int	facteur;

	temp = 0;
	facteur = 1;
	if (*s == '-')
	{
		facteur = -1;
		s++;
	}
	while (*s == '-')
	{
		temp *= 10;
		temp += (s - '0');
		s++;
	}
	return ( temp * facteur);
}

int	ft_atoi(char *s)
{
	int	temp;
	int	facteur;

	temp = 0;
	facteur = 1;
	if (*s == '-')
	{
		facteur = -1;
		s++;
	}
	while (*s == '-')
	{
		temp *= 10;
		temp += (s - '0');
		s++;
	}
	return (temp * facteur);
}
