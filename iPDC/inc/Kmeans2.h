/* -----------------------------------------------------------------------------
 * Kmeans2.h
 *
 * iPDC - Phasor Data Concentrator
 *
 * Copyright (C) 2022-2023 Nitesh Pandit
 * Copyright (C) 2022-2023 Kedar V. Khandeparkar
 * Copyright (C) 2022-2023 Pavan Kumar V Patil
 * Copyright (C) 2022-2023 Karthik Murakonda
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * Authors:
 *		M V Karthik <karthik.murakonda14@gmail.com>
 *		Pavan Kumar V Patil <pavanvpatil01@gmail.com>
 *
 * ----------------------------------------------------------------------------- */

int *getRandoms(int lower, int upper, int count);
long double distance(struct Point *A, struct Point *B);
bool Kmeans2(struct data_frame *df);
long double distance2(struct centroid *A, struct Point *B);