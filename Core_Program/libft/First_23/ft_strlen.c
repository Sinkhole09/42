/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:22:36 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/05 16:26:45 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char*str)
{
    int len_count;

    len_count = 0;
    while(*(str + len_count) != 0)
        len_count++;
    return (len_count);
}