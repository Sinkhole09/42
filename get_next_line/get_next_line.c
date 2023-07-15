/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/07/15 19:26:25 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	position(char *buf, int *end_line)
{
	int	index;

	index = 0;
	while (buf[index])
	{
		if (buf[index] == '\n' || buf[index] == '\0')
		{
			*end_line = 1;
			break ;
		}
		index++;
	}
	return (index);
}

void	clean(char **stash)
{
	int		index;
	int		len;
	char	*str;

	// printf("%c\n", **stash);
	if (**stash == '\0')
	{
		free (*stash);
		*stash = NULL;
		return ;
	}
	index = position(*stash, &len) + 1;
	len = 0;
	while ((*stash)[index + len])
		len++;
	str = malloc(len + 1);
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

//new function: read()
//ft_strjoin
char	*get_next_line(int fd)
{
	char			*str;
	char			*buf;
	static char		*static_buf;
	int				index;
	int				end_line;
	int				bytes;
	char *tmp;

	// write(1, "\n///////////////////\n", 21);
	if (!static_buf)
		static_buf = (char *)ft_calloc(1, sizeof(char));
	str = ft_calloc(1, sizeof(char));
	end_line = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	bytes = BUFFER_SIZE;
	while (!end_line && bytes == BUFFER_SIZE)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		buf[bytes] = '\0';
		// printf("before: %s\n", static_buf);
		static_buf = ft_strjoin(static_buf, buf);
		// printf("after: %s BLANK\n", static_buf);
		index = position(static_buf, &end_line);
	}
	free(buf);
	index = position(static_buf, &end_line);
	tmp = ft_substr(static_buf, 0, index);
	str = ft_strjoin(str, tmp);
	// printf("just before cleaning, static is: %s\n", static_buf);
	// printf("just before cleaning, str is: %s, %c\n", str, str[0]);
	clean(&static_buf);
	free(tmp);
	if (str[0] == '\0')
		return (free(str), NULL);
	// printf("after cleaning: %s BLANK\n", static_buf);
	// write(1, "\n", 1);
	// printf("Memory address of static: %p\n", static_buf);
	// system("leaks a.out");
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

    char *line = NULL;
	int	lines_read = 0;
    // while ((line = get_next_line(fd)) != NULL)
    // {
    //     printf("%s\n", line);
    //     free(line);
	// 	lines_read = 1;
    // }
	// if (lines_read && line != NULL)
    // 	free(line);

	line  = get_next_line(fd);
    printf("%s\n", line);
    free(line);
	line  = get_next_line(fd);
    printf("%s\n", line);
    free(line);
	line  = get_next_line(fd);
    printf("%s\n", line);
    free(line);
	line  = get_next_line(fd);
    printf("%s\n", line);
    free(line);
	line  = get_next_line(fd);
    printf("%s\n", line);
    free(line);
	line  = get_next_line(fd);
    printf("%s\n", line);
    free(line);
	line  = get_next_line(fd);
    printf("%s\n", line);
    free(line);
	line  = get_next_line(fd);
    printf("%s\n", line);
    free(line);
// Rest of the code here...
	system("leaks a.out");
    close(fd); // Close the file descriptor
    return 0;
}