/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:39:03 by ssilakar          #+#    #+#             */
/*   Updated: 2023/07/03 19:12:16 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	clean(char **stash, int index)
{
	int		len;
	char	*str;

	len = 0;
	while ((*stash)[index + len])
		len++;
	str = malloc(sizeof(char) * (len + 1));
	len = 0;
	while ((*stash)[index + len])
	{
		str[len] = (*stash)[index + len];
		len++;
	}
	str[len] = '\0';
	free(*stash);
	*stash = str;
}

int	postion(char *buf, int *end_line)
{
	int	index;

	index = 0;
	while (buf[index])
	{
		if (buf[index] == '\n')
		{
			*end_line = 1;
			break ;
		}
		index++;
	}
	return (index);
}

//new function: read()
//ft_strjoin
char	*get_next_line(int fd)
{
	char			*str;
	static char		*buf;
	int				index;
	int				end_line;
	int				bytes;

	str = ft_calloc(1, sizeof(char));
	end_line = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (!end_line)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes <= 0)
			return (NULL);
		buf[bytes] = '\0';
		index = postion(buf, &end_line);
		str = ft_strjoin(str, ft_substr(buf, 0, index));
		clean(&buf, index);
	}
	free(buf);
	return (str);
}

int main()
{
    int fd = open("input.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Failed to open the file");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s\n", line);
        free(line);
    }

    // Rest of the code here...

    close(fd); // Close the file descriptor

    return 0;
}
