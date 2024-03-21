/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:34:50 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/21 10:56:42 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//calculate the length of a string
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

//Prints a character and returns '1' int
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

//Prints a string and returns counter
int	ft_putstr(char *s)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}
