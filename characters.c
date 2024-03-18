/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:34:50 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/18 20:52:04 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Prints a character and returns '1' int
int	ft_putchar(char c)
{
	write(1, &c, 1);
	printf("\n");
	return (1);
}

int	ft_putstr(char *s)
{

}
