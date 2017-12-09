/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_nb.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 20:16:41 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 16:22:50 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_nb(int fd, char *p, va_list list)
{
	if ((*++p) == 'd' || (*p) == 'i')
	{
		ft_putnum_fd(fd, va_arg(list, int64_t), 10);
		return (1);
	}
	return (0);
}
