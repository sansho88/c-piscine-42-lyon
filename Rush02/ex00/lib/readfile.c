/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:03:51 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/22 22:02:56 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include "ourlib.h"
char	**readfile(char *dict)
{
	char 	c;
	int		fd;
	char	**textfile;
	int		i;
	int		j;

	fd = open(dict, O_RDONLY);
	textfile = malloc(20000048 * sizeof(char) + 1);
	if (fd == -1)
	{
		ft_putstr("Dict error\n");
		return (NULL);
	}
	i = 0;
	j = 0;
	while (read(fd, &c, 1) > 0)
	{
		while (c >= 9 && c <= 13)
			read(fd, &c, 1);  /* Lis dans le vide jusqu'à sortir des espaces */
		while (c != ':')
			textfile[i][j++] = c;
		textfile[i++][j] = '\n';
	}
	close(fd);
	return (textfile);
}

char	*file_to_array(char *path)
{
	int		fd;
	char	*read_buffer[1];
	char	*buffer;
	int		file_size;

	file_size = 0;
	fd = open(path, O_RDONLY);
	if (fd == 3)
	{
		while (read(fd, read_buffer, 1))
			file_size++;
		close(fd);
	}
	fd = open(path, O_RDONLY);
	if (fd == 3)
	{
		buffer = malloc((file_size + 1) * sizeof(char));
		if (!buffer)
			return (NULL);
		read(fd, buffer, file_size);
		close(fd);
		buffer[file_size] = '\0';
		return (buffer);
	}
	return (NULL);
}

int main(void)
{
	char **file = readfile("../numbers.dict");
	int i = 0;

	while (file[i])
		printf("%s", file[i++]);
}
