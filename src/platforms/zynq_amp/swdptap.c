/*
 * This file is part of the Black Magic Debug project.
 *
 * Copyright (C) 2011  Black Sphere Technologies Ltd.
 * Written by Gareth McMullin <gareth@blacksphere.co.nz>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Quick hack for bit-banging SW-DP interface over FT2232.
 * Intended as proof of concept, not for production.
 */

#include <stdio.h>
#include <assert.h>

#include "general.h"
#include "swdptap.h"


int swdptap_init(void)
{
	return 0;
}

bool swdptap_bit_in(void)
{
	return 0;
}

void swdptap_bit_out(bool val)
{
	(void)val;
}

