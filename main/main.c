/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 21:54:19 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 10:38:53 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char *line;
	while (get_next_line(0, &line))
	{
		ft_printf("%s", line);
		free(line);
	}
}