/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 14:42:13 by tauvray           #+#    #+#             */
/*   Updated: 2015/02/23 12:02:17 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_pa(t_pile *t)
{
	t_liste *tmp;

	if (t->b)
	{
		tmp = t->b->next;
		t->b->next = t->a;
		t->a = t->b;
		t->b = tmp;
	}
}
