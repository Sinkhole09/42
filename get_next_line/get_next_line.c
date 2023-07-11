/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:39:03 by ssilakar          #+#    #+#             */
/*   Updated: 2023/07/07 19:56:02 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
ft_strjoin, ft_substr, ft_strlen
*/

void	clean(char *stash, int index)
{
	int		len;

	len = 0;
	while (stash[index + len])
	{
		stash[len] = stash[index + len];
		len++;
	}
	stash[len] = '\0';
	printf("amount left over: %d\n", len);
}

char	*get_next_line(int fd)
{
	static char	static_buf[2048];
	char		buf[BUFFER_SIZE];
	char		*str_return;
	int			index;
	int			end_line;

	end_line = 0;
	while (!end_line)
	{
		index = read(fd, buf, BUFFER_SIZE);
		if (index <= 0)
			return (NULL);
		printf("buffer: %s\n", buf);
		ft_strjoin(static_buf, buf);
		buf[index] = '\0';
		index = 0;
		// while (!end_line && index < BUFFER_SIZE)
		// {
		// 	if (buf[index] == '\n')
		// 		end_line = 1;
		// 	index++;
		// }
	}
	index = 0;
	while (static_buf[index] != '\n')
		index++;
	str_return = (char *)malloc(index + 1);
	str_return = ft_substr(static_buf, 0, index);
	clean(static_buf, index);
	return (str_return);
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
        printf("%s\n\n", line);
        free(line);
    }

    // Rest of the code here...

    close(fd); // Close the file descriptor

    return 0;
}