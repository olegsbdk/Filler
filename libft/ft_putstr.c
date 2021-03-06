/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osloboda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:34:08 by osloboda          #+#    #+#             */
/*   Updated: 2018/10/30 15:29:19 by osloboda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(const char *s)
{
	char	*p;

	if (s != NULL)
	{
		p = (char*)s;
		while (*p)
		{
			ft_putchar(*p);
			p++;
		}
	}
}
