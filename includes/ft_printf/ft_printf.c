/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:39:05 by lidbaha           #+#    #+#             */
/*   Updated: 2024/11/21 14:18:27 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_command(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == '%')
		len = ft_putchar(c);
	if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	if (c == 'c')
		len = ft_putchar((char)va_arg(args, int));
	if (c == 'p')
		len = ft_putptr(va_arg(args, unsigned long));
	if (c == 'd')
		len = ft_putnbr(va_arg(args, int), 0);
	if (c == 'i')
		len = ft_putnbr(va_arg(args, int), 0);
	if (c == 'u')
		len = ft_putnbr_unsigned(va_arg(args, unsigned int), 0);
	if (c == 'x')
		len = ft_putnbr_hexa_lower(va_arg(args, int));
	if (c == 'X')
		len = ft_putnbr_hexa_upper(va_arg(args, int));
	return (len);
}

int	ft_check_str(char *str, va_list	args)
{
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += ft_check_command(str[i + 1], args);
			i += 1;
		}
		else
		{
			write(1, &str[i], 1);
			len += 1;
		}
		i++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = ft_check_str((char *)str, args);
	va_end(args);
	return (len);
}

/*#include <stdio.h>
int	main(void)
{
	char	*ptr;

	ptr = "test";
	printf("ft_printf\n\n");
	printf("\n%i char\n", ft_printf("test\n%s\n%c\n%M\n%i\n
	%%\n%u\n%x\n%X\n%d\n%p\n", "string", 'A', -1872, 998, 165, 165, 761, ptr));
	printf("\n-------\nprintf\n\n");
	printf("\n%i char\n", printf("test\n%s\n%c\n\n%i\n
	%%\n%u\n%x\n%X\n%d\n%p\n", "string", 'A', -1872, 998, 165, 165, 761, ptr));
	return (0);
}*/
