/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <lhafsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:51:24 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/28 04:12:00 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_put_unsigned(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_put_unsigned(nb / 10);
		ft_put_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_hexa_lower(unsigned int nb)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_hexa_lower(nb / 16);
		ft_hexa_lower(nb % 16);
	}
	else
		ft_putchar(base_hexa[nb]);
}

void	ft_hexa_upper(unsigned int nb)
{
	char	*base_hexa;

	base_hexa = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_hexa_upper(nb / 16);
		ft_hexa_upper(nb % 16);
	}
	else
		ft_putchar(base_hexa[nb]);
}

void	ft_hexa_ptr(unsigned long long nb)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_hexa_ptr(nb / 16);
		ft_hexa_ptr(nb % 16);
	}
	else
		ft_putchar(base_hexa[nb]);
}
