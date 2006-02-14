/*****************************************************************************
 * Free42 -- a free HP-42S calculator clone
 * Copyright (C) 2004-2006  Thomas Okken
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *****************************************************************************/

#ifndef CORE_COMMANDS5_H
#define CORE_COMMANDS5_H 1

#include "free42.h"
#include "core_globals.h"

int docmd_binm(arg_struct *arg) COMMANDS5_SECT;
int docmd_octm(arg_struct *arg) COMMANDS5_SECT;
int docmd_decm(arg_struct *arg) COMMANDS5_SECT;
int docmd_hexm(arg_struct *arg) COMMANDS5_SECT;
int docmd_linf(arg_struct *arg) COMMANDS5_SECT;
int docmd_logf(arg_struct *arg) COMMANDS5_SECT;
int docmd_expf(arg_struct *arg) COMMANDS5_SECT;
int docmd_pwrf(arg_struct *arg) COMMANDS5_SECT;
int docmd_allsigma(arg_struct *arg) COMMANDS5_SECT;
int docmd_and(arg_struct *arg) COMMANDS5_SECT;
int docmd_baseadd(arg_struct *arg) COMMANDS5_SECT;
int docmd_basesub(arg_struct *arg) COMMANDS5_SECT;
int docmd_basemul(arg_struct *arg) COMMANDS5_SECT;
int docmd_basediv(arg_struct *arg) COMMANDS5_SECT;
int docmd_basechs(arg_struct *arg) COMMANDS5_SECT;
int docmd_best(arg_struct *arg) COMMANDS5_SECT;
int docmd_bit_t(arg_struct *arg) COMMANDS5_SECT;
int docmd_corr(arg_struct *arg) COMMANDS5_SECT;
int docmd_fcstx(arg_struct *arg) COMMANDS5_SECT;
int docmd_fcsty(arg_struct *arg) COMMANDS5_SECT;
int docmd_mean(arg_struct *arg) COMMANDS5_SECT;
int docmd_sdev(arg_struct *arg) COMMANDS5_SECT;
int docmd_slope(arg_struct *arg) COMMANDS5_SECT;
int docmd_sum(arg_struct *arg) COMMANDS5_SECT;
int docmd_wmean(arg_struct *arg) COMMANDS5_SECT;
int docmd_yint(arg_struct *arg) COMMANDS5_SECT;

#endif
