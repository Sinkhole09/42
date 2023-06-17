/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:59:46 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/17 16:41:13 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# define SHUT_UP "SHUT UP!"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
int		ft_atoi(char *str);
void	*ft_bzero(void*ptr, size_t size);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(unsigned char c);
int		ft_isalpha(unsigned char c);
int		ft_isascii(unsigned char c);
int		ft_isdigit(unsigned char num);
int		ft_isprint(unsigned char c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *dest, int value, size_t num);
int		ft_memcmp(const void *src, const void *dest, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void*ptr, int value, size_t size);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(const char *str, char c);
char	*ft_strchr(char *str, int c);
char	*ft_strdup(char *src);
void	ft_striteri(char *s, void (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncmp(char const *s1, char const *s2, size_t num);
char	*ft_strnstr(char*str, char*to_find, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	ft_tolower(int c);
char	ft_toupper(int c);
#endif