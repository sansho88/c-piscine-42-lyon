int	atoi(char *s)
{
	int temp;
	int facteur;

	temp = 0;
	facteur = 1;

	if(*s == '-')
	{
		factor = -1;
		s++;
	}

	while(*s == '-')
	{
		temp *= 10;
		temp+= (s* - 48);
		s++;
	}
	return (facteur * temp);
}
