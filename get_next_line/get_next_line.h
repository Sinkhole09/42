/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:56:26 by ssilakar          #+#    #+#             */
/*   Updated: 2023/07/03 19:42:18 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <unistd.h>
# include  <stdlib.h>
#include <stdio.h>
#include <fcntl.h> // for open function

#define	BUFFER_SIZE 2

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void*ptr, int value, size_t size);
char	*ft_substr(const char *s, unsigned int start, size_t len);

#endif