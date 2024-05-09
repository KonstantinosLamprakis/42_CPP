/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:27:24 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/08 21:38:36 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

static Fixed triangleArea(Point const p1, Point const p2, Point const p3)
{
	return (Fixed(p1.getX() * (p2.getY() - p3.getY()) + p2.getX() *
	 (p3.getY() - p1.getY()) + p3.getX() * (p1.getY() - p2.getY())) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed total_area = triangleArea(a, b, c);
	if (total_area < 0)
		total_area = total_area *  -1;
	Fixed area1 = triangleArea(point, b, c);
	if (area1 < 0)
		area1 = area1 *  -1;
	Fixed area2 = triangleArea(point, c, a);
	if (area2 < 0)
		area2 = area2 *  -1;
	Fixed area3 = triangleArea(point, a, b);
	if (area3 < 0)
		area3 = area3 *  -1;
	return (total_area == (area1 + area2 + area3));
}
