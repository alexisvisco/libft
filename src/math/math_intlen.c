/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   math_intlen.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/16 11:05:16 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 14:13:44 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		math_intlen(int n, int bse)
{
	int len;

	len = 0;
	while (n /= bse)
		len++;
	return (len);
}