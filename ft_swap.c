/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:03:24 by lufelip2          #+#    #+#             */
/*   Updated: 2022/09/15 19:04:15 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Swaps the value of two integers whose addresses are entered as parameters.

void	ft_swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
