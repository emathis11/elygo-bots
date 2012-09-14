/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * This is GNU Go, a Go program. Contact gnugo@gnu.org, or see       *
 * http://www.gnu.org/software/gnugo/ for more information.          *
 *                                                                   *
 * Copyright 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,   *
 * 2008 and 2009 by the Free Software Foundation.                    *
 *                                                                   *
 * This program is free software; you can redistribute it and/or     *
 * modify it under the terms of the GNU General Public License as    *
 * published by the Free Software Foundation - version 3 or          *
 * (at your option) any later version.                               *
 *                                                                   *
 * This program is distributed in the hope that it will be useful,   *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     *
 * GNU General Public License in file COPYING for more details.      *
 *                                                                   *
 * You should have received a copy of the GNU General Public         *
 * License along with this program; if not, write to the Free        *
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA 02111, USA.                                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h> /* for NULL */
#include "liberty.h"
#include "patterns.h"

static struct patval owl_defendpat0[] = {
  {684,2},	{685,2}
};

static struct patval owl_defendpat1[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat2[] = {
  {648,2}
};

static struct patval owl_defendpat3[] = {
  {684,2},	{683,4}
};

static struct patval owl_defendpat4[] = {
  {684,2}
};

static struct patval owl_defendpat5[] = {
  {684,2},	{685,2}
};

static struct patval owl_defendpat6[] = {
  {685,2},	{648,2}
};

static struct patval owl_defendpat7[] = {
  {685,2},	{683,2},	{648,2}
};

static struct patval owl_defendpat8[] = {
  {757,2},	{684,2}
};

static struct patval owl_defendpat9[] = {
  {684,2},	{757,2},	{683,2}
};

static struct patval owl_defendpat10[] = {
  {684,2},	{723,2},	{722,2},	{758,4}
};

static struct patval owl_defendpat11[] = {
  {684,2},	{648,2},	{611,2}
};

static struct patval owl_defendpat12[] = {
  {758,2}
};

static struct patval owl_defendpat13[] = {
  {757,2},	{684,2}
};

static struct patval owl_defendpat14[] = {
  {684,2},	{757,2}
};

static struct patval owl_defendpat15[] = {
  {684,2},	{759,2},	{796,2},	{758,4}
};

static struct patval owl_defendpat16[] = {
  {648,2}
};

static struct patval owl_defendpat17[] = {
  {684,2},	{833,4},	{870,4},	{685,4},
  {871,4},	{683,4}
};

static struct patval owl_defendpat18[] = {
  {684,2}
};

static struct patval owl_defendpat19[] = {
  {686,2}
};

static struct patval owl_defendpat20[] = {
  {649,2},	{760,4}
};

static struct patval owl_defendpat21[] = {
  {684,2},	{649,2}
};

static struct patval owl_defendpat22[] = {
  {684,2},	{759,2},	{611,4}
};

static struct patval owl_defendpat23[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat24[] = {
  {720,2},	{757,2},	{684,2}
};

static struct patval owl_defendpat25[] = {
  {684,2},	{648,4}
};

static struct patval owl_defendpat26[] = {
  {832,2}
};

static struct patval owl_defendpat27[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat28[] = {
  {684,2},	{686,2},	{649,2},	{683,4}
};

static struct patval owl_defendpat29[] = {
  {647,2},	{684,2},	{759,4},	{758,4},
  {760,4}
};

static struct patval owl_defendpat30[] = {
  {759,2},	{682,4},	{719,4},	{685,4}
};

static struct patval owl_defendpat31[] = {
  {684,2},	{718,2},	{793,4},	{792,4},
  {755,4},	{756,4}
};

static struct patval owl_defendpat32[] = {
  {610,2},	{720,2},	{574,4},	{759,4},
  {758,4},	{756,4},	{757,4},	{573,4}
};

static struct patval owl_defendpat33[] = {
  {647,2},	{684,2}
};

static struct patval owl_defendpat34[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat35[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat36[] = {
  {648,2}
};

static struct patval owl_defendpat37[] = {
  {684,2}
};

static struct patval owl_defendpat38[] = {
  {684,2},	{648,2}
};

static struct patval owl_defendpat39[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat40[] = {
  {684,2},	{649,4},	{648,4}
};

static struct patval owl_defendpat41[] = {
  {687,2},	{650,4}
};

static struct patval owl_defendpat42[] = {
  {757,2},	{720,2}
};

static struct patval owl_defendpat43[] = {
  {757,2},	{720,2}
};

static struct patval owl_defendpat44[] = {
  {684,2},	{758,4},	{759,4}
};

static struct patval owl_defendpat45[] = {
  {721,2},	{684,2},	{759,2}
};

static struct patval owl_defendpat46[] = {
  {684,2},	{757,2},	{720,2}
};

static struct patval owl_defendpat47[] = {
  {684,2},	{648,2},	{646,2},	{759,4}
};

static struct patval owl_defendpat48[] = {
  {684,2}
};

static struct patval owl_defendpat49[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat50[] = {
  {758,2},	{721,2}
};

static struct patval owl_defendpat51[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat52[] = {
  {684,2},	{683,4}
};

static struct patval owl_defendpat53[] = {
  {684,2},	{683,4}
};

static struct patval owl_defendpat54[] = {
  {684,2}
};

static struct patval owl_defendpat55[] = {
  {684,2}
};

static struct patval owl_defendpat56[] = {
  {684,2},	{683,2},	{794,2}
};

static struct patval owl_defendpat57[] = {
  {684,2},	{683,2},	{796,4}
};

static struct patval owl_defendpat58[] = {
  {684,2},	{759,2},	{796,2},	{758,4}
};

static struct patval owl_defendpat59[] = {
  {684,2},	{647,4},	{720,4},	{683,4}
};

static struct patval owl_defendpat60[] = {
  {684,2},	{720,4},	{683,4}
};

static struct patval owl_defendpat61[] = {
  {684,2},	{685,2},	{683,4},	{720,4}
};

static struct patval owl_defendpat62[] = {
  {685,2},	{648,2}
};

static struct patval owl_defendpat63[] = {
  {757,2},	{684,2},	{611,4},	{610,4}
};

static struct patval owl_defendpat64[] = {
  {684,2},	{683,4},	{720,4}
};

static struct patval owl_defendpat65[] = {
  {684,2},	{610,2},	{573,2},	{685,2}
};

static struct patval owl_defendpat66[] = {
  {649,2},	{721,2},	{686,4},	{648,4}
};

static struct patval owl_defendpat67[] = {
  {646,2},	{722,2},	{721,2},	{723,4}
};

static struct patval owl_defendpat68[] = {
  {648,2},	{647,2},	{720,2},	{722,2},
  {649,4}
};

static struct patval owl_defendpat69[] = {
  {647,2},	{685,2},	{645,4},	{646,4},
  {682,4}
};

static struct patval owl_defendpat70[] = {
  {721,2},	{684,2},	{759,4}
};

static struct patval owl_defendpat71[] = {
  {684,2},	{759,4},	{757,4},	{758,4},
  {683,4},	{720,4}
};

static struct patval owl_defendpat72[] = {
  {720,2},	{684,2},	{758,2},	{722,2}
};

static struct patval owl_defendpat73[] = {
  {684,2},	{647,4},	{610,4},	{574,4},
  {611,4},	{612,4},	{649,4},	{573,4},
  {575,4}
};

static struct patval owl_defendpat74[] = {
  {685,2},	{722,4}
};

static struct patval owl_defendpat75[] = {
  {684,2}
};

static struct patval owl_defendpat76[] = {
  {684,2}
};

static struct patval owl_defendpat77[] = {
  {684,2},	{721,2}
};

static struct patval owl_defendpat78[] = {
  {722,2}
};

static struct patval owl_defendpat79[] = {
  {683,2},	{684,2}
};

static struct patval owl_defendpat80[] = {
  {648,2},	{647,2}
};

static struct patval owl_defendpat81[] = {
  {759,2}
};

static struct patval owl_defendpat82[] = {
  {687,2},	{650,4}
};

static struct patval owl_defendpat83[] = {
  {685,2},	{759,2}
};

static struct patval owl_defendpat84[] = {
  {684,2},	{686,4}
};

static struct patval owl_defendpat85[] = {
  {648,2},	{723,4},	{722,4},	{721,4}
};

static struct patval owl_defendpat86[] = {
  {648,2},	{723,4},	{722,4},	{721,4}
};

static struct patval owl_defendpat87[] = {
  {648,2}
};

static struct patval owl_defendpat88[] = {
  {684,2},	{720,2},	{648,4},	{685,4},
  {682,4}
};

static struct patval owl_defendpat89[] = {
  {684,2},	{720,2},	{648,4},	{685,4},
  {682,4}
};

static struct patval owl_defendpat90[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat91[] = {
  {684,2}
};

static struct patval owl_defendpat92[] = {
  {647,2},	{610,2},	{685,2}
};

static struct patval owl_defendpat93[] = {
  {647,2},	{648,2},	{684,2},	{723,4},
  {686,4},	{649,4}
};

static struct patval owl_defendpat94[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat95[] = {
  {648,2},	{647,2}
};

static struct patval owl_defendpat96[] = {
  {646,2},	{683,2},	{647,2},	{685,2},
  {720,4}
};

static struct patval owl_defendpat97[] = {
  {647,2},	{685,2},	{648,4}
};

static struct patval owl_defendpat98[] = {
  {684,2},	{646,2},	{720,4},	{610,4}
};

static struct patval owl_defendpat99[] = {
  {684,2}
};

static struct patval owl_defendpat100[] = {
  {684,2}
};

static struct patval owl_defendpat101[] = {
  {684,2}
};

static struct patval owl_defendpat102[] = {
  {722,2},	{686,2}
};

static struct patval owl_defendpat103[] = {
  {649,2},	{686,4}
};

static struct patval owl_defendpat104[] = {
  {684,2},	{648,4},	{647,4}
};

static struct patval owl_defendpat105[] = {
  {721,2},	{684,2},	{647,4},	{610,4}
};

static struct patval owl_defendpat106[] = {
  {722,2},	{759,2},	{684,2}
};

static struct patval owl_defendpat107[] = {
  {684,2},	{720,2},	{646,4},	{683,4}
};

static struct patval owl_defendpat108[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat109[] = {
  {720,2},	{757,2},	{684,2}
};

static struct patval owl_defendpat110[] = {
  {757,2},	{684,2},	{758,2}
};

static struct patval owl_defendpat111[] = {
  {722,2},	{647,2},	{684,2}
};

static struct patval owl_defendpat112[] = {
  {649,2},	{685,2},	{684,2},	{683,2},
  {609,4}
};

static struct patval owl_defendpat113[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat114[] = {
  {684,2},	{647,2},	{722,2}
};

static struct patval owl_defendpat115[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat116[] = {
  {647,2},	{684,2},	{757,4}
};

static struct patval owl_defendpat117[] = {
  {758,2},	{684,2},	{647,2},	{757,4}
};

static struct patval owl_defendpat118[] = {
  {648,2},	{684,2}
};

static struct patval owl_defendpat119[] = {
  {721,2},	{647,2},	{685,2}
};

static struct patval owl_defendpat120[] = {
  {721,2},	{720,2},	{685,2},	{649,2},
  {646,4}
};

static struct patval owl_defendpat121[] = {
  {684,2},	{720,2}
};

static struct patval owl_defendpat122[] = {
  {684,2},	{720,2},	{796,4},	{795,4},
  {794,4},	{797,4}
};

static struct patval owl_defendpat123[] = {
  {723,2},	{722,2},	{684,2},	{649,4}
};

static struct patval owl_defendpat124[] = {
  {684,2},	{611,2},	{647,2},	{722,2}
};

static struct patval owl_defendpat125[] = {
  {722,2},	{758,2},	{684,2},	{759,4},
  {757,4}
};

static struct patval owl_defendpat126[] = {
  {758,2},	{684,2},	{722,2},	{759,4},
  {757,4}
};

static struct patval owl_defendpat127[] = {
  {722,2},	{723,2},	{684,2},	{686,2}
};

static struct patval owl_defendpat128[] = {
  {722,2},	{686,2},	{684,2}
};

static struct patval owl_defendpat129[] = {
  {684,2},	{721,2},	{647,4}
};

static struct patval owl_defendpat130[] = {
  {721,2},	{758,2},	{684,2},	{647,2},
  {610,2}
};

static struct patval owl_defendpat131[] = {
  {686,2},	{611,2},	{722,2},	{684,2},
  {721,4},	{647,4}
};

static struct patval owl_defendpat132[] = {
  {722,2},	{684,2},	{686,2}
};

static struct patval owl_defendpat133[] = {
  {721,2},	{647,2}
};

static struct patval owl_defendpat134[] = {
  {721,2},	{684,2},	{647,4}
};

static struct patval owl_defendpat135[] = {
  {684,2},	{683,4},	{682,4}
};

static struct patval owl_defendpat136[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat137[] = {
  {758,2},	{720,2},	{684,2},	{722,2},
  {647,2},	{683,4},	{610,4}
};

static struct patval owl_defendpat138[] = {
  {686,2},	{721,2},	{684,2},	{648,2},
  {649,4}
};

static struct patval owl_defendpat139[] = {
  {683,2},	{646,2},	{758,2},	{759,2},
  {720,2},	{611,2},	{610,2}
};

static struct patval owl_defendpat140[] = {
  {684,2},	{683,2},	{723,2},	{760,2},
  {756,2},	{685,2},	{719,2}
};

static struct patval owl_defendpat141[] = {
  {686,2},	{684,2},	{722,2},	{647,4},
  {721,4}
};

static struct patval owl_defendpat142[] = {
  {684,2},	{721,2},	{759,2},	{723,2},
  {758,4},	{611,4},	{647,4},	{610,4}
};

static struct patval owl_defendpat143[] = {
  {648,2},	{723,2},	{686,2},	{684,2},
  {647,4}
};

static struct patval owl_defendpat144[] = {
  {758,2},	{684,2},	{720,2},	{722,2},
  {646,4},	{759,4}
};

static struct patval owl_defendpat145[] = {
  {722,2},	{720,2},	{758,2},	{684,2},
  {683,4},	{796,4}
};

static struct patval owl_defendpat146[] = {
  {758,2},	{722,2},	{684,2},	{720,2},
  {759,4},	{646,4},	{796,4}
};

static struct patval owl_defendpat147[] = {
  {684,2},	{722,2},	{758,2},	{720,2},
  {759,4}
};

static struct patval owl_defendpat148[] = {
  {721,2},	{683,2},	{685,2},	{722,4}
};

static struct patval owl_defendpat149[] = {
  {720,2},	{758,2},	{722,2},	{684,2},
  {759,2},	{683,4}
};

static struct patval owl_defendpat150[] = {
  {682,2},	{648,2},	{720,2},	{646,2},
  {684,2},	{647,4}
};

static struct patval owl_defendpat151[] = {
  {683,2},	{647,2},	{721,2},	{758,4}
};

static struct patval owl_defendpat152[] = {
  {757,2},	{722,2},	{684,2},	{720,2}
};

static struct patval owl_defendpat153[] = {
  {757,2},	{758,2},	{684,2},	{759,4}
};

static struct patval owl_defendpat154[] = {
  {684,2},	{720,2},	{646,4}
};

static struct patval owl_defendpat155[] = {
  {647,2},	{684,2}
};

static struct patval owl_defendpat156[] = {
  {720,2},	{684,2},	{759,2},	{758,2}
};

static struct patval owl_defendpat157[] = {
  {684,2},	{721,2},	{686,2}
};

static struct patval owl_defendpat158[] = {
  {684,2},	{648,2},	{647,2},	{649,2},
  {650,2}
};

static struct patval owl_defendpat159[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat160[] = {
  {648,2},	{649,2},	{647,2},	{646,2},
  {722,2}
};

static struct patval owl_defendpat161[] = {
  {683,2},	{721,2},	{647,2},	{648,2},
  {646,2}
};

static struct patval owl_defendpat162[] = {
  {650,2},	{649,2},	{683,2},	{647,2},
  {687,2},	{684,2},	{648,4}
};

static struct patval owl_defendpat163[] = {
  {647,2}
};

static struct patval owl_defendpat164[] = {
  {684,2},	{647,2},	{722,2},	{612,2},
  {723,2},	{611,2}
};

static struct patval owl_defendpat165[] = {
  {721,2},	{684,2},	{758,2}
};

static struct patval owl_defendpat166[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat167[] = {
  {684,2},	{648,2},	{722,2},	{683,4},
  {721,4}
};

static struct patval owl_defendpat168[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat169[] = {
  {684,2},	{722,2},	{573,4}
};

static struct patval owl_defendpat170[] = {
  {683,2},	{758,2},	{720,2}
};

static struct patval owl_defendpat171[] = {
  {684,2},	{648,4}
};

static struct patval owl_defendpat172[] = {
  {684,2},	{648,2},	{683,2},	{647,4},
  {720,4}
};

static struct patval owl_defendpat173[] = {
  {720,2},	{757,2},	{647,2},	{684,2},
  {648,4}
};

static struct patval owl_defendpat174[] = {
  {759,2},	{721,2},	{684,2},	{760,2},
  {758,4},	{647,4}
};

static struct patval owl_defendpat175[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat176[] = {
  {686,2},	{722,2},	{684,2},	{723,4},
  {721,4}
};

static struct patval owl_defendpat177[] = {
  {722,2},	{684,2},	{686,2}
};

static struct patval owl_defendpat178[] = {
  {684,2},	{722,2},	{686,2}
};

static struct patval owl_defendpat179[] = {
  {684,2},	{722,2},	{648,4},	{686,4}
};

static struct patval owl_defendpat180[] = {
  {684,2},	{722,2},	{648,4},	{721,4}
};

static struct patval owl_defendpat181[] = {
  {722,2},	{684,2},	{721,4}
};

static struct patval owl_defendpat182[] = {
  {684,2},	{759,4}
};

static struct patval owl_defendpat183[] = {
  {684,2},	{722,2},	{648,4},	{686,4}
};

static struct patval owl_defendpat184[] = {
  {684,2},	{759,2},	{758,2},	{685,2},
  {760,4},	{686,4}
};

static struct patval owl_defendpat185[] = {
  {723,2},	{684,2},	{721,2},	{686,2},
  {610,2},	{609,4},	{646,4},	{647,4}
};

static struct patval owl_defendpat186[] = {
  {647,2},	{722,2},	{648,2},	{721,2},
  {720,4}
};

static struct patval owl_defendpat187[] = {
  {721,2},	{722,2},	{648,2},	{684,2},
  {649,2}
};

static struct patval owl_defendpat188[] = {
  {684,2}
};

static struct patval owl_defendpat189[] = {
  {722,2}
};

static struct patval owl_defendpat190[] = {
  {723,2},	{684,2},	{721,2},	{686,2},
  {759,2}
};

static struct patval owl_defendpat191[] = {
  {684,2},	{649,2},	{722,2},	{686,2},
  {611,2}
};

static struct patval owl_defendpat192[] = {
  {684,2}
};

static struct patval owl_defendpat193[] = {
  {684,2},	{720,2}
};

static struct patval owl_defendpat194[] = {
  {722,2},	{684,2},	{686,2},	{723,4}
};

static struct patval owl_defendpat195[] = {
  {649,2},	{650,2},	{684,2},	{723,2},
  {722,4},	{687,4}
};

static struct patval owl_defendpat196[] = {
  {721,2},	{646,2},	{683,2},	{685,2},
  {720,4}
};

static struct patval owl_defendpat197[] = {
  {684,2},	{758,2},	{686,2},	{759,2}
};

static struct patval owl_defendpat198[] = {
  {684,2},	{722,2},	{610,4},	{611,4}
};

static struct patval owl_defendpat199[] = {
  {649,2},	{647,2},	{723,2},	{684,2},
  {648,4},	{686,4}
};

static struct patval owl_defendpat200[] = {
  {648,2},	{722,2},	{686,2},	{684,2}
};

static struct patval owl_defendpat201[] = {
  {684,2},	{721,2},	{756,2},	{757,2},
  {755,4},	{647,4}
};

static struct patval owl_defendpat202[] = {
  {684,2}
};

static struct patval owl_defendpat203[] = {
  {684,2}
};

static struct patval owl_defendpat204[] = {
  {684,2},	{721,4}
};

static struct patval owl_defendpat205[] = {
  {684,2}
};

static struct patval owl_defendpat206[] = {
  {647,2},	{684,2},	{721,2}
};

static struct patval owl_defendpat207[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat208[] = {
  {721,2},	{758,2},	{684,2}
};

static struct patval owl_defendpat209[] = {
  {759,2},	{684,2},	{721,2},	{647,4},
  {760,4}
};

static struct patval owl_defendpat210[] = {
  {685,2},	{684,2},	{683,4},	{686,4},
  {760,4},	{723,4}
};

static struct patval owl_defendpat211[] = {
  {611,2},	{684,2},	{612,4},	{721,4}
};

static struct patval owl_defendpat212[] = {
  {758,2},	{721,2}
};

static struct patval owl_defendpat213[] = {
  {758,2},	{721,2}
};

static struct patval owl_defendpat214[] = {
  {758,2},	{721,2},	{759,2}
};

static struct patval owl_defendpat215[] = {
  {758,2},	{721,2},	{759,2}
};

static struct patval owl_defendpat216[] = {
  {684,2},	{610,4},	{647,4}
};

static struct patval owl_defendpat217[] = {
  {683,2},	{684,2},	{757,4},	{758,4},
  {647,4},	{720,4}
};

static struct patval owl_defendpat218[] = {
  {684,2},	{648,2},	{686,4},	{649,4}
};

static struct patval owl_defendpat219[] = {
  {722,2},	{684,2},	{646,4},	{683,4}
};

static struct patval owl_defendpat220[] = {
  {684,2}
};

static struct patval owl_defendpat221[] = {
  {647,2},	{683,2},	{649,2},	{684,2},
  {648,2}
};

static struct patval owl_defendpat222[] = {
  {685,2},	{720,2},	{683,2},	{648,2},
  {684,2}
};

static struct patval owl_defendpat223[] = {
  {646,2},	{682,2},	{719,2}
};

static struct patval owl_defendpat224[] = {
  {646,2},	{682,2},	{719,2}
};

static struct patval owl_defendpat225[] = {
  {646,2},	{684,2},	{721,2}
};

static struct patval owl_defendpat226[] = {
  {646,2},	{684,2},	{721,2}
};

static struct patval owl_defendpat227[] = {
  {722,2},	{684,2},	{647,2},	{649,4},
  {648,4}
};

static struct patval owl_defendpat228[] = {
  {684,2},	{648,2},	{646,4},	{683,4}
};

static struct patval owl_defendpat229[] = {
  {684,2},	{648,2},	{720,2},	{646,4}
};

static struct patval owl_defendpat230[] = {
  {684,2},	{720,2},	{648,2},	{758,4},
  {757,4},	{649,4},	{686,4}
};

static struct patval owl_defendpat231[] = {
  {684,2},	{758,2},	{683,2},	{647,2},
  {757,4}
};

static struct patval owl_defendpat232[] = {
  {723,2},	{757,2},	{758,2},	{686,2},
  {759,2},	{647,2},	{649,2}
};

static struct patval owl_defendpat233[] = {
  {719,2},	{682,2},	{756,2},	{759,2},
  {757,2},	{647,2},	{645,2},	{758,2}
};

static struct patval owl_defendpat234[] = {
  {720,2},	{684,2},	{760,2},	{758,2},
  {648,2},	{646,2},	{683,2},	{759,2}
};

static struct patval owl_defendpat235[] = {
  {646,2},	{684,2},	{720,4},	{683,4}
};

static struct patval owl_defendpat236[] = {
  {684,2},	{611,4},	{609,4},	{610,4},
  {646,4}
};

static struct patval owl_defendpat237[] = {
  {647,2},	{722,2},	{684,2},	{759,2},
  {797,4}
};

static struct patval owl_defendpat238[] = {
  {685,2},	{684,2},	{611,4},	{610,4},
  {648,4}
};

static struct patval owl_defendpat239[] = {
  {719,2},	{682,2},	{684,2},	{646,2}
};

static struct patval owl_defendpat240[] = {
  {611,2},	{720,2},	{684,2},	{646,2},
  {610,2},	{683,4}
};

static struct patval owl_defendpat241[] = {
  {760,2},	{759,2},	{721,2},	{683,2},
  {648,2},	{646,2},	{758,4},	{720,4}
};

static struct patval owl_defendpat242[] = {
  {684,2},	{720,2},	{647,4}
};

static struct patval owl_defendpat243[] = {
  {719,2},	{683,2},	{685,2},	{757,2},
  {684,2},	{686,4}
};

static struct patval owl_defendpat244[] = {
  {683,2},	{719,2},	{757,2},	{684,2},
  {685,2}
};

static struct patval owl_defendpat245[] = {
  {647,2}
};

static struct patval owl_defendpat246[] = {
  {684,2}
};

static struct patval owl_defendpat247[] = {
  {719,2},	{611,2},	{646,2},	{682,4},
  {610,4}
};

static struct patval owl_defendpat248[] = {
  {686,2},	{648,2},	{647,2},	{722,2}
};

static struct patval owl_defendpat249[] = {
  {683,2},	{720,2},	{722,2},	{721,2},
  {759,4},	{760,4}
};

static struct patval owl_defendpat250[] = {
  {759,2},	{685,2},	{720,2},	{645,2},
  {682,2},	{721,2},	{758,2}
};

static struct patval owl_defendpat251[] = {
  {684,2},	{682,2},	{683,2}
};

static struct patval owl_defendpat252[] = {
  {720,2},	{647,2},	{684,2}
};

static struct patval owl_defendpat253[] = {
  {647,2},	{684,2},	{721,2},	{758,2},
  {610,2},	{760,2},	{759,2}
};

static struct patval owl_defendpat254[] = {
  {721,2},	{684,2}
};

static struct patval owl_defendpat255[] = {
  {683,2},	{759,2},	{758,2},	{646,2},
  {757,4}
};

static struct patval owl_defendpat256[] = {
  {683,2},	{759,2},	{758,2},	{647,2},
  {646,2},	{757,4}
};

static struct patval owl_defendpat257[] = {
  {759,2},	{758,2},	{647,2},	{683,2},
  {646,2},	{757,4}
};

static struct patval owl_defendpat258[] = {
  {758,2},	{757,4},	{720,4},	{646,4},
  {759,4}
};

static struct patval owl_defendpat259[] = {
  {646,2},	{684,2},	{611,4}
};

static struct patval owl_defendpat260[] = {
  {684,2}
};

static struct patval owl_defendpat261[] = {
  {684,2}
};

static struct patval owl_defendpat262[] = {
  {684,2}
};

static struct patval owl_defendpat263[] = {
  {721,2}
};

static struct patval owl_defendpat264[] = {
  {683,2},	{646,2},	{649,2}
};

static struct patval owl_defendpat265[] = {
  {683,2},	{646,2},	{649,2}
};

static struct patval owl_defendpat266[] = {
  {649,2},	{611,2},	{683,2},	{646,2},
  {610,2}
};

static struct patval owl_defendpat267[] = {
  {684,2}
};

static struct patval owl_defendpat268[] = {
  {647,2},	{645,4}
};

static struct patval owl_defendpat269[] = {
  {647,2},	{645,4}
};

static struct patval owl_defendpat270[] = {
  {608,4},	{644,4},	{682,4},	{719,4},
  {607,4},	{645,4}
};

static struct patval owl_defendpat271[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat272[] = {
  {684,2}
};

static struct patval owl_defendpat273[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat274[] = {
  {722,2},	{757,2},	{684,2},	{720,2},
  {794,4}
};

static struct patval owl_defendpat275[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat276[] = {
  {684,2},	{722,2},	{647,4},	{646,4}
};

static struct patval owl_defendpat277[] = {
  {685,2},	{723,2},	{684,2}
};

static struct patval owl_defendpat278[] = {
  {685,2},	{684,2},	{723,2},	{759,4},
  {758,4},	{757,4},	{760,4},	{683,4}
};

static struct patval owl_defendpat279[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat280[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat281[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat282[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat283[] = {
  {685,2}
};

static struct patval owl_defendpat284[] = {
  {685,2}
};

static struct patval owl_defendpat285[] = {
  {648,2}
};

static struct patval owl_defendpat286[] = {
  {648,2}
};

static struct patval owl_defendpat287[] = {
  {648,2}
};

static struct patval owl_defendpat288[] = {
  {720,2},	{647,2},	{683,2}
};

static struct patval owl_defendpat289[] = {
  {684,2},	{687,2},	{648,4},	{649,4}
};

static struct patval owl_defendpat290[] = {
  {685,2},	{648,2},	{758,4},	{720,4},
  {759,4}
};

static struct patval owl_defendpat291[] = {
  {647,2},	{759,2}
};

static struct patval owl_defendpat292[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat293[] = {
  {685,2},	{758,2},	{722,2}
};

static struct patval owl_defendpat294[] = {
  {758,2},	{647,2},	{685,2},	{722,2}
};

static struct patval owl_defendpat295[] = {
  {648,2}
};

static struct patval owl_defendpat296[] = {
  {721,2},	{683,2},	{720,2}
};

static struct patval owl_defendpat297[] = {
  {720,2},	{645,2},	{683,2},	{758,2},
  {757,4}
};

static struct patval owl_defendpat298[] = {
  {647,2},	{683,2},	{758,2},	{720,2},
  {757,4}
};

static struct patval owl_defendpat299[] = {
  {685,2},	{610,2},	{648,2},	{721,2},
  {646,2},	{611,4}
};

static struct patval owl_defendpat300[] = {
  {685,2},	{648,2},	{721,2},	{646,2},
  {645,2},	{610,2},	{611,4}
};

static struct patval owl_defendpat301[] = {
  {685,2},	{686,2},	{648,2},	{609,4}
};

static struct patval owl_defendpat302[] = {
  {647,2},	{683,2},	{646,4}
};

static struct patval owl_defendpat303[] = {
  {646,2},	{683,2}
};

static struct patval owl_defendpat304[] = {
  {758,2},	{720,2},	{757,2}
};

static struct patval owl_defendpat305[] = {
  {685,2},	{647,2},	{683,2},	{759,4},
  {757,4},	{758,4}
};

static struct patval owl_defendpat306[] = {
  {649,2},	{612,4},	{720,4}
};

static struct patval owl_defendpat307[] = {
  {722,2},	{760,4},	{723,4},	{646,4}
};

static struct patval owl_defendpat308[] = {
  {684,2},	{721,2},	{646,4},	{760,4},
  {683,4}
};

static struct patval owl_defendpat309[] = {
  {686,2},	{797,4},	{720,4},	{757,4},
  {794,4},	{796,4},	{723,4},	{683,4},
  {795,4}
};

static struct patval owl_defendpat310[] = {
  {684,2},	{647,2},	{724,4},	{761,4},
  {759,4},	{758,4},	{687,4},	{650,4},
  {760,4}
};

static struct patval owl_defendpat311[] = {
  {647,2},	{650,4},	{760,4},	{761,4},
  {687,4},	{759,4},	{758,4},	{724,4}
};

static struct patval owl_defendpat312[] = {
  {684,2}
};

static struct patval owl_defendpat313[] = {
  {648,2},	{684,2},	{647,2},	{757,4},
  {646,4}
};

static struct patval owl_defendpat314[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat315[] = {
  {722,2},	{721,2},	{611,4},	{610,4},
  {646,4},	{612,4}
};

static struct patval owl_defendpat316[] = {
  {721,2}
};

static struct patval owl_defendpat317[] = {
  {647,2},	{686,2},	{683,2},	{646,4}
};

static struct patval owl_defendpat318[] = {
  {683,2},	{646,2},	{721,2},	{609,4}
};

static struct patval owl_defendpat319[] = {
  {684,2},	{648,2},	{723,2},	{686,2},
  {760,4}
};

static struct patval owl_defendpat320[] = {
  {684,2},	{646,2},	{722,2}
};

static struct patval owl_defendpat321[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat322[] = {
  {686,2},	{720,2},	{721,2}
};

static struct patval owl_defendpat323[] = {
  {648,2},	{686,2},	{649,4},	{758,4}
};

static struct patval owl_defendpat324[] = {
  {648,2},	{723,2},	{647,2}
};

static struct patval owl_defendpat325[] = {
  {684,2}
};

static struct patval owl_defendpat326[] = {
  {721,2},	{611,4},	{612,4},	{650,4},
  {687,4}
};

static struct patval owl_defendpat327[] = {
  {685,2}
};

static struct patval owl_defendpat328[] = {
  {721,2}
};

static struct patval owl_defendpat329[] = {
  {722,2},	{721,2}
};

static struct patval owl_defendpat330[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat331[] = {
  {757,2},	{758,2},	{684,2},	{722,2},
  {759,4}
};

static struct patval owl_defendpat332[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat333[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat334[] = {
  {648,2},	{685,2}
};

static struct patval owl_defendpat335[] = {
  {684,2},	{722,2},	{723,4},	{686,4},
  {721,4},	{649,4}
};

static struct patval owl_defendpat336[] = {
  {684,2},	{722,2},	{686,4},	{723,4},
  {721,4}
};

static struct patval owl_defendpat337[] = {
  {684,2},	{685,2},	{682,4},	{719,4}
};

static struct patval owl_defendpat338[] = {
  {684,2},	{721,2}
};

static struct patval owl_defendpat339[] = {
  {721,2},	{684,2},	{647,4}
};

static struct patval owl_defendpat340[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat341[] = {
  {685,2},	{683,2},	{721,2},	{722,4},
  {720,4}
};

static struct patval owl_defendpat342[] = {
  {646,4}
};

static struct patval owl_defendpat343[] = {
  {723,2},	{684,2}
};

static struct patval owl_defendpat344[] = {
  {723,2},	{684,2}
};

static struct patval owl_defendpat345[] = {
  {759,2},	{648,2}
};

static struct patval owl_defendpat346[] = {
  {759,2},	{648,2},	{723,4},	{721,4}
};

static struct patval owl_defendpat347[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat348[] = {
  {722,2},	{757,4},	{683,4},	{797,4},
  {720,4},	{795,4},	{794,4},	{796,4}
};

static struct patval owl_defendpat349[] = {
  {722,2},	{793,4},	{830,4},	{719,4},
  {756,4},	{832,4},	{834,4},	{831,4},
  {682,4},	{833,4}
};

static struct patval owl_defendpat350[] = {
  {684,2},	{722,2},	{612,4},	{609,4},
  {610,4},	{611,4}
};

static struct patval owl_defendpat351[] = {
  {686,2},	{648,2},	{609,4},	{646,4}
};

static struct patval owl_defendpat352[] = {
  {684,2},	{648,2},	{756,4},	{719,4},
  {757,4}
};

static struct patval owl_defendpat353[] = {
  {684,2},	{720,4},	{757,4},	{794,4},
  {683,4},	{795,4}
};

static struct patval owl_defendpat354[] = {
  {684,2},	{683,4},	{720,4},	{832,4},
  {831,4}
};

static struct patval owl_defendpat355[] = {
  {832,2},	{684,2},	{719,4},	{683,4},
  {756,4},	{793,4},	{831,4}
};

static struct patval owl_defendpat356[] = {
  {722,2},	{719,4},	{757,4},	{794,4},
  {720,4},	{793,4},	{758,4},	{795,4},
  {756,4}
};

static struct patval owl_defendpat357[] = {
  {684,2},	{794,4},	{757,4},	{796,4},
  {759,4},	{760,4},	{797,4},	{795,4},
  {723,4}
};

static struct patval owl_defendpat358[] = {
  {721,2},	{725,4},	{762,4},	{688,4},
  {611,4},	{651,4},	{614,4},	{613,4},
  {612,4}
};

static struct patval owl_defendpat359[] = {
  {721,2},	{684,2}
};

static struct patval owl_defendpat360[] = {
  {686,2},	{684,2},	{647,4},	{649,4}
};

static struct patval owl_defendpat361[] = {
  {684,2},	{686,2},	{649,4},	{647,4},
  {797,4},	{796,4}
};

static struct patval owl_defendpat362[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat363[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat364[] = {
  {684,2},	{650,4},	{724,4},	{687,4}
};

static struct patval owl_defendpat365[] = {
  {684,2}
};

static struct patval owl_defendpat366[] = {
  {684,2},	{683,4},	{645,4},	{682,4},
  {719,4},	{721,4},	{646,4},	{647,4},
  {720,4}
};

static struct patval owl_defendpat367[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat368[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat369[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat370[] = {
  {684,2},	{686,2},	{723,2}
};

static struct patval owl_defendpat371[] = {
  {684,2},	{686,2},	{723,2}
};

static struct patval owl_defendpat372[] = {
  {685,2},	{722,2},	{683,2}
};

static struct patval owl_defendpat373[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat374[] = {
  {684,2},	{686,2},	{723,2}
};

static struct patval owl_defendpat375[] = {
  {685,2},	{722,2},	{683,2}
};

static struct patval owl_defendpat376[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat377[] = {
  {684,2},	{721,4},	{647,4}
};

static struct patval owl_defendpat378[] = {
  {684,2},	{687,4},	{724,4},	{761,4},
  {650,4}
};

static struct patval owl_defendpat379[] = {
  {684,2},	{647,2},	{758,4},	{757,4},
  {759,4},	{760,4}
};

static struct patval owl_defendpat380[] = {
  {683,2},	{722,2},	{684,2},	{723,4},
  {760,4},	{649,4},	{686,4}
};

static struct patval owl_defendpat381[] = {
  {684,2},	{722,2},	{683,2},	{723,4},
  {649,4},	{686,4}
};

static struct patval owl_defendpat382[] = {
  {683,2},	{686,2},	{684,2},	{648,2}
};

static struct patval owl_defendpat383[] = {
  {721,2},	{685,2},	{647,2},	{720,4},
  {646,4}
};

static struct patval owl_defendpat384[] = {
  {649,2},	{685,2},	{721,2},	{609,4},
  {646,4},	{610,4}
};

static struct patval owl_defendpat385[] = {
  {685,2},	{683,2},	{721,2},	{646,4},
  {722,4}
};

static struct patval owl_defendpat386[] = {
  {684,2},	{721,2},	{724,4},	{687,4},
  {650,4},	{761,4}
};

static struct patval owl_defendpat387[] = {
  {647,2},	{648,2},	{721,2},	{759,4},
  {757,4},	{758,4},	{760,4}
};

static struct patval owl_defendpat388[] = {
  {648,2},	{722,2},	{647,4},	{649,4}
};

static struct patval owl_defendpat389[] = {
  {758,2},	{647,2},	{646,4}
};

static struct patval owl_defendpat390[] = {
  {684,2},	{687,4},	{724,4},	{650,4}
};

static struct patval owl_defendpat391[] = {
  {722,2},	{721,2},	{720,4}
};

static struct patval owl_defendpat392[] = {
  {758,2},	{649,4},	{724,4},	{648,4},
  {687,4},	{650,4}
};

static struct patval owl_defendpat393[] = {
  {758,2},	{687,4},	{721,4},	{724,4},
  {649,4},	{648,4},	{650,4},	{759,4}
};

static struct patval owl_defendpat394[] = {
  {758,2},	{649,4},	{687,4},	{759,4},
  {648,4},	{650,4},	{724,4},	{721,4}
};

static struct patval owl_defendpat395[] = {
  {758,2},	{649,4},	{687,4},	{724,4},
  {648,4},	{650,4}
};

static struct patval owl_defendpat396[] = {
  {684,2},	{683,4},	{650,4},	{720,4},
  {687,4}
};

static struct patval owl_defendpat397[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat398[] = {
  {684,2},	{687,4},	{724,4},	{761,4},
  {650,4}
};

static struct patval owl_defendpat399[] = {
  {646,2},	{684,2}
};

static struct patval owl_defendpat400[] = {
  {684,2},	{723,2}
};

static struct patval owl_defendpat401[] = {
  {684,2},	{723,2}
};

static struct patval owl_defendpat402[] = {
  {684,2},	{723,2}
};

static struct patval owl_defendpat403[] = {
  {684,2},	{760,2}
};

static struct patval owl_defendpat404[] = {
  {685,2},	{683,2}
};

static struct patval owl_defendpat405[] = {
  {684,2},	{723,4}
};

static struct patval owl_defendpat406[] = {
  {722,2},	{684,2},	{682,2}
};

static struct patval owl_defendpat407[] = {
  {683,2}
};

static struct patval owl_defendpat408[] = {
  {684,2},	{683,2},	{685,2}
};

static struct patval owl_defendpat409[] = {
  {647,2},	{758,2},	{685,2}
};

static struct patval owl_defendpat410[] = {
  {684,2},	{721,4},	{647,4}
};

static struct patval owl_defendpat411[] = {
  {684,2},	{721,4},	{647,4}
};

static struct patval owl_defendpat412[] = {
  {684,2},	{685,4}
};

static struct patval owl_defendpat413[] = {
  {647,2},	{611,2},	{721,2},	{612,2},
  {613,4},	{761,4},	{758,4}
};

static struct patval owl_defendpat414[] = {
  {684,2},	{796,2},	{685,2}
};

static struct patval owl_defendpat415[] = {
  {685,2},	{723,2},	{686,4}
};

static struct patval owl_defendpat416[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat417[] = {
  {684,2},	{759,4}
};

static struct patval owl_defendpat418[] = {
  {684,2}
};

static struct patval owl_defendpat419[] = {
  {684,2},	{685,4}
};

static struct patval owl_defendpat420[] = {
  {685,2},	{686,2},	{610,2},	{609,4}
};

static struct patval owl_defendpat421[] = {
  {683,2},	{758,2},	{721,2}
};

static struct patval owl_defendpat422[] = {
  {684,2},	{647,2},	{722,2},	{720,2}
};

static struct patval owl_defendpat423[] = {
  {720,2},	{758,2},	{722,2},	{759,2},
  {610,4},	{646,4}
};

static struct patval owl_defendpat424[] = {
  {684,2},	{685,2}
};

static struct patval owl_defendpat425[] = {
  {685,2},	{649,2},	{686,4}
};

static struct patval owl_defendpat426[] = {
  {759,2},	{648,4},	{649,4}
};

static struct patval owl_defendpat427[] = {
  {684,2},	{687,2},	{647,4},	{721,4}
};

static struct patval owl_defendpat428[] = {
  {721,2},	{648,2}
};

static struct patval owl_defendpat429[] = {
  {683,2},	{686,4}
};

static struct patval owl_defendpat430[] = {
  {685,2},	{721,4},	{573,4},	{536,4}
};

static struct patval owl_defendpat431[] = {
  {685,2},	{647,2},	{757,2}
};

static struct patval owl_defendpat432[] = {
  {648,2},	{758,2},	{721,4}
};

static struct patval owl_defendpat433[] = {
  {721,2},	{685,2},	{574,4},	{573,4}
};

static struct patval owl_defendpat434[] = {
  {684,2}
};

static struct patval owl_defendpat435[] = {
  {684,2}
};

static struct patval owl_defendpat436[] = {
  {684,2}
};

static struct patval owl_defendpat437[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat438[] = {
  {721,2},	{648,2}
};

static struct patval owl_defendpat439[] = {
  {684,2},	{721,4}
};

static struct patval owl_defendpat440[] = {
  {684,2},	{760,2}
};

static struct patval owl_defendpat441[] = {
  {611,2},	{722,2}
};

static struct patval owl_defendpat442[] = {
  {647,2},	{759,2},	{648,4}
};

static struct patval owl_defendpat443[] = {
  {647,2},	{759,2},	{648,4}
};

static struct patval owl_defendpat444[] = {
  {685,2},	{719,4},	{646,4},	{722,4}
};

static struct patval owl_defendpat445[] = {
  {685,2},	{647,2},	{719,4},	{646,4},
  {722,4}
};

static struct patval owl_defendpat446[] = {
  {647,2},	{758,2}
};

static struct patval owl_defendpat447[] = {
  {647,2},	{793,2},	{646,4}
};

static struct patval owl_defendpat448[] = {
  {648,2},	{684,2},	{758,2}
};

static struct patval owl_defendpat449[] = {
  {721,2},	{646,2}
};

static struct patval owl_defendpat450[] = {
  {722,2},	{684,2},	{610,2}
};

static struct patval owl_defendpat451[] = {
  {722,2},	{684,2},	{610,2}
};

static struct patval owl_defendpat452[] = {
  {758,2},	{648,2},	{684,2}
};

static struct patval owl_defendpat453[] = {
  {722,2},	{758,2},	{684,2}
};

static struct patval owl_defendpat454[] = {
  {722,2},	{758,2},	{684,2}
};

static struct patval owl_defendpat455[] = {
  {722,2},	{758,2},	{684,2}
};

static struct patval owl_defendpat456[] = {
  {648,2},	{684,2}
};

static struct patval owl_defendpat457[] = {
  {648,2},	{684,2}
};

static struct patval owl_defendpat458[] = {
  {646,2},	{683,2},	{721,2}
};

static struct patval owl_defendpat459[] = {
  {646,2},	{721,2},	{683,2},	{720,4}
};

static struct patval owl_defendpat460[] = {
  {646,2},	{685,2},	{683,2},	{720,4}
};

static struct patval owl_defendpat461[] = {
  {646,2},	{721,2},	{683,2},	{720,4}
};

static struct patval owl_defendpat462[] = {
  {682,2},	{646,2},	{684,2}
};

static struct patval owl_defendpat463[] = {
  {611,2},	{647,2},	{721,2},	{685,2}
};

static struct patval owl_defendpat464[] = {
  {721,2},	{685,2},	{647,2}
};

static struct patval owl_defendpat465[] = {
  {646,2},	{611,2},	{610,2},	{683,2},
  {684,2},	{720,4}
};

static struct patval owl_defendpat466[] = {
  {647,2},	{685,2}
};

static struct patval owl_defendpat467[] = {
  {647,2},	{685,2},	{648,4}
};

static struct patval owl_defendpat468[] = {
  {720,2},	{684,2},	{647,2},	{722,2}
};

static struct patval owl_defendpat469[] = {
  {684,2},	{647,2},	{720,2}
};

static struct patval owl_defendpat470[] = {
  {685,2},	{721,2},	{684,2},	{648,2},
  {611,4},	{612,4},	{756,4},	{719,4}
};

static struct patval owl_defendpat471[] = {
  {722,2}
};

static struct patval owl_defendpat472[] = {
  {686,2}
};

static struct patval owl_defendpat473[] = {
  {722,2}
};

static struct patval owl_defendpat474[] = {
  {686,2}
};

static struct patval owl_defendpat475[] = {
  {758,2},	{684,2},	{720,2},	{722,2},
  {759,4}
};

static struct patval owl_defendpat476[] = {
  {758,2},	{720,2},	{684,2},	{722,2},
  {759,4}
};

static struct patval owl_defendpat477[] = {
  {647,2}
};

static struct patval owl_defendpat478[] = {
  {721,2},	{723,2},	{685,2},	{647,2},
  {758,2},	{649,2}
};

static struct patval owl_defendpat479[] = {
  {683,2},	{649,2},	{684,2},	{720,2},
  {685,2},	{648,2}
};

static struct patval owl_defendpat480[] = {
  {684,2},	{722,2},	{721,4},	{683,4},
  {648,4}
};

static struct patval owl_defendpat481[] = {
  {685,2}
};

static struct patval owl_defendpat482[] = {
  {685,2}
};

static struct patval owl_defendpat483[] = {
  {646,2},	{647,2}
};

static struct patval owl_defendpat484[] = {
  {684,2},	{723,2},	{760,2},	{686,2}
};

static struct patval owl_defendpat485[] = {
  {684,2},	{723,2},	{686,2},	{649,2},
  {760,4}
};

static struct patval owl_defendpat486[] = {
  {684,2},	{648,2}
};

static struct patval owl_defendpat487[] = {
  {647,2},	{684,2}
};

static struct patval owl_defendpat488[] = {
  {722,2},	{684,2},	{720,2},	{758,2},
  {757,4}
};

static struct patval owl_defendpat489[] = {
  {684,2},	{683,2}
};

static struct pattern owl_defendpat[491];

static int
autohelperowl_defendpat0(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 4, move, a, b, c, c);
}

static int
autohelperowl_defendpat8(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return ATTACK_MACRO(a) && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat9(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);

  return ATTACK_MACRO(a) && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat20(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return  !play_attack_defend_n(color, 0, 3, move, a, b, a);
}

static int
autohelperowl_defendpat21(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return countlib(a) >= 4;
}

static int
autohelperowl_defendpat22(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(796, trans, move);

  return countlib(a) >= 4;
}

static int
autohelperowl_defendpat23(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return countlib(a)>1;
}

static int
autohelperowl_defendpat27(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat29(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return play_attack_defend_n(color, 1, 3, move, a, b, c) && !ATTACK_MACRO(c);
}

static int
autohelperowl_defendpat30(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat37(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return !somewhere(OTHER_COLOR(color), 0, 1, A) || !DEFEND_MACRO(A);
}

static int
autohelperowl_defendpat43(int trans, int move, int color, int action)
{
  int B;
  UNUSED(color);
  UNUSED(action);

  B = AFFINE_TRANSFORM(646, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat48(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);

  return play_attack_defend2_n(color, 1, 4, move, a, b, c, a, c);
}

static int
autohelperowl_defendpat53(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat54(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return countlib(a)>2 && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat55(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(648, trans, move);

  return  !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat59(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(572, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(573, trans, move);

  return  somewhere(color, 0, 3, a, b, c);
}

static int
autohelperowl_defendpat63(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, a, b, c) && !play_attack_defend_n(color, 1, 3, move, a, b, c);
}

static int
autohelperowl_defendpat66(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  return owl_goal_dragon(a) && owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat67(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);

  return owl_goal_dragon(a) && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat68(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);

  return owl_goal_dragon(a) && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat69(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return owl_eyespace(a);
}

static int
autohelperowl_defendpat70(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(794, trans, move);

  return play_connect_n(color, 1, 2, move, a, move, b);
}

static int
autohelperowl_defendpat71(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(572, trans, move);
  e = AFFINE_TRANSFORM(573, trans, move);

  return  safe_move(move, color) || ((owl_escape_value(c) > 0 || owl_escape_value(d) >0 || owl_escape_value(e)>0)  && play_attack_defend_n(color, 1, 3, move, a, b, a));
}

static int
autohelperowl_defendpat72(int trans, int move, int color, int action)
{
  int a, b, c, d, e, F;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(537, trans, move);
  d = AFFINE_TRANSFORM(574, trans, move);
  e = AFFINE_TRANSFORM(648, trans, move);
  F = AFFINE_TRANSFORM(685, trans, move);

  return countlib(F)>=3 && owl_topological_eye(a, board[b])<=2 && !play_attack_defend_n(OTHER_COLOR(color), 1, 3, c, d, e, c);
}

static int
autohelperowl_defendpat74(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return play_connect_n(color, 0, 2, move, a, a, C) && play_connect_n(color, 0, 2, move, b, b, C);
}

static int
autohelperowl_defendpat76(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a) > 1;
}

static int
autohelperowl_defendpat77(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a) > 1;
}

static int
autohelperowl_defendpat80(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, a);
}

static int
autohelperowl_defendpat82(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(686, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend2_n(color, 1, 4, move, a, b, c, a, c) && play_attack_defend2_n(color, 1, 4, move, b, a, d, b, d);
}

static int
autohelperowl_defendpat83(int trans, int move, int color, int action)
{
  int b, c, D;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  D = AFFINE_TRANSFORM(611, trans, move);

  return  play_attack_defend_n(color, 1, 4, move, NO_MOVE, c, b, D);
}

static int
autohelperowl_defendpat84(int trans, int move, int color, int action)
{
  int b, c;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, b, b) && play_attack_defend_n(color, 1, 2, move, c, c) && safe_move(move, OTHER_COLOR(color));
}

static int
autohelperowl_defendpat85(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 1, move, b) && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat86(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a) && !obvious_false_eye(a, color);
}

static int
autohelperowl_defendpat87(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat88(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(a)>1 && safe_move(b, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat89(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);

  return  countlib(a)>2 && countlib(c)>2 && safe_move(b, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat90(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat93(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat94(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat95(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return does_attack(move, A) && does_defend(move, b);
}

static int
autohelperowl_defendpat96(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat97(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return  countlib(A)>1;
}

static int
autohelperowl_defendpat99(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_defendpat100(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_defendpat104(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(645, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);

  return  somewhere(color, 0, 2, b, c)||!play_attack_defend_n(color, 0, 5, move, a, b, c, d, c);
}

static int
autohelperowl_defendpat111(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 1, a, a, c) && play_attack_defend_n(color, 1, 3, move, b, a, b);
}

static int
autohelperowl_defendpat112(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return owl_proper_eye(a)&& play_attack_defend_n(color, 1, 3, move, b, c, b);
}

static int
autohelperowl_defendpat113(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return  countlib(a)>1 && safe_move(b, OTHER_COLOR(color)) && !obvious_false_eye(b, color) && play_attack_defend_n(color, 1, 2, move, b, b) && does_attack(b, c);
}

static int
autohelperowl_defendpat114(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);

  return  countlib(a)>1 && safe_move(b, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 3, move, d, b, d) && play_attack_defend_n(OTHER_COLOR(color), 0, 1, b, c) != WIN;
}

static int
autohelperowl_defendpat115(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);

  return  countlib(a)>1 && safe_move(b, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 2, move, b, b) && does_attack(b, c) && play_attack_defend_n(color, 1, 2, move, d, d);
}

static int
autohelperowl_defendpat116(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);

  return does_defend(move, a);
}

static int
autohelperowl_defendpat117(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);

  return does_defend(move, a);
}

static int
autohelperowl_defendpat118(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return does_defend(move, a);
}

static int
autohelperowl_defendpat119(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return does_defend(move, a);
}

static int
autohelperowl_defendpat120(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(756, trans, move);

  return  !play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat123(int trans, int move, int color, int action)
{
  int c, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(759, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return countlib(A)>1 && countlib(B)>1 && countlib(c)==2;
}

static int
autohelperowl_defendpat124(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, a, b, a);
}

static int
autohelperowl_defendpat127(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat128(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a) && play_attack_defend_n(color, 1, 2, move, b, b) && play_attack_defend_n(color, 1, 2, move, c, c);
}

static int
autohelperowl_defendpat129(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return (!obvious_false_eye(b, color) || play_attack_defend_n(color, 1, 1, move, A))&& !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, A);
}

static int
autohelperowl_defendpat130(int trans, int move, int color, int action)
{
  int b, A, C;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(573, trans, move);

  return  !play_attack_defend_n(color, 0, 3, move, A, b, C);
}

static int
autohelperowl_defendpat132(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return countlib(a) == 1 && !obvious_false_eye(b, color) && !obvious_false_eye(c, color);
}

static int
autohelperowl_defendpat133(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==1 && countlib(B)==1 && countlib(C)==2;
}

static int
autohelperowl_defendpat134(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return does_attack(move, A);
}

static int
autohelperowl_defendpat135(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return owl_eyespace(a) && does_attack(move, B);
}

static int
autohelperowl_defendpat137(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(832, trans, move);

  return accuratelib(a, color, MAX_LIBERTIES, NULL)==1;
}

static int
autohelperowl_defendpat138(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return countlib(A) == 2;
}

static int
autohelperowl_defendpat141(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat143(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(649, trans, move);

  return countlib(A)==2 && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, b, b);
}

static int
autohelperowl_defendpat144(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_defendpat145(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_defendpat146(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)<=2;
}

static int
autohelperowl_defendpat147(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(795, trans, move);

  return countlib(A)<=2;
}

static int
autohelperowl_defendpat149(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return countlib(a)==2 && countlib(B)==3;
}

static int
autohelperowl_defendpat151(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(686, trans, move);
  A = AFFINE_TRANSFORM(758, trans, move);

  return !ATTACK_MACRO(A) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat152(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);

  return  !somewhere(OTHER_COLOR(color), 0, 1, a) || !somewhere(OTHER_COLOR(color), 0, 1, b);
}

static int
autohelperowl_defendpat154(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return countlib(a)==1 && !obvious_false_eye(b, color);
}

static int
autohelperowl_defendpat156(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return  play_attack_defend_n(color, 0, 1, move, A)  && play_attack_defend_n(color, 1, 2, move, B, A);
}

static int
autohelperowl_defendpat157(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return  !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, move) && play_attack_defend_n(color, 1, 2, move, A, A);
}

static int
autohelperowl_defendpat159(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  DEFEND_MACRO(A) && play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat160(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(686, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, C) && play_attack_defend_n(color, 0, 2, move, A, move) && play_attack_defend_n(color, 0, 2, move, B, move);
}

static int
autohelperowl_defendpat161(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat163(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return  countlib(A) < 4 && play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat164(int trans, int move, int color, int action)
{
  int a, c, e, B, D, F;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  e = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);
  D = AFFINE_TRANSFORM(611, trans, move);
  F = AFFINE_TRANSFORM(647, trans, move);

  return  !play_attack_defend_n(color, 0, 7, move, a, B, c, D, e, F, a);
}

static int
autohelperowl_defendpat165(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 3, move, a, B, a);
}

static int
autohelperowl_defendpat166(int trans, int move, int color, int action)
{
  int b, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return  is_ko_point(b) && owl_topological_eye(move, board[A]) > 2 && !obvious_false_eye(d, color);
}

static int
autohelperowl_defendpat168(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat169(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !obvious_false_eye(a, color) && !play_attack_defend_n(color, 1, 2, b, move, move);
}

static int
autohelperowl_defendpat170(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !obvious_false_eye(a, color) || !obvious_false_eye(b, color);
}

static int
autohelperowl_defendpat171(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return !obvious_false_eye(a, color)&& play_attack_defend_n(color, 1, 2, move, b, C) && !ATTACK_MACRO(C);
}

static int
autohelperowl_defendpat175(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_proper_eye(a) && does_attack(move, B) && !obvious_false_eye(B, color);
}

static int
autohelperowl_defendpat177(int trans, int move, int color, int action)
{
  int a, b, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  B = AFFINE_TRANSFORM(722, trans, move);

  return  (owl_topological_eye(a, board[B])>=2) && (owl_topological_eye(b, board[B])==2);
}

static int
autohelperowl_defendpat178(int trans, int move, int color, int action)
{
  int a, b, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_topological_eye(a, board[B])==2) && ((owl_topological_eye(b, board[B])==2) || (owl_topological_eye(b, board[B])==3));
}

static int
autohelperowl_defendpat179(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return owl_topological_eye(a, board[B])==3 && does_attack(move, B);
}

static int
autohelperowl_defendpat180(int trans, int move, int color, int action)
{
  int a, b, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return  owl_topological_eye(a, board[B])==3 && safe_move(b, OTHER_COLOR(color)) && safe_move(move, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat181(int trans, int move, int color, int action)
{
  int b, c;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(757, trans, move);

  return  (safe_move(b, OTHER_COLOR(color)) || safe_move(move, OTHER_COLOR(color))) && play_attack_defend_n(color, 1, 2, move, b, b) && (somewhere(color, 0, 1, c) || !safe_move(c, OTHER_COLOR(color)));
}

static int
autohelperowl_defendpat182(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, a);
}

static int
autohelperowl_defendpat183(int trans, int move, int color, int action)
{
  int a, b, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return  countlib(a)==2 && owl_topological_eye(b, board[B])==3;
}

static int
autohelperowl_defendpat184(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat185(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat186(int trans, int move, int color, int action)
{
  int a, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return accuratelib(a, color, MAX_LIBERTIES, NULL)<=2 && does_attack(move, A);
}

static int
autohelperowl_defendpat187(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !owl_big_eyespace(a) && !obvious_false_eye(a, color);
}

static int
autohelperowl_defendpat188(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==1 && countstones(A)==4 && bent_four_helper(A);
}

static int
autohelperowl_defendpat189(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1 && countstones(A)==4 && bent_four_helper(A);
}

static int
autohelperowl_defendpat190(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  B = AFFINE_TRANSFORM(795, trans, move);

  return owl_topological_eye(a, board[B])==3;
}

static int
autohelperowl_defendpat192(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  countlib(a)==2 && accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>1 && owl_big_eyespace(move);
}

static int
autohelperowl_defendpat193(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return accuratelib(a, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>1 && owl_big_eyespace(a) && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat194(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(719, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==2 && countlib(B)==3 && owl_big_eyespace(move);
}

static int
autohelperowl_defendpat195(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);

  return owl_eyespace(a) && !owl_big_eyespace(a);
}

static int
autohelperowl_defendpat196(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(720, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat198(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return owl_proper_eye(a);
}

static int
autohelperowl_defendpat200(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return !obvious_false_eye(b, color) && play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat206(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !obvious_false_eye(a, color);
}

static int
autohelperowl_defendpat207(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a) > 2;
}

static int
autohelperowl_defendpat212(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return ATTACK_MACRO(A) && !play_attack_defend_n(color, 0, 3, move, a, b, A);
}

static int
autohelperowl_defendpat213(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return ATTACK_MACRO(A) && play_attack_defend_n(color, 0, 3, move, a, b, A) != WIN;
}

static int
autohelperowl_defendpat214(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return does_attack(move, A);
}

static int
autohelperowl_defendpat215(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat216(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return !play_attack_defend_n(color, 0, 2, move, a, a);
}

static int
autohelperowl_defendpat224(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);

  return ATTACK_MACRO(a) && ! play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat225(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat226(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(608, trans, move);

  return countlib(a) == 2;
}

static int
autohelperowl_defendpat229(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat231(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_defendpat235(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend_n(color, 1, 1, move, a) && play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat236(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat239(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(755, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_defendpat240(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_defendpat242(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat246(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, A, A);
}

static int
autohelperowl_defendpat248(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat249(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return does_attack(move, A) && play_attack_defend_n(OTHER_COLOR(color), 1, 3, b, move, c, A);
}

static int
autohelperowl_defendpat254(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return owl_proper_eye(a) && owl_proper_eye(b) && owl_big_eyespace(a);
}

static int
autohelperowl_defendpat255(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_defendpat259(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(color, 1, 1, move, a)!=WIN;
}

static int
autohelperowl_defendpat260(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat261(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(720, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat262(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat263(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat266(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat267(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==1 && owl_eyespace(move) && accuratelib(move, color, MAX_LIBERTIES, NULL) > 0;
}

static int
autohelperowl_defendpat269(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 3, a, move, b, b);
}

static int
autohelperowl_defendpat270(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return  somewhere(color, 0, 4, a, b, c, d);
}

static int
autohelperowl_defendpat271(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);

  return !same_string(b, c)&& (countstones(b) > 1 && countstones(c) > 1)&& safe_move(move, OTHER_COLOR(color)) && !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, A);
}

static int
autohelperowl_defendpat272(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  countlib(A) == 1 && countstones(A) > 2;
}

static int
autohelperowl_defendpat273(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return !same_string(b, c) && (!ATTACK_MACRO(a) || (countstones(a)<=2 && does_attack(move, a)));
}

static int
autohelperowl_defendpat275(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return !same_string(b, c) && !ATTACK_MACRO(a) && accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL) > 1;
}

static int
autohelperowl_defendpat276(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);

  return countlib(b)>1 && play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, NO_MOVE, a, a, c);
}

static int
autohelperowl_defendpat277(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);
  D = AFFINE_TRANSFORM(722, trans, move);

  return (countlib(b)>1 && play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, NO_MOVE, a, a, c))&& (!somewhere(OTHER_COLOR(color), 0, 1, D) || play_attack_defend_n(color, 1, 2, move, a, D))&& (!is_legal(D, OTHER_COLOR(color)) || play_attack_defend_n(color, 1, 2, move, D, D));
}

static int
autohelperowl_defendpat280(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)>1 && countlib(b)>1 && !ATTACK_MACRO(C);
}

static int
autohelperowl_defendpat281(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0) && countlib(a)>1 && countlib(b)>1;
}

static int
autohelperowl_defendpat282(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A) == 2 && countlib(b)>1 && countlib(c)>1 && !ATTACK_MACRO(A) && !play_connect_n(color, 0, 1, move, b, c);
}

static int
autohelperowl_defendpat283(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return vital_chain(A) && vital_chain(B) && !is_ko_point(move) && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat284(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return vital_chain(A)>1 && vital_chain(B)>1 && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat285(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return  play_break_through_n(color, 2, move, a, b, a, c) == WIN;
}

static int
autohelperowl_defendpat286(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return (countlib(A)<=3 && accuratelib(c, color, MAX_LIBERTIES, NULL)>2) || (countlib(B)<=3 && accuratelib(d, color, MAX_LIBERTIES, NULL)>2);
}

static int
autohelperowl_defendpat288(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return play_attack_defend2_n(color, 1, 2, move, a, B, a);
}

static int
autohelperowl_defendpat289(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return  does_attack(move, a);
}

static int
autohelperowl_defendpat291(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat293(int trans, int move, int color, int action)
{
  int a, e, f, B, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  e = AFFINE_TRANSFORM(796, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(794, trans, move);
  C = AFFINE_TRANSFORM(758, trans, move);
  D = AFFINE_TRANSFORM(685, trans, move);

  return  !play_attack_defend2_n(color, 0, 3, move, f, a, B, C) && play_attack_defend_n(color, 1, 1, move, D) && !safe_move(e, OTHER_COLOR(color));
}

static int
autohelperowl_defendpat294(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return owl_goal_dragon(a) && !play_attack_defend2_n(color, 0, 1, move, B, C);
}

static int
autohelperowl_defendpat295(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A) && play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat296(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat297(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(760, trans, move);
  e = AFFINE_TRANSFORM(797, trans, move);
  f = AFFINE_TRANSFORM(723, trans, move);
  g = AFFINE_TRANSFORM(685, trans, move);
  h = AFFINE_TRANSFORM(720, trans, move);
  i = AFFINE_TRANSFORM(795, trans, move);

  return owl_goal_dragon(h) && countlib(i)>1 && play_attack_defend_n(color, 1, 8, move, a, b, c, d, e, f, g, e);
}

static int
autohelperowl_defendpat298(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  e = AFFINE_TRANSFORM(610, trans, move);
  f = AFFINE_TRANSFORM(645, trans, move);
  g = AFFINE_TRANSFORM(720, trans, move);

  return owl_goal_dragon(f) && countlib(g)>1 && play_attack_defend_n(color, 1, 6, move, a, b, c, d, e, c);
}

static int
autohelperowl_defendpat299(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(724, trans, move);
  e = AFFINE_TRANSFORM(649, trans, move);

  return owl_goal_dragon(d) && countlib(e)>1 && play_attack_defend_n(color, 1, 4, move, a, b, c, a);
}

static int
autohelperowl_defendpat300(int trans, int move, int color, int action)
{
  int a, c, d, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(687, trans, move);
  d = AFFINE_TRANSFORM(612, trans, move);
  B = AFFINE_TRANSFORM(611, trans, move);

  return owl_goal_dragon(c) && countlib(d)>1 && play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat302(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat303(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat304(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(760, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B) && countstones(B) > 2;
}

static int
autohelperowl_defendpat306(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(681, trans, move);
  b = AFFINE_TRANSFORM(795, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat307(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(718, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat311(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend2_n(color, 1, 2, move, a, a, B);
}

static int
autohelperowl_defendpat312(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 1, move, A) || play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat313(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat314(int trans, int move, int color, int action)
{
  int c, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return countlib(A)==2 && owl_escape_value(c)>0 && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat315(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(609, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat316(int trans, int move, int color, int action)
{
  int b, c, A, B;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return countlib(c)>1 && play_attack_defend_n(color, 1, 1, move, A) && play_attack_defend_n(color, 1, 2, move, b, B);
}

static int
autohelperowl_defendpat317(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a)>1;
}

static int
autohelperowl_defendpat320(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  !safe_move(a, OTHER_COLOR(color)) && countlib(b)>1;
}

static int
autohelperowl_defendpat321(int trans, int move, int color, int action)
{
  int a, b, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);
  D = AFFINE_TRANSFORM(683, trans, move);

  return owl_goal_dragon(a) && owl_escape_value(b)>0&& play_attack_defend_n(color, 1, 1, move, C) && play_attack_defend_n(color, 1, 1, move, D);
}

static int
autohelperowl_defendpat322(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend2_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_defendpat323(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat325(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return  owl_escape_value(a)>0 && play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat326(int trans, int move, int color, int action)
{
  int a, c, d, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(649, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return countlib(B)<=4 && owl_escape_value(c) + owl_escape_value(d) > 0&& play_attack_defend2_n(color, 1, 2, move, a, a, B);
}

static int
autohelperowl_defendpat327(int trans, int move, int color, int action)
{
  int d, e, f, A, B, C;
  UNUSED(color);
  UNUSED(action);

  d = AFFINE_TRANSFORM(722, trans, move);
  e = AFFINE_TRANSFORM(609, trans, move);
  f = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(611, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return  countlib(C) == 2 && (owl_escape_value(e) > 0 || vital_chain(A)) && (owl_escape_value(f) > 0 || vital_chain(C)) && accuratelib(move, color, MAX_LIBERTIES, NULL) > 1 && play_attack_defend2_n(color, 1, 2, move, d, B, A);
}

static int
autohelperowl_defendpat328(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(b) > 0 || owl_escape_value(c) > 0 || owl_escape_value(d) > 0)&& play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat329(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(a) == 2 || play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat330(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(759, trans, move);
  C = AFFINE_TRANSFORM(720, trans, move);

  return  does_defend(move, A) && !play_attack_defend_n(color, 1, 1, move, B) && !same_string(B, C) && vital_chain(B) && vital_chain(C) && (play_attack_defend_n(color, 1, 1, move, B) || play_attack_defend_n(color, 1, 1, move, C)) && !play_connect_n(color, 1, 1, move, B, C);
}

static int
autohelperowl_defendpat331(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(758, trans, move);
  d = AFFINE_TRANSFORM(723, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(648, trans, move);

  return countlib(A)==2 && countlib(c)>1 && countlib(d)>1 && play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat332(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(A) == 1 && (owl_escape_value(b) > 0 || owl_escape_value(c) > 0);
}

static int
autohelperowl_defendpat333(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(A) == 1;
}

static int
autohelperowl_defendpat335(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  countlib(A)==2;
}

static int
autohelperowl_defendpat336(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  countlib(A)==2 && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat337(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A) <= 2 && (somewhere(color, 0, 1, B) || !ATTACK_MACRO(A) || DEFEND_MACRO(A));
}

static int
autohelperowl_defendpat338(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return !ATTACK_MACRO(A) && play_attack_defend_n(color, 1, 1, move, A) && !obvious_false_eye(b, color);
}

static int
autohelperowl_defendpat339(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return countstones(A)>=3 && !ATTACK_MACRO(A) && play_attack_defend_n(color, 1, 1, move, A) && !obvious_false_eye(b, color);
}

static int
autohelperowl_defendpat340(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat341(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat342(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat343(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(c)>0 && play_attack_defend2_n(color, 1, 2, move, a, a, b);
}

static int
autohelperowl_defendpat344(int trans, int move, int color, int action)
{
  int a, c, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(c)>0 && play_attack_defend2_n(color, 1, 2, move, a, a, B);
}

static int
autohelperowl_defendpat345(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  e = AFFINE_TRANSFORM(685, trans, move);
  f = AFFINE_TRANSFORM(647, trans, move);
  g = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(f) || !owl_goal_dragon(g))&& (play_attack_defend_n(color, 1, 6, move, a, b, c, d, e, e) || play_attack_defend_n(color, 1, 6, move, a, b, c, e, d, d));
}

static int
autohelperowl_defendpat346(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(a) || !owl_goal_dragon(b))&& !play_connect_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_defendpat347(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(722, trans, move);

  return !(somewhere(color, 0, 1, d) && somewhere(color, 0, 1, e))&& (!owl_goal_dragon(b) || !owl_goal_dragon(c)) && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat348(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat349(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(719, trans, move);
  b = AFFINE_TRANSFORM(756, trans, move);
  c = AFFINE_TRANSFORM(757, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat350(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat351(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat352(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) > 0;
}

static int
autohelperowl_defendpat353(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat354(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat355(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat356(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(719, trans, move);
  c = AFFINE_TRANSFORM(757, trans, move);
  d = AFFINE_TRANSFORM(645, trans, move);
  e = AFFINE_TRANSFORM(646, trans, move);

  return (!somewhere(OTHER_COLOR(color), 0, 1, e) && !somewhere(OTHER_COLOR(color), 0, 1, d) && (owl_escape_value(a) > 0))|| owl_escape_value(b) > 0|| owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat357(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(723, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat358(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(650, trans, move);
  b = AFFINE_TRANSFORM(613, trans, move);
  c = AFFINE_TRANSFORM(575, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat359(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat360(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_escape_value(move) > 0;
}

static int
autohelperowl_defendpat361(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return  owl_escape_value(a) > 0 || owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat362(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return !owl_goal_dragon(a);
}

static int
autohelperowl_defendpat363(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return owl_strong_dragon(a);
}

static int
autohelperowl_defendpat364(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat365(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(723, trans, move);
  b = AFFINE_TRANSFORM(760, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(686, trans, move);
  e = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a) > 0 || owl_escape_value(b) > 0|| owl_escape_value(c) > 0 || owl_escape_value(d) > 0|| owl_escape_value(e) > 0;
}

static int
autohelperowl_defendpat367(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return !owl_goal_dragon(a) || !owl_goal_dragon(b);
}

static int
autohelperowl_defendpat368(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (!owl_goal_dragon(A) || !owl_goal_dragon(B)) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, d, c, c, move);
}

static int
autohelperowl_defendpat369(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat370(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);

  return !owl_goal_dragon(a) || !owl_goal_dragon(b);
}

static int
autohelperowl_defendpat371(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat372(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);

  return (!owl_goal_dragon(a) || !owl_goal_dragon(b)) && countlib(C) <= 2 && countlib(a) > 1;
}

static int
autohelperowl_defendpat373(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat374(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat375(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0) && countlib(C) <= 2 && countlib(a) > 1;
}

static int
autohelperowl_defendpat376(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat378(int trans, int move, int color, int action)
{
  int a, b, c, d, f, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  f = AFFINE_TRANSFORM(686, trans, move);
  E = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(f)>0 && !play_attack_defend2_n(color, 0, 5, move, a, b, c, d, a, E);
}

static int
autohelperowl_defendpat379(int trans, int move, int color, int action)
{
  int a, b, e, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  e = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(645, trans, move);
  D = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(e)>0 && !play_attack_defend2_n(color, 0, 3, move, a, b, C, D);
}

static int
autohelperowl_defendpat380(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat381(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(c)>0 && owl_goal_dragon(d) && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat382(int trans, int move, int color, int action)
{
  int c, d;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(c)>0 && owl_goal_dragon(d);
}

static int
autohelperowl_defendpat383(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_escape_value(move)>0;
}

static int
autohelperowl_defendpat384(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(a)>0 && owl_goal_dragon(b) && countlib(b)>1;
}

static int
autohelperowl_defendpat385(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat386(int trans, int move, int color, int action)
{
  int a, b, c, d, f, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  E = AFFINE_TRANSFORM(609, trans, move);

  return owl_escape_value(f)>0 && !play_attack_defend2_n(color, 0, 5, move, a, b, c, d, c, E);
}

static int
autohelperowl_defendpat387(int trans, int move, int color, int action)
{
  int a, b, d, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(d)>0 && !play_attack_defend2_n(color, 0, 3, move, a, b, a, C);
}

static int
autohelperowl_defendpat388(int trans, int move, int color, int action)
{
  int d;
  UNUSED(color);
  UNUSED(action);

  d = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(d)>0;
}

static int
autohelperowl_defendpat389(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(c)>0 || owl_escape_value(d)>0) && play_attack_defend_n(color, 1, 2, move, a, a)&& !play_attack_defend2_n(color, 1, 3, move, b, a, move, a) && !play_attack_defend2_n(color, 1, 3, move, b, a, c, a);
}

static int
autohelperowl_defendpat390(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat392(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat393(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat394(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return somewhere(color, 0, 2, c, d) && (owl_escape_value(a) + owl_escape_value(b) > 0);
}

static int
autohelperowl_defendpat395(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat396(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat397(int trans, int move, int color, int action)
{
  int a, b, c, e, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(720, trans, move);
  D = AFFINE_TRANSFORM(683, trans, move);

  return countlib(D)==2 && countlib(c)>1 && countlib(e)>1&& (owl_escape_value(c)>0 || owl_escape_value(e)>0)&& !play_connect_n(color, 0, 3, move, b, a, c, e);
}

static int
autohelperowl_defendpat398(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(723, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat399(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat400(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat401(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat402(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return (owl_strong_dragon(a) || owl_strong_dragon(b)) && !play_connect_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_defendpat403(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat404(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(686, trans, move);
  d = AFFINE_TRANSFORM(649, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A) == 1&& (owl_escape_value(b) + owl_escape_value(c) + owl_escape_value(d)) > 0;
}

static int
autohelperowl_defendpat405(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat406(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(682, trans, move);

  return !owl_goal_dragon(a) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, b, c, d, b, d);
}

static int
autohelperowl_defendpat408(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat409(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return countlib(a)>1 && countlib(b)>1;
}

static int
autohelperowl_defendpat410(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(682, trans, move);

  return  (owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0) && !play_connect_n(color, 0, 1, move, d, move);
}

static int
autohelperowl_defendpat411(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(682, trans, move);

  return  (owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0) && play_connect_n(color, 0, 1, move, d, move);
}

static int
autohelperowl_defendpat412(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(573, trans, move);

  return  (owl_escape_value(a) + owl_escape_value(move) + owl_escape_value(b) > 0) && !play_connect_n(color, 0, 1, move, c, move);
}

static int
autohelperowl_defendpat413(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(760, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);

  return  owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat414(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);

  return (owl_escape_value(a) > 0 || owl_escape_value(b) > 0)&& play_attack_defend2_n(color, 1, 4, move, c, d, e, c, e);
}

static int
autohelperowl_defendpat415(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(719, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat416(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat417(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return !same_string(A, B) && (countlib(A) <= 4 || countlib(B) <= 4 || countlib(C) <= 4);
}

static int
autohelperowl_defendpat418(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return !same_string(A, B) && (countlib(A) <= 4 || countlib(B) <= 4 || countlib(C) <= 4)&& !play_connect_n(color, 1, 1, move, A, C);
}

static int
autohelperowl_defendpat423(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);

  return owl_goal_dragon(a);
}

static int
autohelperowl_defendpat425(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a)>1 && owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat426(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat427(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat428(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0 && !ATTACK_MACRO(B);
}

static int
autohelperowl_defendpat429(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0 && does_attack(move, B);
}

static int
autohelperowl_defendpat430(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(572, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);

  return somewhere(color, 0, 2, a, b) && owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat431(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  DEFEND_MACRO(A);
}

static int
autohelperowl_defendpat432(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(a) > 0 || owl_escape_value(b) > 0) && ((somewhere(color, 0, 1, d) && play_attack_defend2_n(color, 1, 2, move, c, c, E))     || (!somewhere(color, 0, 1, d) && !play_attack_defend2_n(color, 0, 3, move, c, d, c, E)));
}

static int
autohelperowl_defendpat433(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return DEFEND_MACRO(A);
}

static int
autohelperowl_defendpat434(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return  vital_chain(A) && vital_chain(B) && play_attack_defend2_n(color, 1, 1, move, A, B) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_defendpat435(int trans, int move, int color, int action)
{
  int d, e, A, B, C;
  UNUSED(color);
  UNUSED(action);

  d = AFFINE_TRANSFORM(721, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(611, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0 || owl_escape_value(C) > 0) && !ATTACK_MACRO(d) && play_attack_defend_n(color, 1, 2, move, A, d) && play_attack_defend_n(color, 1, 2, move, e, d);
}

static int
autohelperowl_defendpat436(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(722, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return  owl_escape_value(A) + owl_escape_value(B) + owl_escape_value(C) > 3;
}

static int
autohelperowl_defendpat437(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(B) > 0 || owl_escape_value(a) > 0) && play_attack_defend2_n(color, 1, 2, move, a, a, C);
}

static int
autohelperowl_defendpat438(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_attack_defend_n(color, 1, 2, move, c, d);
}

static int
autohelperowl_defendpat439(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return (owl_escape_value(a) > 0) && !play_connect_n(color, 0, 1, move, move, B);
}

static int
autohelperowl_defendpat440(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(722, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && (!somewhere(OTHER_COLOR(color), 0, 1, c) || play_attack_defend2_n(color, 1, 2, move, d, c, d));
}

static int
autohelperowl_defendpat441(int trans, int move, int color, int action)
{
  int c, d, e, f, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(609, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && (play_attack_defend_n(color, 1, 4, move, c, d, f, e) && play_attack_defend_n(color, 1, 4, move, c, d, f, f));
}

static int
autohelperowl_defendpat442(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat443(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat444(int trans, int move, int color, int action)
{
  int a, c, d, e, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(756, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);
  e = AFFINE_TRANSFORM(793, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(c)>0 || owl_escape_value(d)>0 || owl_escape_value(e)>0)&& countlib(B)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>=2 && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat445(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(645, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);

  return (owl_escape_value(b)>0 || owl_escape_value(c)>0 || owl_escape_value(d)>0)&& !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat446(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);

  return (owl_strong_dragon(a) || owl_strong_dragon(b)) && !play_connect_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_defendpat447(int trans, int move, int color, int action)
{
  int a, b, c, d, A, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);
  d = AFFINE_TRANSFORM(757, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(794, trans, move);

  return  owl_escape_value(d) > 0 && play_attack_defend2_n(color, 1, 5, move, a, b, c, d, B, c) && play_connect_n(color, 1, 6, move, a, b, c, d, NO_MOVE, A, C);
}

static int
autohelperowl_defendpat448(int trans, int move, int color, int action)
{
  int a, b, d, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(611, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a) > 0 && play_attack_defend2_n(color, 1, 2, move, b, C, b)&& !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, d);
}

static int
autohelperowl_defendpat449(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return countlib(A) == 2;
}

static int
autohelperowl_defendpat450(int trans, int move, int color, int action)
{
  int a, A, B, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);
  C = AFFINE_TRANSFORM(720, trans, move);
  D = AFFINE_TRANSFORM(721, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_connect_n(OTHER_COLOR(color), 0, 0, A, C) && play_attack_defend_n(color, 1, 2, move, a, D);
}

static int
autohelperowl_defendpat451(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(573, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && safe_move(move, OTHER_COLOR(color)) && !play_connect_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat452(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return (owl_escape_value(a) > 0 || owl_escape_value(b) > 0)&& play_connect_n(color, 0, 1, move, a, b) != WIN;
}

static int
autohelperowl_defendpat453(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(648, trans, move);
  C = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A)>1 && countlib(B)>1 && countlib(C)>1;
}

static int
autohelperowl_defendpat454(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_defendpat455(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);
  B = AFFINE_TRANSFORM(649, trans, move);

  return  (countlib(A)>1) && (countlib(B)>1);
}

static int
autohelperowl_defendpat456(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return  (is_legal(move, color) && owl_topological_eye(a, board[B])==3) || (!is_legal(move, color) && owl_topological_eye(a, board[B])==2);
}

static int
autohelperowl_defendpat458(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat459(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat460(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat466(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return ATTACK_MACRO(A) != 0;
}

static int
autohelperowl_defendpat467(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat469(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(756, trans, move);

  return countlib(a) > 1;
}

static int
autohelperowl_defendpat471(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1 && finish_ko_helper(A);
}

static int
autohelperowl_defendpat472(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1 && finish_ko_helper(A);
}

static int
autohelperowl_defendpat473(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && squeeze_ko_helper(A);
}

static int
autohelperowl_defendpat474(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && squeeze_ko_helper(A);
}

static int
autohelperowl_defendpat475(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(795, trans, move);

  return ATTACK_MACRO(A);
}

static int
autohelperowl_defendpat476(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);

  return !safe_move(a, OTHER_COLOR(color));
}

static int
autohelperowl_defendpat477(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 0, 1, move, a) != WIN && play_attack_defend_n(color, 1, 1, move, a) == 0;
}

static int
autohelperowl_defendpat478(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_defendpat481(int trans, int move, int color, int action)
{
  int a, b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return  somewhere(color, 0, 3, a, b, c) && vital_chain(A) && !play_attack_defend_n(color, 0, 3, move, NO_MOVE, d, A);
}

static int
autohelperowl_defendpat482(int trans, int move, int color, int action)
{
  int a, b, c, d, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return  somewhere(color, 0, 3, a, b, c) && vital_chain(B) && !play_attack_defend_n(color, 0, 3, move, NO_MOVE, d, B);
}

static int
autohelperowl_defendpat483(int trans, int move, int color, int action)
{
  int b, A, B;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(719, trans, move);
  A = AFFINE_TRANSFORM(645, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return  countlib(A) >= 3 && countlib(B) == 3 && accuratelib(b, color, MAX_LIBERTIES, NULL) > 2;
}

static int
autohelperowl_defendpat486(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return  somewhere(color, 0, 1, b) || (somewhere(OTHER_COLOR(color), 0, 1, b) ? !play_attack_defend_n(color, 0, 1, move, b) : !play_attack_defend_n(color, 0, 2, move, b, b));
}

static int
autohelperowl_defendpat487(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return  somewhere(color, 0, 1, b) || (somewhere(OTHER_COLOR(color), 0, 1, b) ? !play_attack_defend_n(color, 0, 1, move, b) : !play_attack_defend_n(color, 0, 2, move, b, b));
}

static int
autohelperowl_defendpat489(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return  owl_proper_eye(a) && !ATTACK_MACRO(B);
}

static struct pattern_attribute attributes[] = {
#ifdef HAVE_TRANSPARENT_UNIONS
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_TO_CAPTURE,{.offset=646}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_TO_CAPTURE,{.offset=720}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_TO_CAPTURE,{.offset=645}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=685}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=648}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=648}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=647}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=609}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {REVERSE_SENTE,{.offset=609}},
  {LAST_ATTRIBUTE,{.offset=0}}
#else
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_TO_CAPTURE,0.0,646},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_TO_CAPTURE,0.0,720},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_TO_CAPTURE,0.0,645},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,685},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,648},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,648},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,647},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,609},
  {LAST_ATTRIBUTE,0.0,0},
  {REVERSE_SENTE,0.0,609},
  {LAST_ATTRIBUTE,0.0,0}
#endif
};

static struct pattern owl_defendpat[] = {
  {owl_defendpat0,2,8, "D1",-2,0,2,3,4,3,0x2,759,
    { 0x3f3f3f0f, 0x00ffffff, 0xf0f0f0f0, 0xfffc0000, 0xffff0000, 0x3f3f3f3f, 0x00fcffff, 0xf0f0f0c0},
    { 0x00101008, 0x00500000, 0x10100000, 0x02140000, 0x00500000, 0x10100000, 0x00140200, 0x00101080}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat0,0,1.000000},
  {owl_defendpat1,2,8, "D2",-2,-2,2,1,4,3,0x2,720,
    { 0xffbfffff, 0xefffffff, 0xfcf8fcfc, 0xffffef00, 0xffffef00, 0xffbfffff, 0xefffffff, 0xfcf8fcfc},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat2,1,8, "D3",0,-2,4,1,4,3,0x2,685,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,77.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat3,2,8, "D4",-1,-1,3,2,4,3,0x2,685,
    { 0xecfcfcfc, 0xfcf8fc00, 0xffffef00, 0xffbfffff, 0xfcf8fcfc, 0xfcfcec00, 0xffbfff00, 0xefffffff},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x0,83.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat4,1,8, "D100",-1,-1,2,2,3,3,0x2,721,
    { 0x3c3fffff, 0xc0fcfcf0, 0xfcf0f000, 0xffff0f00, 0xfcfcc000, 0xff3f3c00, 0x0fffff3f, 0xf0f0fcfc},
    { 0x28100000, 0x00180800, 0x0010a000, 0x80900000, 0x08180000, 0x00102800, 0x00908000, 0xa0100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat5,2,8, "D101",-1,-1,3,3,4,4,0x2,645,
    { 0xf4fcf000, 0xffff3400, 0x3fff7f3f, 0x70fcfcfc, 0x34ffffff, 0xf0fcf4f0, 0xfcfc7000, 0x7fff3f00},
    { 0x00181000, 0x00502000, 0x10900000, 0x20140000, 0x20500000, 0x10180000, 0x00142000, 0x00901000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat6,2,8, "D102",-1,-1,2,2,3,3,0x2,721,
    { 0x1cffffff, 0xf0f4fcf0, 0xfcfcd000, 0xff7f3f00, 0xfcf4f000, 0xffff1c00, 0x3f7fff3f, 0xd0fcfcfc},
    { 0x00a05000, 0x60600000, 0x14280000, 0x00242400, 0x00606000, 0x50a00000, 0x24240000, 0x00281400}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat7,3,8, "D103",-1,-1,2,2,3,3,0x2,721,
    { 0x3cffffff, 0xf0fcfcf0, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3c00, 0x3fffff3f, 0xf0fcfcfc},
    { 0x10a05000, 0x60640000, 0x14281000, 0x00642400, 0x00646000, 0x50a01000, 0x24640000, 0x10281400}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat8,2,8, "D104",-1,-1,1,2,2,3,0x2,720,
    { 0x0fffff00, 0xf0f0fcfc, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xffff0f00, 0x3c3cfcfc, 0xc0fcfc00},
    { 0x01900000, 0x20100004, 0x00180000, 0x00102000, 0x00102000, 0x00900100, 0x20100040, 0x00180000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat8,0,1.600000},
  {owl_defendpat9,3,8, "D104b",-1,-1,1,3,2,4,0x2,794,
    { 0x3fffff00, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfc00},
    { 0x11900000, 0x20140004, 0x00181000, 0x00502000, 0x00142000, 0x00901100, 0x20500040, 0x10180000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat9,0,1.600000},
  {owl_defendpat10,4,8, "D105",-2,-1,1,2,3,3,0x8,720,
    { 0xfcfefcfc, 0xfcfcfc20, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfefc00, 0xffffff20, 0xfcfcfcfc},
    { 0x00180404, 0x00106000, 0x40900000, 0x25100000, 0x60100000, 0x04180000, 0x00102500, 0x00904040}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat11,3,8, "D106",0,-2,3,2,3,4,0x2,722,
    { 0x00ffffff, 0xf0f0f0f0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xffff0000, 0x3f3f3f3f, 0x00fcffff},
    { 0x00924000, 0x60100020, 0x05180000, 0x00102404, 0x00106040, 0x40920000, 0x24100020, 0x00180500}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat12,1,8, "D107",-1,-1,3,2,4,3,0x2,685,
    { 0x3dffffff, 0xf0fcfcf4, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3d00, 0x3fffff7f, 0xf0fcfcfc},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x200,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat13,2,8, "D108",-2,-1,2,2,4,3,0x2,721,
    { 0xffffffff, 0xfcfffffd, 0xfcfcfcf0, 0xffffff00, 0xfffffc00, 0xffffff3d, 0xffffffff, 0xfcfcfcfc},
    { 0x21900000, 0x20180004, 0x00182000, 0x00902000, 0x00182000, 0x00902100, 0x20900040, 0x20180000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat14,2,8, "D109",-2,-1,2,2,4,3,0x2,647,
    { 0xffffffff, 0xfcfffffd, 0xfcfcfcf0, 0xffffff00, 0xfffffc00, 0xffffff3d, 0xffffffff, 0xfcfcfcfc},
    { 0x21100000, 0x00180004, 0x00102000, 0x00900000, 0x00180000, 0x00102100, 0x00900040, 0x20100000}
   , 0x800,95.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat15,4,8, "D110",-1,-3,2,3,3,6,0x2,610,
    { 0xfffeffff, 0xfcfcfcec, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfffeff00, 0xffffffef, 0xffffffff},
    { 0x02100100, 0x00100048, 0x00100000, 0x00100000, 0x00100000, 0x01100200, 0x00100084, 0x00100000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat16,1,8, "D111",0,-1,3,1,3,2,0x2,685,
    { 0x007cfcfc, 0xd0f0f000, 0xfcf40000, 0x3f3f1f00, 0xf0f0d000, 0xfc7c0000, 0x1f3f3f00, 0x00f4fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,79.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat17,6,8, "D112",-1,0,2,5,3,5,0x2,795,
    { 0x2f3f2f3f, 0x00b8fcfc, 0xe0f0e000, 0xffbb0000, 0xfcb80000, 0x2f3f2f00, 0x00bbffff, 0xe0f0e0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat18,1,8, "D113",-1,-2,2,2,3,4,0x2,647,
    { 0xf4ffffff, 0xfcfcf4f0, 0xffff7f00, 0x7fffffff, 0xf4fcfcfc, 0xfffff400, 0xffff7f3f, 0x7fffffff},
    { 0x20120000, 0x00180020, 0x00102000, 0x00900000, 0x00180000, 0x00122000, 0x00900020, 0x20100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat19,1,8, "D114",-1,0,2,2,3,2,0x2,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00200090, 0x00200000, 0x00200000, 0x00210200, 0x00200000, 0x00200000, 0x02210000, 0x00200018}
   , 0x0,77.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat20,2,8, "D115",0,-1,3,2,3,3,0x2,722,
    { 0x003c3ffe, 0x00f0f0c0, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3f3c0000, 0x033f3f0e, 0x00f0f0fc},
    { 0x00200040, 0x00200000, 0x00200000, 0x00200100, 0x00200000, 0x00200000, 0x01200000, 0x00200004}
   , 0x0,76.000000,attributes+0,1,NULL,autohelperowl_defendpat20,3,1.000000},
  {owl_defendpat21,2,8, "D116",-1,-2,1,0,2,2,0x2,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00900040, 0x20100000, 0x00180000, 0x00102100, 0x00102000, 0x00900000, 0x21100000, 0x00180004}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat21,0,0.010000},
  {owl_defendpat22,3,8, "D117",0,-2,2,2,2,4,0x2,647,
    { 0x00ffffff, 0xf0f0f0f0, 0xfefc0000, 0x3f3f3f08, 0xf0f0f080, 0xffff0000, 0x3f3f3f3f, 0x00fcfefc},
    { 0x00120100, 0x00100060, 0x00100000, 0x00100000, 0x00100000, 0x01120000, 0x00100024, 0x00100000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat22,0,0.010000},
  {owl_defendpat23,2,8, "D118",0,-1,3,2,3,3,0x2,648,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0x003cffff},
    { 0x00900400, 0x20104000, 0x40180000, 0x04102000, 0x40102000, 0x04900000, 0x20100400, 0x00184000}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_defendpat23,0,0.010000},
  {owl_defendpat24,3,8, "D119",-1,-2,2,2,3,4,0x2,647,
    { 0x3fffffff, 0xf0fcfcfc, 0xfffff000, 0xffff3f3f, 0xfcfcf0f0, 0xffff3f00, 0x3fffffff, 0xf0ffffff},
    { 0x25100000, 0x00180404, 0x00106000, 0x40900000, 0x04180000, 0x00102500, 0x00904040, 0x60100000}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat25,2,8, "D120",-1,-1,3,4,4,5,0x2,759,
    { 0x053fbfff, 0x80f0f4f4, 0xf8f04000, 0x7f3f0b00, 0xf4f08000, 0xbf3f0500, 0x0b3f7f7f, 0x40f0f8fc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,82.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat26,1,8, "D121",-1,-4,2,1,3,5,0x2,758,
    { 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat27,2,8, "D122",-2,-1,2,3,4,4,0x2,720,
    { 0xffffffff, 0xfcfcffff, 0xfcfcfcc0, 0xffffff00, 0xfffcfc00, 0xffffff0f, 0xffffffff, 0xfcfcfcfc},
    { 0xa0500000, 0x18180000, 0x00142800, 0x00909000, 0x00181800, 0x0050a000, 0x90900000, 0x28140000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat27,0,1.000000},
  {owl_defendpat28,4,8, "D123",-2,-1,1,3,3,4,0x2,648,
    { 0x203cfcfc, 0xc0f8f000, 0xfdf02000, 0x3fbf0f04, 0xf0f8c040, 0xfc3c2000, 0x0fbf3f00, 0x20f0fdfc},
    { 0x00100050, 0x00100000, 0x00100000, 0x00110100, 0x00100000, 0x00100000, 0x01110000, 0x00100014}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat29,5,8, "D124",-1,-2,2,1,3,3,0x2,721,
    { 0xfcfe7efe, 0x7cfcfca0, 0xf4fcfc00, 0xfffff700, 0xfcfc7c00, 0x7efefc00, 0xf7ffff2a, 0xfcfcf4fc},
    { 0x08502000, 0x10900800, 0x20148000, 0x80181000, 0x08901000, 0x20500800, 0x10188000, 0x80142000}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_defendpat29,0,1.600000},
  {owl_defendpat30,4,8, "D125",-2,-1,2,2,4,3,0x2,721,
    { 0xffffefff, 0xfcbefefc, 0xecfcfca0, 0xfffbff00, 0xfebefc00, 0xefffff28, 0xfffbffff, 0xfcfcecfc},
    { 0x02200100, 0x00200048, 0x00200000, 0x00200000, 0x00200000, 0x01200200, 0x00200084, 0x00200000}
   , 0x0,77.000000,attributes+0,1,NULL,autohelperowl_defendpat30,3,0.016000},
  {owl_defendpat31,6,8, "D126",-3,-2,2,3,5,5,0xa,758,
    { 0xffffffff, 0xfffffffe, 0xffffffff, 0xffffffff, 0xffffffff, 0xfffffffe, 0xffffffff, 0xffffffff},
    { 0x08100000, 0x02120800, 0x00108028, 0x80100000, 0x08120200, 0x001008a0, 0x00108000, 0x80100000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat32,8,8, "D127",-2,-3,1,2,3,5,0x2,683,
    { 0xfefefe00, 0xfcffffaa, 0xfffffff0, 0xfcfcfcfc, 0xfffffcfc, 0xfefefe3e, 0xfcfcfca8, 0xffffff00},
    { 0x04200000, 0x00200400, 0x00214000, 0x40200010, 0x04200010, 0x00200400, 0x00204000, 0x40210000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat33,2,8, "D200",-1,-1,2,3,3,4,0x2,759,
    { 0x3cffffff, 0xf0fcfcf0, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3c00, 0x3fffff3f, 0xf0fcfcfc},
    { 0x28500000, 0x10180800, 0x0014a000, 0x80901000, 0x08181000, 0x00502800, 0x10908000, 0xa0140000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat34,2,8, "D201",-1,-1,2,3,3,4,0x2,759,
    { 0x3cffffff, 0xf0fcfcf0, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3c00, 0x3fffff3f, 0xf0fcfcfc},
    { 0x28500000, 0x10180800, 0x0014a000, 0x80901000, 0x08181000, 0x00502800, 0x10908000, 0xa0140000}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat35,2,8, "D202",-1,-1,2,2,3,3,0x2,722,
    { 0x3fffffff, 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc},
    { 0x20580000, 0x10182000, 0x00942000, 0x20901000, 0x20181000, 0x00582000, 0x10902000, 0x20940000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat36,1,8, "D203",0,-1,2,2,2,3,0x2,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00a04000, 0x60200000, 0x04280000, 0x00202400, 0x00206000, 0x40a00000, 0x24200000, 0x00280400}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat37,1,8, "D204",-1,-1,1,2,2,3,0x2,685,
    { 0x003cf43c, 0xc0f07000, 0x7cf00000, 0x373f0c00, 0x70f0c000, 0xf43c0000, 0x0c3f3700, 0x00f07cf0},
    { 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat37,0,0.610000},
  {owl_defendpat38,2,8, "D205",-1,-1,2,1,3,2,0x2,722,
    { 0x303cfcfc, 0xc0fcf000, 0xfcf03000, 0x3fff0f00, 0xf0fcc000, 0xfc3c3000, 0x0fff3f00, 0x30f0fcfc},
    { 0x20184000, 0x40182000, 0x04902000, 0x20900400, 0x20184000, 0x40182000, 0x04902000, 0x20900400}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat39,2,8, "D206",-1,-1,1,3,2,4,0x2,721,
    { 0x37bc3f00, 0x20fcf4cc, 0xf0f87000, 0x7cfc2000, 0xf4fc2000, 0x3fbc3700, 0x20fc7ccc, 0x70f8f000},
    { 0x22100000, 0x00180008, 0x00102000, 0x00900000, 0x00180000, 0x00102200, 0x00900080, 0x20100000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat40,3,8, "D207",0,-1,2,2,2,3,0x2,722,
    { 0x003fbdbf, 0x80f0f070, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbd3f0000, 0x0a3f3f37, 0x00f0f8f8},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,66.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat41,2,8, "D208",-1,0,2,3,3,3,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat42,2,8, "D209",-1,0,1,2,2,2,0x2,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x05200000, 0x00200404, 0x00204000, 0x40200000, 0x04200000, 0x00200500, 0x00204040, 0x40200000}
   , 0x20,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat43,2,8, "D209a",-1,0,1,2,2,2,0x2,722,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x05200000, 0x00200404, 0x00204000, 0x40200000, 0x04200000, 0x00200500, 0x00204040, 0x40200000}
   , 0x20,35.000000,attributes+0,1,NULL,autohelperowl_defendpat43,3,1.000000},
  {owl_defendpat44,3,8, "D209b",0,-1,2,2,2,3,0x2,685,
    { 0x003efeff, 0xc0f0f0a0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfe3e0000, 0x0f3f3f2b, 0x00f0fcfc},
    { 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800}
   , 0x20,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat45,3,8, "D210",0,-1,2,2,2,3,0x2,685,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00148100, 0x80101040, 0x08500000, 0x10100800, 0x10108000, 0x81140000, 0x08101004, 0x00500800}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat46,3,8, "D211",-2,-1,2,1,4,2,0x8,647,
    { 0x7fffff00, 0xf4fcfcfc, 0xfffdf400, 0xfcfc7c1c, 0xfcfcf4d0, 0xffff7f00, 0x7cfcfcfc, 0xf4fdff00},
    { 0x25100000, 0x00180404, 0x00106000, 0x40900000, 0x04180000, 0x00102500, 0x00904040, 0x60100000}
   , 0x0,71.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat47,4,8, "D212",-1,-3,1,2,2,5,0x2,722,
    { 0xc0fcfe00, 0xfcf0f080, 0xffff0c00, 0x3c3cfc3c, 0xf0f0fcf0, 0xfefcc000, 0xfc3c3c08, 0x0cffff00},
    { 0x40186000, 0x44902000, 0x26900400, 0x20184408, 0x20904480, 0x60184000, 0x44182000, 0x04902600}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat48,1,8, "D213",-1,0,2,3,3,3,0x2,723,
    { 0x003f3fff, 0x00f0f0f0, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3f3f0000, 0x033f3f3f, 0x00f0f0fc},
    { 0x00100080, 0x00100000, 0x00100000, 0x00100200, 0x00100000, 0x00100000, 0x02100000, 0x00100008}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat48,0,3.000000},
  {owl_defendpat49,2,8, "D214",0,-1,2,1,2,2,0x2,685,
    { 0x00b4fcfc, 0xe0f0d000, 0xfc780000, 0x1f3f2f00, 0xd0f0e000, 0xfcb40000, 0x2f3f1f00, 0x0078fcfc},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat50,2,8, "D215",-2,-1,2,2,4,3,0x2,685,
    { 0xffffffff, 0xfcfcffff, 0xfcfcfcc0, 0xffffff00, 0xfffcfc00, 0xffffff0f, 0xffffffff, 0xfcfcfcfc},
    { 0x0a250000, 0x00201818, 0x00608000, 0x90200000, 0x18200000, 0x00250a00, 0x00209090, 0x80600000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat51,2,8, "D216",0,-1,2,2,2,3,0x2,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0x00fcffff},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat52,2,8, "D217",-1,0,1,3,2,3,0x2,758,
    { 0x2f3f3f00, 0x00f8fcfc, 0xf0f0e000, 0xfcbc0000, 0xfcf80000, 0x3f3f2f00, 0x00bcfcfc, 0xe0f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat53,2,8, "D217a",-1,0,1,3,2,3,0x2,758,
    { 0x2f3f3700, 0x00f87cfc, 0x70f0e000, 0xf4bc0000, 0x7cf80000, 0x373f2f00, 0x00bcf4fc, 0xe0f07000},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat53,0,1.000000},
  {owl_defendpat54,1,8, "D217b",-1,0,1,3,2,3,0x2,758,
    { 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat54,0,0.610000},
  {owl_defendpat55,1,8, "D217c",-1,0,1,3,2,3,0x2,758,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat55,0,1.000000},
  {owl_defendpat56,3,8, "D217d",-1,0,1,3,2,3,0x2,758,
    { 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000},
    { 0x12100000, 0x00140008, 0x00101000, 0x00500000, 0x00140000, 0x00101200, 0x00500080, 0x10100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat57,3,8, "D217e",-1,0,1,3,2,3,0x2,758,
    { 0x3f3f3700, 0x00fc7cfc, 0x70f0f000, 0xf4fc0000, 0x7cfc0000, 0x373f3f00, 0x00fcf4fc, 0xf0f07000},
    { 0x12100000, 0x00140008, 0x00101000, 0x00500000, 0x00140000, 0x00101200, 0x00500080, 0x10100000}
   , 0x10,10.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat58,4,8, "D218",-1,-3,2,3,3,6,0x2,611,
    { 0xfffeffff, 0xfcfcfcec, 0xfffffd00, 0xffffff7f, 0xfcfcfcf4, 0xfffeff00, 0xffffffef, 0xfdffffff},
    { 0x02100100, 0x00100048, 0x00100000, 0x00100000, 0x00100000, 0x01100200, 0x00100084, 0x00100000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat59,4,8, "D220",-1,-1,1,3,2,4,0x2,758,
    { 0x2bbfff00, 0xe0f8f8fc, 0xfcf8a000, 0xbcbc2c00, 0xf8f8e000, 0xffbf2b00, 0x2cbcbcfc, 0xa0f8fc00},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_defendpat59,0,0.010000},
  {owl_defendpat60,3,8, "D221",-1,0,1,3,2,3,0x2,758,
    { 0x283f3f00, 0x00f8f8f0, 0xf0f0a000, 0xbcbc0000, 0xf8f80000, 0x3f3f2800, 0x00bcbc3c, 0xa0f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat61,4,8, "D221b",-1,0,1,3,2,3,0x2,758,
    { 0x283f3f00, 0x00f8f8f0, 0xf0f0a000, 0xbcbc0000, 0xf8f80000, 0x3f3f2800, 0x00bcbc3c, 0xa0f0f000},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat62,2,8, "D222",-1,-1,2,2,3,3,0x2,722,
    { 0x007cfff7, 0xd0f0f0c0, 0xfcf40000, 0x3d3f1f00, 0xf0f0d000, 0xff7c0000, 0x1f3f3d0f, 0x00f4fc7c},
    { 0x00205000, 0x40600000, 0x14200000, 0x00240400, 0x00604000, 0x50200000, 0x04240000, 0x00201400}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat63,4,8, "D223",-1,-2,1,2,2,4,0x2,647,
    { 0xffffff00, 0xfcfcfcfc, 0xfefefc00, 0xfcfcfc28, 0xfcfcfca0, 0xffffff00, 0xfcfcfcfc, 0xfcfefe00},
    { 0xa1100000, 0x08180004, 0x00102800, 0x00908000, 0x00180800, 0x0010a100, 0x80900040, 0x28100000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat63,0,1.600000},
  {owl_defendpat64,3,8, "D224",-1,-1,1,2,2,3,0x2,685,
    { 0x283c7cfc, 0x40f8f800, 0xf4f0a000, 0xbfbf0700, 0xf8f84000, 0x7c3c2800, 0x07bfbf00, 0xa0f0f4fc},
    { 0x00100080, 0x00100000, 0x00100000, 0x00100200, 0x00100000, 0x00100000, 0x02100000, 0x00100008}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat65,4,8, "D225",-1,-1,2,3,3,4,0x2,648,
    { 0xc0fcfcfc, 0xfcf0f000, 0xffff0c00, 0x3f3fff3f, 0xf0f0fcf0, 0xfcfcc000, 0xff3f3f00, 0x0cffffff},
    { 0x80101820, 0x08508000, 0x90110800, 0x08168010, 0x80500810, 0x18108000, 0x80160800, 0x08119020}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat66,4,8, "D226",-1,0,2,2,3,2,0x2,722,
    { 0x003fbfef, 0x80f0f0f0, 0xf8f00000, 0x3f3e0b00, 0xf0f08000, 0xbf3f0000, 0x0b3e3f3f, 0x00f0f8ec},
    { 0x00240048, 0x00201000, 0x00600000, 0x12200100, 0x10200000, 0x00240000, 0x01201200, 0x00600084}
   , 0x2000,45.000000,attributes+0,1,NULL,autohelperowl_defendpat66,3,0.016000},
  {owl_defendpat67,4,8, "D227",-1,-1,2,2,3,3,0x2,648,
    { 0xfcfcfcf8, 0xfcfcfc00, 0xffffff00, 0xfeffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xfffffe00, 0xffffffbf},
    { 0x48240400, 0x04205800, 0x40608400, 0x94204000, 0x58200400, 0x04244800, 0x40209400, 0x84604000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat67,3,0.610000},
  {owl_defendpat68,5,8, "D228",-1,-1,2,2,3,3,0x2,758,
    { 0xffffffbf, 0xfcfcfcfc, 0xfcfcfc00, 0xfffffe00, 0xfcfcfc00, 0xffffff00, 0xfeffffff, 0xfcfcfcf8},
    { 0x84684400, 0x58206400, 0x44a44800, 0x64209400, 0x64205800, 0x44688400, 0x94206400, 0x48a44400}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat68,3,0.610000},
  {owl_defendpat69,5,8, "D229",-1,-1,1,2,2,3,0x2,683,
    { 0xbcfcfc00, 0xfafeff00, 0xfcfcf8e8, 0xfcfcbc00, 0xfffefa00, 0xfcfcbcac, 0xbcfcfc00, 0xf8fcfc00},
    { 0x00609000, 0x90600000, 0x18240000, 0x00241800, 0x00609000, 0x90600000, 0x18240000, 0x00241800}
   , 0x0,76.000000,attributes+0,1,NULL,autohelperowl_defendpat69,3,0.010000},
  {owl_defendpat70,3,8, "D230",0,-2,2,4,2,6,0x2,574,
    { 0x00fcfefc, 0xf0f0f080, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfefc0000, 0x3f3f3f08, 0x00ffffff},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat70,0,10.000000},
  {owl_defendpat71,6,8, "D231",-2,-2,2,1,4,3,0x1,723,
    { 0x2a3efeff, 0xc0f8f8a8, 0xfcf0a000, 0xbfbf0f00, 0xf8f8c000, 0xfe3e2a00, 0x0fbfbfab, 0xa0f0fcfc},
    { 0x00100020, 0x00100000, 0x00100000, 0x00120000, 0x00100000, 0x00100000, 0x00120000, 0x00100020}
   , 0x2810,70.000000,attributes+0,1,NULL,autohelperowl_defendpat71,0,1.141360},
  {owl_defendpat72,4,8, "D232",-1,-1,1,3,2,4,0x2,795,
    { 0x0cffff00, 0xf0f0fcf0, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xffff0c00, 0x3c3cfc3c, 0xc0fcfc00},
    { 0x04910400, 0x20104410, 0x40184000, 0x44102000, 0x44102000, 0x04910400, 0x20104410, 0x40184000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat72,0,0.376000},
  {owl_defendpat73,9,8, "D233",0,-3,2,1,2,4,0x2,685,
    { 0x00b0fcbc, 0xe0f0c000, 0xfe3a0000, 0x0f3f2e2a, 0xc0f0e0a0, 0xfcb00000, 0x2e3f0f00, 0x003afefa},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x20,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat74,2,8, "D234",-1,-3,1,1,2,4,0x2,647,
    { 0xd0f0f800, 0xfcf48000, 0xbf3f1f00, 0x087cfcfc, 0x80f4fcfc, 0xf8f0d000, 0xfc7c0800, 0x1f3fbf00},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat74,3,16.000000},
  {owl_defendpat75,1,8, "D235",-1,-2,2,5,3,7,0x2,796,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat76,1,8, "D300",-1,0,1,4,2,4,0x0,685,
    { 0x007cfcfc, 0xd0f0f000, 0xfcf40000, 0x3f3f1f00, 0xf0f0d000, 0xfc7c0000, 0x1f3f3f00, 0x00f4fcfc},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat76,0,0.010000},
  {owl_defendpat77,2,8, "D301",-1,0,1,3,2,3,0x0,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00940000, 0x20101000, 0x00580000, 0x10102000, 0x10102000, 0x00940000, 0x20101000, 0x00580000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat77,0,0.010000},
  {owl_defendpat78,1,8, "D302",0,-1,2,2,2,3,0x0,685,
    { 0x00fcfcf0, 0xf0f0f000, 0xfffc0000, 0x3c3f3f0c, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3c00, 0x00fcff3c},
    { 0x00280400, 0x00206000, 0x40a00000, 0x24200000, 0x60200000, 0x04280000, 0x00202400, 0x00a04000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat79,2,8, "D303",-1,-1,2,2,3,3,0x0,722,
    { 0xf0fcff3c, 0xfcfcf0c0, 0xfcfc3c00, 0x3ffffc00, 0xf0fcfc00, 0xfffcf000, 0xfcff3f0c, 0x3cfcfcf0},
    { 0x90902000, 0x28940000, 0x20181800, 0x0058a000, 0x00942800, 0x20909000, 0xa0580000, 0x18182000}
   , 0x800,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat80,2,8, "D304",-1,0,1,2,2,2,0x0,721,
    { 0x00fcfc0c, 0xf0f0f000, 0xfcfc0000, 0x3f3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3f00, 0x00fcfcc0},
    { 0x00604000, 0x50200000, 0x04240000, 0x00201400, 0x00205000, 0x40600000, 0x14200000, 0x00240400}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat80,3,1.000000},
  {owl_defendpat81,1,8, "D305",-1,-2,2,1,3,3,0x0,685,
    { 0x30ffffff, 0xf0fcf0f0, 0xfcfc3000, 0x3fff3f00, 0xf0fcf000, 0xffff3000, 0x3fff3f3f, 0x30fcfcfc},
    { 0x00200100, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat82,2,8, "D306",-1,0,2,3,3,3,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat82,3,4.800000},
  {owl_defendpat83,2,8, "D307",-1,-2,1,2,2,4,0x0,721,
    { 0x30ffff00, 0xf0fcf0f0, 0xfcff3000, 0x3cfc3c30, 0xf0fcf030, 0xffff3000, 0x3cfc3c3c, 0x30fffc00},
    { 0x00209100, 0x80600040, 0x18200000, 0x00240800, 0x00608000, 0x91200000, 0x08240004, 0x00201800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat83,3,1.000000},
  {owl_defendpat84,2,8, "D308",0,-2,1,0,1,2,0x0,722,
    { 0x003c3c2c, 0x00f0f000, 0xf0f00000, 0x3f3e0000, 0xf0f00000, 0x3c3c0000, 0x003e3f00, 0x00f0f0e0},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x830,77.000000,attributes+0,1,NULL,autohelperowl_defendpat84,0,1.960000},
  {owl_defendpat85,4,8, "D309",-1,0,1,2,2,2,0x0,685,
    { 0x0038f838, 0xc0f0a000, 0xbcb00000, 0x2a3f0c00, 0xa0f0c000, 0xf8380000, 0x0c3f2a00, 0x00b0bcb0},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat85,3,1.600000},
  {owl_defendpat86,4,8, "D309a",-1,0,1,2,2,2,0x0,685,
    { 0x0038f838, 0xc0f0a000, 0xbcb00000, 0x2a3f0c00, 0xa0f0c000, 0xf8380000, 0x0c3f2a00, 0x00b0bcb0},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x800,60.000000,attributes+0,1,NULL,autohelperowl_defendpat86,3,1.006000},
  {owl_defendpat87,1,8, "D309b",-1,0,2,2,3,2,0x0,722,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,61.000000,attributes+0,1,NULL,autohelperowl_defendpat87,3,1.600000},
  {owl_defendpat88,5,8, "D310a",-2,-1,1,1,3,2,0x0,646,
    { 0xfcfca000, 0xbcbe3c00, 0x28fcfc20, 0xf0f8f800, 0x3cbebc00, 0xa0fcfc20, 0xf8f8f000, 0xfcfc2800},
    { 0x04180000, 0x00102400, 0x00904000, 0x60100000, 0x24100000, 0x00180400, 0x00106000, 0x40900000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat88,0,0.970000},
  {owl_defendpat89,5,8, "D310b",-2,-1,1,1,3,2,0x0,646,
    { 0xfcfca000, 0xbcbe3c00, 0x28fcfc20, 0xf0f8f800, 0x3cbebc00, 0xa0fcfc20, 0xf8f8f000, 0xfcfc2800},
    { 0x04180000, 0x00102400, 0x00904000, 0x60100000, 0x24100000, 0x00180400, 0x00106000, 0x40900000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat89,0,0.592000},
  {owl_defendpat90,2,8, "D311",0,-1,2,1,2,2,0x0,685,
    { 0x00f0fcc0, 0xf0f0c000, 0xfc3c0000, 0x0c3c3f00, 0xc0f0f000, 0xfcf00000, 0x3f3c0c00, 0x003cfc0c},
    { 0x00600400, 0x10204000, 0x40240000, 0x04201000, 0x40201000, 0x04600000, 0x10200400, 0x00244000}
   , 0x20,60.000000,attributes+0,1,NULL,autohelperowl_defendpat90,3,1.000000},
  {owl_defendpat91,1,8, "D313",-1,-2,2,0,3,2,0x0,685,
    { 0x00fffffc, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3c, 0x00fcfcfc},
    { 0x00920200, 0x201000a0, 0x00180000, 0x00102000, 0x00102000, 0x02920000, 0x20100028, 0x00180000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat92,3,8, "D314",-1,-2,2,2,3,4,0x0,722,
    { 0xf0ffffff, 0xfcfcf0f0, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0xfffff000, 0xffff3f3f, 0x3fffffff},
    { 0x80681000, 0x18602000, 0x10a50a00, 0x20249090, 0x20601818, 0x10688000, 0x90242000, 0x0aa51000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat93,6,8, "D315",-1,0,1,2,2,2,0x0,722,
    { 0x00fcfca8, 0xf0f0f000, 0xfcfc0000, 0x3e3e3e00, 0xf0f0f000, 0xfcfc0000, 0x3e3e3e00, 0x00fcfca8},
    { 0x00584000, 0x50102000, 0x04940000, 0x20101400, 0x20105000, 0x40580000, 0x14102000, 0x00940400}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat93,0,1.000000},
  {owl_defendpat94,2,8, "D316",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat94,0,1.000000},
  {owl_defendpat95,2,8, "D317",-1,0,1,2,2,2,0x0,685,
    { 0x00fcfc0c, 0xf0f0f000, 0xfcfc0000, 0x3f3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3f00, 0x00fcfcc0},
    { 0x00604000, 0x50200000, 0x04240000, 0x00201400, 0x00205000, 0x40600000, 0x14200000, 0x00240400}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat95,3,1.600000},
  {owl_defendpat96,5,8, "D318",-1,-1,1,2,2,3,0x0,722,
    { 0xf8fcfc7c, 0xfcfcf800, 0xfcfcbc00, 0xbffffd00, 0xf8fcfc00, 0xfcfcf800, 0xfdffbf00, 0xbcfcfcf4},
    { 0x50609020, 0x94640000, 0x18241400, 0x00665800, 0x00649400, 0x90605000, 0x58660000, 0x14241820}
   , 0x0,82.000000,attributes+0,1,NULL,autohelperowl_defendpat96,3,1.000000},
  {owl_defendpat97,3,8, "D319",-1,-2,1,1,2,3,0x0,721,
    { 0xffffbf00, 0xbcfcfcfc, 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbfffff00, 0xf8fcfcfc, 0xfcfcf800},
    { 0x80601200, 0x18600080, 0x10240800, 0x00249000, 0x00601800, 0x12608000, 0x90240008, 0x08241000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat97,3,0.010000},
  {owl_defendpat98,4,8, "D320",-2,-1,1,2,3,3,0x0,686,
    { 0xf8fcfcfc, 0xfcfcf800, 0xfcfebc00, 0xbfffff20, 0xf8fcfc20, 0xfcfcf800, 0xffffbf00, 0xbcfefcfc},
    { 0x40180000, 0x04102000, 0x00900400, 0x20104000, 0x20100400, 0x00184000, 0x40102000, 0x04900000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat99,1,8, "D400",-1,0,1,1,2,1,0x5,685,
    { 0x00fc7c00, 0x70f0f000, 0xf4fc0000, 0x3c3c3400, 0xf0f07000, 0x7cfc0000, 0x343c3c00, 0x00fcf400},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat99,0,1.000000},
  {owl_defendpat100,1,8, "D401",-1,0,1,1,2,1,0x5,648,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat100,0,0.010000},
  {owl_defendpat101,1,8, "D402",0,-2,3,2,3,4,0x6,719,
    { 0x3f3f3f3f, 0x00ffffff, 0xf0f0f0f0, 0xffff0000, 0xffff0000, 0x3f3f3f3f, 0x00ffffff, 0xf0f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat102,2,8, "D403",-2,-1,1,2,3,3,0xa,721,
    { 0xfffffdf0, 0xfcfcfc7c, 0xfcfcfc00, 0xfcffff00, 0xfcfcfc00, 0xfdffff00, 0xfffffcf4, 0xfcfcfc3c},
    { 0x00200410, 0x00204000, 0x40200000, 0x04210000, 0x40200000, 0x04200000, 0x00210400, 0x00204010}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat103,2,8, "D404",-1,0,3,3,4,3,0x6,722,
    { 0x003fffef, 0xc0f0f0f0, 0xfcf00000, 0x3f3e0f00, 0xf0f0c000, 0xff3f0000, 0x0f3e3f3f, 0x00f0fcec},
    { 0x00200040, 0x00200000, 0x00200000, 0x00200100, 0x00200000, 0x00200000, 0x01200000, 0x00200004}
   , 0x0,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat104,3,8, "D405",0,-1,4,2,4,3,0x6,686,
    { 0x00b0bcfc, 0xa0f0c000, 0xfb3b0000, 0x0f3f2b3f, 0xc0f0a0f0, 0xbcb00000, 0x2b3f0f00, 0x003bfbff},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_defendpat104,0,0.610000},
  {owl_defendpat105,4,8, "D406",0,-2,3,2,3,4,0xa,723,
    { 0x00bcfcfd, 0xe0f0f000, 0xfffa0000, 0x3f3f2f2f, 0xf0f0e0e0, 0xfcbc0000, 0x2f3f3f01, 0x00faffff},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat106,3,8, "D407",-1,-2,2,2,3,4,0xa,647,
    { 0xf0fcffff, 0xfcfcf0c0, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0xfffcf000, 0xffff3f0f, 0x3fffffff},
    { 0x20180500, 0x00186040, 0x40902000, 0x24900000, 0x60180000, 0x05182000, 0x00902404, 0x20904000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat107,4,8, "D408",-1,-1,1,2,2,3,0xa,721,
    { 0xacffff00, 0xf8f8fcf0, 0xfcfce800, 0xfcbcbc00, 0xfcf8f800, 0xffffac00, 0xbcbcfc3c, 0xe8fcfc00},
    { 0x04120000, 0x00100420, 0x00104000, 0x40100000, 0x04100000, 0x00120400, 0x00104020, 0x40100000}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat108,2,8, "D409",0,-1,3,3,3,4,0x6,722,
    { 0x00bfffff, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbf0000, 0x2f3f3f3f, 0x00f8fcfc},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat109,3,8, "D500",-1,-1,1,2,2,3,0x2,685,
    { 0x7fffff00, 0xf4fcfcfc, 0xfcfcf400, 0xfcfc7c00, 0xfcfcf400, 0xffff7f00, 0x7cfcfcfc, 0xf4fcfc00},
    { 0x25900000, 0x20180404, 0x00186000, 0x40902000, 0x04182000, 0x00902500, 0x20904040, 0x60180000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat110,3,8, "D502",-1,-1,1,2,2,3,0x2,685,
    { 0x3fffff00, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfc00},
    { 0x21910000, 0x20180014, 0x00182000, 0x00902000, 0x00182000, 0x00912100, 0x20900050, 0x20180000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat111,3,8, "D503",-1,-2,1,0,2,2,0x8,686,
    { 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0x3c3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c},
    { 0x00580400, 0x10106000, 0x40940000, 0x24101000, 0x60101000, 0x04580000, 0x10102400, 0x00944000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat111,0,3.160000},
  {owl_defendpat112,5,8, "D503b",-1,-2,2,0,3,2,0x8,647,
    { 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3e00, 0x00ffffbc, 0x00fcfcf8, 0xf0f0f000, 0xffff0000, 0x3e3f3f3c},
    { 0x10101060, 0x00540000, 0x10101000, 0x00560100, 0x00540000, 0x10101000, 0x01560000, 0x10101024}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_defendpat112,0,0.610000},
  {owl_defendpat113,2,8, "D504",-1,-2,0,1,1,3,0x0,720,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat113,0,0.959200},
  {owl_defendpat114,3,8, "D505",0,-1,2,1,2,2,0x2,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00580400, 0x10106000, 0x40940000, 0x24101000, 0x60101000, 0x04580000, 0x10102400, 0x00944000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat114,0,1.186000},
  {owl_defendpat115,2,8, "D506",0,-1,2,1,2,2,0x2,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00180400, 0x00106000, 0x40900000, 0x24100000, 0x60100000, 0x04180000, 0x00102400, 0x00904000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat115,0,1.315600},
  {owl_defendpat116,3,8, "D507",-1,-2,1,2,2,4,0x2,721,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfffc00, 0xfcfcfc30, 0xfcfcfc30, 0xfffffe00, 0xfcfcfcbc, 0xfcfffc00},
    { 0xa0500000, 0x18180000, 0x00162800, 0x00909020, 0x00181820, 0x0050a000, 0x90900000, 0x28160000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat116,0,1.000000},
  {owl_defendpat117,4,8, "D508",-1,-2,1,2,2,4,0x2,720,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfffc00, 0xfcfcfc30, 0xfcfcfc30, 0xfffffe00, 0xfcfcfcbc, 0xfcfffc00},
    { 0xa0510000, 0x18180010, 0x00162800, 0x00909020, 0x00181820, 0x0051a000, 0x90900010, 0x28160000}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_defendpat117,0,1.000000},
  {owl_defendpat118,2,8, "D509",0,-1,1,1,1,2,0x2,722,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00186000, 0x40902000, 0x24900000, 0x20180400, 0x20904000, 0x60180000, 0x04182000, 0x00902400}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_defendpat118,0,1.000000},
  {owl_defendpat119,3,8, "D510",-1,-1,1,1,2,2,0x0,683,
    { 0x30fcf000, 0xf0fc3000, 0x3cfc3000, 0x30fc3c00, 0x30fcf000, 0xf0fc3000, 0x3cfc3000, 0x30fc3c00},
    { 0x00649000, 0x90601000, 0x18640000, 0x10241800, 0x10609000, 0x90640000, 0x18241000, 0x00641800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat119,3,1.000000},
  {owl_defendpat120,5,8, "D511",-1,-1,2,1,3,2,0x0,648,
    { 0xbcfcfcf4, 0xf8fcfc00, 0xfcfcf800, 0xfdffbf00, 0xfcfcf800, 0xfcfcbc00, 0xbffffd00, 0xf8fcfc7c},
    { 0x04241860, 0x00609400, 0x90604000, 0x58260100, 0x94600000, 0x18240400, 0x01265800, 0x40609024}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat120,3,1.000000},
  {owl_defendpat121,2,8, "D512",-2,-2,2,2,4,4,0x2,682,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x24900000, 0x20180400, 0x00186200, 0x40902080, 0x04182008, 0x00902400, 0x20904000, 0x62180000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat122,6,8, "D513",-2,-1,2,3,4,4,0x2,721,
    { 0xffffffff, 0xfcfcffff, 0xfcfcfcc0, 0xffffff00, 0xfffcfc00, 0xffffff0f, 0xffffffff, 0xfcfcfcfc},
    { 0xa4900000, 0x28180400, 0x00186800, 0x4090a000, 0x04182800, 0x0090a400, 0xa0904000, 0x68180000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat123,4,8, "D514",-1,-1,1,2,2,3,0x0,647,
    { 0x30fcfcbc, 0xf0fcf000, 0xfcfc3000, 0x3fff3e00, 0xf0fcf000, 0xfcfc3000, 0x3eff3f00, 0x30fcfcf8},
    { 0x20180404, 0x00186000, 0x40902000, 0x25900000, 0x60180000, 0x04182000, 0x00902500, 0x20904040}
   , 0x0,76.000000,attributes+0,1,NULL,autohelperowl_defendpat123,0,0.019600},
  {owl_defendpat124,4,8, "D515",0,-2,2,2,2,4,0x2,649,
    { 0x00fcffff, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0x00fcffff},
    { 0x00580600, 0x10106080, 0x41940000, 0x24101004, 0x60101040, 0x06580000, 0x10102408, 0x00944100}
   , 0x0,61.000000,attributes+0,1,NULL,autohelperowl_defendpat124,0,1.000000},
  {owl_defendpat125,5,8, "D600",-1,-2,1,1,2,3,0x2,720,
    { 0xfef73e00, 0x3cfcdcb8, 0xf07cfc00, 0xdcfcf000, 0xdcfc3c00, 0x3ef7fe00, 0xf0fcdcb8, 0xfc7cf000},
    { 0x00912400, 0x20904010, 0x60180000, 0x04182000, 0x40902000, 0x24910000, 0x20180410, 0x00186000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat126,5,8, "D600a",-1,-2,1,2,2,4,0x2,683,
    { 0xfef73e00, 0x3cfcdcb8, 0xf07cff00, 0xdcfcf0c0, 0xdcfc3c0c, 0x3ef7fe00, 0xf0fcdcb8, 0xff7cf000},
    { 0x00912400, 0x20904010, 0x60180200, 0x04182080, 0x40902008, 0x24910000, 0x20180410, 0x02186000}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat127,4,8, "D602",-1,0,1,2,2,2,0x2,648,
    { 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc},
    { 0x00100414, 0x00104000, 0x40100000, 0x05110000, 0x40100000, 0x04100000, 0x00110500, 0x00104050}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat127,0,1.600000},
  {owl_defendpat128,3,8, "D603",-1,0,1,2,2,2,0x2,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00180410, 0x00106000, 0x40900000, 0x24110000, 0x60100000, 0x04180000, 0x00112400, 0x00904010}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat128,0,1.960000},
  {owl_defendpat129,3,8, "D604",0,-1,1,2,1,3,0x2,722,
    { 0x00bf3d00, 0x20f0f070, 0xf0f80000, 0x3c3c2000, 0xf0f02000, 0x3dbf0000, 0x203c3c34, 0x00f8f000},
    { 0x00160000, 0x00101020, 0x00500000, 0x10100000, 0x10100000, 0x00160000, 0x00101020, 0x00500000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat129,0,0.970000},
  {owl_defendpat130,5,8, "D604a",0,-2,1,3,1,5,0x2,759,
    { 0x00ffff00, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0x00ffff00},
    { 0x00558000, 0x90101010, 0x0a550000, 0x10101818, 0x10109090, 0x80550000, 0x18101010, 0x00550a00}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat130,0,1.000000},
  {owl_defendpat131,6,8, "D605",0,-1,2,2,2,3,0x2,648,
    { 0x00b8fcfc, 0xe0f0e000, 0xffb80000, 0x2f3f2f0f, 0xe0f0e0c0, 0xfcb80000, 0x2f3f2f00, 0x00b8ffff},
    { 0x00100418, 0x00104000, 0x41100000, 0x06110004, 0x40100040, 0x04100000, 0x00110600, 0x00104190}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat132,3,8, "D606",-1,0,1,2,2,2,0x2,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00180418, 0x00106000, 0x40900000, 0x26110000, 0x60100000, 0x04180000, 0x00112600, 0x00904090}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat132,0,0.019600},
  {owl_defendpat133,2,8, "D607",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00648800, 0x90209000, 0x88640000, 0x18201800, 0x90209000, 0x88640000, 0x18201800, 0x00648800}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat133,3,0.019600},
  {owl_defendpat134,3,8, "D608",0,-1,1,2,1,3,0x2,722,
    { 0x00bfff00, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0x00f8fc00},
    { 0x00162000, 0x00901020, 0x20500000, 0x10180000, 0x10900000, 0x20160000, 0x00181020, 0x00502000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat134,0,1.000000},
  {owl_defendpat135,3,8, "D608b",0,-2,1,2,1,4,0x2,721,
    { 0x2c3c3c3c, 0x00faff00, 0xf0f0e0e0, 0xffbf0000, 0xfffa0000, 0x3c3c2c2c, 0x00bfff00, 0xe0f0f0f0},
    { 0x08100020, 0x00100800, 0x00108000, 0x80120000, 0x08100000, 0x00100800, 0x00128000, 0x80100020}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat135,0,0.610000},
  {owl_defendpat136,2,8, "D609",-1,0,1,2,2,2,0x2,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat137,7,8, "D610",-1,-2,1,2,2,4,0x2,611,
    { 0x2fffff00, 0xf0f8fcfc, 0xfffee000, 0xfcbc3c2c, 0xfcf8f0e0, 0xffff2f00, 0x3cbcfcfc, 0xe0feff00},
    { 0x0651a400, 0x90904418, 0x68144000, 0x44181800, 0x44909000, 0xa4510600, 0x18184490, 0x40146800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat137,0,0.050000},
  {owl_defendpat138,5,8, "D611",-1,-1,1,2,2,3,0x2,722,
    { 0x7cfcfcbc, 0xf4fcfc00, 0xfcfcf400, 0xffff7e00, 0xfcfcf400, 0xfcfc7c00, 0x7effff00, 0xf4fcfcf8},
    { 0x20944018, 0x60181000, 0x04582000, 0x12912400, 0x10186000, 0x40942000, 0x24911200, 0x20580490}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat138,0,0.010000},
  {owl_defendpat139,7,8, "D612",-1,-2,1,2,2,4,0x2,685,
    { 0xfcffff00, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcffff00},
    { 0x54210100, 0x04240450, 0x01215400, 0x40604014, 0x04240450, 0x01215400, 0x40604014, 0x54210100}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat140,7,8, "D613",0,-2,2,2,2,4,0x2,721,
    { 0x3f3f3f0f, 0x00fcffff, 0xf0f0f0c0, 0xfffc0000, 0xfffc0000, 0x3f3f3f0f, 0x00fcffff, 0xf0f0f0c0},
    { 0x10121005, 0x00540121, 0x10101040, 0x01540000, 0x01540000, 0x10121005, 0x00540121, 0x10101040}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat141,5,8, "D614",0,-1,2,1,2,2,0x2,648,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100498, 0x00104000, 0x40100000, 0x06110200, 0x40100000, 0x04100000, 0x02110600, 0x00104098}
   , 0x0,30.000000,attributes+0,1,NULL,autohelperowl_defendpat141,0,1.000000},
  {owl_defendpat142,8,8, "D614b",0,-2,2,2,2,4,0x2,649,
    { 0x00beffff, 0xe0f0f0e0, 0xfefa0000, 0x3f3f2f2b, 0xf0f0e0a0, 0xffbe0000, 0x2f3f3f2f, 0x00fafeff},
    { 0x00140126, 0x00101040, 0x00500000, 0x11120000, 0x10100000, 0x01140000, 0x00121106, 0x00500060}
   , 0x0,31.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat143,5,8, "D615",-1,-2,1,1,2,3,0x2,721,
    { 0x0cbcfcfc, 0xe0f0fc00, 0xfcf8c000, 0xff3f2f00, 0xfcf0e000, 0xfcbc0c00, 0x2f3fff00, 0xc0f8fcfc},
    { 0x00104094, 0x40100000, 0x04100000, 0x01110600, 0x00104000, 0x40100000, 0x06110100, 0x00100458}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat143,0,0.610000},
  {owl_defendpat144,6,8, "D616",-1,-2,1,2,2,4,0x2,757,
    { 0xbfff3e00, 0x38fcfcbc, 0xf0fcfb00, 0xfcfcb0c0, 0xfcfc380c, 0x3effbf00, 0xb0fcfcf8, 0xfbfcf000},
    { 0x04912400, 0x20904410, 0x60184200, 0x44182080, 0x44902008, 0x24910400, 0x20184410, 0x42186000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat144,0,0.050000},
  {owl_defendpat145,6,8, "D616a",-1,-2,1,4,2,6,0x2,685,
    { 0x2fffff00, 0xf0f8fcfc, 0xfffce000, 0xfcbc3c0c, 0xfcf8f0c0, 0xffff2f00, 0x3cbcfcfc, 0xe0fcff00},
    { 0x06118400, 0x80104418, 0x48104000, 0x44100800, 0x44108000, 0x84110600, 0x08104490, 0x40104800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat145,0,0.050000},
  {owl_defendpat146,7,8, "D617",-1,-3,1,2,2,5,0x2,795,
    { 0xbfff3e00, 0x38fcfcbc, 0xf0fcfb00, 0xfcfcb0c0, 0xfcfc380c, 0x3effbf00, 0xb0fcfcf8, 0xfbfcf000},
    { 0x06912400, 0x20904418, 0x60184200, 0x44182080, 0x44902008, 0x24910600, 0x20184490, 0x42186000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat146,0,0.010000},
  {owl_defendpat147,5,8, "D618",-1,-2,1,2,2,4,0x2,646,
    { 0xffff3e00, 0x3cfcfcbc, 0xf0fcff00, 0xfcfcf0c0, 0xfcfc3c0c, 0x3effff00, 0xf0fcfcf8, 0xfffcf000},
    { 0x26912400, 0x20984418, 0x60186200, 0x44982080, 0x44982008, 0x24912600, 0x20984490, 0x62186000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat147,0,0.010000},
  {owl_defendpat148,4,8, "D619",-1,-1,1,1,2,2,0x2,647,
    { 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00, 0xf8fcfc00, 0xbcfcfc00, 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00},
    { 0x90249000, 0x88641000, 0x18601800, 0x10648800, 0x10648800, 0x90249000, 0x88641000, 0x18601800}
   , 0x0,39.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat149,6,8, "D620",-1,-2,1,1,2,3,0x2,647,
    { 0x2fffff00, 0xf0f8fcfc, 0xfcfce000, 0xfcbc3c00, 0xfcf8f000, 0xffff2f00, 0x3cbcfcfc, 0xe0fcfc00},
    { 0x06118500, 0x80104458, 0x48104000, 0x44100800, 0x44108000, 0x85110600, 0x08104494, 0x40104800}
   , 0x0,72.000000,attributes+0,1,NULL,autohelperowl_defendpat149,0,0.016000},
  {owl_defendpat150,6,8, "D621",-2,-1,1,2,3,3,0x2,721,
    { 0xfcbffc00, 0xecfffc30, 0xfcf8fc30, 0xfcfcec00, 0xfcffec00, 0xfcbffc30, 0xecfcfc30, 0xfcf8fc00},
    { 0x44124000, 0x44110420, 0x04104410, 0x40104400, 0x04114400, 0x40124410, 0x44104020, 0x44100400}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat151,4,8, "D622",-1,-1,1,2,2,3,0x2,646,
    { 0xfcfeff00, 0xfcfcfce0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffefc00, 0xfcfcfc2c, 0xfcfcfc00},
    { 0x18640000, 0x10241800, 0x00649000, 0x90601000, 0x18241000, 0x00641800, 0x10609000, 0x90640000}
   , 0x20,45.000000,attributes+0,1,NULL,autohelperowl_defendpat151,3,1.600000},
  {owl_defendpat152,4,8, "D623",-1,-2,1,3,2,5,0x2,758,
    { 0xdfffdf00, 0xfc74fcfc, 0xdffcdc00, 0xfc74fc0c, 0xfc74fcc0, 0xdfffdf00, 0xfc74fcfc, 0xdcfcdf00},
    { 0x85900400, 0x28104404, 0x40184800, 0x4410a000, 0x44102800, 0x04908500, 0xa0104440, 0x48184000}
   , 0x10,95.000000,attributes+0,1,NULL,autohelperowl_defendpat152,0,0.016000},
  {owl_defendpat153,4,8, "D624",-1,-2,1,1,2,3,0x2,685,
    { 0x0fff3600, 0x30f07cbc, 0x70fcc000, 0xf43c3000, 0x7cf03000, 0x36ff0f00, 0x303cf4f8, 0xc0fc7000},
    { 0x01910000, 0x20100014, 0x00180000, 0x00102000, 0x00102000, 0x00910100, 0x20100050, 0x00180000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat154,3,8, "D625",-1,-1,0,1,1,2,0x2,683,
    { 0xbcfc0000, 0x383c3c00, 0x00fcf800, 0xf0f0b000, 0x3c3c3800, 0x00fcbc00, 0xb0f0f000, 0xf8fc0000},
    { 0x04180000, 0x00102400, 0x00904000, 0x60100000, 0x24100000, 0x00180400, 0x00106000, 0x40900000}
   , 0x20,45.000000,attributes+0,1,NULL,autohelperowl_defendpat154,0,0.016000},
  {owl_defendpat155,2,8, "D626",0,-1,1,2,1,3,0x6,648,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00580200, 0x10102080, 0x00940000, 0x20101000, 0x20101000, 0x02580000, 0x10102008, 0x00940000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat156,4,8, "D627",-1,0,2,2,3,2,0x8,723,
    { 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0},
    { 0x06110120, 0x00100458, 0x00104000, 0x40120000, 0x04100000, 0x01110600, 0x00124094, 0x40100020}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat156,0,1.600000},
  {owl_defendpat157,3,8, "D628",0,0,2,1,2,1,0x8,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00140010, 0x00101000, 0x00500000, 0x10110000, 0x10100000, 0x00140000, 0x00111000, 0x00500010}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat157,0,1.600000},
  {owl_defendpat158,5,8, "D629",-1,-1,4,1,5,2,0x8,722,
    { 0x34fcfcfc, 0xf0fcf400, 0xfcfc7000, 0x7fff3f00, 0xf4fcf000, 0xfcfc3400, 0x3fff7f00, 0x70fcfcfc},
    { 0x20504040, 0x50180000, 0x04142000, 0x00901500, 0x00185000, 0x40502000, 0x15900000, 0x20140404}
   , 0x10,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat159,2,8, "D630",-1,-1,1,1,2,2,0x2,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00600400, 0x10204000, 0x40240000, 0x04201000, 0x40201000, 0x04600000, 0x10200400, 0x00244000}
   , 0x800,65.000000,attributes+0,1,NULL,autohelperowl_defendpat159,3,1.600000},
  {owl_defendpat160,5,8, "D631",-1,-1,1,2,2,3,0x2,721,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x40606440, 0x54a04000, 0x64240400, 0x04285500, 0x40a05400, 0x64604000, 0x55280400, 0x04246404}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_defendpat160,3,1.960000},
  {owl_defendpat161,5,8, "D632",-1,-1,1,2,2,3,0x2,759,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x58666000, 0x54a41820, 0x24649400, 0x90685400, 0x18a45400, 0x60665800, 0x54689020, 0x94642400}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat161,3,1.000000},
  {owl_defendpat162,7,8, "D633",-1,-3,1,1,2,4,0x2,722,
    { 0x3cfcbcfc, 0xb0fcfc00, 0xf8fcf000, 0xffff3b00, 0xfcfcb000, 0xbcfc3c00, 0x3bffff00, 0xf0fcf8fc},
    { 0x10500040, 0x10140000, 0x00141000, 0x00501100, 0x00141000, 0x00501000, 0x11500000, 0x10140004}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat163,1,8, "D634",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00680000, 0x10202000, 0x00a40000, 0x20201000, 0x20201000, 0x00680000, 0x10202000, 0x00a40000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat163,3,0.610000},
  {owl_defendpat164,6,8, "D635",0,-1,3,2,3,3,0x2,686,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0x003cffff},
    { 0x00500404, 0x10104000, 0x41140000, 0x05101005, 0x40101040, 0x04500000, 0x10100500, 0x00144141}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat164,0,1.000000},
  {owl_defendpat165,3,8, "D636",0,-2,1,2,1,4,0x2,648,
    { 0x00ffff00, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0x00ffff00},
    { 0x00150000, 0x00101010, 0x00520000, 0x10100020, 0x10100020, 0x00150000, 0x00101010, 0x00520000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat165,0,1.000000},
  {owl_defendpat166,2,8, "D637",-1,-1,0,1,1,2,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00180400, 0x00106000, 0x40900000, 0x24100000, 0x60100000, 0x04180000, 0x00102400, 0x00904000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat166,0,0.019600},
  {owl_defendpat167,5,8, "D638",-1,-1,1,2,2,3,0x2,610,
    { 0xe0f8fc00, 0xfcf8e000, 0xffbf2d00, 0x2cbcfc7c, 0xe0f8fcf4, 0xfcf8e000, 0xfcbc2c00, 0x2dbfff00},
    { 0x00904400, 0x60104000, 0x44180000, 0x04102400, 0x40106000, 0x44900000, 0x24100400, 0x00184400}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat168,2,8, "D639",0,-1,1,2,1,3,0x2,721,
    { 0x00bfff00, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0x00f8fc00},
    { 0x0012a000, 0x80900020, 0x28100000, 0x00180800, 0x00908000, 0xa0120000, 0x08180020, 0x00102800}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat168,0,1.000000},
  {owl_defendpat169,3,8, "D640",0,-1,1,3,1,4,0x2,647,
    { 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0x003fff00},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,56.000000,attributes+0,1,NULL,autohelperowl_defendpat169,0,0.610000},
  {owl_defendpat170,3,8, "D641",-1,-2,1,2,2,4,0x2,721,
    { 0xffffff00, 0xfcfcfcfc, 0xfffffd00, 0xfcfcfc7c, 0xfcfcfcf4, 0xffffff00, 0xfcfcfcfc, 0xfdffff00},
    { 0x94210000, 0x08240410, 0x00205800, 0x40608000, 0x04240800, 0x00219400, 0x80604010, 0x58200000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat170,3,0.016000},
  {owl_defendpat171,2,8, "D642",0,-2,1,1,1,3,0x2,721,
    { 0x003fbc00, 0x80f0f030, 0xf8f00000, 0x3c3c0800, 0xf0f08000, 0xbc3f0000, 0x083c3c30, 0x00f0f800},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat171,0,0.970000},
  {owl_defendpat172,5,8, "D643",-1,-1,1,1,2,2,0x2,722,
    { 0x38bcfc00, 0xe0fcf800, 0xfcf8b000, 0xbcfc2c00, 0xf8fce000, 0xfcbc3800, 0x2cfcbc00, 0xb0f8fc00},
    { 0x10104000, 0x40140000, 0x04101000, 0x00500400, 0x00144000, 0x40101000, 0x04500000, 0x10100400}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat173,5,8, "D643b",-1,-1,1,2,2,3,0x2,722,
    { 0x0fffbf00, 0xb0f0fcfc, 0xf8fcc000, 0xfc3c3800, 0xfcf0b000, 0xbfff0f00, 0x383cfcfc, 0xc0fcf800},
    { 0x05500000, 0x10100404, 0x00144000, 0x40101000, 0x04101000, 0x00500500, 0x10104040, 0x40140000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat174,6,8, "D644",0,-1,2,2,2,3,0x2,685,
    { 0x00beffff, 0xe0f0f0e0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbe0000, 0x2f3f3f2f, 0x00f8fcfc},
    { 0x00140181, 0x00101040, 0x00500000, 0x10100200, 0x10100000, 0x01140000, 0x02101005, 0x00500008}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat175,2,8, "D645",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00580000, 0x10102000, 0x00940000, 0x20101000, 0x20101000, 0x00580000, 0x10102000, 0x00940000}
   , 0x0,96.000000,attributes+0,1,NULL,autohelperowl_defendpat175,0,0.613600},
  {owl_defendpat176,5,4, "D700",-1,0,1,2,2,2,0x0,648,
    { 0x00f8fcf8, 0xf0f0e000, 0xfcbc0000, 0x2e3f3f00, 0xe0f0f000, 0xfcf80000, 0x3f3f2e00, 0x00bcfcbc},
    { 0x00100410, 0x00104000, 0x40100000, 0x04110000, 0x40100000, 0x04100000, 0x00110400, 0x00104010}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat177,3,8, "D701",-1,0,1,2,2,2,0x0,648,
    { 0x0030fc3c, 0xc0f0c000, 0xfc300000, 0x0f3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0f00, 0x0030fcf0},
    { 0x00100410, 0x00104000, 0x40100000, 0x04110000, 0x40100000, 0x04100000, 0x00110400, 0x00104010}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat177,0,0.016000},
  {owl_defendpat178,3,8, "D702",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108410, 0x80104000, 0x48100000, 0x04110800, 0x40108000, 0x84100000, 0x08110400, 0x00104810}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_defendpat178,0,0.019600},
  {owl_defendpat179,4,8, "D703",0,-1,2,1,2,2,0x0,721,
    { 0x003cbc20, 0x80f0f000, 0xf8f00000, 0x3c3e0800, 0xf0f08000, 0xbc3c0000, 0x083e3c00, 0x00f0f820},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat179,0,0.610000},
  {owl_defendpat180,4,8, "D704",-1,0,1,2,2,2,0x0,686,
    { 0x0038bc3c, 0x80f0e000, 0xf8b00000, 0x2f3f0800, 0xe0f08000, 0xbc380000, 0x083f2f00, 0x00b0f8f0},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat180,0,1.186000},
  {owl_defendpat181,3,8, "D704b",0,-1,1,2,1,3,0x2,648,
    { 0x00f8fc00, 0xf0f0e000, 0xfcbc0000, 0x2c3c3c00, 0xe0f0f000, 0xfcf80000, 0x3c3c2c00, 0x00bcfc00},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat181,0,2.091760},
  {owl_defendpat182,2,8, "D705",0,0,1,2,1,2,0x2,722,
    { 0x003f3e00, 0x00f0f0b0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3e3f0000, 0x003c3c38, 0x00f0f000},
    { 0x00122000, 0x00900020, 0x20100000, 0x00180000, 0x00900000, 0x20120000, 0x00180020, 0x00102000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat182,0,1.000000},
  {owl_defendpat183,4,8, "D706",0,-1,2,1,2,2,0x0,721,
    { 0x003cbc20, 0x80f0f000, 0xf8f00000, 0x3c3e0800, 0xf0f08000, 0xbc3c0000, 0x083e3c00, 0x00f0f820},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x20,35.000000,attributes+0,1,NULL,autohelperowl_defendpat183,0,0.016000},
  {owl_defendpat184,6,8, "D707",-1,0,2,2,3,2,0x0,721,
    { 0x3c3f3f22, 0x00fcfcf0, 0xf0f0f000, 0xfcfe0000, 0xfcfc0000, 0x3f3f3c00, 0x00fefc3e, 0xf0f0f020},
    { 0x28111100, 0x00580850, 0x1010a000, 0x80940000, 0x08580000, 0x11112800, 0x00948014, 0xa0101000}
   , 0x0,77.000000,attributes+0,1,NULL,autohelperowl_defendpat184,0,1.000000},
  {owl_defendpat185,8,8, "D708",-2,-2,2,1,4,3,0x0,722,
    { 0x80bcff3c, 0xe8f0f0c0, 0xfcfb0a00, 0x3f3facb0, 0xf0f0e838, 0xffbc8000, 0xac3f3f0c, 0x0afbfcf0},
    { 0x00140214, 0x00101080, 0x00510000, 0x11110010, 0x10100010, 0x02140000, 0x00111108, 0x00510050}
   , 0x0,77.000000,attributes+0,1,NULL,autohelperowl_defendpat185,0,1.000000},
  {owl_defendpat186,5,8, "D709",-1,-1,1,2,2,3,0x0,685,
    { 0x38fcfc74, 0xf0fcf800, 0xfcfcb000, 0xbdff3d00, 0xf8fcf000, 0xfcfc3800, 0x3dffbd00, 0xb0fcfc74},
    { 0x00644400, 0x50205000, 0x44640000, 0x14201400, 0x50205000, 0x44640000, 0x14201400, 0x00644400}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat186,3,0.650000},
  {owl_defendpat187,5,8, "D710",-1,0,1,2,2,2,0x0,723,
    { 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc},
    { 0x00144440, 0x40105000, 0x44500000, 0x14100500, 0x50104000, 0x44140000, 0x05101400, 0x00504404}
   , 0x0,30.000000,attributes+0,1,NULL,autohelperowl_defendpat187,0,0.016000},
  {owl_defendpat188,1,8, "D711",0,0,1,1,1,1,0x0,722,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat188,0,0.016000},
  {owl_defendpat189,1,8, "D712",-1,0,0,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat189,3,0.016000},
  {owl_defendpat190,5,4, "D713",0,-1,2,2,2,3,0x0,648,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0c, 0x00fcfcfc},
    { 0x00140114, 0x00101040, 0x00500000, 0x11110000, 0x10100000, 0x01140000, 0x00111104, 0x00500050}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat190,0,0.010000},
  {owl_defendpat191,5,8, "D714",0,-1,2,2,2,3,0x0,647,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0c, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0x003cfffc},
    { 0x00100450, 0x00104000, 0x41100000, 0x04110104, 0x40100040, 0x04100000, 0x01110400, 0x00104114}
   , 0x20,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat192,1,4, "D715",0,0,0,1,0,1,0x0,685,
    { 0x00303000, 0x00f00000, 0x30300000, 0x003c0000, 0x00f00000, 0x30300000, 0x003c0000, 0x00303000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat192,0,0.043600},
  {owl_defendpat193,2,8, "D715b",-1,-1,0,1,1,2,0x2,646,
    { 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000},
    { 0x04180000, 0x00102400, 0x00904000, 0x60100000, 0x24100000, 0x00180400, 0x00106000, 0x40900000}
   , 0x0,36.000000,attributes+0,1,NULL,autohelperowl_defendpat193,0,0.416000},
  {owl_defendpat194,4,8, "D715c",-1,0,1,2,2,2,0x0,649,
    { 0x00fcfcf8, 0xf0f0f000, 0xfcfc0000, 0x3e3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3e00, 0x00fcfcbc},
    { 0x00188410, 0x80106000, 0x48900000, 0x24110800, 0x60108000, 0x84180000, 0x08112400, 0x00904810}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat194,0,0.019600},
  {owl_defendpat195,6,8, "D716",-1,0,1,3,2,3,0x0,648,
    { 0x0030f8fc, 0xc0f08000, 0xbc300000, 0x0b3f0f00, 0x80f0c000, 0xf8300000, 0x0f3f0b00, 0x0030bcfc},
    { 0x00100044, 0x00100000, 0x00100000, 0x01100100, 0x00100000, 0x00100000, 0x01100100, 0x00100044}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat195,0,0.016000},
  {owl_defendpat196,5,8, "D717",-1,-1,1,2,2,3,0x0,648,
    { 0xf8fcfc54, 0xfcfcf800, 0xfcfcbc00, 0xbdfdfd00, 0xf8fcfc00, 0xfcfcf800, 0xfdfdbd00, 0xbcfcfc54},
    { 0x50241800, 0x04649000, 0x90601400, 0x18644000, 0x90640400, 0x18245000, 0x40641800, 0x14609000}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_defendpat196,3,1.000000},
  {owl_defendpat197,4,8, "D718",-1,0,2,2,3,2,0x0,685,
    { 0x003fff3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3f0000, 0x0c3f3f3f, 0x00f0fcf0},
    { 0x00118110, 0x80100050, 0x08100000, 0x00110800, 0x00108000, 0x81110000, 0x08110014, 0x00100810}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat198,4,8, "D720",0,-1,1,2,1,3,0x0,648,
    { 0x00f0fc00, 0xf0f0c000, 0xfe3e0000, 0x0c3c3c28, 0xc0f0f0a0, 0xfcf00000, 0x3c3c0c00, 0x003efe00},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat198,0,0.010000},
  {owl_defendpat199,6,8, "D721",-1,-2,1,0,2,2,0x0,722,
    { 0x00fcbcec, 0xb0f0f000, 0xf8fc0000, 0x3f3e3b00, 0xf0f0b000, 0xbcfc0000, 0x3b3e3f00, 0x00fcf8ec},
    { 0x00580044, 0x10102000, 0x00940000, 0x21101100, 0x20101000, 0x00580000, 0x11102100, 0x00940044}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat200,4,8, "D722",-1,-2,1,1,2,3,0x0,721,
    { 0x0c3cfc30, 0xc0f0fc00, 0xfcf0c000, 0xfc3f0c00, 0xfcf0c000, 0xfc3c0c00, 0x0c3ffc00, 0xc0f0fc30},
    { 0x08104410, 0x40104800, 0x44108000, 0x84110400, 0x48104000, 0x44100800, 0x04118400, 0x80104410}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat200,0,0.610000},
  {owl_defendpat201,6,8, "D723",-3,-1,0,2,3,3,0x0,682,
    { 0xffbf0000, 0x2f3f3f3f, 0x00f8fcfc, 0xf0f0e000, 0x3f3f2f00, 0x00bfffff, 0xe0f0f0f0, 0xfcf80000},
    { 0x01160000, 0x00101025, 0x00500000, 0x10100000, 0x10100000, 0x00160101, 0x00101060, 0x00500000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat202,1,8, "D800",0,0,3,3,3,3,0x6,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat203,1,8, "D801",0,-1,1,1,1,2,0x6,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat204,2,8, "D802",0,0,1,2,1,2,0x6,722,
    { 0x003b3f00, 0x00f0e0f0, 0xf0b00000, 0x2c3c0000, 0xe0f00000, 0x3f3b0000, 0x003c2c3c, 0x00b0f000},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat205,1,8, "D803",0,-1,1,1,1,2,0x6,721,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat206,3,8, "D804",0,-1,1,1,1,2,0x6,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00540000, 0x10101000, 0x00540000, 0x10101000, 0x10101000, 0x00540000, 0x10101000, 0x00540000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat206,0,0.010000},
  {owl_defendpat207,2,8, "D804a",0,-1,1,1,1,2,0xa,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00500800, 0x10108000, 0x80140000, 0x08101000, 0x80101000, 0x08500000, 0x10100800, 0x00148000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat207,0,0.010000},
  {owl_defendpat208,3,8, "D804b",0,-1,1,2,1,3,0x6,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00958000, 0xa0101010, 0x08580000, 0x10102800, 0x1010a000, 0x80950000, 0x28101010, 0x00580800}
   , 0x0,26.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat209,5,8, "D805",0,-1,2,2,2,3,0xa,686,
    { 0x00bcfffe, 0xe0f0f0c0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbc0000, 0x2f3f3f0e, 0x00f8fcfc},
    { 0x00140100, 0x00101040, 0x00500000, 0x10100000, 0x10100000, 0x01140000, 0x00101004, 0x00500000}
   , 0x0,98.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat210,6,8, "D805a",0,-1,2,2,2,3,0xa,758,
    { 0x2f3f3f2a, 0x00f8fcfc, 0xf0f0e000, 0xfebe0000, 0xfcf80000, 0x3f3f2f00, 0x00befefe, 0xe0f0f0a0},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat211,4,8, "D805b",0,-1,2,2,2,3,0xa,685,
    { 0x00f8fcfc, 0xf0f0e000, 0xffbc0000, 0x2f3f3f0e, 0xe0f0f0c0, 0xfcf80000, 0x3f3f2f00, 0x00bcfffe},
    { 0x00100000, 0x00100000, 0x01100000, 0x00100004, 0x00100040, 0x00100000, 0x00100000, 0x00100100}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat212,2,8, "D806",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00250000, 0x00201010, 0x00600000, 0x10200000, 0x10200000, 0x00250000, 0x00201010, 0x00600000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat212,3,1.600000},
  {owl_defendpat213,2,8, "D807",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00250000, 0x00201010, 0x00600000, 0x10200000, 0x10200000, 0x00250000, 0x00201010, 0x00600000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat213,3,1.600000},
  {owl_defendpat214,3,8, "D808",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00250100, 0x00201050, 0x00600000, 0x10200000, 0x10200000, 0x01250000, 0x00201014, 0x00600000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat214,3,1.000000},
  {owl_defendpat215,3,8, "D809",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00250100, 0x00201050, 0x00600000, 0x10200000, 0x10200000, 0x01250000, 0x00201014, 0x00600000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat215,3,1.000000},
  {owl_defendpat216,3,8, "D810",0,-2,1,2,1,4,0xa,722,
    { 0x00bfff00, 0xe0f0f0f0, 0xfffa0000, 0x3c3c2c2c, 0xf0f0e0e0, 0xffbf0000, 0x2c3c3c3c, 0x00faff00},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat216,0,1.000000},
  {owl_defendpat217,6,8, "D811",-1,-2,1,1,2,3,0xa,722,
    { 0x3abeff00, 0xe0fcf8e8, 0xfcf8b000, 0xbcfc2c00, 0xf8fce000, 0xffbe3a00, 0x2cfcbcac, 0xb0f8fc00},
    { 0x10100000, 0x00140000, 0x00101000, 0x00500000, 0x00140000, 0x00101000, 0x00500000, 0x10100000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat218,4,8, "D811a",-1,-2,1,1,2,3,0xa,722,
    { 0x003cfcac, 0xc0f0f000, 0xfcf00000, 0x3f3e0e00, 0xf0f0c000, 0xfc3c0000, 0x0e3e3f00, 0x00f0fce8},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat219,4,8, "D812",-1,-1,1,1,2,2,0xa,648,
    { 0xa0fcfc00, 0xf8f8f000, 0xfcfc2800, 0x3cbcbc00, 0xf0f8f800, 0xfcfca000, 0xbcbc3c00, 0x28fcfc00},
    { 0x00182400, 0x00906000, 0x60900000, 0x24180000, 0x60900000, 0x24180000, 0x00182400, 0x00906000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat220,1,8, "D813",0,-1,1,1,1,2,0xa,685,
    { 0x00fc3c00, 0x30f0f000, 0xf0fc0000, 0x3c3c3000, 0xf0f03000, 0x3cfc0000, 0x303c3c00, 0x00fcf000},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat221,5,8, "D814",-1,-1,3,1,4,2,0xa,686,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x10504040, 0x50140000, 0x04141000, 0x00501500, 0x00145000, 0x40501000, 0x15500000, 0x10140404}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat222,5,8, "D815",-1,-2,2,1,3,3,0xa,759,
    { 0x3f3fffff, 0xc0fcfcfc, 0xfcf0f000, 0xffff0f00, 0xfcfcc000, 0xff3f3f00, 0x0fffffff, 0xf0f0fcfc},
    { 0x14105000, 0x40540400, 0x14105000, 0x40540400, 0x04544000, 0x50101400, 0x04544000, 0x50101400}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat223,3,8, "D816",-1,0,2,2,3,2,0xa,721,
    { 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000},
    { 0x40200000, 0x06210100, 0x00200458, 0x00204000, 0x01210600, 0x00204094, 0x40200000, 0x04200000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat224,3,8, "D817",-1,0,2,2,3,2,0xa,721,
    { 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000},
    { 0x40200000, 0x06210100, 0x00200458, 0x00204000, 0x01210600, 0x00204094, 0x40200000, 0x04200000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_defendpat224,3,1.600000},
  {owl_defendpat225,3,8, "D818",-1,-1,1,1,2,2,0xa,648,
    { 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00},
    { 0x40142000, 0x04901000, 0x20500400, 0x10184000, 0x10900400, 0x20144000, 0x40181000, 0x04502000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_defendpat225,0,1.000000},
  {owl_defendpat226,3,8, "D818b",-1,-1,1,1,2,2,0xa,722,
    { 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00},
    { 0x40142000, 0x04901000, 0x20500400, 0x10184000, 0x10900400, 0x20144000, 0x40181000, 0x04502000}
   , 0x10,76.000000,attributes+0,1,NULL,autohelperowl_defendpat226,0,0.010000},
  {owl_defendpat227,5,8, "D819",-1,-2,1,0,2,2,0xa,686,
    { 0x00fcbcbc, 0xb0f0f000, 0xf8fc0000, 0x3f3f3a00, 0xf0f0b000, 0xbcfc0000, 0x3a3f3f00, 0x00fcf8f8},
    { 0x00500400, 0x10104000, 0x40140000, 0x04101000, 0x40101000, 0x04500000, 0x10100400, 0x00144000}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat228,4,8, "D820",-1,-1,1,2,2,3,0xa,722,
    { 0xa0fcff00, 0xf8f8f0c0, 0xfcfc2800, 0x3cbcbc00, 0xf0f8f800, 0xfffca000, 0xbcbc3c0c, 0x28fcfc00},
    { 0x00186200, 0x40902080, 0x24900000, 0x20180400, 0x20904000, 0x62180000, 0x04182008, 0x00902400}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat229,4,8, "D820b",-1,-1,1,2,2,3,0xa,722,
    { 0xbcfcff00, 0xf8fcfcc0, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xfffcbc00, 0xbcfcfc0c, 0xf8fcfc00},
    { 0x24186200, 0x40982480, 0x24906000, 0x60980400, 0x24984000, 0x62182400, 0x04986008, 0x60902400}
   , 0x10,40.000000,attributes+0,1,NULL,autohelperowl_defendpat229,0,1.000000},
  {owl_defendpat230,7,8, "D821",-1,-2,2,1,3,3,0xa,722,
    { 0x0e3effaf, 0xc0f0fce8, 0xfcf0c000, 0xff3e0e00, 0xfcf0c000, 0xff3e0e00, 0x0e3effaf, 0xc0f0fce8},
    { 0x04104000, 0x40100400, 0x04104000, 0x40100400, 0x04104000, 0x40100400, 0x04104000, 0x40100400}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat231,5,8, "D822",-1,-2,1,1,2,3,0xa,721,
    { 0x3effff00, 0xf0fcfcf8, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3e00, 0x3cfcfcbc, 0xf0fcfc00},
    { 0x10518800, 0x90148010, 0x88141000, 0x08501800, 0x80149000, 0x88511000, 0x18500810, 0x10148800}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat231,0,0.010000},
  {owl_defendpat232,7,8, "D823a",-2,-1,1,2,3,3,0xa,685,
    { 0xd7fffffc, 0xfcf4f4fc, 0xfcfc5c00, 0x7f7fff00, 0xf4f4fc00, 0xffffd700, 0xff7f7ffc, 0x5cfcfcfc},
    { 0x01690154, 0x10202054, 0x00a40000, 0x21211100, 0x20201000, 0x01690100, 0x11212154, 0x00a40054}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat233,8,8, "D823b",-2,-1,1,2,3,3,0xa,646,
    { 0xd7fff700, 0xfff777ff, 0x7cfc5cfc, 0x747cfc00, 0x77f7ff00, 0xf7ffd7ff, 0xfc7c74fc, 0x5cfc7c00},
    { 0x01692100, 0x11a12155, 0x20a40054, 0x20281000, 0x21a11100, 0x21690155, 0x10282054, 0x00a42000}
   , 0x0,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat234,8,8, "D824",-1,-1,2,2,3,3,0xa,721,
    { 0xfcffffff, 0xfcfcfcf0, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffffc00, 0xffffff3f, 0xfcfcfcfc},
    { 0x54116921, 0x44948450, 0xa4105400, 0x485a4400, 0x84944400, 0x69115400, 0x445a4815, 0x5410a420}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat235,4,8, "D825",-1,-1,2,1,3,2,0xa,722,
    { 0xe8fcfcfc, 0xfcf8f800, 0xfcfcac00, 0xbfbfff00, 0xf8f8fc00, 0xfcfce800, 0xffbfbf00, 0xacfcfcfc},
    { 0x40902000, 0x24900000, 0x20180400, 0x00186000, 0x00902400, 0x20904000, 0x60180000, 0x04182000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat235,0,1.600000},
  {owl_defendpat236,5,8, "D826",-2,-1,0,1,2,2,0xa,648,
    { 0x80f0f000, 0xf8f00000, 0x3e3e0a00, 0x003cbca8, 0x00f0f8a8, 0xf0f08000, 0xbc3c0000, 0x0a3e3e00},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat236,0,1.000000},
  {owl_defendpat237,5,8, "D827",-1,-2,2,3,3,5,0xa,648,
    { 0xf0ffffff, 0xfcfcf0f0, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0xfffff000, 0xffff3f3f, 0x3fffffff},
    { 0xa05a0500, 0x18186060, 0x40942800, 0x24909000, 0x60181800, 0x055aa000, 0x90902424, 0x28944000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat238,5,8, "D828",-1,-2,1,1,2,3,0xa,646,
    { 0xfcfcb000, 0xbcfc3c00, 0x3afeff00, 0xf0fcf8e8, 0x3cfcbcac, 0xb0fcfc00, 0xf8fcf000, 0xfffe3a00},
    { 0x20181000, 0x00582000, 0x10902000, 0x20940000, 0x20580000, 0x10182000, 0x00942000, 0x20901000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat239,4,8, "D829",-2,-1,1,2,3,3,0xa,648,
    { 0xfcfcfc00, 0xfcffff00, 0xfffffcf0, 0xfcfcfc3c, 0xfffffcf0, 0xfcfcfc3c, 0xfcfcfc00, 0xfcffff00},
    { 0x40100000, 0x04110100, 0x00100450, 0x00104000, 0x01110400, 0x00104014, 0x40100000, 0x04100000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat239,0,0.010000},
  {owl_defendpat240,6,8, "D830",-2,-1,1,1,3,2,0xa,722,
    { 0xecfcfc00, 0xfcf8fc00, 0xffffec00, 0xfcbcfc3c, 0xfcf8fcf0, 0xfcfcec00, 0xfcbcfc00, 0xecffff00},
    { 0x44102000, 0x04900400, 0x21114400, 0x40184014, 0x04900450, 0x20104400, 0x40184000, 0x44112100}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat240,0,0.010000},
  {owl_defendpat241,8,8, "D831",-1,-1,2,2,3,3,0xa,686,
    { 0xf8fefff7, 0xfcfcf8e0, 0xfcfcbc00, 0xbdffff00, 0xf8fcfc00, 0xfffef800, 0xffffbd2f, 0xbcfcfc7c},
    { 0x50246901, 0x44a49040, 0xa4601400, 0x18684400, 0x90a44400, 0x69245000, 0x44681805, 0x1460a400}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat242,3,8, "D832",-1,-1,1,1,2,2,0xa,722,
    { 0x0cbcfc00, 0xe0f0fc00, 0xfcf8c000, 0xfc3c2c00, 0xfcf0e000, 0xfcbc0c00, 0x2c3cfc00, 0xc0f8fc00},
    { 0x0410a000, 0x80900400, 0x28104000, 0x40180800, 0x04908000, 0xa0100400, 0x08184000, 0x40102800}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat242,0,1.000000},
  {owl_defendpat243,6,8, "D833",-2,0,2,2,4,2,0x6,759,
    { 0x3f3d3f2f, 0x00fcffdc, 0xf0f0f0c0, 0xfffe0000, 0xfffc0000, 0x3f3d3f0c, 0x00feffdf, 0xf0f0f0e0},
    { 0x11101000, 0x00540104, 0x10101040, 0x00540000, 0x01540000, 0x10101104, 0x00540040, 0x10101000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat244,5,8, "D834",-2,0,2,2,4,2,0x6,722,
    { 0x3f3f3f3f, 0x00fcfffc, 0xf0f0f0c0, 0xffff0000, 0xfffc0000, 0x3f3f3f0c, 0x00ffffff, 0xf0f0f0f0},
    { 0x11101200, 0x00540184, 0x10101040, 0x00540000, 0x01540000, 0x12101104, 0x00540048, 0x10101000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat245,1,8, "D835",-1,-1,2,1,3,2,0xa,683,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat246,1,8, "D836",0,0,1,1,1,1,0xa,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat246,0,1.000000},
  {owl_defendpat247,5,8, "D837",-2,-2,2,2,4,4,0x6,722,
    { 0xffffffff, 0xfcfeffff, 0xfffefce0, 0xffffff2f, 0xfffefce0, 0xffffff2f, 0xffffffff, 0xfcfeffff},
    { 0x40200000, 0x04200100, 0x01200440, 0x00204004, 0x01200440, 0x00204004, 0x40200000, 0x04200100}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat248,4,8, "D838",-1,-1,2,1,3,2,0xa,683,
    { 0x3cfcfc3c, 0xf0fcfc00, 0xfcfcf000, 0xffff3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cffff00, 0xf0fcfcf0},
    { 0x00606410, 0x50a04000, 0x64240000, 0x04291400, 0x40a05000, 0x64600000, 0x14290400, 0x00246410}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat248,3,1.000000},
  {owl_defendpat249,6,8, "D839",-2,-1,2,2,4,3,0xa,648,
    { 0xfcfcfefe, 0xfffffc80, 0xfcfcfc3c, 0xffffff00, 0xfcffff00, 0xfefcfcf0, 0xffffff0a, 0xfcfcfcfc},
    { 0x14242400, 0x00a65400, 0x60605020, 0x54680000, 0x54a60000, 0x24241420, 0x00685400, 0x50606000}
   , 0x0,88.000000,attributes+0,1,NULL,autohelperowl_defendpat249,3,1.600000},
  {owl_defendpat250,7,8, "D840",-2,-1,1,2,3,3,0xa,683,
    { 0xfcffff00, 0xfffffcf0, 0xfcfcfc3c, 0xfcfcfc00, 0xfcffff00, 0xfffffcf0, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x04a51100, 0x21611450, 0x10684014, 0x50242000, 0x14612100, 0x11a50450, 0x20245014, 0x40681000}
   , 0x0,25.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat251,3,8, "D841",-2,-2,2,1,4,3,0xa,648,
    { 0xf0fcfcfc, 0xfffff000, 0xffff3f3f, 0x3fffffff, 0xf0ffffff, 0xfcfcf0f0, 0xffff3f00, 0x3fffffff},
    { 0x10180000, 0x00152000, 0x00901010, 0x20500000, 0x20150000, 0x00181010, 0x00502000, 0x10900000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat252,3,8, "D842",-2,-2,2,2,4,4,0x6,722,
    { 0xffffffff, 0xfcfcffff, 0xfffffcc0, 0xffffff3f, 0xfffcfcf0, 0xffffff0f, 0xffffffff, 0xfcffffff},
    { 0xa4500000, 0x18180600, 0x00166880, 0x40909020, 0x06181820, 0x0050a408, 0x90904000, 0x68160000}
   , 0x0,76.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat253,7,8, "D843",0,-2,2,2,2,4,0xa,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xffff0000, 0x3f3f3f3f, 0x00ffffff},
    { 0x00550181, 0x10101050, 0x00550000, 0x10101210, 0x10101010, 0x01550000, 0x12101015, 0x00550008}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat254,2,8, "D844",0,-1,1,1,1,2,0xa,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_defendpat254,0,0.019600},
  {owl_defendpat255,5,8, "D845",-1,-1,1,2,2,3,0xa,647,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffe00, 0xfcfcfcbc, 0xfcfcfc00},
    { 0x50210100, 0x04240050, 0x00201400, 0x00604000, 0x00240400, 0x01215000, 0x40600014, 0x14200000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat255,3,0.010000},
  {owl_defendpat256,6,8, "D846",-1,-1,1,2,2,3,0xa,685,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffe00, 0xfcfcfcbc, 0xfcfcfc00},
    { 0x50610100, 0x14240050, 0x00241400, 0x00605000, 0x00241400, 0x01615000, 0x50600014, 0x14240000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat257,6,8, "D847",-1,-1,1,2,2,3,0xa,721,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffe00, 0xfcfcfcbc, 0xfcfcfc00},
    { 0x50612100, 0x14a40050, 0x20241400, 0x00685000, 0x00a41400, 0x21615000, 0x50680014, 0x14242000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat258,5,8, "D848",-1,-1,1,2,2,3,0xa,685,
    { 0x9afffe00, 0xf8f4f8b8, 0xfcfc9800, 0xbc7cbc00, 0xf8f4f800, 0xfeff9a00, 0xbc7cbcb8, 0x98fcfc00},
    { 0x00a90000, 0x20202010, 0x00a80000, 0x20202000, 0x20202000, 0x00a90000, 0x20202010, 0x00a80000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat259,3,8, "D900",-1,-1,1,2,2,3,0x2,648,
    { 0xc0fcf400, 0xfcf07000, 0x7efc0c00, 0x343cfc08, 0x70f0fc80, 0xf4fcc000, 0xfc3c3400, 0x0cfc7e00},
    { 0x40182000, 0x04902000, 0x20900400, 0x20184000, 0x20900400, 0x20184000, 0x40182000, 0x04902000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat259,0,1.000000},
  {owl_defendpat260,1,8, "D902",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat260,0,1.000000},
  {owl_defendpat261,1,8, "D903",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat261,0,1.000000},
  {owl_defendpat262,1,8, "D904",0,-1,1,1,1,2,0x2,648,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x0,84.000000,attributes+0,1,NULL,autohelperowl_defendpat262,0,1.000000},
  {owl_defendpat263,1,8, "D905",0,-1,1,2,1,3,0x2,647,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00260000, 0x00201020, 0x00600000, 0x10200000, 0x10200000, 0x00260000, 0x00201020, 0x00600000}
   , 0x0,86.000000,attributes+0,1,NULL,autohelperowl_defendpat263,3,1.000000},
  {owl_defendpat264,3,8, "D906",-1,-2,1,2,2,4,0x2,720,
    { 0xfcfcfcfc, 0xfcffff00, 0xfcfcfcf0, 0xffffff00, 0xfffffc00, 0xfcfcfc3c, 0xffffff00, 0xfcfcfcfc},
    { 0x50200040, 0x04260000, 0x00201420, 0x00604100, 0x00260400, 0x00205020, 0x41600000, 0x14200004}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat265,3,8, "D907",-1,-2,1,2,2,4,0x2,685,
    { 0xfcfcfcfc, 0xfcffff00, 0xfcfcfcf0, 0xffffff00, 0xfffffc00, 0xfcfcfc3c, 0xffffff00, 0xfcfcfcfc},
    { 0x50200040, 0x04260000, 0x00201420, 0x00604100, 0x00260400, 0x00205020, 0x41600000, 0x14200004}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat266,5,8, "D908",-2,-2,1,2,3,4,0x2,685,
    { 0xfcfcfcfc, 0xfcffff00, 0xfffffcf0, 0xffffff3c, 0xfffffcf0, 0xfcfcfc3c, 0xffffff00, 0xfcfffffc},
    { 0x50200040, 0x04260000, 0x01211420, 0x00604114, 0x00260450, 0x00205020, 0x41600000, 0x14210104}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat266,3,1.000000},
  {owl_defendpat267,1,4, "D909",0,0,0,1,0,1,0x0,685,
    { 0x00303000, 0x00f00000, 0x30300000, 0x003c0000, 0x00f00000, 0x30300000, 0x003c0000, 0x00303000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat267,0,0.034000},
  {owl_defendpat268,2,8, "D910a",-1,-2,1,2,2,4,0x2,683,
    { 0xfcfcfcfc, 0xfeffff00, 0xfcfcfcf8, 0xffffff00, 0xfffffe00, 0xfcfcfcbc, 0xffffff00, 0xfcfcfcfc},
    { 0x00600080, 0x10200000, 0x00240000, 0x00201200, 0x00201000, 0x00600000, 0x12200000, 0x00240008}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat269,2,8, "D910b",-1,-2,1,2,2,4,0x2,683,
    { 0xfcfcfcfc, 0xfeffff00, 0xfcfcfcf8, 0xffffff00, 0xfffffe00, 0xfcfcfcbc, 0xffffff00, 0xfcfcfcfc},
    { 0x00600080, 0x10200000, 0x00240000, 0x00201200, 0x00201000, 0x00600000, 0x12200000, 0x00240008}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat269,3,1.000000},
  {owl_defendpat270,6,8, "D911",-3,-2,0,3,3,5,0x2,646,
    { 0xffff0000, 0x3e3e3e3c, 0x00ffffaa, 0xf0f0f0f0, 0x3e3e3e3e, 0x00ffffa8, 0xf0f0f0f0, 0xffff0000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat270,3,0.010000},
  {owl_defendpat271,2,4, "D1000",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat271,0,0.365200},
  {owl_defendpat272,1,4, "D1000a",0,0,0,1,0,1,0x0,685,
    { 0x00303000, 0x00f00000, 0x30300000, 0x003c0000, 0x00f00000, 0x30300000, 0x003c0000, 0x00303000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat272,0,0.016000},
  {owl_defendpat273,2,8, "D1001",-1,-1,0,1,1,2,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188400, 0x80106000, 0x48900000, 0x24100800, 0x60108000, 0x84180000, 0x08102400, 0x00904800}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_defendpat273,0,0.829600},
  {owl_defendpat274,5,8, "D1001b",-1,-1,1,3,2,4,0x2,795,
    { 0x3fff7f00, 0x70fcfcfc, 0xf4fcf000, 0xfcfc3400, 0xfcfc7000, 0x7fff3f00, 0x34fcfcfc, 0xf0fcf400},
    { 0x25920400, 0x20184424, 0x40186000, 0x44902000, 0x44182000, 0x04922500, 0x20904460, 0x60184000}
   , 0x20,71.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat275,2,8, "D1002",-1,-1,0,1,1,2,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188400, 0x80106000, 0x48900000, 0x24100800, 0x60108000, 0x84180000, 0x08102400, 0x00904800}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat275,0,0.628000},
  {owl_defendpat276,4,8, "D1003",-2,-2,1,1,3,3,0x0,720,
    { 0xbcbc3c00, 0x28fcfc00, 0xf0f8f800, 0xfcfca000, 0xfcfc2800, 0x3cbcbc00, 0xa0fcfc00, 0xf8f8f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat276,0,1.690000},
  {owl_defendpat277,3,8, "D1004",-2,-1,0,2,2,3,0x0,721,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00101024, 0x00500000, 0x10100000, 0x01160000, 0x00500000, 0x10100000, 0x00160100, 0x00101060}
   , 0x20,69.000000,attributes+0,1,NULL,autohelperowl_defendpat277,0,1.872304},
  {owl_defendpat278,8,8, "D1004b",-2,-1,0,2,2,3,0x1,721,
    { 0x2e3e3e3e, 0x00f8fca8, 0xf0f0e000, 0xffbf0000, 0xfcf80000, 0x3e3e2e00, 0x00bfffaa, 0xe0f0f0f0},
    { 0x00101024, 0x00500000, 0x10100000, 0x01160000, 0x00500000, 0x10100000, 0x00160100, 0x00101060}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat279,2,8, "D1005",-1,-2,1,1,2,3,0x0,721,
    { 0xffff7f00, 0x7cfcfcfc, 0xf4fcfc00, 0xfcfcf400, 0xfcfc7c00, 0x7fffff00, 0xf4fcfcfc, 0xfcfcf400},
    { 0x00902400, 0x20904000, 0x60180000, 0x04182000, 0x40902000, 0x24900000, 0x20180400, 0x00186000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat280,2,4, "D1006",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x20,60.000000,attributes+0,1,NULL,autohelperowl_defendpat280,3,0.376000},
  {owl_defendpat281,2,4, "D1006b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x2020,80.000000,attributes+0,1,NULL,autohelperowl_defendpat281,3,0.021760},
  {owl_defendpat282,2,4, "D1007",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x4000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat282,3,1.531600},
  {owl_defendpat283,1,4, "D1100",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x800,88.000000,attributes+0,1,NULL,autohelperowl_defendpat283,3,0.731600},
  {owl_defendpat284,1,4, "D1100b",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x800,92.000000,attributes+0,1,NULL,autohelperowl_defendpat284,3,1.160000},
  {owl_defendpat285,1,4, "D1101",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204020, 0x40200000, 0x04200000, 0x00220400, 0x00204000, 0x40200000, 0x04220000, 0x00200420}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat285,3,5.000000},
  {owl_defendpat286,1,4, "D1102",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204020, 0x40200000, 0x04200000, 0x00220400, 0x00204000, 0x40200000, 0x04220000, 0x00200420}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat286,3,0.054400},
  {owl_defendpat287,1,4, "D1102a",-1,-1,1,3,2,4,0x0,685,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x00204020, 0x40200000, 0x04200000, 0x00220400, 0x00204000, 0x40200000, 0x04220000, 0x00200420}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat288,3,8, "D1103",-1,-1,2,2,3,3,0x2,758,
    { 0x3fff3fff, 0x30fcfcfc, 0xf0fcf000, 0xffff3300, 0xfcfc3000, 0x3fff3f00, 0x33ffffff, 0xf0fcf0fc},
    { 0x14680000, 0x10242400, 0x00a45000, 0x60601000, 0x24241000, 0x00681400, 0x10606000, 0x50a40000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat288,3,3.000000},
  {owl_defendpat289,4,8, "D1104",-1,-1,2,3,3,4,0x2,723,
    { 0x3f3fbfbf, 0x80fcfcfc, 0xf8f0f000, 0xffff0a00, 0xfcfc8000, 0xbf3f3f00, 0x0affffff, 0xf0f0f8f8},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,100.000000,attributes+0,1,NULL,autohelperowl_defendpat289,0,1.000000},
  {owl_defendpat290,5,8, "D1105",-1,-1,2,2,3,3,0x2,721,
    { 0x083efeff, 0xc0f0f8a0, 0xfcf08000, 0xbf3f0f00, 0xf8f0c000, 0xfe3e0800, 0x0f3fbf2b, 0x80f0fcfc},
    { 0x00205800, 0x40608000, 0x94200000, 0x08240400, 0x80604000, 0x58200000, 0x04240800, 0x00209400}
   , 0x800,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat291,2,8, "D1106",-2,0,1,2,3,2,0x0,685,
    { 0x00fffffc, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3c, 0x00fcfcfc},
    { 0x00600180, 0x10200040, 0x00240000, 0x00201200, 0x00201000, 0x01600000, 0x12200004, 0x00240008}
   , 0x0,77.000000,attributes+0,1,NULL,autohelperowl_defendpat291,3,1.000000},
  {owl_defendpat292,2,8, "D1107",0,-1,1,2,1,3,0x2,648,
    { 0x00fdff00, 0xf0f0f0d0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfffd0000, 0x3c3c3c1c, 0x00fcfc00},
    { 0x00982400, 0x20906000, 0x60980000, 0x24182000, 0x60902000, 0x24980000, 0x20182400, 0x00986000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat293,3,8, "D1108",-1,-2,2,2,3,4,0x0,647,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x02299400, 0x80606018, 0x58a00000, 0x24240800, 0x60608000, 0x94290200, 0x08242490, 0x00a05800}
   , 0x200,95.000000,attributes+0,1,NULL,autohelperowl_defendpat293,3,3.960000},
  {owl_defendpat294,4,8, "D1108b",-1,-2,2,2,3,4,0x0,720,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x02699400, 0x90606018, 0x5aa40000, 0x24241808, 0x60609080, 0x94690200, 0x18242490, 0x00a45a00}
   , 0x200,95.000000,attributes+0,1,NULL,autohelperowl_defendpat294,3,1.810000},
  {owl_defendpat295,1,8, "D1109",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204820, 0x40208000, 0x84200000, 0x08220400, 0x80204000, 0x48200000, 0x04220800, 0x00208420}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat295,3,1.600000},
  {owl_defendpat296,3,8, "D1110",-1,-1,1,2,2,3,0x0,685,
    { 0xfcfcfc3c, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00, 0xfcfcfcf0},
    { 0x94240800, 0x08249400, 0x80605800, 0x58608000, 0x94240800, 0x08249400, 0x80605800, 0x58608000}
   , 0x800,75.000000,attributes+0,1,NULL,autohelperowl_defendpat296,3,1.000000},
  {owl_defendpat297,5,8, "D1111",-2,-2,2,2,4,4,0x0,647,
    { 0xfeffff3f, 0xfffcfcf8, 0xfcffff0c, 0xfffffcf0, 0xfcfcff3c, 0xfffffec0, 0xfcffffbf, 0xfffffcf0},
    { 0x94290200, 0x09242490, 0x00a05804, 0x60608000, 0x24240900, 0x02299440, 0x80606018, 0x58a00000}
   , 0x210,90.000000,attributes+0,1,NULL,autohelperowl_defendpat297,3,0.376000},
  {owl_defendpat298,5,8, "D1112",-1,-2,2,2,3,4,0x0,722,
    { 0x3effff3f, 0xf0fcfcf8, 0xfcfcf000, 0xffff3c00, 0xfcfcf000, 0xffff3e00, 0x3cffffbf, 0xf0fcfcf0},
    { 0x14690200, 0x10242490, 0x00a45000, 0x60601000, 0x24241000, 0x02691400, 0x10606018, 0x50a40000}
   , 0x200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat298,3,0.376000},
  {owl_defendpat299,6,8, "D1113",-1,-2,2,2,3,4,0x0,645,
    { 0xfcfcf000, 0xffff3c00, 0x3effff3f, 0xf0fcfcf8, 0x3cffffbf, 0xf0fcfcf0, 0xfcfcf000, 0xffff3e00},
    { 0x60a45000, 0x64681000, 0x14692600, 0x10a46490, 0x10686418, 0x50a46000, 0x64a41000, 0x26691400}
   , 0x200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat299,3,0.376000},
  {owl_defendpat300,7,8, "D1114",-1,-2,2,2,3,4,0x0,682,
    { 0xfcfcf000, 0xffff3c00, 0x3effff3f, 0xf0fcfcf8, 0x3cffffbf, 0xf0fcfcf0, 0xfcfcf000, 0xffff3e00},
    { 0x60a45000, 0x65681000, 0x14692606, 0x10a46490, 0x1068651a, 0x50a46040, 0x64a41000, 0x26691400}
   , 0x200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat300,3,0.376000},
  {owl_defendpat301,4,8, "D1115",-2,-1,1,2,3,3,0x0,647,
    { 0xf0fcfcf0, 0xfcfcf000, 0xffff3e00, 0x3cffffbc, 0xf0fcfcf8, 0xfcfcf000, 0xffff3c00, 0x3effff3c},
    { 0x00205890, 0x40608000, 0x96200000, 0x08250608, 0x80604080, 0x58200000, 0x06250800, 0x00209618}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat302,3,8, "D1116",-1,-2,1,1,2,3,0x2,685,
    { 0xbcfcfcfc, 0xf8fcfc00, 0xfcfcf800, 0xffffbf00, 0xfcfcf800, 0xfcfcbc00, 0xbfffff00, 0xf8fcfcfc},
    { 0x18608080, 0x90240800, 0x08249000, 0x80601a00, 0x08249000, 0x80601800, 0x1a608000, 0x90240808}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat302,3,1.000000},
  {owl_defendpat303,2,8, "D1117",-2,-2,1,1,3,3,0x2,647,
    { 0xf4f4fcfc, 0xfcfcd400, 0xfd7f7c00, 0x5fffff37, 0xd4fcfc70, 0xfcf4f400, 0xffff5f00, 0x7c7ffdff},
    { 0x50200000, 0x04240000, 0x00221400, 0x00604020, 0x00240420, 0x00205000, 0x40600000, 0x14220000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat303,3,1.000000},
  {owl_defendpat304,3,8, "D1117a",-2,-1,1,2,3,3,0x2,683,
    { 0xfffff700, 0xfffd7ffc, 0x7cfcfcdc, 0xf4fcfc00, 0x7ffdff00, 0xf7ffffdc, 0xfcfcf4fc, 0xfcfc7c00},
    { 0x05290200, 0x00202694, 0x00a04080, 0x60200000, 0x26200000, 0x02290508, 0x00206058, 0x40a00000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat304,3,1.006000},
  {owl_defendpat305,6,8, "D1118",-2,-1,1,2,3,3,0x0,721,
    { 0x3efefe30, 0xf0fcfca8, 0xfcfcf000, 0xfcff3c00, 0xfcfcf000, 0xfefe3e00, 0x3cfffca8, 0xf0fcfc30},
    { 0x18601820, 0x10648800, 0x90249000, 0x88661000, 0x88641000, 0x18601800, 0x10668800, 0x90249020}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat306,3,8, "D1119",-2,-2,2,2,4,4,0x0,648,
    { 0xf8fcfcfc, 0xfcfcf800, 0xfcffbf00, 0xbffffff2, 0xf8fcfc3c, 0xfcfcf800, 0xffffbf00, 0xbffffcfe},
    { 0x00200060, 0x00200000, 0x00220000, 0x00220120, 0x00200020, 0x00200000, 0x01220000, 0x00220024}
   , 0x2000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat306,3,0.016000},
  {owl_defendpat307,4,8, "D1120",-2,-2,2,2,4,4,0x0,685,
    { 0xbffffcfa, 0xf8fcfc3c, 0xfcfcf800, 0xfeffbf00, 0xfcfcf800, 0xfcffbf00, 0xbffffef2, 0xf8fcfcbc},
    { 0x00220420, 0x00204020, 0x40200000, 0x04220000, 0x40200000, 0x04220000, 0x00220420, 0x00204020}
   , 0x2000,81.000000,attributes+0,1,NULL,autohelperowl_defendpat307,3,0.016000},
  {owl_defendpat308,5,8, "D1120b",-1,-1,2,2,3,3,0x0,685,
    { 0xaf3ffffe, 0xc8f8fcfc, 0xfcf0e800, 0xffbf8f00, 0xfcf8c800, 0xff3faf00, 0x8fbffffe, 0xe8f0fcfc},
    { 0x08168800, 0x80109820, 0x88508000, 0x98100800, 0x98108000, 0x88160800, 0x08109820, 0x80508800}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat309,9,8, "D1121a",-2,0,1,3,3,3,0x0,722,
    { 0x2a3f3f3b, 0x00f8f8f8, 0xf0f0a000, 0xbebf0000, 0xf8f80000, 0x3f3f2a00, 0x00bfbebf, 0xa0f0f0b0},
    { 0x00200012, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210002, 0x00200010}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat310,9,8, "D1121b",0,-1,3,2,3,3,0x0,685,
    { 0x00fefefe, 0xf0f0f0a0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfefe0000, 0x3f3f3f2a, 0x00fcfcfc},
    { 0x00588080, 0x90102000, 0x08940000, 0x20101a00, 0x20109000, 0x80580000, 0x1a102000, 0x00940808}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat311,8,8, "D1121c",-1,0,2,3,3,3,0x0,685,
    { 0x00fefefe, 0xf0f0f0a0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfefe0000, 0x3f3f3f2a, 0x00fcfcfc},
    { 0x00680080, 0x10202000, 0x00a40000, 0x20201200, 0x20201000, 0x00680000, 0x12202000, 0x00a40008}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat311,3,3.000000},
  {owl_defendpat312,1,4, "D1122",0,-1,1,1,1,2,0x2,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat312,0,1.600000},
  {owl_defendpat313,5,8, "D1123",-1,-1,2,2,3,3,0x0,720,
    { 0xbefffffc, 0xf8fcfcf8, 0xfcfcf800, 0xffffbf00, 0xfcfcf800, 0xffffbe00, 0xbfffffbc, 0xf8fcfcfc},
    { 0x20586080, 0x50982000, 0x24942000, 0x20981600, 0x20985000, 0x60582000, 0x16982000, 0x20942408}
   , 0x800,86.000000,attributes+0,1,NULL,autohelperowl_defendpat313,0,1.000000},
  {owl_defendpat314,2,8, "D1124",0,-1,1,1,1,2,0x0,685,
    { 0x00fc3c00, 0x30f0f000, 0xf0fc0000, 0x3c3c3000, 0xf0f03000, 0x3cfc0000, 0x303c3c00, 0x00fcf000},
    { 0x00640800, 0x10209000, 0x80640000, 0x18201000, 0x90201000, 0x08640000, 0x10201800, 0x00648000}
   , 0x2800,90.000000,attributes+0,1,NULL,autohelperowl_defendpat314,3,1.096000},
  {owl_defendpat315,6,8, "D1125",-2,-2,1,1,3,3,0x0,685,
    { 0xbcfcfcf0, 0xf8fcfc00, 0xfefef800, 0xfcffbf2a, 0xfcfcf8a0, 0xfcfcbc00, 0xbffffc00, 0xf8fefe3e},
    { 0x08240400, 0x00205800, 0x40608000, 0x94200000, 0x58200000, 0x04240800, 0x00209400, 0x80604000}
   , 0x2000,79.000000,attributes+0,1,NULL,autohelperowl_defendpat315,3,0.019600},
  {owl_defendpat316,1,8, "D1126",-1,0,1,2,2,2,0x0,685,
    { 0x00fcfc3c, 0xf0f0f000, 0xfcfc0000, 0x3f3f3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3f3f00, 0x00fcfcf0},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x800,82.000000,attributes+0,1,NULL,autohelperowl_defendpat316,3,0.970000},
  {owl_defendpat317,4,8, "D1127",-2,-1,1,1,3,2,0x0,685,
    { 0xb0fcfcfc, 0xf8fcf000, 0xfcfc3800, 0x3fffbf00, 0xf0fcf800, 0xfcfcb000, 0xbfff3f00, 0x38fcfcfc},
    { 0x10608810, 0x90248000, 0x88241000, 0x08611800, 0x80249000, 0x88601000, 0x18610800, 0x10248810}
   , 0x800,35.000000,attributes+0,1,NULL,autohelperowl_defendpat317,3,0.010000},
  {owl_defendpat318,4,8, "D1128",-2,-2,1,1,3,3,0x0,685,
    { 0xf0fcfcf0, 0xfcfcf000, 0xffff3e00, 0x3cffffbf, 0xf0fcfcf8, 0xfcfcf000, 0xffff3c00, 0x3effff3f},
    { 0x50240800, 0x04249000, 0x80601400, 0x18604000, 0x90240400, 0x08245000, 0x40601800, 0x14608000}
   , 0x200,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat319,5,8, "D1129",-2,-1,1,2,3,3,0x0,759,
    { 0x3fffff3e, 0xf0fcfcfc, 0xfcfcf000, 0xffff3c00, 0xfcfcf000, 0xffff3f00, 0x3cfffffe, 0xf0fcfcf0},
    { 0x00906814, 0x60908000, 0xa4180000, 0x09192400, 0x80906000, 0x68900000, 0x24190900, 0x0018a450}
   , 0x200,77.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat320,3,8, "D1130",-1,-1,1,2,2,3,0x0,721,
    { 0xf0ff7c00, 0x7cfcf030, 0xf4fc3c00, 0x3cfcf400, 0xf0fc7c00, 0x7cfff000, 0xf4fc3c30, 0x3cfcf400},
    { 0x40922400, 0x24904020, 0x60180400, 0x04186000, 0x40902400, 0x24924000, 0x60180420, 0x04186000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat320,0,1.006000},
  {owl_defendpat321,2,8, "D1131",-1,0,1,1,2,1,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00608400, 0x90204000, 0x48240000, 0x04201800, 0x40209000, 0x84600000, 0x18200400, 0x00244800}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat321,3,0.592000},
  {owl_defendpat322,3,8, "D1132",0,-1,1,2,1,3,0x0,685,
    { 0x0c3c3c3c, 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3c3c0c00, 0x003fff00, 0xc0f0f0f0},
    { 0x04240810, 0x00209400, 0x80604000, 0x58210000, 0x94200000, 0x08240400, 0x00215800, 0x40608010}
   , 0x800,45.000000,attributes+0,1,NULL,autohelperowl_defendpat322,3,3.000000},
  {owl_defendpat323,4,8, "D1133",0,-1,2,2,2,3,0x2,722,
    { 0x003edfbf, 0xc070f0e0, 0xdcf00000, 0x3f370e00, 0xf070c000, 0xdf3e0000, 0x0e373f2f, 0x00f0dcf8},
    { 0x00204010, 0x40200000, 0x04200000, 0x00210400, 0x00204000, 0x40200000, 0x04210000, 0x00200410}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat323,3,0.010000},
  {owl_defendpat324,3,8, "D1134",-2,-1,1,1,3,2,0x0,685,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x006048a4, 0x50208000, 0x84240000, 0x09221600, 0x80205000, 0x48600000, 0x16220900, 0x00248468}
   , 0x800,5.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat325,1,8, "D1135",0,0,1,2,1,2,0x0,685,
    { 0x003c3c30, 0x00f0f000, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3c00, 0x00f0f030},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x2000,35.000000,attributes+0,1,NULL,autohelperowl_defendpat325,0,0.610000},
  {owl_defendpat326,5,8, "D1137",-2,0,1,3,3,3,0x0,685,
    { 0x003cfcf0, 0xc0f0f000, 0xfef00000, 0x3c3f0f0a, 0xf0f0c080, 0xfc3c0000, 0x0f3f3c00, 0x00f0fe3e},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x2200,65.000000,attributes+0,1,NULL,autohelperowl_defendpat326,3,0.667600},
  {owl_defendpat327,1,8, "D1138",-1,-1,1,2,2,3,0x0,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00209800, 0x80608000, 0x98200000, 0x08240800, 0x80608000, 0x98200000, 0x08240800, 0x00209800}
   , 0x2810,85.000000,attributes+0,1,NULL,autohelperowl_defendpat327,3,0.186496},
  {owl_defendpat328,1,8, "D1140",0,-1,2,1,2,2,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x2800,70.000000,attributes+0,1,NULL,autohelperowl_defendpat328,3,0.235600},
  {owl_defendpat329,2,8, "D1141",-2,-1,1,1,3,2,0x0,683,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x08248400, 0x80205800, 0x48608000, 0x94200800, 0x58208000, 0x84240800, 0x08209400, 0x80604800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat329,3,0.610000},
  {owl_defendpat330,2,8, "D1142",-1,-1,1,1,2,2,0x0,647,
    { 0x30fc3c00, 0x30fcf000, 0xf0fc3000, 0x3cfc3000, 0xf0fc3000, 0x3cfc3000, 0x30fc3c00, 0x30fcf000},
    { 0x20182400, 0x00986000, 0x60902000, 0x24980000, 0x60980000, 0x24182000, 0x00982400, 0x20906000}
   , 0x800,30.000000,attributes+0,1,NULL,autohelperowl_defendpat330,0,2.025232},
  {owl_defendpat331,5,8, "D1143",-1,-1,1,2,2,3,0x2,683,
    { 0xfffffe00, 0xfcfcfcbc, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfeffff00, 0xfcfcfcf8, 0xfcfcfc00},
    { 0x09990400, 0x20106814, 0x40988000, 0xa4102000, 0x68102000, 0x04990900, 0x2010a450, 0x80984000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat331,0,0.235600},
  {owl_defendpat332,2,8, "D1144",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640800, 0x10209000, 0x80640000, 0x18201000, 0x90201000, 0x08640000, 0x10201800, 0x00648000}
   , 0x0,82.000000,attributes+0,1,NULL,autohelperowl_defendpat332,3,0.019600},
  {owl_defendpat333,2,8, "D1144b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640800, 0x10209000, 0x80640000, 0x18201000, 0x90201000, 0x08640000, 0x10201800, 0x00648000}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_defendpat333,3,0.010000},
  {owl_defendpat334,2,8, "D1200",-1,-2,2,2,3,4,0x6,647,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x80205800, 0x48608000, 0x94200800, 0x08248400, 0x80604800, 0x58208000, 0x84240800, 0x08209400}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat335,6,8, "D1201a",0,-1,2,1,2,2,0x0,648,
    { 0x00f8fca8, 0xf0f0e000, 0xfcbc0000, 0x2e3e3e00, 0xe0f0f000, 0xfcf80000, 0x3e3e2e00, 0x00bcfca8},
    { 0x00900400, 0x20104000, 0x40180000, 0x04102000, 0x40102000, 0x04900000, 0x20100400, 0x00184000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat335,0,0.010000},
  {owl_defendpat336,5,8, "D1201b",0,-1,2,1,2,2,0x0,648,
    { 0x00f8fce8, 0xf0f0e000, 0xfcbc0000, 0x2e3e3f00, 0xe0f0f000, 0xfcf80000, 0x3f3e2e00, 0x00bcfcac},
    { 0x00900480, 0x20104000, 0x40180000, 0x04102200, 0x40102000, 0x04900000, 0x22100400, 0x00184008}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat336,0,1.810000},
  {owl_defendpat337,4,8, "D1202",-1,-2,1,1,2,3,0x2,720,
    { 0xfcfcf000, 0xfffe3e00, 0x3cfcfcac, 0xf0fcfc00, 0x3efeff00, 0xf0fcfce8, 0xfcfcf000, 0xfcfc3c00},
    { 0x00181000, 0x00502000, 0x10900000, 0x20140000, 0x20500000, 0x10180000, 0x00142000, 0x00901000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat337,0,0.592000},
  {owl_defendpat338,2,8, "D1203",0,-1,1,1,1,2,0x2,685,
    { 0x00fc7c00, 0x70f0f000, 0xf4fc0000, 0x3c3c3400, 0xf0f07000, 0x7cfc0000, 0x343c3c00, 0x00fcf400},
    { 0x00940000, 0x20101000, 0x00580000, 0x10102000, 0x10102000, 0x00940000, 0x20101000, 0x00580000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat338,0,1.603600},
  {owl_defendpat339,3,8, "D1204",0,-1,1,1,1,2,0x2,685,
    { 0x00bcfc00, 0xe0f0f000, 0xfcf80000, 0x3c3c2c00, 0xf0f0e000, 0xfcbc0000, 0x2c3c3c00, 0x00f8fc00},
    { 0x00148000, 0x80101000, 0x08500000, 0x10100800, 0x10108000, 0x80140000, 0x08101000, 0x00500800}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat339,0,0.972160},
  {owl_defendpat340,2,4, "D1205",-1,0,1,2,2,2,0x0,685,
    { 0x0030fc30, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0x0030fc30},
    { 0x00108810, 0x80108000, 0x88100000, 0x08110800, 0x80108000, 0x88100000, 0x08110800, 0x00108810}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat340,0,1.000000},
  {owl_defendpat341,5,8, "D1206",-1,-1,1,1,2,2,0x0,647,
    { 0x38fcf800, 0xf0fcb800, 0xbcfcb000, 0xb8fc3c00, 0xb8fcf000, 0xf8fc3800, 0x3cfcb800, 0xb0fcbc00},
    { 0x10249000, 0x80641000, 0x18601000, 0x10640800, 0x10648000, 0x90241000, 0x08641000, 0x10601800}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_defendpat341,3,1.000000},
  {owl_defendpat342,1,8, "D1207",-1,-1,1,2,2,3,0x2,721,
    { 0xbdffff00, 0xf8fcfcf4, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbd00, 0xbcfcfc7c, 0xf8fcfc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x10,40.000000,attributes+0,1,NULL,autohelperowl_defendpat342,3,1.600000},
  {owl_defendpat343,2,8, "D1300",0,0,2,1,2,1,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00180024, 0x00102000, 0x00900000, 0x21120000, 0x20100000, 0x00180000, 0x00122100, 0x00900060}
   , 0x6000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat343,0,1.810000},
  {owl_defendpat344,2,8, "D1300b",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00180024, 0x00102000, 0x00900000, 0x21120000, 0x20100000, 0x00180000, 0x00122100, 0x00900060}
   , 0x6000,89.000000,attributes+0,1,NULL,autohelperowl_defendpat344,0,1.810000},
  {owl_defendpat345,2,8, "D1301",0,-1,2,2,2,3,0x0,685,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00204100, 0x40200040, 0x04200000, 0x00200400, 0x00204000, 0x41200000, 0x04200004, 0x00200400}
   , 0x4000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat345,3,0.592000},
  {owl_defendpat346,4,8, "D1301b",0,-1,2,2,2,3,0x0,685,
    { 0x0038ffd8, 0xc0f0e0c0, 0xfcb00000, 0x2e3d0f00, 0xe0f0c000, 0xff380000, 0x0f3d2e0c, 0x00b0fc9c},
    { 0x00204100, 0x40200040, 0x04200000, 0x00200400, 0x00204000, 0x41200000, 0x04200004, 0x00200400}
   , 0x4000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat346,3,3.616000},
  {owl_defendpat347,2,8, "D1302",0,-1,2,1,2,2,0x0,685,
    { 0x00f0fcc0, 0xf0f0c000, 0xfc3c0000, 0x0c3c3f00, 0xc0f0f000, 0xfcf00000, 0x3f3c0c00, 0x003cfc0c},
    { 0x00600400, 0x10204000, 0x40240000, 0x04201000, 0x40201000, 0x04600000, 0x10200400, 0x00244000}
   , 0x4000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat347,3,0.151360},
  {owl_defendpat348,8,4, "D1303",-2,0,2,4,4,4,0x0,758,
    { 0x2a3f0f03, 0x0038f8f8, 0xc0f0a000, 0xbcb00000, 0xf8380000, 0x0f3f2a00, 0x00b0bcbf, 0xa0f0c000},
    { 0x00200402, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200402, 0x00204000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat348,3,0.019600},
  {owl_defendpat349,10,4, "D1304",-2,0,2,4,4,4,0x0,758,
    { 0x3f3f0f03, 0x003efefe, 0xc0f0f0a0, 0xfcf00000, 0xfe3e0000, 0x0f3f3f2a, 0x00f0fcff, 0xf0f0c000},
    { 0x00200402, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200402, 0x00204000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat349,3,0.019600},
  {owl_defendpat350,6,8, "D1305",-3,-2,1,1,4,3,0x0,647,
    { 0xdcfcfcf0, 0xfcf4fc00, 0xfefede00, 0xfc7fffaa, 0xfcf4fca8, 0xfcfcdc00, 0xff7ffc00, 0xdefefe3e},
    { 0x08100420, 0x00104800, 0x40108000, 0x84120000, 0x48100000, 0x04100800, 0x00128400, 0x80104020}
   , 0x2000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat350,0,0.019600},
  {owl_defendpat351,4,8, "D1306",-1,-1,2,2,3,3,0x0,647,
    { 0x80f4fcf0, 0xf8f0d000, 0xff7f0a00, 0x1c3fbfbf, 0xd0f0f8f8, 0xfcf48000, 0xbf3f1c00, 0x0a7fff3f},
    { 0x00204810, 0x40208000, 0x84200000, 0x08210402, 0x80204000, 0x48200000, 0x04210800, 0x00208412}
   , 0x2000,79.000000,attributes+0,1,NULL,autohelperowl_defendpat351,3,0.016000},
  {owl_defendpat352,5,8, "D1307",-2,-2,1,2,3,4,0x0,720,
    { 0x3efcfc34, 0xf0fcfe0a, 0xfcfcf080, 0xfdff3c00, 0xfefcf000, 0xfcfc3e0a, 0x3cfffd80, 0xf0fcfc70},
    { 0x00104820, 0x40108000, 0x84100000, 0x08120400, 0x80104000, 0x48100000, 0x04120800, 0x00108420}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat352,0,0.010000},
  {owl_defendpat353,6,8, "D1308",-1,0,2,4,3,4,0x2,758,
    { 0x2a3f3f3f, 0x00f8f8f8, 0xf0f0a000, 0xbfbf0000, 0xf8f80000, 0x3f3f2a00, 0x00bfbfbf, 0xa0f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat353,0,0.016000},
  {owl_defendpat354,5,8, "D1309",-1,0,2,4,3,4,0x2,795,
    { 0x2b3f3f3f, 0x00f8f8fc, 0xf0f0a000, 0xbfbf0000, 0xf8f80000, 0x3f3f2b00, 0x00bfbfff, 0xa0f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,81.000000,attributes+0,1,NULL,autohelperowl_defendpat354,0,0.016000},
  {owl_defendpat355,7,8, "D1309b",-2,0,2,4,4,4,0x2,757,
    { 0x2f3f3f3f, 0x00f8fefe, 0xf0f0e080, 0xffbf0000, 0xfef80000, 0x3f3f2f0a, 0x00bfffff, 0xe0f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,82.000000,attributes+0,1,NULL,autohelperowl_defendpat355,0,0.016000},
  {owl_defendpat356,9,8, "D1310",-2,0,1,3,3,3,0x0,721,
    { 0x0a3e0f00, 0x0030faea, 0xc0f08080, 0xbc300000, 0xfa300000, 0x0f3e0a0a, 0x0030bcac, 0x80f0c000},
    { 0x00200600, 0x00204080, 0x40200000, 0x04200000, 0x40200000, 0x06200000, 0x00200408, 0x00204000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat356,3,0.023056},
  {owl_defendpat357,9,8, "D1311",-3,-1,0,2,3,3,0x0,721,
    { 0x1e3f3e0a, 0x00f4fcb8, 0xf0f0d000, 0xfe7c0000, 0xfcf40000, 0x3e3f1e00, 0x007cfeba, 0xd0f0f080},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat357,0,0.019600},
  {owl_defendpat358,9,8, "D1312",-4,-2,0,2,4,4,0x0,722,
    { 0x003cffff, 0xc0f0f0c0, 0xfef00000, 0x3f3f0f0a, 0xf0f0c080, 0xff3c0000, 0x0f3f3f0f, 0x00f0fefe},
    { 0x00240200, 0x00201080, 0x00600000, 0x10200000, 0x10200000, 0x02240000, 0x00201008, 0x00600000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat358,3,0.019600},
  {owl_defendpat359,2,8, "D1313",-1,0,2,3,3,3,0x0,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x2000,55.000000,attributes+0,1,NULL,autohelperowl_defendpat359,0,0.016000},
  {owl_defendpat360,4,8, "D1314",-1,-2,4,1,5,3,0x0,796,
    { 0x3fbfffbf, 0xe0fcfcfc, 0xfcf8f000, 0xffff2e00, 0xfcfce000, 0xffbf3f00, 0x2effffff, 0xf0f8fcf8},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2000,55.000000,attributes+0,1,NULL,autohelperowl_defendpat360,0,0.010000},
  {owl_defendpat361,6,8, "D1315",-1,0,3,2,4,2,0x0,759,
    { 0x00bfffbf, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2e00, 0xf0f0e000, 0xffbf0000, 0x2e3f3f3f, 0x00f8fcf8},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2000,50.000000,attributes+0,1,NULL,autohelperowl_defendpat361,0,0.016000},
  {owl_defendpat362,2,8, "D1316",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x20,35.000000,attributes+0,1,NULL,autohelperowl_defendpat362,0,0.010000},
  {owl_defendpat363,2,8, "D1316b",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x20,90.000000,attributes+0,1,NULL,autohelperowl_defendpat363,0,0.010000},
  {owl_defendpat364,4,8, "D1317",-1,-3,2,0,3,3,0x0,685,
    { 0x00fffffc, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3c, 0x00fcfcfc},
    { 0x00920200, 0x201000a0, 0x00180000, 0x00102000, 0x00102000, 0x02920000, 0x20100028, 0x00180000}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat364,0,0.010000},
  {owl_defendpat365,1,8, "D1318",-3,-5,0,0,3,5,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat365,0,0.023056},
  {owl_defendpat366,9,8, "D1319",-4,-1,2,1,6,2,0x2,686,
    { 0xa8b8fcfc, 0xeafaea00, 0xfcb8a8a8, 0xafbfaf00, 0xeafaea00, 0xfcb8a8a8, 0xafbfaf00, 0xa8b8fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,82.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat367,2,2, "D1320",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x20,35.000000,attributes+0,1,NULL,autohelperowl_defendpat367,0,0.016000},
  {owl_defendpat368,2,8, "D1320a",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_defendpat368,0,1.096000},
  {owl_defendpat369,2,2, "D1320b",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x20,90.000000,attributes+0,1,NULL,autohelperowl_defendpat369,0,0.016000},
  {owl_defendpat370,3,8, "D1321",-1,0,0,2,1,2,0x0,721,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00100014, 0x00100000, 0x00100000, 0x01110000, 0x00100000, 0x00100000, 0x00110100, 0x00100050}
   , 0x4020,36.000000,attributes+0,1,NULL,autohelperowl_defendpat370,0,0.016000},
  {owl_defendpat371,3,8, "D1321b",-1,0,0,2,1,2,0x0,721,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00100014, 0x00100000, 0x00100000, 0x01110000, 0x00100000, 0x00100000, 0x00110100, 0x00100050}
   , 0x4020,91.000000,attributes+0,1,NULL,autohelperowl_defendpat371,0,0.016000},
  {owl_defendpat372,3,8, "D1322",-1,-1,0,1,1,2,0x0,721,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x10201400, 0x00644000, 0x50201000, 0x04640000, 0x40640000, 0x14201000, 0x00640400, 0x10205000}
   , 0x4020,36.000000,attributes+0,1,NULL,autohelperowl_defendpat372,3,0.021760},
  {owl_defendpat373,2,2, "D1323",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2020,35.000000,attributes+0,1,NULL,autohelperowl_defendpat373,0,0.016000},
  {owl_defendpat374,3,8, "D1324",-1,0,0,2,1,2,0x0,721,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00100014, 0x00100000, 0x00100000, 0x01110000, 0x00100000, 0x00100000, 0x00110100, 0x00100050}
   , 0x6020,86.000000,attributes+0,1,NULL,autohelperowl_defendpat374,0,0.016000},
  {owl_defendpat375,3,8, "D1325",-1,-1,0,1,1,2,0x0,721,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x10201400, 0x00644000, 0x50201000, 0x04640000, 0x40640000, 0x14201000, 0x00640400, 0x10205000}
   , 0x6020,86.000000,attributes+0,1,NULL,autohelperowl_defendpat375,3,0.021760},
  {owl_defendpat376,2,2, "D1326",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2000,35.000000,attributes+0,1,NULL,autohelperowl_defendpat376,0,0.016000},
  {owl_defendpat377,3,8, "D1329",-1,0,1,4,2,4,0x0,686,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat378,5,8, "D1330",0,-1,3,2,3,3,0x0,685,
    { 0x003dffff, 0xc0f0f0d0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3d0000, 0x0f3f3f1f, 0x00f0fcfc},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat378,0,1.810000},
  {owl_defendpat379,6,8, "D1331",-1,-1,2,2,3,3,0x0,722,
    { 0x3efefe7e, 0xf0fcfca8, 0xfcfcf000, 0xffff3d00, 0xfcfcf000, 0xfefe3e00, 0x3dffffaa, 0xf0fcfcf4},
    { 0x20580020, 0x10182000, 0x00942000, 0x20921000, 0x20181000, 0x00582000, 0x10922000, 0x20940020}
   , 0x2200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat379,0,1.810000},
  {owl_defendpat380,7,8, "D1332",-1,-1,2,2,3,3,0x0,721,
    { 0x31ff7faa, 0x70fcf0f4, 0xf4fc3000, 0x3efe3600, 0xf0fc7000, 0x7fff3100, 0x36fe3e7e, 0x30fcf4a8},
    { 0x10922400, 0x20944020, 0x60181000, 0x04582000, 0x40942000, 0x24921000, 0x20580420, 0x10186000}
   , 0x2000,95.000000,attributes+0,1,NULL,autohelperowl_defendpat380,0,0.010000},
  {owl_defendpat381,6,8, "D1333",-1,-1,2,1,3,2,0x0,648,
    { 0x30fcfca8, 0xf0fcf000, 0xfcfc3000, 0x3efe3e00, 0xf0fcf000, 0xfcfc3000, 0x3efe3e00, 0x30fcfca8},
    { 0x10982400, 0x20946000, 0x60981000, 0x24582000, 0x60942000, 0x24981000, 0x20582400, 0x10986000}
   , 0x2200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat381,0,1.096000},
  {owl_defendpat382,4,8, "D1333b",-1,-1,2,1,3,2,0x0,722,
    { 0x30fcfc30, 0xf0fcf000, 0xfcfc3000, 0x3cff3c00, 0xf0fcf000, 0xfcfc3000, 0x3cff3c00, 0x30fcfc30},
    { 0x10986010, 0x60942000, 0x24981000, 0x20592400, 0x20946000, 0x60981000, 0x24592000, 0x10982410}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat382,0,0.016000},
  {owl_defendpat383,5,4, "D1334",-1,-1,1,1,2,2,0x0,683,
    { 0xb8fcfc00, 0xf8fcf800, 0xfcfcb800, 0xbcfcbc00, 0xf8fcf800, 0xfcfcb800, 0xbcfcbc00, 0xb8fcfc00},
    { 0x00649800, 0x90609000, 0x98640000, 0x18241800, 0x90609000, 0x98640000, 0x18241800, 0x00649800}
   , 0x2000,95.000000,attributes+0,1,NULL,autohelperowl_defendpat383,3,0.010000},
  {owl_defendpat384,6,4, "D1335",-1,-1,2,2,3,3,0x0,647,
    { 0xb0fcf0c0, 0xf8fc3000, 0x3ffe3a00, 0x30fcbfac, 0x30fcf8e8, 0xf0fcb000, 0xbffc3000, 0x3afe3f0c},
    { 0x00249040, 0x80601000, 0x18600000, 0x10240900, 0x10608000, 0x90240000, 0x09241000, 0x00601804}
   , 0x2200,95.000000,attributes+0,1,NULL,autohelperowl_defendpat384,3,0.019600},
  {owl_defendpat385,5,8, "D1336",-1,-1,1,1,2,2,0x0,647,
    { 0xbcfcf800, 0xf8fcbc00, 0xbcfcf800, 0xf8fcbc00, 0xbcfcf800, 0xf8fcbc00, 0xbcfcf800, 0xf8fcbc00},
    { 0x18249000, 0x80641800, 0x18609000, 0x90640800, 0x18648000, 0x90241800, 0x08649000, 0x90601800}
   , 0x2000,95.000000,attributes+0,1,NULL,autohelperowl_defendpat385,3,0.010000},
  {owl_defendpat386,6,8, "D1337",0,-1,3,2,3,3,0x0,723,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00148200, 0x80101080, 0x08500000, 0x10100800, 0x10108000, 0x82140000, 0x08101008, 0x00500800}
   , 0x2200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat386,0,1.810000},
  {owl_defendpat387,7,8, "D1338",-1,-2,2,1,3,3,0x0,685,
    { 0x3efefe3e, 0xf0fcfca8, 0xfcfcf000, 0xffff3c00, 0xfcfcf000, 0xfefe3e00, 0x3cffffaa, 0xf0fcfcf0},
    { 0x20644020, 0x50281000, 0x04642000, 0x10a21400, 0x10285000, 0x40642000, 0x14a21000, 0x20640420}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat387,3,1.810000},
  {owl_defendpat388,4,4, "D1339",-1,0,1,2,2,2,0x0,685,
    { 0x00b0fcb0, 0xe0f0c000, 0xfc380000, 0x0c3f2e00, 0xc0f0e000, 0xfcb00000, 0x2e3f0c00, 0x0038fc38},
    { 0x00204420, 0x40204000, 0x44200000, 0x04220400, 0x40204000, 0x44200000, 0x04220400, 0x00204420}
   , 0x2000,93.000000,attributes+0,1,NULL,autohelperowl_defendpat388,3,0.010000},
  {owl_defendpat389,3,8, "D1340",-1,-1,1,2,2,3,0x2,721,
    { 0xbcffff00, 0xf8fcfcf0, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbc00, 0xbcfcfc3c, 0xf8fcfc00},
    { 0x08610000, 0x10200810, 0x00248000, 0x80201000, 0x08201000, 0x00610800, 0x10208010, 0x80240000}
   , 0x6000,85.000000,attributes+0,1,NULL,autohelperowl_defendpat389,3,1.412800},
  {owl_defendpat390,4,8, "D1341",0,-1,3,2,3,3,0x0,685,
    { 0x0030fffc, 0xc0f0c0c0, 0xfc300000, 0x0f3f0f00, 0xc0f0c000, 0xff300000, 0x0f3f0f0c, 0x0030fcfc},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x2000,60.000000,attributes+0,1,NULL,autohelperowl_defendpat390,0,0.010000},
  {owl_defendpat391,3,8, "D1342",-2,-1,1,2,3,3,0x2,685,
    { 0xf8fcfcfc, 0xfcfcf800, 0xfcffbf00, 0xbffffff0, 0xf8fcfc3c, 0xfcfcf800, 0xffffbf00, 0xbffffcfc},
    { 0x00248408, 0x80205000, 0x48600000, 0x16200800, 0x50208000, 0x84240000, 0x08201600, 0x00604880}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat392,6,8, "D1343a",-1,-3,2,0,3,3,0x0,722,
    { 0x003fbfbd, 0x80f0f0f0, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbf3f0000, 0x0a3f3f3d, 0x00f0f8f8},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x2000,77.000000,attributes+0,1,NULL,autohelperowl_defendpat392,3,0.016000},
  {owl_defendpat393,8,8, "D1343b",-3,-1,0,2,3,3,0x0,722,
    { 0x003bbebf, 0x80f0e0b0, 0xf8b00000, 0x2f3f0a00, 0xe0f08000, 0xbe3b0000, 0x0a3f2f3b, 0x00b0f8f8},
    { 0x00210002, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200012, 0x00200000}
   , 0x2000,60.000000,attributes+0,1,NULL,autohelperowl_defendpat393,3,0.016000},
  {owl_defendpat394,8,8, "D1343c",-1,-3,2,0,3,3,0x0,723,
    { 0x003bbebf, 0x80f0e0b0, 0xf8b00000, 0x2f3f0a00, 0xe0f08000, 0xbe3b0000, 0x0a3f2f3b, 0x00b0f8f8},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x2000,60.000000,attributes+0,1,NULL,autohelperowl_defendpat394,3,0.019600},
  {owl_defendpat395,6,8, "D1343d",-1,-3,2,0,3,3,0x0,723,
    { 0x003fbfbf, 0x80f0f0f0, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbf3f0000, 0x0a3f3f3f, 0x00f0f8f8},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x2200,55.000000,attributes+0,1,NULL,autohelperowl_defendpat395,3,0.016000},
  {owl_defendpat396,5,8, "D1344",-1,-1,1,3,2,4,0x2,685,
    { 0x28fcfc3c, 0xf0f8f800, 0xfcfca000, 0xbfbf3c00, 0xf8f8f000, 0xfcfc2800, 0x3cbfbf00, 0xa0fcfcf0},
    { 0x00908000, 0xa0100000, 0x08180000, 0x00102800, 0x0010a000, 0x80900000, 0x28100000, 0x00180800}
   , 0x2000,85.000000,attributes+0,1,NULL,autohelperowl_defendpat396,0,0.010000},
  {owl_defendpat397,2,8, "D1345",0,-1,1,1,1,2,0x0,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x6800,85.000000,attributes+0,1,NULL,autohelperowl_defendpat397,3,0.800656},
  {owl_defendpat398,5,8, "D1346",0,-1,3,2,3,3,0x0,722,
    { 0x003fff7f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xff3f0000, 0x0d3f3f3f, 0x00f0fcf4},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat398,0,0.019600},
  {owl_defendpat399,2,8, "D1347",-1,-1,1,1,2,2,0x2,721,
    { 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00},
    { 0x60900000, 0x24180000, 0x00182400, 0x00906000, 0x00182400, 0x00906000, 0x60900000, 0x24180000}
   , 0x4000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat399,0,1.000000},
  {owl_defendpat400,2,8, "D1348",0,0,1,2,1,2,0x0,722,
    { 0x003c3c0c, 0x00f0f000, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3f00, 0x00f0f0c0},
    { 0x00100004, 0x00100000, 0x00100000, 0x01100000, 0x00100000, 0x00100000, 0x00100100, 0x00100040}
   , 0x6020,36.000000,attributes+0,1,NULL,autohelperowl_defendpat400,0,0.016000},
  {owl_defendpat401,2,8, "D1348b",0,0,1,2,1,2,0x0,722,
    { 0x003c3c0c, 0x00f0f000, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3f00, 0x00f0f0c0},
    { 0x00100004, 0x00100000, 0x00100000, 0x01100000, 0x00100000, 0x00100000, 0x00100100, 0x00100040}
   , 0x6020,90.000000,attributes+0,1,NULL,autohelperowl_defendpat401,0,0.016000},
  {owl_defendpat402,2,8, "D1348c",0,0,1,2,1,2,0x0,722,
    { 0x003c1c1c, 0x0070f000, 0xd0f00000, 0x3f350000, 0xf0700000, 0x1c3c0000, 0x00353f00, 0x00f0d0d0},
    { 0x00100004, 0x00100000, 0x00100000, 0x01100000, 0x00100000, 0x00100000, 0x00100100, 0x00100040}
   , 0x6020,90.000000,attributes+0,1,NULL,autohelperowl_defendpat402,0,3.616000},
  {owl_defendpat403,2,8, "D1348d",0,0,2,2,2,2,0x0,722,
    { 0x003c3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3f0f, 0x00f0f0c0},
    { 0x00100001, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100001, 0x00100000}
   , 0x6020,90.000000,attributes+0,1,NULL,autohelperowl_defendpat403,0,0.016000},
  {owl_defendpat404,2,8, "D1350",-1,-1,0,2,1,3,0x0,721,
    { 0x303c3c3c, 0x00fcf000, 0xf0f03000, 0x3fff0000, 0xf0fc0000, 0x3c3c3000, 0x00ff3f00, 0x30f0f0f0},
    { 0x10201000, 0x00640000, 0x10201000, 0x00640000, 0x00640000, 0x10201000, 0x00640000, 0x10201000}
   , 0x2000,85.000000,attributes+0,1,NULL,autohelperowl_defendpat404,3,0.021760},
  {owl_defendpat405,2,8, "D1351",0,-1,2,1,2,2,0x0,685,
    { 0x003cfc38, 0xc0f0f000, 0xfcf00000, 0x3e3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3e00, 0x00f0fcb0},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat405,0,0.010000},
  {owl_defendpat406,3,8, "D1352",0,-2,1,1,1,3,0x0,721,
    { 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000},
    { 0x00102400, 0x00914000, 0x60100010, 0x04180000, 0x40910000, 0x24100010, 0x00180400, 0x00106000}
   , 0x4000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat406,0,1.810000},
  {owl_defendpat407,1,8, "D1353",-2,-1,1,2,3,3,0x2,647,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff},
    { 0x10200000, 0x00240000, 0x00201200, 0x00600080, 0x00240008, 0x00201000, 0x00600000, 0x12200000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat408,3,8, "D1354",-3,-2,0,2,3,4,0x0,758,
    { 0x3f3f3f0c, 0x00fcfdfc, 0xf0f0f040, 0xfffc0000, 0xfdfc0000, 0x3f3f3f04, 0x00fcfffc, 0xf0f0f0c0},
    { 0x10101008, 0x00540000, 0x10101000, 0x02540000, 0x00540000, 0x10101000, 0x00540200, 0x10101080}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat408,0,0.019600},
  {owl_defendpat409,3,8, "D1355",0,-1,1,2,1,3,0x2,722,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00691000, 0x10602010, 0x10a40000, 0x20241000, 0x20601000, 0x10690000, 0x10242010, 0x00a41000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat409,3,0.016000},
  {owl_defendpat410,3,4, "D1356",-1,0,1,4,2,4,0x0,686,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat410,0,2.179600},
  {owl_defendpat411,3,4, "D1356a",-1,0,1,4,2,4,0x0,686,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2200,80.000000,attributes+0,1,NULL,autohelperowl_defendpat411,0,2.179600},
  {owl_defendpat412,2,8, "D1356b",-1,0,2,4,3,4,0x2,795,
    { 0x0f3f2f3f, 0x00b0fcfc, 0xe0f0c000, 0xff3b0000, 0xfcb00000, 0x2f3f0f00, 0x003bffff, 0xc0f0e0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,91.000000,attributes+0,1,NULL,autohelperowl_defendpat412,0,2.179600},
  {owl_defendpat413,7,8, "D1357",-3,-2,0,2,3,4,0x0,685,
    { 0x00feffff, 0xf0f0f0e0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffe0000, 0x3f3f3f2f, 0x00fcffff},
    { 0x00640000, 0x10201000, 0x01640000, 0x10201005, 0x10201040, 0x00640000, 0x10201000, 0x00640101}
   , 0x2000,61.000000,attributes+0,1,NULL,autohelperowl_defendpat413,3,0.019600},
  {owl_defendpat414,3,8, "D1358",0,0,1,3,1,3,0x0,759,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x6000,61.000000,attributes+0,1,NULL,autohelperowl_defendpat414,0,1.096000},
  {owl_defendpat415,3,8, "D1359",-2,-3,2,1,4,4,0x0,721,
    { 0xffffff2f, 0xfcffffff, 0xfcfcfcf0, 0xfffefc00, 0xfffffc00, 0xffffff3f, 0xfcfeffff, 0xfcfcfce0},
    { 0x00209004, 0x80600000, 0x18200000, 0x01240800, 0x00608000, 0x90200000, 0x08240100, 0x00201840}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat415,3,0.019600},
  {owl_defendpat416,2,8, "D1360",-2,-1,2,2,4,3,0x0,720,
    { 0xfffffdfd, 0xfcfcff7f, 0xfcfcfcc0, 0xffffff00, 0xfffcfc00, 0xfdffff0f, 0xfffffff5, 0xfcfcfcfc},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat416,0,0.019600},
  {owl_defendpat417,2,8, "D1361a",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0e00, 0x003cfcbc, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0e3f3f00, 0x00f0fcf8, 0xf0f0c000},
    { 0x22100800, 0x00188008, 0x80102000, 0x08900000, 0x80180000, 0x08102200, 0x00900880, 0x20108000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat417,0,0.021760},
  {owl_defendpat418,1,8, "D1361b",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000},
    { 0x22100a00, 0x00188088, 0x80102000, 0x08900000, 0x80180000, 0x0a102200, 0x00900888, 0x20108000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat418,0,1.317760},
  {owl_defendpat419,2,8, "D1362",-2,0,2,3,4,3,0x2,757,
    { 0x0f3f2f3f, 0x00b0ffff, 0xe0f0c0c0, 0xff3b0000, 0xffb00000, 0x2f3f0f0f, 0x003bffff, 0xc0f0e0f0},
    { 0x00100000, 0x00100200, 0x00100080, 0x00100000, 0x02100000, 0x00100008, 0x00100000, 0x00100000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat420,4,8, "D1363",-2,-1,2,2,4,3,0x0,647,
    { 0xfcffff3f, 0xfcfcfcf0, 0xfffffe00, 0xfffffcbc, 0xfcfcfcf8, 0xfffffc00, 0xfcffff3f, 0xfefffff0},
    { 0x00201810, 0x00608000, 0x92210000, 0x08250018, 0x80600090, 0x18200000, 0x00250800, 0x00219210}
   , 0x200,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat421,3,8, "D1364",-1,-1,2,2,3,3,0x0,685,
    { 0xfcffff3f, 0xfcfcfcf0, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xfffffc00, 0xfcffff3f, 0xfcfcfcf0},
    { 0x18250800, 0x00249810, 0x80609000, 0x98600000, 0x98240000, 0x08251800, 0x00609810, 0x90608000}
   , 0x200,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat422,4,8, "D1365",-1,-1,2,1,3,2,0x0,648,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x24582400, 0x10986400, 0x60946000, 0x64981000, 0x64981000, 0x24582400, 0x10986400, 0x60946000}
   , 0x200,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat423,6,8, "D1366",-2,-1,2,2,4,3,0x0,685,
    { 0xbfffffd0, 0xf8fcfcfc, 0xfffef800, 0xfcfdbf2f, 0xfcfcf8e0, 0xffffbf00, 0xbffdfcfc, 0xf8feff1f},
    { 0x06290500, 0x00206458, 0x40a04000, 0x64200000, 0x64200000, 0x05290600, 0x00206494, 0x40a04000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat423,3,0.010000},
  {owl_defendpat424,2,8, "D1367",-3,-1,0,2,3,3,0x0,758,
    { 0x0f3f3f0c, 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfffc, 0xc0f0f0c0},
    { 0x00101008, 0x00500000, 0x10100000, 0x02140000, 0x00500000, 0x10100000, 0x00140200, 0x00101080}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat425,3,8, "D1368",-1,-2,2,1,3,3,0x0,647,
    { 0xf0f0fce0, 0xfcfcc000, 0xff3f3f00, 0x0cfeffff, 0xc0fcfcfc, 0xfcf0f000, 0xfffe0c00, 0x3f3fff2f},
    { 0x00201840, 0x00608000, 0x90200000, 0x08240102, 0x80600000, 0x18200000, 0x01240800, 0x00209006}
   , 0x2000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat425,3,0.016000},
  {owl_defendpat426,3,8, "D1370",-1,-2,2,0,3,2,0x0,722,
    { 0x003cbfbf, 0x80f0f0c0, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbf3c0000, 0x0a3f3f0f, 0x00f0f8f8},
    { 0x00200102, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200006, 0x00200000}
   , 0x2000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat426,3,0.016000},
  {owl_defendpat427,4,8, "D1371",0,-1,3,1,3,2,0x0,686,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100008, 0x00100000, 0x00100000, 0x02100000, 0x00100000, 0x00100000, 0x00100200, 0x00100080}
   , 0x2800,85.000000,attributes+0,1,NULL,autohelperowl_defendpat427,0,0.010000},
  {owl_defendpat428,2,8, "D1372",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00244000, 0x40201000, 0x04600000, 0x10200400, 0x10204000, 0x40240000, 0x04201000, 0x00600400}
   , 0x2000,85.000000,attributes+0,1,NULL,autohelperowl_defendpat428,3,0.610000},
  {owl_defendpat429,2,4, "D1373",0,-2,0,1,0,3,0x0,685,
    { 0x30303020, 0x00fc0000, 0x30303000, 0x00fe0000, 0x00fc0000, 0x30303000, 0x00fe0000, 0x30303020},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x2800,85.000000,attributes+0,1,NULL,autohelperowl_defendpat429,3,0.610000},
  {owl_defendpat430,4,8, "D1374",0,-4,1,1,1,5,0x2,648,
    { 0x00f8fc00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0x00bfff00},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x2000,55.000000,attributes+0,1,NULL,autohelperowl_defendpat430,3,0.019600},
  {owl_defendpat431,3,8, "D1375",-1,-2,1,1,2,3,0x0,721,
    { 0x33ffff00, 0xf0fcf0fc, 0xfcfc3000, 0x3cfc3c00, 0xf0fcf000, 0xffff3300, 0x3cfc3cfc, 0x30fcfc00},
    { 0x01601000, 0x10600004, 0x10240000, 0x00241000, 0x00601000, 0x10600100, 0x10240040, 0x00241000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat431,3,1.000000},
  {owl_defendpat432,3,8, "D1376",0,-2,1,1,1,3,0x2,685,
    { 0x003bfd00, 0xc0f0e070, 0xfcb00000, 0x2c3c0c00, 0xe0f0c000, 0xfd3b0000, 0x0c3c2c34, 0x00b0fc00},
    { 0x00214000, 0x40200010, 0x04200000, 0x00200400, 0x00204000, 0x40210000, 0x04200010, 0x00200400}
   , 0x6000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat432,3,0.902176},
  {owl_defendpat433,4,8, "D1377",-1,-1,1,3,2,4,0x2,647,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00241000, 0x00601000, 0x10600000, 0x10240000, 0x10600000, 0x10240000, 0x00241000, 0x00601000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat433,3,1.000000},
  {owl_defendpat434,1,4, "D1378",-1,-1,0,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat434,0,3.320000},
  {owl_defendpat435,1,8, "D1379",-2,0,1,2,3,2,0x0,685,
    { 0x0070fcf0, 0xd0f0c000, 0xfc340000, 0x0c3f1f00, 0xc0f0d000, 0xfc700000, 0x1f3f0c00, 0x0034fc3c},
    { 0x00100820, 0x00108000, 0x80100000, 0x08120000, 0x80100000, 0x08100000, 0x00120800, 0x00108020}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat435,0,0.442960},
  {owl_defendpat436,1,8, "D1380",-2,0,0,2,2,2,0x0,722,
    { 0x003c3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3f0f, 0x00f0f0c0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat436,0,0.019600},
  {owl_defendpat437,2,8, "D1381",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00600400, 0x10204000, 0x40240000, 0x04201000, 0x40201000, 0x04600000, 0x10200400, 0x00244000}
   , 0x6000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat437,3,1.096000},
  {owl_defendpat438,2,8, "D1382",-1,-1,1,0,2,1,0x0,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00244000, 0x40201000, 0x04600000, 0x10200400, 0x10204000, 0x40240000, 0x04201000, 0x00600400}
   , 0x6000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat438,3,0.376000},
  {owl_defendpat439,2,8, "D1383",0,-1,4,1,4,2,0x0,686,
    { 0x0038fc3c, 0xc0f0e000, 0xfcb00000, 0x2f3f0c00, 0xe0f0c000, 0xfc380000, 0x0c3f2f00, 0x00b0fcf0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2810,71.000000,attributes+0,1,NULL,autohelperowl_defendpat439,0,6.010000},
  {owl_defendpat440,2,8, "D1384",0,0,2,2,2,2,0x0,722,
    { 0x003c3f33, 0x00f0f0c0, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3f3c0000, 0x003f3c0f, 0x00f0f030},
    { 0x00100001, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100001, 0x00100000}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat440,0,0.667600},
  {owl_defendpat441,2,8, "D1385",-2,0,1,1,3,1,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0x003fff00},
    { 0x00200400, 0x00204000, 0x41200000, 0x04200004, 0x40200040, 0x04200000, 0x00200400, 0x00204100}
   , 0x2000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat441,3,0.592000},
  {owl_defendpat442,3,8, "D1386a",0,-1,1,2,1,3,0x2,685,
    { 0x00fdbf00, 0xb0f0f0d0, 0xf8fc0000, 0x3c3c3800, 0xf0f0b000, 0xbffd0000, 0x383c3c1c, 0x00fcf800},
    { 0x00600100, 0x10200040, 0x00240000, 0x00201000, 0x00201000, 0x01600000, 0x10200004, 0x00240000}
   , 0x2800,90.000000,attributes+0,1,NULL,autohelperowl_defendpat442,3,0.016000},
  {owl_defendpat443,3,8, "D1386b",0,-1,1,2,1,3,0x2,685,
    { 0x00fdbf00, 0xb0f0f0d0, 0xf8fc0000, 0x3c3c3800, 0xf0f0b000, 0xbffd0000, 0x383c3c1c, 0x00fcf800},
    { 0x00600100, 0x10200040, 0x00240000, 0x00201000, 0x00201000, 0x01600000, 0x10200004, 0x00240000}
   , 0x2800,35.000000,attributes+0,1,NULL,autohelperowl_defendpat443,3,0.016000},
  {owl_defendpat444,4,8, "D1387",-2,-1,1,2,3,3,0x0,647,
    { 0xbffff800, 0xf8fcbe3c, 0xbcfcf880, 0xf8fcbc00, 0xbefcf800, 0xf8ffbf08, 0xbcfcf8f0, 0xf8fcbc00},
    { 0x00229000, 0x80600020, 0x18200000, 0x00240800, 0x00608000, 0x90220000, 0x08240020, 0x00201800}
   , 0x2200,75.000000,attributes+0,1,NULL,autohelperowl_defendpat444,3,0.106000},
  {owl_defendpat445,5,8, "D1388",-2,-1,1,2,3,3,0x0,721,
    { 0xbfff3800, 0x38fcbe3c, 0xb0fcf880, 0xf8fcb000, 0xbefc3800, 0x38ffbf08, 0xb0fcf8f0, 0xf8fcb000},
    { 0x00621000, 0x10600020, 0x10240000, 0x00241000, 0x00601000, 0x10620000, 0x10240020, 0x00241000}
   , 0x2800,75.000000,attributes+0,1,NULL,autohelperowl_defendpat445,3,0.235600},
  {owl_defendpat446,2,8, "D1389",0,-1,1,2,1,3,0x2,685,
    { 0x00ff3c00, 0x30f0f030, 0xf0fc0000, 0x3c3c3000, 0xf0f03000, 0x3cff0000, 0x303c3c30, 0x00fcf000},
    { 0x00610000, 0x10200010, 0x00240000, 0x00201000, 0x00201000, 0x00610000, 0x10200010, 0x00240000}
   , 0x6000,84.000000,attributes+0,1,NULL,autohelperowl_defendpat446,3,3.616000},
  {owl_defendpat447,3,8, "D1390",-2,-1,1,3,3,4,0x2,683,
    { 0xbfff1c00, 0x387cfc3f, 0xd0fcf800, 0xfcf4b000, 0xfc7c3800, 0x1cffbf03, 0xb0f4fcf0, 0xf8fcd000},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x800,80.000000,attributes+0,1,NULL,autohelperowl_defendpat447,3,5.410000},
  {owl_defendpat448,3,8, "D1391",0,-1,1,2,1,3,0x0,721,
    { 0x00fff000, 0xf0f03030, 0x3cfc0000, 0x303c3c00, 0x30f0f000, 0xf0ff0000, 0x3c3c3030, 0x00fc3c00},
    { 0x00116000, 0x40900010, 0x24100000, 0x00180400, 0x00904000, 0x60110000, 0x04180010, 0x00102400}
   , 0x4000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat448,0,5.410000},
  {owl_defendpat449,2,8, "D1392",-1,-1,0,1,1,2,0x0,647,
    { 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000},
    { 0x48240000, 0x04201800, 0x00608400, 0x90204000, 0x18200400, 0x00244800, 0x40209000, 0x84600000}
   , 0x800,40.000000,attributes+0,1,NULL,autohelperowl_defendpat449,3,0.010000},
  {owl_defendpat450,3,8, "D1393",0,-2,1,1,1,3,0x0,648,
    { 0x00fcfc00, 0xf0f0f000, 0xfcff0000, 0x3c3c3c30, 0xf0f0f030, 0xfcfc0000, 0x3c3c3c00, 0x00fffc00},
    { 0x00102400, 0x00904000, 0x60110000, 0x04180010, 0x40900010, 0x24100000, 0x00180400, 0x00116000}
   , 0x200,50.000000,attributes+0,1,NULL,autohelperowl_defendpat450,0,3.832000},
  {owl_defendpat451,3,8, "D1394",0,-2,1,1,1,3,0x0,721,
    { 0x00fc3c00, 0x30f0f000, 0xf0ff0000, 0x3c3c3030, 0xf0f03030, 0x3cfc0000, 0x303c3c00, 0x00fff000},
    { 0x00102400, 0x00904000, 0x60110000, 0x04180010, 0x40900010, 0x24100000, 0x00180400, 0x00116000}
   , 0x4000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat451,0,2.536000},
  {owl_defendpat452,3,8, "D1395",0,-1,1,2,1,3,0x2,722,
    { 0x003ffd00, 0xc0f0f070, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfd3f0000, 0x0c3c3c34, 0x00f0fc00},
    { 0x00196000, 0x40902010, 0x24900000, 0x20180400, 0x20904000, 0x60190000, 0x04182010, 0x00902400}
   , 0x810,40.000000,attributes+0,1,NULL,autohelperowl_defendpat452,0,3.616000},
  {owl_defendpat453,3,8, "D1400",-1,-2,1,1,2,3,0x1,721,
    { 0x3fff3c00, 0x30fcfc3c, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3cff3f00, 0x30fcfcf0, 0xf0fcf000},
    { 0x20912400, 0x20984010, 0x60182000, 0x04982000, 0x40982000, 0x24912000, 0x20980410, 0x20186000}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat453,0,0.019600},
  {owl_defendpat454,3,8, "D1400b",-1,-2,1,1,2,3,0x1,720,
    { 0x3fff3c00, 0x30fcfc3c, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3cff3f00, 0x30fcfcf0, 0xf0fcf000},
    { 0x20912400, 0x20984010, 0x60182000, 0x04982000, 0x40982000, 0x24912000, 0x20980410, 0x20186000}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat454,0,0.010000},
  {owl_defendpat455,3,8, "D1401",-1,-2,1,1,2,3,0x1,720,
    { 0x3fff3c00, 0x30fcfc3c, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3cff3f00, 0x30fcfcf0, 0xf0fcf000},
    { 0x20912400, 0x20984010, 0x60182000, 0x04982000, 0x40982000, 0x24912000, 0x20980410, 0x20186000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat455,0,0.016000},
  {owl_defendpat456,2,8, "D1402",0,-1,1,2,1,3,0x2,722,
    { 0x00fcff00, 0xf0f0f0c0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfffc0000, 0x3c3c3c0c, 0x00fcfc00},
    { 0x00186200, 0x40902080, 0x24900000, 0x20180400, 0x20904000, 0x62180000, 0x04182008, 0x00902400}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_defendpat456,0,0.076160},
  {owl_defendpat457,2,8, "D1403",0,-1,1,1,1,2,0xa,722,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00186000, 0x40902000, 0x24900000, 0x20180400, 0x20904000, 0x60180000, 0x04182000, 0x00902400}
   , 0x10,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat458,3,8, "D1404",-1,-1,1,1,2,2,0xa,685,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x58240000, 0x04241800, 0x00609400, 0x90604000, 0x18240400, 0x00245800, 0x40609000, 0x94600000}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_defendpat458,3,1.000000},
  {owl_defendpat459,4,8, "D1405",-1,-1,1,1,2,2,0xa,685,
    { 0xf8fcf400, 0xfcfc7800, 0x7cfcbc00, 0xb4fcfc00, 0x78fcfc00, 0xf4fcf800, 0xfcfcb400, 0xbcfc7c00},
    { 0x50248000, 0x84241000, 0x08601400, 0x10604800, 0x10248400, 0x80245000, 0x48601000, 0x14600800}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_defendpat459,3,1.000000},
  {owl_defendpat460,4,8, "D1405b",-1,-1,1,1,2,2,0xa,721,
    { 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00, 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00},
    { 0x50209000, 0x84640000, 0x18201400, 0x00644800, 0x00648400, 0x90205000, 0x48640000, 0x14201800}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_defendpat460,3,1.000000},
  {owl_defendpat461,4,8, "D1406",-1,-1,1,1,2,2,0xa,647,
    { 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00, 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00},
    { 0x50248000, 0x84241000, 0x08601400, 0x10604800, 0x10248400, 0x80245000, 0x48601000, 0x14600800}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat462,3,8, "D1407",-2,-1,1,2,3,3,0xa,647,
    { 0xfcfcfc00, 0xffffff00, 0xfffffcfc, 0xfcfcfc3c, 0xfffffff0, 0xfcfcfcfc, 0xfcfcfc00, 0xfcffff00},
    { 0x40100000, 0x06110000, 0x00120418, 0x00104020, 0x00110620, 0x00104090, 0x40100000, 0x04120000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat463,4,8, "D1408",-2,-1,1,2,3,3,0x0,683,
    { 0xfcfcf000, 0xfcff3c00, 0x3ffffc30, 0xf0fcfc3c, 0x3cfffcf0, 0xf0fcfc30, 0xfcfcf000, 0xfcff3f00},
    { 0x88641000, 0x18621800, 0x11668820, 0x90249024, 0x18621860, 0x10648820, 0x90249000, 0x88661100}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat464,3,8, "D1409",-2,-1,1,1,3,2,0x4,683,
    { 0xfcfcf000, 0xfcff3c00, 0x3cfcfc30, 0xf0fcfc00, 0x3cfffc00, 0xf0fcfc30, 0xfcfcf000, 0xfcfc3c00},
    { 0x88641000, 0x18621800, 0x10648820, 0x90249000, 0x18621800, 0x10648820, 0x90249000, 0x88641000}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat465,6,8, "D1410",-2,-1,1,1,3,2,0x6,722,
    { 0xf8fcfc00, 0xfcfcf800, 0xffffbc00, 0xbcfcfc3c, 0xf8fcfcf0, 0xfcfcf800, 0xfcfcbc00, 0xbcffff00},
    { 0x5010a000, 0x84940000, 0x29111400, 0x00584814, 0x00948450, 0xa0105000, 0x48580000, 0x14112900}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat466,2,8, "D1411",0,-1,1,1,1,2,0xa,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00601800, 0x10608000, 0x90240000, 0x08241000, 0x80601000, 0x18600000, 0x10240800, 0x00249000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_defendpat466,3,1.000000},
  {owl_defendpat467,3,8, "D1411b",0,-1,1,1,1,2,0xa,721,
    { 0x00fcbc00, 0xb0f0f000, 0xf8fc0000, 0x3c3c3800, 0xf0f0b000, 0xbcfc0000, 0x383c3c00, 0x00fcf800},
    { 0x00601800, 0x10608000, 0x90240000, 0x08241000, 0x80601000, 0x18600000, 0x10240800, 0x00249000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat467,3,1.000000},
  {owl_defendpat468,4,8, "D1412",-1,-1,1,1,2,2,0xa,648,
    { 0x0cfcfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xc0fcfc00},
    { 0x04502400, 0x10904400, 0x60144000, 0x44181000, 0x44901000, 0x24500400, 0x10184400, 0x40146000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat469,3,8, "D1413",-1,-1,1,1,2,2,0xa,648,
    { 0x0cfcfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xc0fcfc00},
    { 0x04582000, 0x10902400, 0x20944000, 0x60181000, 0x24901000, 0x20580400, 0x10186000, 0x40942000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat469,0,0.010000},
  {owl_defendpat470,8,8, "D1414",-2,-2,2,2,4,4,0xa,720,
    { 0x0f3fffff, 0xc0f0fefe, 0xfef0c080, 0xff3f0f0a, 0xfef0c080, 0xff3f0f0a, 0x0f3fffff, 0xc0f0fefe},
    { 0x00165822, 0x40509020, 0x94500000, 0x18160400, 0x90504000, 0x58160000, 0x04161822, 0x00509420}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat471,1,8, "D1415",-1,0,0,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat471,3,0.040000},
  {owl_defendpat472,1,4, "D1416",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat472,3,0.040000},
  {owl_defendpat473,1,8, "D1417",-1,0,0,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat473,3,0.050800},
  {owl_defendpat474,1,4, "D1418",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat474,3,0.050800},
  {owl_defendpat475,5,8, "D1419",-1,-2,1,1,2,3,0x2,646,
    { 0xffff3e00, 0x3cfcfcbc, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3effff00, 0xf0fcfcf8, 0xfcfcf000},
    { 0x26912400, 0x20984418, 0x60186000, 0x44982000, 0x44982000, 0x24912600, 0x20984490, 0x60186000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat475,0,1.000000},
  {owl_defendpat476,5,8, "D1420",-1,-2,1,1,2,3,0x2,646,
    { 0xffff3e00, 0x3cfcfcbc, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3effff00, 0xf0fcfcf8, 0xfcfcf000},
    { 0x24912400, 0x20984410, 0x60186000, 0x44982000, 0x44982000, 0x24912400, 0x20984410, 0x60186000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat476,0,1.000000},
  {owl_defendpat477,1,8, "D1421",0,-1,1,1,1,2,0x2,648,
    { 0x00f4fc00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0x007cfc00},
    { 0x00600800, 0x10208000, 0x80240000, 0x08201000, 0x80201000, 0x08600000, 0x10200800, 0x00248000}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_defendpat477,3,1.600000},
  {owl_defendpat478,6,8, "D1422",-1,-1,2,2,3,3,0xa,760,
    { 0xf0ffffff, 0xfcfcf0f0, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfffff000, 0xffff3f3f, 0x3cfcfcfc},
    { 0xa0651a44, 0x18689090, 0x90642800, 0x19a49100, 0x90681800, 0x1a65a000, 0x91a41918, 0x28649044}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_defendpat478,3,0.010000},
  {owl_defendpat479,6,8, "D1423",-1,-1,2,1,3,2,0xa,723,
    { 0x3c3cfcfc, 0xc0fcfc00, 0xfcf0f000, 0xffff0f00, 0xfcfcc000, 0xfc3c3c00, 0x0fffff00, 0xf0f0fcfc},
    { 0x14105840, 0x40548400, 0x94105000, 0x48540500, 0x84544000, 0x58101400, 0x05544800, 0x50109404}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat480,5,8, "D1424",-1,-1,1,1,2,2,0xa,646,
    { 0xe0f8bc00, 0xbcf8e000, 0xf8bc2c00, 0x2cbcf800, 0xe0f8bc00, 0xbcf8e000, 0xf8bc2c00, 0x2cbcf800},
    { 0x00900400, 0x20104000, 0x40180000, 0x04102000, 0x40102000, 0x04900000, 0x20100400, 0x00184000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat481,1,8, "DC01a",-1,0,1,2,2,2,0x0,722,
    { 0x003f3c00, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f000},
    { 0x00221000, 0x00600020, 0x10200000, 0x00240000, 0x00600000, 0x10220000, 0x00240020, 0x00201000}
   , 0x100,35.000000,attributes+1,1,NULL,autohelperowl_defendpat481,3,0.400000},
  {owl_defendpat482,1,8, "DC01b",-1,0,1,2,2,2,0x0,722,
    { 0x003f3c00, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f000},
    { 0x00221000, 0x00600020, 0x10200000, 0x00240000, 0x00600000, 0x10220000, 0x00240020, 0x00201000}
   , 0x100,35.000000,attributes+3,1,NULL,autohelperowl_defendpat482,3,0.400000},
  {owl_defendpat483,2,8, "DC02",-1,-1,1,2,2,3,0x2,685,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x60600000, 0x14280000, 0x00242400, 0x00a05000, 0x00281400, 0x00606000, 0x50a00000, 0x24240000}
   , 0x100,35.000000,attributes+5,1,NULL,autohelperowl_defendpat483,3,0.034000},
  {owl_defendpat484,4,8, "DE01a",0,-1,2,2,2,3,0x0,721,
    { 0x003cff7f, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xff3c0000, 0x0d3f3f0f, 0x00f0fcf4},
    { 0x00100015, 0x00100000, 0x00100000, 0x01110000, 0x00100000, 0x00100000, 0x00110101, 0x00100050}
   , 0x100,30.000000,attributes+7,0,NULL,NULL,0,0.000000},
  {owl_defendpat485,5,8, "DE01b",0,-1,2,2,2,3,0x0,721,
    { 0x003cfffe, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0e, 0x00f0fcfc},
    { 0x00100054, 0x00100000, 0x00100000, 0x01110100, 0x00100000, 0x00100000, 0x01110100, 0x00100054}
   , 0x100,30.000000,attributes+9,0,NULL,NULL,0,0.000000},
  {owl_defendpat486,2,8, "DE02",0,-1,1,1,1,2,0x2,721,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x100,30.000000,attributes+11,1,NULL,autohelperowl_defendpat486,0,0.592000},
  {owl_defendpat487,2,8, "DE03",0,-1,1,1,1,2,0x2,722,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00500000, 0x10100000, 0x00140000, 0x00101000, 0x00101000, 0x00500000, 0x10100000, 0x00140000}
   , 0x100,30.000000,attributes+13,1,NULL,autohelperowl_defendpat487,0,0.592000},
  {owl_defendpat488,5,8, "DE04",-1,-1,1,3,2,4,0x2,796,
    { 0x7effff00, 0xf4fcfcf8, 0xfcfcf400, 0xfcfc7c00, 0xfcfcf400, 0xffff7e00, 0x7cfcfcbc, 0xf4fcfc00},
    { 0x24918600, 0xa0184490, 0x48186000, 0x44902800, 0x4418a000, 0x86912400, 0x28904418, 0x60184800}
   , 0x100,30.000000,attributes+15,0,NULL,NULL,0,0.000000},
  {owl_defendpat489,2,8, "DR01",-1,-2,1,2,2,4,0x2,722,
    { 0xfcfdff00, 0xfcfcfcd0, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffdfc00, 0xfcfcfc1c, 0xfcffff00},
    { 0x18180000, 0x00142800, 0x00909000, 0xa0500000, 0x28140000, 0x00181800, 0x0050a000, 0x90900000}
   , 0x100,30.000000,attributes+17,1,NULL,autohelperowl_defendpat489,0,0.610000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,NULL,0,NULL,NULL,0,0.0}
};

#include "dfa-mkpat.h"
static const state_rt_t state_owl_defendpat[12772] = {
{{0,0,0,0}, 0},	{{0,1,68,0}, 0},	{{1,83,112,158}, 0},
{{1,158,200,238}, 3},	{{1,240,250,268}, 0},	{{1,289,298,338}, 0},
{{1,359,406,430}, 0},	{{1,437,449,0}, 0},	{{1,466,484,338}, 0},
{{1,492,514,531}, 0},	{{1,551,563,268}, 0},	{{1,566,569,572}, 0},
{{1,289,574,576}, 0},	{{1,289,289,289}, 0},	{{1,576,591,596}, 0},
{{1,607,621,0}, 0},	{{1,621,631,338}, 0},	{{1,531,531,531}, 0},
{{1,1,1,1}, 0},	{{1,492,492,492}, 0},	{{1,551,1,551}, 0},
{{1,1,250,250}, 0},	{{1,1,1,628}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,298,298,638}, 0},
{{1,576,576,576}, 4},	{{1,298,298,298}, 0},	{{1,642,531,531}, 0},
{{1,1,1,1}, 5},	{{1,158,158,158}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,158}, 0},	{{1,298,298,0}, 0},	{{1,298,298,298}, 0},
{{1,0,0,0}, 8},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 9},
{{1,603,615,620}, 0},	{{1,623,651,655}, 0},	{{1,657,670,675}, 0},
{{1,677,688,691}, 0},	{{1,692,715,722}, 0},	{{1,729,0,0}, 0},
{{1,750,784,0}, 0},	{{1,791,812,0}, 0},	{{1,818,818,657}, 0},
{{1,1,821,821}, 0},	{{1,823,818,657}, 0},	{{1,1,1,1}, 0},
{{1,823,855,857}, 0},	{{1,0,0,0}, 0},	{{1,867,0,0}, 0},
{{0,876,0,0}, 0},	{{1,888,894,932}, 0},	{{1,932,943,954}, 0},
{{1,964,964,964}, 0},	{{1,964,972,981}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,954,954,954}, 0},
{{1,984,984,987}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,992}, 0},	{{1,1,1003,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1007,0,0}, 0},
{{1,1007,1012,0}, 0},	{{1,1016,1027,1030}, 0},	{{1,1031,1036,1040}, 0},
{{1,1042,1,1051}, 0},	{{1,1058,1064,0}, 0},	{{1,1064,1,1}, 270},
{{1,1016,1016,1016}, 0},	{{1,1016,1016,1016}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1058,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 271},	{{0,1025,1028,0}, 0},	{{1,1030,1035,1053}, 0},
{{1,1054,1074,1096}, 0},	{{1,1096,1105,1113}, 0},	{{1,1119,1126,813}, 0},
{{1,813,1132,813}, 0},	{{1,1,1140,1151}, 0},	{{1,1,1035,1035}, 0},
{{1,1,1035,1035}, 0},	{{1,1,1035,1035}, 0},	{{1,1163,1164,1165}, 0},
{{1,1167,0,1168}, 0},	{{1,1179,0,0}, 0},	{{1,1179,1179,0}, 0},
{{1,1,1,1151}, 0},	{{1,1151,1151,374}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1035,1035}, 0},	{{1,1,1,1174}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1185}, 0},
{{1,1185,1185,1190}, 0},	{{1,0,0,0}, 4},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,335}, 0},	{{1,1,1,1}, 181},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 8},	{{1,1171,1179,1204}, 0},
{{1,1207,1218,1220}, 0},	{{1,1229,1233,1242}, 0},	{{1,1249,1259,0}, 0},
{{1,1229,1261,1220}, 206},	{{1,1,1,1}, 0},	{{1,1268,1179,1179}, 0},
{{1,1,1,1}, 0},	{{1,1269,1179,1179}, 0},	{{1,1179,1179,1179}, 0},
{{1,1280,1295,1295}, 0},	{{1,1137,0,0}, 0},	{{1,0,0,0}, 207},
{{1,1,1,1}, 0},	{{1,1179,1179,1179}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1179,1179,1179}, 0},	{{1,1179,1179,1179}, 0},
{{1,1,1,1280}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1280}, 0},
{{1,1,1,1}, 208},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1269}, 0},	{{1,1,1,1277}, 0},	{{1,1277,1277,1277}, 0},
{{0,1277,0,1278}, 0},	{{1,1278,1282,1291}, 0},	{{1,1299,1341,1343}, 0},
{{1,198,210,0}, 0},	{{1,1349,1355,1291}, 0},	{{1,1360,275,292}, 0},
{{1,312,1364,29}, 0},	{{1,1,1364,1367}, 0},	{{1,1,1364,1369}, 0},
{{1,1,1,1}, 0},	{{-238,1369,352,1371}, 0},	{{1,1382,1391,1400}, 0},
{{1,1408,1411,1424}, 0},	{{1,188,1431,0}, 0},	{{1,1443,1449,1400}, 0},
{{1,1454,1467,1480}, 0},	{{1,1492,1496,19}, 0},	{{1,1499,1499,1502}, 0},
{{1,1499,1499,1504}, 0},	{{1,1,1,1}, 0},	{{1,1359,342,1504}, 0},
{{1,358,372,0}, 0},	{{1,372,382,89}, 0},	{{1,1480,1480,1480}, 0},
{{1,1,1,1}, 0},	{{1,1454,1454,1454}, 0},	{{1,19,1,19}, 0},
{{1,1,1,1}, 0},	{{-248,-248,-248,-248}, 0},	{{1,1507,1511,1522}, 0},
{{1,1530,1532,1533}, 0},	{{1,170,1535,0}, 0},	{{1,1535,1543,1522}, 0},
{{1,1436,1548,1462}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1341,324,1548}, 0},
{{1,340,354,0}, 0},	{{1,354,364,71}, 0},	{{1,1462,1462,1462}, 0},
{{1,1,1,1}, 0},	{{1,1436,1436,1436}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-266,31,31,1537}, 0},
{{1,1543,1573,1574}, 0},	{{1,1577,161,0}, 0},	{{1,178,196,50}, 0},
{{1,1311,1585,1590}, 0},	{{1,263,1315,-20}, 0},	{{1,1593,1596,1599}, 0},
{{1,1,286,288}, 0},	{{1,1,1,1}, 0},	{{-287,288,303,1599}, 0},
{{1,1610,1619,1620}, 0},	{{1,1627,1646,0}, 0},	{{1,1646,1647,41}, 0},
{{1,1647,1665,1673}, 0},	{{1,1679,1683,1481}, 0},	{{1,1686,1686,1689}, 0},
{{1,1,1,1691}, 0},	{{1,1,1,1}, 0},	{{1,1691,294,1590}, 0},
{{1,310,324,0}, 0},	{{1,324,334,41}, 0},	{{1,934,934,934}, 0},
{{1,1,1,1}, 0},	{{1,1647,1647,1647}, 0},	{{1,324,1,324}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,341}, 0},
{{1,279,279,279}, 4},	{{1,1,1,1}, 0},	{{1,1677,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{-296,0,0,0}, 0},	{{1,1661,1670,1673}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1678,1678,1683}, 0},	{{1,1688,1452,1452}, 0},
{{1,1193,1193,1691}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1478,1478,1550}, 0},	{{1,1690,284,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,239,239,239}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1467}, 0},	{{-39,239,239,239}, 0},	{{1,1678,1688,0}, 62},
{{1,1688,1690,1640}, 0},	{{1,1549,1549,1697}, 0},	{{1,1180,1180,1180}, 0},
{{1,1,1,1473}, 0},	{{1,1473,1473,1180}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1698,0,0}, 0},	{{1,1473,1302,1302}, 0},
{{1,0,1710,0}, 0},	{{1,1,1,1}, 0},	{{1,1727,1727,1744}, 0},
{{1,1180,1180,1180}, 0},	{{1,1473,1473,1473}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1473}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1745,1710,0}, 0},	{{1,1,1,1}, 5},	{{1,1727,1710,1710}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1727}, 0},	{{1,1727,1727,1727}, 0},
{{1,1473,1473,1473}, 0},	{{1,1,1,1}, 63},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1180,0,0}, 0},	{{1,1,1,1}, 64},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 65},	{{1,1721,1729,0}, 0},	{{1,1602,1602,1602}, 0},
{{1,1,1255,1737}, 0},	{{1,1,1255,1255}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1255}, 0},	{{1,1,1,1255}, 0},	{{1,1,1,1}, 0},
{{1,1732,0,0}, 0},	{{1,1255,1255,1255}, 0},	{{1,1731,0,0}, 0},
{{1,1,1,1255}, 0},	{{1,1,1,1731}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1698,0,0}, 0},
{{0,0,0,0}, 5},	{{1,1731,1738,0}, 0},	{{1,1744,1581,1581}, 0},
{{1,0,1744,1745}, 0},	{{1,1746,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1581}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1746}, 0},
{{1,1746,0,0}, 0},	{{1,1,1,1}, 51},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1748,1750}, 0},
{{1,1,1750,1751}, 0},	{{1,1762,1012,1012}, 0},	{{1,1,1,1012}, 0},
{{1,1,1,1}, 52},	{{1,1,0,0}, 0},	{{0,0,0,0}, 53},
{{1,1758,1764,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1760,1761,1761}, 0},
{{1,0,0,1761}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1762}, 0},
{{1,1768,1769,1774}, 0},	{{1,1778,1782,1337}, 0},	{{1,1785,1785,1788}, 0},
{{1,1,1,1790}, 0},	{{1,1,1,1}, 0},	{{1,1790,126,1422}, 0},
{{1,1562,156,0}, 0},	{{1,-127,1789,-127}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,111,111,111}, 0},	{{1,-127,1,-127}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-127,-127,-127,173}, 0},
{{1,1781,1789,1826}, 0},	{{1,1833,1327,1327}, 0},	{{1,1111,1111,1836}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1836,108,1839}, 0},
{{1,1544,138,0}, 0},	{{1,-145,1771,-145}, 0},	{{-145,0,1848,0}, 0},
{{1,1108,1212,1212}, 0},	{{1,1,1875,1875}, 0},	{{1,1108,1212,1212}, 0},
{{1,1108,1108,1108}, 0},	{{1,1117,1324,1875}, 0},	{{1,116,130,0}, 0},
{{1,1453,1453,100}, 0},	{{1,40,40,40}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1212,1212}, 0},
{{1,1,1,1870}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1453,1453,85}, 0},	{{1,85,85,85}, 4},
{{1,85,85,85}, 0},	{{1,151,40,40}, 0},	{{1,1,1,1}, 5},
{{-333,-333,-333,-333}, 0},	{{1,1,1302,1302}, 0},	{{1,1,1302,1302}, 0},
{{1,1,1302,1302}, 0},	{{1,1,1,1360}, 0},	{{1,1095,1302,1865}, 0},
{{1,94,108,0}, 0},	{{1,1431,1431,78}, 0},	{{1,18,18,18}, 0},
{{1,1,1,1}, 0},	{{1,-21,-21,-21}, 0},	{{1,1,1,1}, 0},
{{1,1,1203,1203}, 0},	{{1,1,1,1869}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-21,1431,1431,1869}, 0},
{{1,1,1199,1199}, 0},	{{1,1,1874,1874}, 0},	{{1,1,1874,1199}, 0},
{{1,1,1,1348}, 0},	{{1,1876,1878,1879}, 0},	{{1,1881,0,0}, 0},
{{1,806,1881,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1199,1199}, 0},
{{1,1,1,1876}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,701,701,0}, 0},	{{1,0,0,0}, 4},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-38,-38,-38,-38}, 0},
{{1,1,1875,1875}, 0},	{{1,1,1875,1875}, 0},	{{1,1,1,1}, 0},
{{1,1058,41,1875}, 0},	{{1,57,71,0}, 0},	{{1,71,81,-212}, 0},
{{1,-19,-19,-19}, 0},	{{1,1,1,1}, 0},	{{1,-58,-58,-58}, 0},
{{1,1,1,1}, 0},	{{1,1,-282,-282}, 0},	{{-282,-282,-282,1879}, 0},
{{1,1,1882,1}, 0},	{{1,1,1,-294}, 0},	{{1,1,1,1}, 0},
{{-312,1046,29,1253}, 0},	{{1,1316,1319,1043}, 0},	{{1,1316,1316,1316}, 0},
{{-564,11,26,1879}, 0},	{{1,1316,1316,1040}, 0},	{{1,1316,1316,1316}, 0},
{{-318,8,23,1876}, 0},	{{1,1316,1316,1887}, 0},	{{1,1316,1316,1316}, 0},
{{-321,5,20,1887}, 0},	{{1,1,1,1}, 0},	{{-323,3,18,1314}, 0},
{{1,1,1,1}, 0},	{{-307,1033,16,1312}, 0},	{{1,32,1894,0}, 0},
{{1,1,16,16}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1904}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-169,1399,0,0}, 0},	{{1,1437,31,0}, 0},
{{1,1,1900,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-14,-14,-14,-14}, 0},	{{1,1432,26,0}, 0},	{{1,1292,1292,1292}, 0},
{{1,1897,0,0}, 0},	{{1,1292,1292,1292}, 0},	{{1,1897,-19,-19}, 0},
{{1,1897,-19,-19}, 0},	{{1,1849,1902,1863}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1292,1292,1292}, 0},	{{1,1,1,1}, 0},
{{-19,-19,-19,1902}, 0},	{{1,1902,1,1}, 18},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1900,0,0}, 0},
{{-13,-13,-13,-13}, 0},	{{1,611,611,611}, 0},	{{1,1,1,1}, 0},
{{1,1324,1324,1324}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-322,-322,-322,1184}, 0},	{{1,601,601,601}, 0},
{{1,1,1,1}, 0},	{{-9,1314,1314,1887}, 0},	{{1,1,-626,-626}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-329,-329,11}, 0},
{{1,-51,-51,-51}, 4},	{{1,-329,-329,-329}, 0},	{{1,1892,1779,1779}, 0},
{{1,1,1,1}, 5},	{{1,704,704,704}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-626,-626,-626,1886}, 0},	{{1,-61,-61,-61}, 0},	{{1,1167,1167,1167}, 0},
{{1,1337,0,0}, 0},	{{1,1,1,1}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1880,1889}, 0},	{{-149,-149,-149,-149}, 11},
{{1,1896,1903,0}, 0},	{{1,1906,1918,1923}, 0},	{{1,1925,1940,1943}, 0},
{{1,1945,1947,1949}, 0},	{{1,1956,1967,0}, 0},	{{1,1975,1981,1918}, 0},
{{1,0,1989,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1985}, 0},
{{1,1987,1992,0}, 0},	{{1,1993,1996,1999}, 0},	{{1,2000,1,2002}, 0},
{{1,2002,1,1996}, 0},	{{0,2003,0,0}, 0},	{{1,2003,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2001}, 0},
{{1,2001,2007,2010}, 0},	{{1,2011,2024,2027}, 0},	{{1,2028,2037,2039}, 0},
{{1,2041,2052,1979}, 0},	{{1,2061,1876,1876}, 424},	{{1,2069,2090,2096}, 0},
{{1,1,2103,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2028}, 0},	{{1,2101,2028,2028}, 0},	{{1,2096,2101,0}, 0},
{{1,0,0,0}, 0},	{{1,1,2100,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 425},	{{1,2135,2140,2143}, 0},	{{1,2144,2155,2156}, 0},
{{1,2156,2157,2158}, 0},	{{0,2160,0,0}, 0},	{{1,2171,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2172,0,0}, 0},	{{1,2172,2176,2178}, 0},
{{1,2179,2180,2182}, 0},	{{1,2185,0,0}, 409},	{{1,94,128,0}, 0},
{{1,2205,156,2222}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2225,2228,2228}, 0},
{{1,0,0,0}, 0},	{{1,211,0,0}, 0},	{{0,2227,0,0}, 0},
{{1,2238,2241,2243}, 0},	{{1,2244,2254,2255}, 0},	{{1,2257,0,0}, 0},
{{1,81,115,0}, 0},	{{-12,2192,143,0}, 0},	{{1,2264,2266,2132}, 0},
{{1,2267,2268,2269}, 0},	{{-4,2270,0,0}, 0},	{{1,2272,2282,2284}, 0},
{{1,2291,0,0}, 0},	{{1,2300,108,0}, 0},	{{1,2185,136,2317}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2319,2321,2321}, 0},	{{1,0,0,0}, 0},
{{-19,191,2321,0}, 0},	{{1,2321,2323,2324}, 0},	{{1,2324,0,0}, 0},
{{-17,2324,97,0}, 0},	{{1,2329,1,2339}, 0},	{{0,2340,0,0}, 0},
{{1,2340,2344,0}, 370},	{{1,2344,2328,2328}, 0},	{{1,0,0,0}, 0},
{{1,1,2222,2222}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2344,2344,2344}, 0},	{{1,2328,0,0}, 0},
{{1,2344,2354,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2344,0}, 0},	{{1,2362,2364,0}, 0},
{{1,2364,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{0,0,2380,0}, 0},
{{1,2382,0,0}, 0},	{{1,2382,2203,2203}, 0},	{{1,2382,0,0}, 0},
{{1,2382,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2382}, 0},	{{1,2382,1830,1830}, 364},
{{1,2198,2216,2216}, 0},	{{1,2113,1935,1935}, 0},	{{1,1,2113,1935}, 0},
{{1,1,1,1}, 0},	{{1,1830,1830,1830}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2198}, 0},	{{1,1,1,1}, 0},	{{1,1935,2381,1935}, 0},
{{1,2417,1,1}, 0},	{{1,2113,0,0}, 0},	{{1,2113,0,0}, 0},
{{1,1,2113,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2407,0}, 0},
{{1,2453,2470,2487}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2491,2495,2495}, 0},
{{1,1934,0,0}, 0},	{{1,2497,2507,2507}, 354},	{{1,2507,2470,2487}, 0},
{{1,1,1,1}, 355},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,2511}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2498}, 0},	{{1,2517,2517,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2517,0,0}, 0},	{{1,0,0,0}, 0},	{{0,2518,0,0}, 0},
{{1,2071,2071,2071}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2071}, 0},
{{1,1,1,1}, 0},	{{1,2515,2094,2094}, 0},	{{1,0,0,0}, 0},
{{1,2515,0,0}, 0},	{{1,2524,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2071,1,2071}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2528}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,2541,0}, 0},	{{0,0,0,0}, 348},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2073,2073,2073}, 0},	{{1,0,0,0}, 0},
{{-154,2534,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-160}, 0},
{{1,1,1,1}, 0},	{{-816,6,38,38}, 0},	{{1,-2,-2,-163}, 0},
{{1,1,1,1}, 0},	{{-819,3,35,2528}, 0},	{{1,1,-4,-4}, 0},
{{-821,1,33,2529}, 0},	{{1,0,0,0}, 0},	{{1,2059,2478,0}, 0},
{{1,54,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2528}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 341},
{{1,0,0,0}, 0},	{{-853,-197,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-199,0,0}, 0},	{{1,2508,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2502}, 0},	{{1,2017,0,0}, 0},
{{1,1,1,1}, 0},	{{1,2380,2380,2380}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2493}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2008}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,2497,0}, 0},
{{0,0,0,0}, 337},	{{1,2496,2498,0}, 0},	{{1,1,2498,0}, 0},
{{1,1,2498,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,2496,0}, 0},	{{1,2506,2508,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,2511,0,0}, 0},
{{1,1,1,1}, 0},	{{1,2511,2514,0}, 0},	{{1,2516,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,2516}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2493}, 0},
{{0,2468,0,0}, 0},	{{1,2500,2500,2501}, 0},	{{1,2503,2511,50}, 0},
{{1,0,2520,0}, 0},	{{1,2520,1,1}, 0},	{{1,0,2521,0}, 0},
{{1,23,23,23}, 0},	{{1,1,1,56}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2522}, 0},	{{-930,-930,2526,-930}, 0},
{{1,2546,2546,2546}, 0},	{{1,2546,2554,2563}, 0},	{{1,0,2563,0}, 0},
{{1,1,1,1}, 0},	{{1,2574,0,0}, 0},	{{1,12,12,12}, 0},
{{1,1,1,2573}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2573}, 0},	{{-941,-941,2584,-941}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-952,-952,-952,-952}, 0},	{{-962,1,2579,18}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,-9,-9,-9}, 0},
{{1,2525,2525,2575}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-962,-962,-962,-962}, 0},	{{1,0,2574,0}, 0},	{{1,1,1,1}, 0},
{{1,2577,2583,0}, 0},	{{1,2588,2588,-17}, 0},	{{1,2592,2592,2592}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-970,2592,32,-970}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,-26,-26}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-26,-26,-26,2588}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-40,-40,-40,2586}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2584}, 0},
{{1,1,2540,-985}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-985,-985,-985,2586}, 0},	{{1,-990,12,-990}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-990,-990,0}, 0},	{{1,-990,-990,-990}, 0},	{{1,1,2581,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-990,-990,-990,2581}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-1001,-1001,0}, 0},
{{1,-1001,-1001,-1001}, 0},	{{1,2524,2524,2524}, 0},	{{1,1,1,2575}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1001}, 0},	{{1,1,1,1}, 0},	{{1,5,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 251},	{{0,0,0,0}, 250},	{{1,2574,2574,2576}, 0},
{{1,2577,2578,2578}, 0},	{{1,1,1,2578}, 0},	{{1,-147,-147,-147}, 0},
{{-147,-147,-147,-147}, 270},	{{1,2583,2584,2587}, 0},	{{1,2588,2589,2591}, 0},
{{1,1,1,2591}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 270},
{{1,2594,2597,2604}, 0},	{{1,2604,2606,2607}, 0},	{{1,2608,49,0}, 0},
{{1,2613,1,1}, 270},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2607,0,0}, 0},	{{1,2607,2609,2611}, 0},
{{1,2611,1,2612}, 0},	{{-1025,2597,2617,0}, 0},	{{1,2617,2618,2618}, 0},
{{-13,2590,-13,2618}, 0},	{{1,2619,2621,2622}, 0},	{{1,2624,0,0}, 0},
{{1,-1029,1,-1029}, 270},	{{1,2628,-14,-14}, 0},	{{-1029,-14,2628,-14}, 0},
{{1,2631,2632,2633}, 0},	{{1,2634,0,0}, 0},	{{1,-1034,-1034,-1034}, 270},
{{-1034,-19,-19,2646}, 0},	{{1,2648,1,2649}, 0},	{{1,2649,0,0}, 0},
{{-1038,-1038,-1038,-1038}, 270},	{{1,17,23,0}, 0},	{{1,2651,1,1}, 270},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1040,-1040,0,0}, 0},	{{1,8,2644,0}, 0},	{{1,2650,2651,2602}, 270},
{{1,0,2651,2656}, 0},	{{1,2588,2588,2588}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2652}, 0},
{{1,2652,2657,2631}, 275},	{{1,1,1,2657}, 0},	{{1,2566,2566,2566}, 0},
{{1,2658,1,2566}, 0},	{{1,1,2566,2566}, 276},	{{0,2667,0,0}, 277},
{{0,2667,0,0}, 0},	{{-1062,2667,-47,-47}, 0},	{{-1056,-1056,-1056,-1056}, 16},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{-211,-211,-211,-211}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2661}, 0},
{{1,2661,45,67}, 0},	{{1,2664,2667,2670}, 0},	{{1,2672,2674,0}, 0},
{{1,0,2675,0}, 0},	{{-1028,-1028,2675,122}, 0},	{{1,2679,2696,62}, 0},
{{1,2659,2662,2665}, 0},	{{1,2667,2696,0}, 0},	{{1,0,2670,0}, 0},
{{1,1,2695,2700}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2709,2710,2711}, 0},	{{1,133,0,134}, 0},
{{1,145,0,0}, 0},	{{1,145,145,0}, 0},	{{1,1,1,2700}, 0},
{{1,2700,2700,538}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1033,-1033,-1033,-1033}, 0},	{{1,2703,2704,44}, 0},
{{-17,2704,2644,2647}, 0},	{{1,2710,2717,2718}, 0},	{{1,2720,73,-240}, 0},
{{1,-240,79,-240}, 0},	{{1,2720,2724,2735}, 0},	{{1,1,2660,2660}, 0},
{{1,1,2660,2660}, 0},	{{1,1,2660,2660}, 0},	{{1,1,2736,112}, 0},
{{1,114,0,2736}, 0},	{{1,126,0,0}, 0},	{{1,126,126,0}, 0},
{{1,1,1,-679}, 0},	{{1,-679,-679,-679}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,2660,2660}, 0},	{{1,1,1,2730}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-679,-679,-679,2730}, 0},
{{1,2730,2731,2732}, 0},	{{1,2734,2736,0}, 0},	{{1,0,2631,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2730,0,0}, 0},
{{1,106,0,0}, 0},	{{1,106,106,0}, 0},	{{1,1,1,1}, 201},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 4},	{{0,2717,0,0}, 0},	{{1,2718,2720,-282}, 62},
{{1,-282,-282,-282}, 0},	{{1,1,2719,0}, 0},	{{1,1,1,2661}, 0},
{{1,1,1,1}, 0},	{{1,1,2661,2661}, 0},	{{1,2721,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2721,0,0}, 0},	{{1,2722,2725,-291}, 0},
{{1,-291,-291,-291}, 0},	{{1,1,2204,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,2720}, 0},	{{1,2720,2722,-299}, 0},	{{1,2722,2723,-299}, 0},
{{1,2723,2727,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2728}, 0},	{{1,2728,-305,-305}, 0},
{{1,1,2735,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,911,911}, 0},	{{-838,-838,911,911}, 0},
{{1,2739,2740,-312}, 0},	{{1,1,2740,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2747,0,0}, 0},
{{-833,0,0,2747}, 0},	{{1,1,2749,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,2752}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,2752,0}, 0},	{{1,2565,2590,2590}, 0},	{{1,2565,2590,2590}, 0},
{{1,2565,2590,2590}, 0},	{{1,2777,2778,2785}, 0},	{{1,2791,2169,2792}, 0},
{{1,2797,2169,2169}, 0},	{{1,2797,2797,2169}, 0},	{{1,1,1,2778}, 0},
{{1,2778,2778,2785}, 0},	{{1,1,1,1}, 0},	{{-1138,2797,-1138,-1138}, 0},
{{1,1,2584,2584}, 0},	{{1,1,2584,2584}, 0},	{{1,1,2584,2584}, 0},
{{1,1,1,2638}, 0},	{{1,17,0,2807}, 0},	{{1,29,0,0}, 0},
{{1,29,29,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-776}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2584,2584}, 0},
{{1,1,1,2801}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1149,-1149,-1149,-1149}, 0},	{{-1161,5,0,2627}, 0},	{{-12,4,0,2626}, 0},
{{1,3,0,2798}, 0},	{{1,15,0,0}, 0},	{{-790,15,15,0}, 0},
{{0,13,2798,0}, 0},	{{1,0,0,0}, 0},	{{1,0,2810,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2801}, 0},	{{0,2801,0,0}, 0},	{{-104,-104,-104,-104}, 0},
{{1,1,-1172,-1172}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2808}, 0},
{{1,12,12,17}, 0},	{{1,0,0,0}, 4},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1031}, 0},	{{1,1,1,1}, 181},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1172,-1172,-1172,2798}, 0},	{{-1183,1,1,2798}, 0},
{{1,0,0,0}, 4},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 181},	{{-4,0,0,0}, 0},
{{1,37,2797,50}, 0},	{{1,2797,2799,2803}, 0},	{{1,2806,433,0}, 0},
{{1,50,91,50}, 206},	{{1,1,1,1}, 0},	{{1,2809,2809,9}, 0},
{{1,2809,1,1}, 0},	{{-1169,9,9,9}, 0},	{{1,2810,2819,42}, 0},
{{1,2789,2791,2820}, 0},	{{1,2823,425,0}, 0},	{{1,2830,83,42}, 206},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2830,42,42}, 0},
{{1,-41,0,0}, 0},	{{1,0,0,0}, 207},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 208},
{{1,4,2764,17}, 0},	{{1,2764,2766,2795}, 0},	{{1,2773,400,0}, 0},
{{-24,17,58,17}, 206},	{{1,2811,2820,2821}, 0},	{{1,2828,397,0}, 0},
{{1,2835,2844,14}, 206},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2811,2811}, 0},	{{1,2845,0,0}, 0},	{{0,0,0,0}, 207},
{{1,2844,2845,2846}, 0},	{{-13,2848,2858,0}, 0},	{{1,2858,2859,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 206},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-12,0,0,0}, 0},
{{1,2850,2859,0}, 62},	{{1,1,-8,-8}, 0},	{{1,1,1,1}, 0},
{{-8,2857,-8,-8}, 0},	{{1,2859,2862,0}, 0},	{{1,1,2737,2737}, 0},
{{1,1,1,1}, 0},	{{1,2862,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,2860,0,0}, 0},	{{1,2860,2867,0}, 0},	{{1,2046,2867,0}, 0},
{{1,2046,2046,2046}, 0},	{{1,2866,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,2865}, 0},
{{1,2039,2865,0}, 0},	{{1,1,2865,2865}, 214},	{{1,2865,2728,2728}, 0},
{{1,1,1,1}, 0},	{{1,2728,2728,2728}, 0},	{{1,1,2865,2866}, 0},
{{1,1,679,2867}, 0},	{{1,751,1,1}, 0},	{{1,1,1,1}, 0},
{{-1010,-1010,-1010,-1010}, 0},	{{1,2866,2868,0}, 0},	{{1,1,1,1}, 0},
{{-1008,2867,-1008,-1008}, 0},	{{1,1,1,2869}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2869,2869}, 0},	{{1,2871,0,0}, 0},	{{1,2869,2869,0}, 207},
{{0,0,2870,0}, 213},	{{1,1,2881,2881}, 0},	{{1,2,-88,-88}, 0},
{{-88,-88,-88,-88}, 212},	{{1,1,-89,-89}, 0},	{{1,2878,2889,2889}, 0},
{{1,-131,0,0}, 0},	{{1,0,0,0}, 207},	{{1,1,1,1}, 0},
{{1,1,1,-89}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-89}, 0},	{{-89,-89,-89,-89}, 210},	{{1,-142,0,0}, 0},
{{1,0,0,0}, 207},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1278,-1278,-1278,-1278}, 0},	{{-14,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2854}, 0},
{{1,1,1,1}, 0},	{{0,1,0,0}, 0},	{{0,0,0,0}, 62},
{{0,0,0,2860}, 0},	{{1,2861,2862,2863}, 0},	{{1,349,-1067,0}, 0},
{{1,2865,78,14}, 0},	{{-1276,83,357,2865}, 0},	{{1,387,396,2869}, 0},
{{1,404,423,0}, 0},	{{1,2875,2876,10}, 0},	{{1,424,442,450}, 0},
{{1,456,460,258}, 0},	{{1,1,1,2874}, 0},	{{1,1,1,2876}, 0},
{{1,1,1,1}, 0},	{{-1222,2876,-929,90}, 0},	{{1,469,2876,2878}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,486,486,491}, 0},
{{1,496,260,260}, 0},	{{1,1,1,499}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1191,286,286,81}, 0},	{{1,499,509,0}, 62},
{{1,2876,511,461}, 0},	{{1,370,370,518}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,519,0,0}, 0},	{{1,1,123,123}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1131}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,566,0,0}, 0},	{{1,1,1,1}, 5},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 64},	{{1,2836,2838,0}, 0},
{{-1173,2838,428,428}, 0},	{{1,579,2838,0}, 0},	{{1,2844,2826,2826}, 0},
{{1,2844,592,0}, 0},	{{1,2848,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2826}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2848}, 0},
{{1,646,647,2848}, 0},	{{1,656,660,215}, 0},	{{1,1,1,2848}, 0},
{{1,1,1,2850}, 0},	{{1,1,1,1}, 0},	{{-1121,228,-996,23}, 0},
{{1,671,679,716}, 0},	{{1,723,217,217}, 0},	{{1,1,1,726}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1109,726,-1002,2844}, 0},
{{1,1,105,105}, 0},	{{1,1,105,105}, 0},	{{1,1,105,105}, 0},
{{1,1,1,1}, 0},	{{-1106,10,217,217}, 0},	{{-1039,-1039,-1039,-1039}, 0},
{{1,1,1,6}, 0},	{{1,1,1,1}, 0},	{{-1352,6,-1011,8}, 0},
{{1,1,1,853}, 0},	{{1,1,1,1}, 0},	{{-1355,3,-1014,2844}, 0},
{{1,1,1,1}, 0},	{{-1339,1,-1016,3}, 0},	{{1,-1000,862,0}, 0},
{{-1016,-1016,-1016,-1016}, 0},	{{1,418,-988,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,883,-1033,-1033}, 0},
{{1,883,-1033,-1033}, 0},	{{1,1,2845,2840}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1033,-1033,-1033,2845}, 0},	{{1,2845,2846,2847}, 0},	{{1,235,50,0}, 0},
{{1,2851,68,19}, 0},	{{1,73,2851,2856}, 0},	{{1,2860,2862,-1362}, 0},
{{1,2865,2865,121}, 0},	{{1,118,2865,123}, 0},	{{1,1,1,1}, 0},
{{-1380,-22,-1039,2865}, 0},	{{1,2870,2873,2874}, 0},	{{1,285,2881,0}, 0},
{{1,2881,59,10}, 0},	{{1,305,323,2881}, 0},	{{1,2887,2891,139}, 0},
{{1,2894,2894,2897}, 0},	{{1,2894,2894,2899}, 0},	{{1,1,1,1}, 0},
{{-1341,2757,-1048,2899}, 0},	{{1,2910,2911,2912}, 0},	{{1,0,1939,0}, 0},
{{1,1,1,1}, 0},	{{1,367,367,372}, 0},	{{1,141,141,141}, 0},
{{1,1,1,2915}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1310,167,167,2915}, 0},	{{1,380,2920,0}, 62},	{{1,390,392,342}, 0},
{{-118,251,251,2919}, 0},	{{1,467,2924,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,361}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,478,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1253,-1253,-1253,-1253}, 0},	{{1,2921,2922,0}, 0},
{{1,2928,2932,2888}, 0},	{{1,2932,2937,0}, 0},	{{1,2937,2932,0}, 0},
{{1,1,1,1}, 0},	{{1,1,2941,2888}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2941}, 0},	{{1,2941,2947,1908}, 0},	{{1,-1230,-1230,-1230}, 0},
{{1,-1230,-1230,-1230}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2943,2944,2944}, 0},	{{1,1908,1908,2944}, 0},	{{1,1908,1908,1908}, 0},
{{1,1908,1908,1908}, 0},	{{1,1,2947,-1230}, 0},	{{1,1908,1908,1908}, 0},
{{1,1,1,1}, 0},	{{-1230,-1230,2947,-1230}, 0},	{{1,542,543,548}, 0},
{{1,2946,556,111}, 0},	{{1,1,1,2949}, 0},	{{1,1,1,2951}, 0},
{{1,1,1,1}, 0},	{{-1225,124,-1100,2872}, 0},	{{1,567,575,2950}, 0},
{{1,113,113,113}, 0},	{{1,1,1,2955}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1213,622,-1106,2955}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-94,113,113}, 0},	{{1,-1095,-1081,0}, 0},	{{1,242,242,-1111}, 0},
{{1,27,27,27}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1210,-1210,-1210,-1210}, 0},
{{1,100,1,100}, 0},	{{1,1,1,1}, 0},	{{1,100,100,100}, 0},
{{1,100,100,2766}, 0},	{{1,-107,100,2949}, 0},	{{1,-1108,-1094,0}, 0},
{{1,229,229,-1124}, 0},	{{1,14,14,14}, 0},	{{1,1,1,1}, 0},
{{1,-12,-12,-12}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1201,-1201,-1201,-1201}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2758}, 0},	{{1,2948,292,2949}, 0},
{{1,683,0,0}, 0},	{{1,-392,-392,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1197,-1197,-1197,-1197}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1472}, 0},	{{1,-1472,-1472,-1472}, 0},	{{-1472,-132,-1149,2938}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1476}, 0},	{{1,1,1,1}, 0},
{{-1494,-136,-1153,2940}, 0},	{{1,1,1,6}, 0},	{{1,1,1,1}, 0},
{{-1497,-139,-1156,2816}, 0},	{{1,1,1,2948}, 0},	{{1,1,1,1}, 0},
{{-1500,-142,-1159,2948}, 0},	{{1,1,1,1}, 0},	{{-1484,-144,-1161,2811}, 0},
{{1,275,-1131,0}, 0},	{{1,2811,2811,2811}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,2948,2948,2948}, 0},	{{1,2954,-1176,-1176}, 0},
{{1,2786,2959,2786}, 0},	{{1,1,1,1}, 0},	{{1,2786,2786,2786}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1176,-1176,-1176,2959}, 0},
{{1,2959,2960,2961}, 0},	{{1,92,29,0}, 0},	{{1,29,37,16}, 0},
{{-1505,-70,2708,2713}, 0},	{{1,2960,2962,2963}, 0},	{{1,147,2497,0}, 0},
{{1,2964,33,12}, 0},	{{1,167,185,2743}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2619,-1186,38}, 0},	{{1,-1170,-1156,0}, 0},	{{-1156,-1156,-1146,-1439}, 0},
{{1,210,2956,2957}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,227,227,232}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1450,27,27,27}, 0},
{{1,2950,250,0}, 62},	{{-139,202,252,202}, 0},	{{-138,2617,2619,0}, 0},
{{1,2794,2948,0}, 0},	{{1,2948,0,0}, 0},	{{0,0,2948,0}, 0},
{{-1352,405,2524,0}, 0},	{{1,214,433,219}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,14,-1210,14}, 0},	{{1,226,-1180,0}, 0},	{{-1463,-1463,453,-1463}, 0},
{{1,455,463,211}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1325,510,-1218,2934}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2667}, 0},	{{-98,-206,1,564}, 0},	{{-206,213,-1193,0}, 0},
{{1,-1227,-1227,-1227}, 0},	{{1,1,1,1}, 0},	{{1,171,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,723}, 0},	{{1,2932,216,0}, 62},	{{1,216,218,168}, 0},
{{1,77,77,225}, 0},	{{1,-292,-292,-292}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-292}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,226,0,0}, 0},	{{1,1,-170,-170}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-292,-292,-1424}, 0},	{{1,-292,-292,-292}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,273,0,0}, 0},
{{1,1,1,1}, 5},	{{1,-292,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-292}, 0},	{{1,-292,-292,-292}, 0},	{{1,1,1,1}, 0},
{{-1471,-1471,-1471,-1471}, 0},	{{-1454,0,2414,0}, 0},	{{1,0,2910,0}, 0},
{{1,2915,149,149}, 0},	{{1,0,2886,2916}, 116},	{{-1431,2916,0,0}, 0},
{{1,2919,0,0}, 0},	{{1,1,1,2919}, 51},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,322}, 0},
{{1,320,318,318}, 0},	{{1,2918,0,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 52},	{{1,1,2609,2609}, 0},	{{1,1,2609,2609}, 0},
{{1,1,2609,2609}, 0},	{{1,1,1,1}, 0},	{{-1358,-264,-57,2914}, 0},
{{1,1,2609,2609}, 0},	{{1,1,2915,2915}, 0},	{{1,1,2915,2609}, 0},
{{1,1,1,1}, 0},	{{-1346,529,531,531}, 0},	{{1,1,4,-272}, 0},
{{1,1,1,1}, 0},	{{-1879,-1304,-1289,-270}, 0},	{{1,1,1,-275}, 0},
{{1,1,1,1}, 0},	{{-1633,-1307,-1292,-273}, 0},	{{1,1,1,572}, 0},
{{1,1,1,1}, 0},	{{-1636,-1310,-1295,2563}, 0},	{{1,141,-1265,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,606,-1310,-1310}, 0},	{{1,606,-1310,-1310}, 0},	{{1,-276,2568,2563}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1310,-1310,-1310,2894}, 0},	{{1,2894,140,0}, 62},
{{1,2903,142,92}, 0},	{{1,1,1,149}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-246,150,0,0}, 0},	{{-1509,0,2502,0}, 0},
{{1,2895,2901,0}, 0},	{{1,2902,2903,94}, 0},	{{1,2903,2831,2908}, 0},
{{1,2908,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,94}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2908}, 0},	{{1,259,0,0}, 0},
{{1,1,1,1}, 51},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2903}, 0},	{{1,2903,2906,2906}, 0},
{{1,2906,0,0}, 0},	{{1,2903,2906,0}, 0},	{{1,1,1,1}, 124},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2897}, 0},
{{0,0,270,0}, 0},	{{-1476,291,2911,297}, 0},	{{-1459,321,329,2919}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2453,-128,-128}, 0},	{{1,-1336,-1322,0}, 0},
{{1,1,1,-1352}, 0},	{{1,-712,-712,-712}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1367}, 0},	{{-1367,-1367,-1367,-1367}, 4},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2904,2907,2910}, 0},	{{1,-1354,-1340,0}, 0},
{{1,-17,-17,-1370}, 0},	{{-17,-730,2910,-730}, 0},	{{1,1,2551,2551}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2551}, 0},	{{1,1,1,1}, 0},
{{1,2918,2920,2920}, 0},	{{1,442,0,0}, 0},	{{-633,2919,442,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-197,2421,-1384,450}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-201}, 0},
{{1,1,1,1}, 0},	{{-1681,2417,-1388,-164}, 0},	{{1,1,1,2414}, 0},
{{1,1,1,1}, 0},	{{-1684,6,-1391,-372}, 0},	{{1,1,1,2908}, 0},
{{1,1,1,1}, 0},	{{-1687,3,-1394,2464}, 0},	{{1,1,1,1}, 0},
{{-209,2409,-1396,-100}, 0},	{{-1411,-1380,-1366,0}, 0},	{{0,0,0,0}, 11},
{{1,0,0,0}, 62},	{{1,1,1,1}, 0},	{{1,1,1,2578}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-337,2895,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,2894}, 0},	{{-346,-346,-346,136}, 0},
{{1,0,2893,0}, 0},	{{1,1,1,1}, 143},	{{1,0,0,2768}, 0},
{{1,2815,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2887}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-199,-199,-199,-199}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,118,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1686,-209,-209,401}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1689,-212,-212,2422}, 0},	{{-1419,-1419,-1419,-1419}, 18},
{{1,2868,2870,0}, 0},	{{1,1,1,1}, 51},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2873,2877}, 0},
{{1,1,1,2879}, 0},	{{1,2879,-587,-587}, 0},	{{1,2879,-587,-587}, 79},
{{-1598,-1598,-1598,-1598}, 80},	{{0,0,2879,0}, 0},	{{1,1,-47,2879}, 0},
{{-47,2884,-47,-47}, 0},	{{1,2887,1,2895}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2845,0,0}, 0},	{{-387,-387,-387,-387}, 76},
{{1,1,1,2521}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2521}, 0},
{{1,1,1,2521}, 0},	{{1,1,1,2521}, 0},	{{1,2838,0,0}, 0},
{{0,2889,0,0}, 0},	{{1,2889,1,0}, 70},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,2890,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 63},	{{1,-546,-546,-546}, 0},	{{1,-546,-546,-546}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-546}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,19,-16,0}, 0},	{{1,1,1,1}, 5},
{{1,1,-16,-16}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-546,-546,-546}, 0},	{{-546,-546,-546,-546}, 63},
{{1,-1695,-1695,-1695}, 0},	{{1,-1695,-1695,-1695}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1695}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2,-33,0}, 0},	{{-33,-33,-33,-33}, 5},	{{0,0,0,0}, 10},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,2840,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{-677,-677,-677,-677}, 0},	{{1,2865,2192,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 93},
{{-121,-121,2883,-121}, 0},	{{0,0,0,0}, 18},	{{1,1,1,0}, 0},
{{0,0,0,2887}, 0},	{{1,1,-1729,-1729}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1729}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-32,0,0}, 0},	{{1,1,1,0}, 5},
{{0,0,0,2886}, 0},	{{1,0,2887,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2883,2884,0}, 0},	{{-33,-33,-33,2884}, 108},	{{1,1,2884,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2879}, 0},
{{-162,0,2879,2605}, 106},	{{0,2879,0,0}, 101},	{{1,0,2881,0}, 0},
{{0,2881,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2650}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2878}, 0},	{{0,0,0,2878}, 0},
{{1,1,1,1}, 51},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-316,0,0,0}, 0},	{{1,1,-1,2871}, 0},	{{-318,-847,0,0}, 0},
{{-1,-1,-3,-3}, 0},	{{-1748,-737,-737,-737}, 0},	{{1,-738,-738,-738}, 0},
{{1,-1749,-1749,-738}, 0},	{{1,1,1,1}, 52},	{{1,-1749,0,0}, 0},
{{1,1,1,1}, 53},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2861}, 0},	{{-749,2861,-749,-749}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-1756,0,0,0}, 0},
{{0,0,0,2857}, 58},	{{0,0,0,2}, 0},	{{0,0,0,2861}, 0},
{{1,0,0,0}, 0},	{{1,1821,0,0}, 0},	{{1,1,1,1}, 56},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,2852}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2846}, 0},	{{-217,2853,-217,-217}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-418,-418,-418,2553}, 0},	{{1,1,1,-218}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-218}, 0},	{{1,1,1,1}, 0},	{{-218,-218,-218,2847}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2848}, 0},	{{1,1,1,1}, 0},
{{-440,-427,-1651,2848}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-444}, 0},
{{1,1,1,1}, 0},	{{-1780,-431,-1655,-431}, 0},	{{1,1,1,2188}, 0},
{{1,1,1,1}, 0},	{{-1783,6,-1658,-639}, 0},	{{1,1,1,2845}, 0},
{{1,1,1,1}, 0},	{{-1786,3,-1661,2197}, 0},	{{1,1,1,1}, 0},
{{-452,-439,-1663,-367}, 0},	{{-1678,-227,-1633,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1915,-1677,-1677,2839}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-448,2480}, 0},	{{1,-236,-1642,0}, 0},	{{1,-1672,-1672,-1672}, 0},
{{-1672,0,2066,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-456,-456}, 0},
{{1,-244,-1650,0}, 0},	{{1,-1680,2832,-1680}, 0},	{{1,0,60,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-1695,-1695}, 0},	{{1,1,-1695,-1695}, 0},	{{1,-297,0,0}, 0},
{{1,1,1,1}, 5},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 47},	{{1,1,2339,-288}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-288}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-171,0,0}, 0},	{{1,1,2796,1}, 0},
{{0,0,0,2796}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1831,4,-1724,2794}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1834,1,-1727,2803}, 0},	{{1,-291,-1697,0}, 0},
{{1,-1727,-1727,-1727}, 0},	{{-1727,0,13,0}, 0},	{{1,-294,-1700,0}, 0},
{{1,-434,-434,-434}, 0},	{{1,2809,0,0}, 0},	{{1,1,1,1}, 0},
{{1,2816,2422,2422}, 0},	{{1,2816,2422,2422}, 0},	{{1,2116,2821,2800}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1745,-1745,-1745,2821}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 43},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 44},	{{1,-662,-662,-662}, 0},	{{1,-662,-662,-662}, 0},
{{-662,-757,-550,1}, 0},	{{1,-338,-1744,0}, 0},	{{1,-1774,-1774,-1774}, 0},
{{-1774,127,0,0}, 0},	{{1,1,-1868,-1868}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-416,-416,-1784}, 0},	{{1,-1784,-1784,-1784}, 4},
{{1,-1784,-1784,-1784}, 0},	{{1,159,46,46}, 0},	{{1,1,1,1}, 5},
{{-1029,-1029,-1029,-1029}, 0},	{{1,-350,-1756,0}, 0},	{{1,2409,-1786,-1786}, 0},
{{1,2775,2784,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1801,-1801,-1801,2784}, 0},	{{1,1,-1867,-1867}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-20,-437,-437,1}, 0},	{{1,-1805,-1805,-1805}, 0},
{{1,-1805,-1805,-1805}, 0},	{{1,-407,0,0}, 0},	{{1,1,1,1}, 5},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2774}, 0},
{{1,1,1,-674}, 0},	{{1,1,1,2389}, 0},	{{1,3,5,6}, 0},
{{1,8,0,0}, 0},	{{-674,-1067,8,0}, 0},	{{1,6,1716,0}, 0},
{{0,0,2776,0}, 0},	{{-1,-270,0,0}, 0},	{{1,-271,0,0}, 0},
{{1,0,2773,0}, 0},	{{0,0,0,2773}, 0},	{{0,1726,0,0}, 18},
{{-1179,-1179,-1179,2772}, 0},	{{1,1,-1874,-1874}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-1174,-1174,0}, 0},	{{1,0,0,0}, 4},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-44,-44,-44,-44}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2156,-816,-1833,1}, 0},
{{1,-397,-1803,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,68,-1848,-1848}, 0},	{{1,68,-1848,-1848}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1848,-1848,-1848,2751}, 0},
{{1,1,-2160,-2160}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1800,-2130,-2130,-624}, 0},	{{1,-1880,-1880,-2175}, 0},	{{1,-1880,-1880,-1880}, 0},
{{-2193,-835,-1852,2745}, 0},	{{1,-416,-1822,0}, 0},	{{1,-833,-833,-833}, 0},
{{1,49,0,0}, 0},	{{1,-833,-833,-833}, 0},	{{1,49,-1867,-1867}, 0},
{{1,49,-1867,-1867}, 0},	{{1,1,54,15}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-833,-833,-833}, 0},	{{1,1,1,1}, 0},
{{-1867,-1867,-1867,2742}, 0},	{{1,1,1,1}, 0},	{{-2189,-849,-1866,1992}, 0},
{{1,-430,-1836,0}, 0},	{{1,1992,1992,1992}, 0},	{{1,35,0,0}, 0},
{{1,1992,1992,1992}, 0},	{{1,35,-1881,-1881}, 0},	{{1,35,-1881,-1881}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1992,1992,1992}, 0},	{{1,1,1,1}, 0},	{{-1881,-1881,-1881,2729}, 0},
{{1,-1861,-1861,-1861}, 0},	{{1,1653,1653,1653}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1861}, 0},
{{1,-1861,-1861,-1861}, 0},	{{0,38,0,0}, 22},	{{1,-1902,-1902,-1902}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1902,-1902,2708,-1902}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-1913,-1913,-1913,2603}, 0},	{{1,0,0,0}, 0},	{{0,0,2707,0}, 0},
{{1,1,-1915,-1915}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1915,-1915,-1915,2701}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1958,1958,1958}, 0},	{{1,1,1,1}, 0},	{{-1920,-1920,-1920,2697}, 0},
{{-1920,-1920,-1920,2697}, 0},	{{1,1629,1629,1629}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1900,-1900,2687,-1900}, 0},
{{0,0,0,0}, 19},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2576}, 0},	{{1,-1940,-1940,-1940}, 4},
{{1,1,1,-1940}, 0},	{{1,-542,0,0}, 0},	{{1,1,1,1}, 5},
{{0,0,0,2675}, 0},	{{-157,-157,-157,-157}, 11},	{{-2511,-2511,-2511,2675}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2667}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2659}, 0},
{{1,2659,2663,2665}, 0},	{{1,2666,2671,0}, 0},	{{1,1,2671,2672}, 0},
{{1,1,2679,104}, 0},	{{1,1,2681,1}, 0},	{{1,1,1,1}, 0},
{{0,0,2687,0}, 0},	{{1,2688,2689,2688}, 0},	{{1,2690,0,0}, 0},
{{1,2696,0,2697}, 0},	{{0,2704,2705,0}, 0},	{{1,2705,2708,2711}, 0},
{{1,2712,2712,2713}, 0},	{{1,2720,2731,0}, 0},	{{1,2731,1,1}, 0},
{{1,1,2736,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 505},	{{1,2729,2731,2733}, 0},
{{1,2734,2734,2735}, 0},	{{1,2736,2719,0}, 0},	{{1,58,1,1}, 0},
{{0,0,72,0}, 0},	{{1,2743,2744,2744}, 0},	{{1,1,1,2744}, 0},
{{0,0,2746,0}, 0},	{{1,2746,2746,2747}, 0},	{{1,2747,2749,0}, 0},
{{1,2749,2753,-6}, 0},	{{1,0,2753,0}, 0},	{{1,2765,2765,0}, 0},
{{1,1,1,1}, 0},	{{1,1,2765,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,2762,0,0}, 0},	{{1,4,4,2711}, 0},	{{1,76,2734,0}, 0},
{{-21,2760,-21,-21}, 0},	{{1,1,1,2708}, 0},	{{1,73,2726,0}, 0},
{{-24,-24,-24,-24}, 0},	{{1,12,2762,0}, 0},	{{-26,-26,37,-26}, 0},
{{1,10,2766,0}, 0},	{{-28,-28,2766,-28}, 0},	{{1,2772,2764,0}, 0},
{{1,-30,2764,-30}, 0},	{{1,1,2777,1}, 0},	{{1,1,1,2670}, 0},
{{1,1,1,1}, 0},	{{1,2670,2670,2670}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2773}, 0},	{{1,1,2773,1}, 0},	{{1,2698,0,0}, 0},
{{1,2772,0,0}, 0},	{{1,1,2670,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2698}, 0},
{{1,1,1,1}, 0},	{{1,0,2766,0}, 0},	{{-1828,-1828,-1828,-1828}, 0},
{{1,2765,2771,0}, 487},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,2765,0,0}, 0},
{{1,1,2778,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2774}, 0},
{{1,0,2785,0}, 0},	{{1,2732,2732,0}, 0},	{{1,2732,2732,2732}, 0},
{{1,2732,2732,0}, 0},	{{1,2794,2794,2794}, 0},	{{1,1,1,1}, 0},
{{1,2794,1,1}, 0},	{{1,1,1,1}, 0},	{{0,2813,0,0}, 0},
{{0,0,0,0}, 481},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,2811,0,0}, 0},	{{1,2813,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-102,-102,-102,-102}, 0},
{{1,0,1,0}, 0},	{{0,2810,0,0}, 0},	{{1,2810,1,2811}, 0},
{{1,2811,1,4}, 0},	{{0,2811,0,0}, 0},	{{1,1,1,2813}, 0},
{{1,2813,1,1}, 0},	{{0,2646,0,0}, 0},	{{1,1,1,0}, 0},
{{0,2811,0,0}, 0},	{{1,2811,-1998,2812}, 0},	{{0,2819,0,0}, 0},
{{-2000,-2000,-2000,-5}, 0},	{{1,2,0,0}, 0},	{{0,2817,0,0}, 0},
{{-58,-58,-58,-58}, 0},	{{-20,0,0,0}, 0},	{{0,0,0,2820}, 0},
{{1,2820,2822,2824}, 0},	{{1,2825,2829,2831}, 0},	{{1,322,2833,0}, 409},
{{1,2837,0,0}, 424},	{{1,2838,2839,2840}, 0},	{{-1999,-1999,-1999,-1999}, 0},
{{1,2839,18,21}, 0},	{{1,2840,2823,2841}, 0},	{{-5,316,2843,0}, 0},
{{1,2845,2847,175}, 0},	{{-2,2847,2820,2838}, 0},	{{1,2847,2850,2853}, 0},
{{1,2855,2865,0}, 0},	{{1,2866,0,0}, 424},	{{1,2866,2829,2830}, 445},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,18}, 0},	{{1,91,18,18}, 0},	{{1,86,91,0}, 0},
{{1,0,0,0}, 0},	{{1,-2009,90,-2009}, 0},	{{-2009,2866,0,0}, 0},
{{1,2877,2879,2881}, 0},	{{1,2881,0,0}, 0},	{{-22,2853,0,0}, 424},
{{1,2880,1,1}, 0},	{{0,2880,0,0}, 0},	{{1,2880,2883,-48}, 370},
{{1,2885,-151,-151}, 424},	{{1,-151,-151,-151}, 0},	{{1,1,2884,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2881,0}, 0},	{{1,2881,-57,-57}, 0},
{{-160,2881,-160,-160}, 424},	{{1,2869,-59,-59}, 0},	{{1,2887,-162,-162}, 0},
{{-162,2887,2891,-162}, 0},	{{1,2895,2903,-164}, 364},	{{1,1,1,1}, 0},
{{1,1,2904,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,2917,0,0}, 0},
{{1,-175,-175,-175}, 0},	{{1,1,1,1}, 0},	{{1,1,2915,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 437},	{{1,2909,2929,2875}, 431},	{{1,1,2934,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,2848,0}, 0},	{{1,0,0,0}, 354},
{{0,2929,0,0}, 0},	{{1,1,2929,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2930}, 0},	{{1,2933,0,0}, 0},
{{1,28,28,0}, 0},	{{1,2930,0,0}, 0},	{{1,1,32,-2067}, 0},
{{1,1,2901,2901}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-2067,0}, 0},	{{1,1,0,0}, 0},	{{1,-2067,2921,-2067}, 0},
{{-2067,-2067,0,0}, 346},	{{1,1,2920,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,7,0,0}, 0},
{{-2088,7,7,0}, 0},	{{1,1,2916,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{-2094,-2094,-2094,-2094}, 0},
{{1,1,1,1}, 0},	{{-2101,2909,-2101,-2101}, 0},	{{-4,-4,1,0}, 0},
{{-4,2908,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-2098,-2098}, 0},	{{1,-2098,-2098,0}, 0},	{{1,-2098,0,0}, 0},
{{1,-2098,-2098,-2098}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 425},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 426},
{{1,2860,2865,2865}, 0},	{{1,2865,2866,2867}, 0},	{{1,2867,0,0}, 409},
{{1,0,0,0}, 0},	{{0,2867,0,2868}, 0},	{{1,2870,16,17}, 0},
{{1,17,2861,2862}, 0},	{{0,2862,0,0}, 0},	{{1,2869,14,14}, 0},
{{-2,2870,2858,2859}, 0},	{{1,2870,2873,2874}, 0},	{{1,2876,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,2868,0}, 0},
{{-155,2897,-155,2898}, 0},	{{-156,2896,-156,-156}, 0},	{{0,2899,230,0}, 370},
{{0,2899,0,0}, 0},	{{1,2897,1,0}, 0},	{{1,0,0,0}, 0},
{{0,2898,0,0}, 0},	{{1,0,0,0}, 364},	{{1,2897,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2894,2894,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-146}, 0},
{{1,-146,-146,-146}, 0},	{{1,1,1,1}, 0},	{{1,2770,0,0}, 0},
{{0,0,0,0}, 468},	{{1,1,1,1}, 0},	{{1,2891,0,0}, 0},
{{0,0,0,0}, 409},	{{0,0,0,0}, 370},	{{1,2889,2890,2891}, 0},
{{1,2898,0,0}, 409},	{{1,149,2907,0}, 0},	{{-2150,34,-2015,0}, 0},
{{1,2906,2907,180}, 0},	{{-2143,2907,0,0}, 409},	{{1,2907,2908,196}, 0},
{{0,2908,0,0}, 409},	{{-2142,2908,201,0}, 416},	{{1,2908,243,0}, 0},
{{0,2908,0,0}, 0},	{{1,266,0,0}, 0},	{{1,266,87,87}, 0},
{{1,2914,0,0}, 0},	{{0,2916,0,0}, 0},	{{1,2918,2577,2577}, 364},
{{1,86,104,104}, 0},	{{1,1,-177,-177}, 0},	{{1,1,1,-177}, 0},
{{1,1,1,1}, 0},	{{1,2387,2387,2387}, 0},	{{1,1,1,1}, 0},
{{1,1,1,86}, 0},	{{1,1,1,1}, 0},	{{1,-177,269,-177}, 0},
{{1,2916,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2906,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,445,24,24}, 0},	{{1,0,0,0}, 0},
{{1,445,0,0}, 0},	{{1,454,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2069,-2069,-2069,-2069}, 0},	{{1,0,2775,0}, 0},
{{1,1,2906,1}, 0},	{{1,2906,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2902}, 0},	{{1,0,0,0}, 0},	{{1,1,420,0}, 0},
{{-2057,3,0,0}, 0},	{{1,0,0,0}, 0},	{{-2226,-2226,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,490,0}, 0},
{{1,2886,2896,2897}, 0},	{{1,2902,0,0}, 0},	{{-78,70,-2122,0}, 0},
{{1,2910,2912,102}, 0},	{{-2221,2912,0,0}, 0},	{{1,2912,1,118}, 0},
{{0,2912,0,0}, 0},	{{1,191,123,0}, 370},	{{1,2520,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2905,2905,2905}, 0},
{{1,0,0,0}, 0},	{{0,2905,2915,0}, 0},	{{-86,2917,156,0}, 0},
{{1,180,0,0}, 0},	{{1,180,1,1}, 0},	{{-85,0,0,0}, 0},
{{1,2914,2330,2330}, 364},	{{1,1,19,19}, 0},	{{1,1,-262,-262}, 0},
{{1,1,1,-262}, 0},	{{1,1,1,1}, 0},	{{1,2330,2330,2330}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-262,-262,184,-262}, 0},	{{1,2912,2913,2914}, 0},	{{-30,2917,0,0}, 0},
{{1,2920,2921,2587}, 0},	{{-2251,2587,0,0}, 0},	{{-27,2764,0,0}, 370},
{{-105,2919,137,0}, 0},	{{1,2762,0,0}, 0},	{{0,2918,0,0}, 0},
{{1,2918,0,0}, 364},	{{1,1,1,1}, 0},	{{-280,-280,-280,-280}, 0},
{{1,2917,0,0}, 370},	{{1,2917,72,72}, 0},	{{1,0,0,0}, 0},
{{1,1,2845,2845}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,72,72,72}, 0},	{{1,72,0,0}, 0},
{{-2255,88,-2255,-2255}, 0},	{{1,2916,2917,0}, 0},	{{0,2917,0,0}, 0},
{{1,2924,2928,0}, 0},	{{1,2929,2930,-35}, 0},	{{1,2931,2892,0}, 0},
{{1,2931,2759,2759}, 0},	{{1,1,1,2759}, 0},	{{1,1,2759,2759}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2931}, 0},	{{1,144,2931,-408}, 364},
{{1,2842,2521,2521}, 394},	{{1,2759,2521,2888}, 0},	{{1,1,2759,2929}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2289}, 0},	{{1,-408,-408,-408}, 0},	{{-408,0,2357,0}, 396},
{{1,2924,2933,2940}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2942,2944,2944}, 0},
{{1,-292,0,0}, 0},	{{1,271,281,281}, 393},	{{1,2943,269,0}, 0},
{{1,1,1,1}, 355},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2225,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,2941,2941,2941}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2941}, 0},	{{1,0,0,0}, 0},
{{0,0,2942,0}, 0},	{{1,0,0,0}, 0},	{{-113,-113,2941,0}, 0},
{{1,0,0,0}, 0},	{{-2339,-2339,1,0}, 0},	{{0,2939,0,0}, 0},
{{1,23,0,0}, 370},	{{-59,28,12,12}, 0},	{{-173,21,69,0}, 0},
{{-86,2813,0,0}, 0},	{{-452,100,-452,-452}, 364},	{{1,192,209,226}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2260,230,234,2929}, 0},	{{1,12,0,0}, 370},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{-2326,-2326,-2326,-2326}, 0},
{{1,2795,0,0}, 0},	{{-104,-104,-104,-104}, 0},	{{-471,-471,-471,-471}, 364},
{{1,-472,-472,-472}, 364},	{{1,-104,-86,-86}, 0},	{{1,-189,-367,-367}, 0},
{{-2301,-2301,-189,2924}, 0},	{{0,2925,0,0}, 0},	{{1,2398,0,0}, 0},
{{1,1,2398,2398}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-15,-15,-15,2941}, 0},	{{1,-15,0,0}, 0},
{{-2342,-2342,11,-2342}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-2342,0,0}, 0},	{{1,1,2783,2783}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2342,-2342,-2342,2941}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2352,-2352,0,2945}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 371},
{{1,2937,-517,-517}, 364},	{{-2346,-149,2945,-131}, 0},	{{0,2975,0,0}, 0},
{{1,1,1,2982}, 0},	{{1,2666,2666,2666}, 0},	{{1,1,1,1}, 0},
{{1,2666,2666,2666}, 0},	{{1,1,1,1}, 0},	{{1,2666,2666,2666}, 0},
{{1,2462,0,0}, 0},	{{1,2983,2983,0}, 0},	{{1,2983,1,1}, 378},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 379},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,2969,0,0}, 0},
{{-176,2153,2153,2153}, 364},	{{-264,2991,0,0}, 0},	{{0,2995,0,0}, 0},
{{1,2651,2651,2651}, 0},	{{1,2651,2651,2651}, 0},	{{1,2995,1,1}, 0},
{{0,0,0,2995}, 0},	{{0,0,0,2995}, 0},	{{1,2730,2752,2752}, 0},
{{1,2649,2448,2448}, 0},	{{1,1,2649,2448}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-551,2146}, 0},
{{-551,-551,-551,-551}, 354},	{{1,2987,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 368},	{{-2415,-303,0,0}, 367},
{{1,1,1,1}, 0},	{{1,2612,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,2612,0}, 0},	{{1,2612,0,0}, 0},	{{1,1,2612,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2612,0,0}, 0},
{{1,1,1,1}, 365},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 366},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2899,43,43}, 0},	{{1,-518,0,0}, 0},	{{1,2899,55,55}, 354},
{{1,2900,18,35}, 0},	{{1,1,1,1}, 355},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2410,-2410,-2410,2904}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,26,26,26}, 0},
{{1,-535,0,0}, 0},	{{1,28,38,38}, 354},	{{1,38,1,18}, 0},
{{1,1,1,1}, 355},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,42}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2322,2322,2322}, 0},	{{1,2322,0,0}, 0},
{{1,0,0,0}, 354},	{{1,1,1,1}, 0},	{{-16,-16,-16,-16}, 0},
{{1,-556,0,0}, 0},	{{1,2879,2880,17}, 354},	{{1,2679,5,0}, 0},
{{-2416,-2416,-2416,-2416}, 355},	{{1,-560,0,0}, 0},	{{1,2877,13,13}, 354},
{{1,2675,1,0}, 0},	{{0,0,0,0}, 355},	{{1,2875,-1,0}, 0},
{{1,1,1,1}, 355},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2867}, 0},
{{-11,-11,-11,0}, 0},	{{1,1,1,1}, 358},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2864}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,117,0}, 0},	{{0,0,0,0}, 359},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 357},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2840}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2515,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{-2476,0,0,0}, 0},
{{1,0,0,0}, 0},	{{-54,-54,-54,-54}, 0},	{{1,0,0,0}, 0},
{{-443,-443,0,0}, 0},	{{1,10,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2513,-2513,-2513,2819}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-430,-430}, 0},
{{1,1,-430,-430}, 0},	{{1,0,2811,0}, 0},	{{0,0,0,0}, 346},
{{1,-2526,0,0}, 0},	{{1,-2526,0,0}, 0},	{{1,0,14,0}, 0},
{{1,1,1,1}, 348},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2795}, 0},	{{0,0,0,0}, 350},	{{-43,-461,0,0}, 0},
{{1,0,0,0}, 0},	{{1,-2690,0,0}, 0},	{{-2490,-2471,0,0}, 0},
{{1,0,0,0}, 0},	{{1,-2693,0,0}, 0},	{{1,-2474,0,0}, 0},
{{0,2787,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2526,-2526,-2526,2776}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2487,-2487,2775,-480}, 0},	{{0,0,0,2780}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,2754,0,0}, 0},	{{1,1,1,1}, 0},
{{1,2754,2754,2754}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2774}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2774}, 0},
{{0,0,0,0}, 338},	{{1,3,3,0}, 0},	{{0,0,2772,0}, 0},
{{1,1,1,0}, 0},	{{0,0,2780,0}, 0},	{{-2496,-2496,2780,-2496}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2770,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,2783,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,2777}, 0},	{{1,1,1,1}, 0},
{{0,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 212},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{-2512,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2772}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2769}, 0},	{{-2498,4,2778,-2449}, 0},
{{1,3,2777,-2450}, 0},	{{1,0,0,0}, 0},	{{-2499,-2499,-2499,-2499}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,19,0}, 0},
{{1,-2479,-2479,-2479}, 0},	{{1,1,1,105}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2501,-2501,-2501,2776}, 0},	{{1,2713,2780,2713}, 0},
{{1,2767,2767,2767}, 0},	{{1,2783,2789,2713}, 0},	{{1,2794,2794,2799}, 0},
{{1,1,1,2803}, 0},	{{1,2767,2767,2767}, 0},	{{1,2767,2767,2767}, 0},
{{1,1,1,1}, 0},	{{1,2803,2804,1}, 0},	{{-3440,2804,-3440,-3440}, 0},
{{0,2812,0,0}, 0},	{{1,0,2,0}, 0},	{{-2518,2811,-2496,-2496}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2810}, 0},	{{0,2814,0,0}, 0},
{{1,-3451,5,-3451}, 0},	{{1,1,1,1}, 0},	{{1,0,2815,0}, 0},
{{1,1,1,1}, 0},	{{-2460,-3451,-3451,2815}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-3455,-3455,0}, 0},
{{1,-3455,-3455,-3455}, 0},	{{1,70,1,70}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2802}, 0},	{{1,1,1,1}, 0},	{{1,-2449,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 251},	{{0,0,0,0}, 258},	{{-2544,1,2800,18}, 0},
{{1,0,18,0}, 0},	{{1,1,1,1}, 0},	{{1,29,0,0}, 0},
{{1,-2533,-2533,-2533}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2544,-2544,-2544,-2544}, 0},	{{1,0,2792,0}, 0},
{{1,1,1,1}, 0},	{{1,59,59,0}, 0},	{{1,64,64,-2541}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3494,2789,31,-3494}, 0},	{{-2550,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2779,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,2779,0}, 0},	{{0,0,2779,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2571,-2571,-2571,2783}, 0},	{{1,-3513,12,-3513}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-3513,-3513,0}, 0},	{{1,-3513,-3513,-3513}, 0},	{{1,1,2783,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3513,-3513,-3513,2783}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-3524,-3524,0}, 0},
{{1,-3524,-3524,-3524}, 0},	{{1,1,1,1}, 0},	{{-2522,-2522,-2522,-2522}, 0},
{{-2569,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2550,-2550,-2550,-2550}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,2768,0}, 0},
{{1,7,7,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,2763,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,2761,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3557,2726,-3557,-3557}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3561,1,-36,-3561}, 0},
{{1,1,1,1}, 254},	{{1,2748,0,0}, 0},	{{1,1,1,1}, 0},
{{-3561,-3561,-3561,2749}, 0},	{{-3566,-3566,-3566,2759}, 0},	{{-2576,-3567,-42,-3567}, 0},
{{1,-2582,-43,-3568}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-3568,-3568,3}, 0},	{{1,-3568,-3568,-3568}, 0},
{{-2577,-2577,-2577,-2577}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2750}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3570,-3570,-3570,2746}, 0},	{{-3570,-3570,-3570,2746}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2573,-2573,-3575}, 0},	{{1,1,1,1}, 0},	{{1,-2569,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 251},	{{0,0,0,2733}, 0},	{{1,3,5,5}, 0},
{{-2567,-2567,-2567,2732}, 0},	{{1,1,3,3}, 0},	{{-2569,-2569,-2569,2733}, 0},
{{-2575,-2575,-2575,2735}, 0},	{{-2571,-2571,-2571,2737}, 0},	{{1,-2724,-2724,-2724}, 0},
{{1,2738,2738,2738}, 270},	{{1,2738,2741,2738}, 0},	{{1,1,1,55}, 0},
{{1,1,1,1}, 0},	{{1,2743,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2742}, 0},	{{-2581,6,2742,9}, 0},	{{1,2743,2746,8}, 0},
{{1,1,1,2746}, 0},	{{-2582,2747,0,0}, 0},	{{1,2747,2743,5}, 0},
{{-2585,-2585,-2585,2747}, 0},	{{-2586,-2586,-2586,2748}, 0},	{{1,1,1,2750}, 0},
{{-2587,2751,0,0}, 0},	{{-2589,-2589,-2589,-2589}, 0},	{{1,2751,2757,0}, 0},
{{1,2757,0,0}, 270},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,2759,0,0}, 0},	{{1,2760,1,2761}, 0},
{{1,2761,0,0}, 0},	{{-2592,-2592,-2592,-2592}, 270},	{{1,2760,-2,2761}, 0},
{{1,2761,0,0}, 0},	{{1,-2595,-2595,-2595}, 270},	{{1,1,1,70}, 0},
{{1,1,1,-2595}, 0},	{{1,1,1,1}, 0},	{{-2595,-2595,2758,-2595}, 0},
{{-9,2750,-9,2754}, 0},	{{1,5,-2554,0}, 0},	{{0,112,0,0}, 270},
{{-2604,3,2763,0}, 0},	{{1,2,73,0}, 0},	{{-2570,79,2762,31}, 270},
{{1,2762,2767,0}, 275},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,102,0,0}, 0},
{{-2611,103,-2611,-2611}, 0},	{{0,0,0,0}, 16},	{{1,2760,1,2761}, 0},
{{-2592,2737,-156,0}, 0},	{{1,2761,1,2762}, 0},	{{-2594,2763,-158,0}, 0},
{{-3,2756,-3,2764}, 0},	{{-2594,-13,7,0}, 0},	{{1,-14,6,0}, 0},
{{1,2762,2763,1}, 270},	{{1,0,64,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-53,-53,-53,-53}, 0},	{{-166,2759,-166,-166}, 0},
{{-36,2723,-36,2759}, 0},	{{-37,2722,-37,2760}, 0},	{{1,-23,-2582,0}, 0},
{{-8,2753,2759,-8}, 270},	{{1,6,0,0}, 0},	{{-2606,-2606,-2606,-2606}, 270},
{{-2610,4,0,0}, 0},	{{1,2756,2758,0}, 0},	{{1,1,50,1}, 270},
{{-2600,0,50,0}, 0},	{{1,1,1,35}, 275},	{{1,1,1,35}, 0},
{{1,0,0,0}, 0},	{{1,2753,1,0}, 0},	{{1,1,0,0}, 276},
{{0,0,0,0}, 277},	{{-2641,-2641,1,-2641}, 0},	{{1,1,1,1}, 0},
{{1,-2641,-2641,-2641}, 0},	{{1,1,1,1}, 0},	{{-2641,-2641,-2641,2748}, 0},
{{-16,4,2759,0}, 0},	{{-2626,3,0,0}, 0},	{{1,2758,2742,0}, 0},
{{-15,-15,-15,-15}, 270},	{{1,2759,1,20}, 275},	{{1,2759,2761,20}, 0},
{{1,0,0,0}, 0},	{{1,2762,1,2772}, 0},	{{1,0,0,0}, 276},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 292},
{{1,1,-2664,-2664}, 0},	{{1,1,1,1}, 0},	{{-2664,2760,-2664,-2664}, 0},
{{-37,2,0,0}, 0},	{{-19,1,2722,0}, 0},	{{1,1,1,1}, 275},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,2756,1,0}, 0},
{{0,0,0,0}, 276},	{{-2649,2756,0,0}, 0},	{{1,2756,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2751}, 0},
{{-2648,2748,2,0}, 0},	{{-2649,0,2750,2755}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2751}, 0},	{{0,2751,0,0}, 0},	{{0,0,0,2752}, 0},
{{1,2752,1,2753}, 0},	{{1,2676,2676,2676}, 0},	{{1,2754,1,2676}, 0},
{{1,1,2676,2676}, 276},	{{0,2754,0,0}, 277},	{{-4,-4,-4,2748}, 0},
{{1,-90,-90,-90}, 0},	{{1,2752,1,-90}, 0},	{{-90,-90,-90,-90}, 276},
{{1,1,2751,2751}, 276},	{{1,2751,1,1}, 277},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 280},	{{0,0,0,0}, 279},
{{0,2718,0,0}, 0},	{{-2713,-2713,-2713,-2713}, 272},	{{0,0,0,2739}, 0},
{{1,2739,2742,2743}, 0},	{{1,2745,14,0}, 0},	{{1,0,15,0}, 0},
{{-2635,84,2745,99}, 0},	{{1,2749,-1803,0}, 62},	{{1,0,0,0}, 0},
{{-2596,-2596,-2596,0}, 0},	{{1,563,565,0}, 0},	{{1,0,0,0}, 0},
{{-2590,-2590,0,0}, 0},	{{1,738,892,0}, 0},	{{1,2744,2745,0}, 0},
{{-2585,137,2745,-2585}, 0},	{{1,2749,0,0}, 0},	{{-2581,-2581,-2581,-2581}, 0},
{{1,-1653,2748,0}, 0},	{{-2576,-2576,-2576,-2576}, 0},	{{-2571,-2571,-2571,0}, 0},
{{1,1,26,26}, 0},	{{1,1,26,26}, 0},	{{1,1,26,26}, 0},
{{1,2743,2744,2745}, 0},	{{-3702,-2536,0,2745}, 0},	{{1,2716,2719,2720}, 0},
{{1,2722,18,0}, 0},	{{1,0,-8,0}, 0},	{{1,2743,2747,2752}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2753,33}, 0},	{{1,-2545,0,77}, 0},	{{1,-2533,0,0}, 0},
{{1,-2533,-2533,0}, 0},	{{1,1,1,-2140}, 0},	{{1,-2140,-2140,-2140}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2658,-2658,-2658,-2658}, 0},	{{1,2744,75,2746}, 0},	{{-2655,78,388,0}, 0},
{{-26,-1680,439,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2741,2742,2743}, 0},	{{-2693,-2561,0,2720}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2731}, 0},	{{1,-2566,0,224}, 0},	{{1,-2554,0,0}, 0},
{{1,-2554,-2554,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2161}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2582,-2582,-2582,-2582}, 0},	{{-2707,-2575,0,47}, 0},	{{-9,-2576,0,46}, 0},
{{1,-2577,0,218}, 0},	{{-2172,-2565,0,0}, 0},	{{-41,2725,2677,2678}, 0},
{{-25,48,49,2720}, 0},	{{1,2686,-1866,0}, 62},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2659,-2659,-2659,-2659}, 0},	{{1,2717,53,-2949}, 62},
{{1,-2949,-2949,-2949}, 0},	{{1,1,2717,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,2717,0,0}, 0},
{{-2664,-2956,2718,-2956}, 0},	{{1,-2957,2718,-2957}, 0},	{{1,64,2723,-2957}, 0},
{{0,0,2723,2727}, 116},	{{1,74,-2959,-2959}, 0},	{{-2064,-2064,2726,-2064}, 0},
{{1,1,2683,2683}, 0},	{{1,1,2683,2683}, 0},	{{1,1,2683,2683}, 0},
{{-2718,2730,17,-2607}, 0},	{{1,2658,2683,2683}, 0},	{{1,2658,2683,2683}, 0},
{{1,2658,2683,2683}, 0},	{{1,1,2727,148}, 0},	{{1,154,-468,-468}, 0},
{{1,160,-468,-468}, 0},	{{1,160,160,-468}, 0},	{{1,1,1,148}, 0},
{{1,148,148,148}, 0},	{{1,1,1,1}, 0},	{{-2722,2721,-2722,-2722}, 0},
{{1,1,2677,2677}, 0},	{{1,1,2677,2677}, 0},	{{1,1,2677,2677}, 0},
{{1,1,1,1}, 0},	{{-2622,-2620,0,0}, 0},	{{-2623,-2621,0,1}, 0},
{{1,0,0,0}, 0},	{{0,0,189,0}, 0},	{{1,1,-2728,-2728}, 0},
{{1,1,1,1}, 0},	{{-1533,-1533,-1533,2721}, 0},	{{-3408,-2708,-2708,2721}, 0},
{{0,2725,-1913,0}, 62},	{{0,0,457,0}, 0},	{{1,2725,786,0}, 0},
{{1,0,2727,0}, 0},	{{0,0,0,0}, 202},	{{1,2643,0,0}, 0},
{{-2039,-2039,-2039,-2039}, 0},	{{0,0,2642,0}, 0},	{{0,-2623,0,0}, 0},
{{1,0,0,0}, 62},	{{0,0,0,2721}, 0},	{{1,-2999,-2999,-2999}, 0},
{{-1933,-1933,2723,-1933}, 0},	{{-3001,-3001,2730,-3001}, 0},	{{1,-2717,-2717,-57}, 0},
{{1,-2717,-2717,-2717}, 0},	{{1,-2717,-57,-57}, 0},	{{1,2727,1,1}, 0},
{{1,1,1,1}, 0},	{{-505,2727,-505,-505}, 0},	{{1,1,1,1}, 0},
{{0,2727,0,0}, 0},	{{1,0,0,0}, 0},	{{0,2727,0,0}, 0},
{{1,-3012,-3012,-3012}, 0},	{{1,1,2726,1}, 0},	{{-1856,-1856,-1856,-1856}, 0},
{{1,-3015,2732,-3015}, 0},	{{-1851,-1851,2732,-1851}, 0},	{{0,2739,0,0}, 0},
{{1,-3018,-3018,-3018}, 0},	{{-1828,-1828,2739,-1828}, 0},	{{-3020,-3020,2743,-3020}, 0},
{{0,0,2660,0}, 0},	{{0,0,2659,0}, 197},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2738,6}, 0},
{{1,2605,2605,2605}, 0},	{{1,2605,2605,2605}, 0},	{{1,2605,2605,2605}, 0},
{{1,1,1,2735}, 0},	{{-530,-530,-530,2735}, 0},	{{0,0,0,0}, 194},
{{1,1,2734,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-2137,2734,-2137,0}, 0},	{{1,-2733,-2733,-2733}, 0},
{{1,-2733,-2733,-2733}, 0},	{{1,-2733,-2733,-2733}, 0},	{{1,1,2731,2731}, 0},
{{1,1,2732,2732}, 0},	{{1,2732,2699,2699}, 0},	{{1,1,1,2699}, 0},
{{1,1,1,1}, 52},	{{1,1,-544,-544}, 0},	{{-544,-544,-544,-544}, 53},
{{-1814,-1814,2728,-1814}, 0},	{{0,0,2732,0}, 58},	{{1,-2738,-2738,-2738}, 0},
{{1,-2738,-2738,-2738}, 0},	{{1,-2738,-2738,-2738}, 0},	{{1,2729,-556,-556}, 0},
{{1,-556,-556,2729}, 0},	{{1,-556,-556,-556}, 0},	{{1,-556,-556,-556}, 0},
{{1,1,1,1}, 0},	{{1,-556,-556,-556}, 0},	{{1,1,1,1}, 0},
{{-3572,2729,-3572,-3572}, 0},	{{0,0,0,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{-1819,-1819,-1819,-1819}, 0},	{{1,-2747,-2747,-2747}, 0},
{{1,-2747,-2747,-2747}, 0},	{{1,-2747,-2747,-2747}, 0},	{{1,1,1,1}, 0},
{{1,1,-571,2725}, 0},	{{1,-571,-571,-571}, 0},	{{1,-571,-571,-571}, 0},
{{-571,-571,2725,-571}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,2725,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 43},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 187},
{{-2775,15,-607,-607}, 0},	{{1,14,-608,-608}, 0},	{{1,20,-608,-608}, 0},
{{1,20,20,-608}, 0},	{{1,1,1,1}, 0},	{{1,1,1,8}, 0},
{{1,1,1,1}, 0},	{{-2765,2697,-2765,-2765}, 0},	{{1,7,-615,2701}, 0},
{{1,13,-615,-615}, 0},	{{1,13,13,-615}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3549,2698,-3549,-3549}, 0},
{{-621,7,2702,-621}, 0},	{{1,-622,-622,-622}, 0},	{{1,-622,-622,-622}, 0},
{{1,1,-622,-622}, 0},	{{1,-622,-622,-622}, 0},	{{1,1,1,1}, 0},
{{-2762,2701,-2762,-2762}, 0},	{{-627,2706,-627,-627}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2861,2706,-2861,-2861}, 0},
{{1,-3934,-2900,-2900}, 0},	{{1,-3934,-3934,-2761}, 0},	{{1,-3934,-3934,-3934}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2708}, 0},	{{1,2708,2708,2713}, 0},
{{1,2142,2142,2142}, 4},	{{1,2142,2142,2142}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2562}, 0},	{{1,1,1,1}, 181},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3934,2705,-3934,-3934}, 0},
{{1,0,0,0}, 0},	{{-1704,0,0,0}, 0},	{{1,1,-2799,-2799}, 0},
{{1,1,1,1}, 0},	{{-2776,-2776,-2776,-2776}, 0},	{{1,0,0,0}, 0},
{{1,0,16,0}, 0},	{{0,2717,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 22},	{{0,2703,0,0}, 0},	{{0,0,0,2711}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2701,0}, 0},	{{-2806,-2795,-2795,2}, 0},
{{-3969,-3969,-3969,2700}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-2796,1,-2796}, 0},	{{1,-2796,-2796,0}, 0},	{{1,1,1,1}, 181},
{{0,0,0,2695}, 0},	{{-2748,95,96,2702}, 0},	{{1,2702,-2119,0}, 62},
{{-2746,-2746,-2746,-2746}, 0},	{{1,2703,250,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2735,-2735,-2735,-2735}, 0},	{{1,2701,576,0}, 0},
{{1,0,136,0}, 0},	{{1,0,2702,0}, 0},	{{-2730,-2730,2702,-2730}, 0},
{{1,0,138,0}, 0},	{{1,1,1,1}, 214},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2726,-2726,138,138}, 0},
{{-2799,2699,-2799,-2799}, 0},	{{1,-2799,-2799,-2799}, 0},	{{1,-2799,-2799,-2799}, 0},
{{-3977,-2698,-2683,2699}, 0},	{{1,30,2709,40}, 0},	{{1,2732,-2384,0}, 0},
{{1,2733,63,-2767}, 206},	{{1,-2780,-2780,-2780}, 0},	{{1,-2780,-2780,-2780}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2780}, 0},	{{1,1,1,1}, 0},
{{-2780,-2780,30,2733}, 0},	{{1,65,66,2672}, 0},	{{-2817,69,79,0}, 0},
{{1,2676,551,0}, 0},	{{1,0,111,0}, 0},	{{1,0,0,0}, 0},
{{-2755,-2755,-2755,-2755}, 0},	{{1,0,113,0}, 0},	{{1,1,1,2737}, 214},
{{1,1,1,-24}, 0},	{{1,1,1,1}, 0},	{{1,2737,2737,-24}, 0},
{{1,2737,2738,2738}, 0},	{{1,1,2739,2740}, 0},	{{-2751,2742,-2751,-2751}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2787}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2787}, 0},	{{1,1,1,1}, 0},	{{-2787,-2787,-2787,2738}, 0},
{{-2800,-2870,0,0}, 0},	{{1,2739,-2169,0}, 62},	{{1,25,-2796,-2796}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2809,2738,0,0}, 0},	{{-56,2738,50,0}, 0},	{{1,2737,2739,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 235},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2735,2735}, 0},
{{0,0,0,2735}, 0},	{{1,0,80,0}, 0},	{{1,1,1,2734}, 214},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2735}, 0},	{{1,-272,0,2735}, 0},	{{0,550,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2730,0,0}, 0},	{{1,1,0,0}, 207},	{{0,0,0,0}, 227},
{{1,1,-2788,80}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,80,80}, 0},
{{1,82,0,0}, 0},	{{-2788,80,2721,0}, 207},	{{0,2750,0,0}, 0},
{{-93,2695,-2213,0}, 62},	{{-92,2702,157,0}, 0},	{{1,2748,486,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 238},	{{1,0,49,0}, 0},
{{1,1,1,1}, 214},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2742}, 0},	{{1,-303,0,0}, 0},
{{1,-2927,0,0}, 0},	{{1,0,0,0}, 0},	{{-2339,-2339,-2339,-2339}, 0},
{{0,0,52,0}, 0},	{{-109,0,0,0}, 62},	{{-108,0,0,0}, 0},
{{1,-790,2735,0}, 0},	{{1,1,1,1}, 214},	{{1,2742,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2742,2745}, 0},
{{1,1,1,1}, 0},	{{1,-2828,-2828,-2828}, 0},	{{-2828,638,-2828,-2828}, 79},
{{-799,-799,639,0}, 0},	{{1,1,-2864,-2864}, 0},	{{1,-2864,-2864,-2864}, 0},
{{-2864,-2864,-2864,-2864}, 212},	{{1,-803,23,0}, 0},	{{1,1,1,1}, 214},
{{-2163,2740,-2163,-2163}, 0},	{{1,-806,33,0}, 0},	{{1,1,1,1}, 0},
{{-2158,2740,-2158,-2158}, 0},	{{1,1,-2860,-2860}, 0},	{{1,-2860,-2860,-2860}, 0},
{{-2860,-2860,-2860,-2860}, 212},	{{0,0,0,0}, 223},	{{1,-813,13,0}, 0},
{{1,1,1,1}, 214},	{{1,2736,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2173,0,0}, 0},	{{-2173,-2173,-2173,744}, 0},
{{-820,-820,2734,0}, 0},	{{0,0,0,0}, 225},	{{1,1,-2864,-2864}, 0},
{{1,-2864,-2864,-2864}, 0},	{{-2864,-2864,0,0}, 212},	{{0,0,0,2730}, 0},
{{0,0,0,0}, 218},	{{-136,1,-136,-136}, 0},	{{1,1,-136,-136}, 0},
{{1,-136,-136,-136}, 0},	{{-2863,-2863,1,1}, 212},	{{-351,-351,0,2725}, 0},
{{1,1,2727,2728}, 0},	{{0,2728,0,0}, 0},	{{1,-2865,-2865,-2865}, 0},
{{1,-2865,-2865,-2865}, 0},	{{-3876,-3876,-3876,-3876}, 215},	{{1,1,1,1}, 0},
{{-2116,2732,-2116,-2116}, 0},	{{0,0,0,0}, 58},	{{1,1,-3874,-3874}, 0},
{{1,-3874,-3874,-3874}, 0},	{{-3874,-2115,-2114,-2114}, 212},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,3,0,0}, 0},	{{1,1,1,0}, 207},
{{0,0,0,0}, 213},	{{-1,-1,-1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 43},	{{-2968,-2878,-2968,-2968}, 0},
{{1,-3008,0,0}, 0},	{{1,0,0,0}, 207},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 210},	{{-10,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2687}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2686}, 0},
{{-2838,386,-2330,0}, 62},	{{-2797,0,-103,0}, 0},	{{1,0,2684,0}, 0},
{{1,2689,29,29}, 0},	{{1,47,369,0}, 116},	{{-2796,2689,0,0}, 0},
{{-2792,-2147,-2146,2692}, 0},	{{1,-2502,106,106}, 0},	{{1,1,2697,2697}, 0},
{{1,1,2697,106}, 0},	{{1,1,1,1}, 0},	{{-3849,2697,-1972,-1972}, 0},
{{1,2698,2700,0}, 0},	{{1,2701,2702,19}, 0},	{{1,431,359,2702}, 0},
{{1,436,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,19}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2698}, 0},	{{-2806,-2161,459,-2155}, 0},
{{-2801,-2131,-2123,467}, 0},	{{1,1,1,500}, 0},	{{1,1,1,1}, 0},
{{-4095,3,-3802,56}, 0},	{{1,1,1,1}, 0},	{{-2617,1,-3804,-2785}, 0},
{{-2787,-3788,-3774,0}, 0},	{{1,0,0,0}, 0},	{{-2397,-2397,-2397,-2397}, 0},
{{1,0,2688,0}, 0},	{{1,1,1,1}, 143},	{{1,0,0,0}, 0},
{{1,418,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2682}, 0},	{{-2366,-2366,-2414,2682}, 0},
{{1,0,0,0}, 0},	{{-431,-431,-431,-431}, 0},	{{-2282,0,-91,0}, 0},
{{-2756,-2756,-2756,2680}, 0},	{{1,1,2681,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2676}, 0},	{{-17,0,323,2676}, 106},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2673}, 0},	{{1,1,1,1}, 0},
{{1,1,1,396}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2670}, 0},
{{0,0,0,2670}, 0},	{{1,1,-2195,-2414}, 0},	{{-2195,-2195,-2195,-2195}, 144},
{{1,1,1,663}, 0},	{{1,1,1,1}, 0},	{{-3968,-2619,-3843,15}, 0},
{{1,1,1,1}, 0},	{{-2634,-2621,-3845,-2826}, 0},	{{1,-2409,-3815,0}, 0},
{{1,-2826,-2826,-2826}, 0},	{{1,694,0,0}, 0},	{{1,1,1,1}, 0},
{{1,701,307,307}, 0},	{{1,701,307,307}, 0},	{{1,1,706,685}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3860,-3860,-3860,2652}, 0},	{{1,-2421,-3827,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-1956,-3872,-3872}, 0},	{{1,-1956,-3872,-3872}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3872,-3872,-3872,2641}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3877,-3877,-3877,2637}, 0},	{{-3877,-3877,-3877,2637}, 0},	{{-2817,288,102,0}, 62},
{{-2815,0,2636,0}, 0},	{{1,0,2636,0}, 0},	{{1,2641,128,84}, 0},
{{1,2642,133,0}, 116},	{{1,2644,128,0}, 0},	{{1,1,1,1}, 0},
{{-2803,-2803,2646,84}, 0},	{{-2788,-2247,-2246,2646}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2764,-2872,-2665,306}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2756,191,-2465,-2465}, 0},
{{1,1,1,-4221}, 0},	{{-4221,-4221,2641,-4221}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-4223}, 0},	{{1,1,1,1}, 0},	{{-4241,-2883,-3900,2638}, 0},
{{-2746,-2746,1,-2741}, 0},	{{1,1,1,1}, 0},	{{-4244,-2886,-3903,2647}, 0},
{{1,-2467,-3873,0}, 0},	{{1,69,69,69}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,2654,2654,2654}, 0},	{{-2741,-3918,-3918,-3918}, 0},
{{1,292,68,0}, 62},	{{1,301,-2460,-2510}, 0},	{{-2601,-2601,-2601,67}, 0},
{{-2851,0,72,0}, 0},	{{1,2649,2652,0}, 0},	{{1,2653,2654,48}, 0},
{{1,2654,2659,2662}, 0},	{{1,2662,2659,0}, 0},	{{1,1,1,1}, 0},
{{1,2664,1,48}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2663}, 0},
{{-932,-932,107,-932}, 0},	{{-2827,-2286,334,-2280}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2657,2659,2659}, 0},	{{1,-2108,0,0}, 0},	{{-3183,369,-3183,0}, 0},
{{1,2657,2657,-2747}, 0},	{{1,-2747,2657,-2747}, 0},	{{1,-2747,-2747,-2747}, 0},
{{-2747,-129,-3934,2657}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2751}, 0},
{{1,1,1,1}, 0},	{{-4231,-133,-3938,155}, 0},	{{1,1,1,6}, 0},
{{1,1,1,1}, 0},	{{-4234,-136,-3941,31}, 0},	{{1,1,1,2659}, 0},
{{1,1,1,1}, 0},	{{-4237,-139,-3944,163}, 0},	{{1,1,1,1}, 0},
{{-2759,-141,-3946,26}, 0},	{{1,-2510,-3916,0}, 0},	{{1,26,26,26}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,2652,2652,2652}, 0},
{{1,2652,-3961,-3961}, 0},	{{1,1,174,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3961,-3961,-3961,2652}, 0},	{{-2559,0,-970,0}, 62},	{{-2898,0,-971,0}, 0},
{{1,0,2650,0}, 0},	{{1,1,1,1}, 143},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2644}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4224,-2747,-2747,136}, 0},	{{1,-2535,-3941,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-3986,-3986,-3986}, 0},	{{-24,-3986,-3986,-3986}, 0},	{{-988,-988,2635,-988}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,318,0,0}, 0},
{{1,-995,2629,-995}, 0},	{{1,-2448,-2448,-2448}, 0},	{{1,-2448,-2448,-2448}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-995}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-995}, 0},	{{1,-995,-995,-995}, 0},
{{-995,-995,1783,0}, 93},	{{-2432,0,0,0}, 0},	{{1,1,2619,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1006,-1006,-1006,2614}, 0},
{{1,5,10,0}, 106},	{{1,0,5,0}, 0},	{{1,1,1,1}, 0},
{{-2926,-2926,-2926,-39}, 0},	{{-3,1,1,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2605}, 0},	{{-4,0,-4,0}, 101},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2599}, 0},	{{1,1,-2939,-2939}, 0},
{{0,0,0,2601}, 0},	{{0,0,0,2601}, 0},	{{1,-2413,-2413,-2413}, 0},
{{1,-2413,-2413,-2413}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-1032,-1032,-1032}, 0},	{{-2939,-1032,-1032,-1032}, 0},	{{-1038,0,0,443}, 58},
{{-1034,-1034,-1034,2}, 0},	{{-1035,-1035,-1035,2593}, 0},	{{1,-1035,-1035,-1035}, 0},
{{1,2594,-1035,-1035}, 0},	{{1,1,2594,-2413}, 56},	{{1,1,-1035,-1035}, 0},
{{1,1,1,1}, 0},	{{-2413,-2413,2594,-2413}, 0},	{{1,1740,1740,1740}, 0},
{{1,1,1,1}, 0},	{{-4176,-4176,2592,-4176}, 0},	{{-4176,-4176,-4176,-4176}, 160},
{{1,1,1,1}, 0},	{{1,1,1,-2834}, 0},	{{1,1,1,1}, 0},
{{-2834,-2821,-4045,2588}, 0},	{{1,1,1,2592}, 0},	{{1,1,1,1}, 0},
{{-4173,-2824,-4048,59}, 0},	{{1,1,1,1}, 0},	{{-2839,-2826,-4050,-78}, 0},
{{1,1,1,-2626}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2626}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2509,0,0}, 0},
{{-2337,-2337,-2337,-2337}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4167,-2332,-4060,2580}, 0},	{{1,-2624,-4030,0}, 0},	{{1,-88,-88,-88}, 0},
{{1,479,0,0}, 0},	{{1,1,1,1}, 0},	{{1,92,92,92}, 0},
{{1,92,92,92}, 0},	{{1,1,2580,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4075,-4075,-4075,2580}, 0},	{{1,-2636,-4042,0}, 0},	{{1,123,-4072,-4072}, 0},
{{1,489,498,0}, 0},	{{1,-2285,-2285,-2285}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2285}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2285,-2285,-2285}, 0},	{{1,1,1,1}, 0},
{{-4087,-4087,-4087,2569}, 0},	{{0,-2264,-554,0}, 0},	{{-562,-2539,0,0}, 0},
{{1,-2650,-4056,0}, 0},	{{1,-4086,-4086,-4086}, 0},	{{1,0,0,0}, 0},
{{1,-4086,-4086,-4086}, 0},	{{1,1,1,1}, 0},	{{-4101,2562,-4101,-4101}, 0},
{{1,-2656,-4062,0}, 0},	{{1,-4092,-4092,-4092}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-4107}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-4107,-4107,-4107,2556}, 0},
{{1,1,1,1}, 0},	{{-4429,-3089,-4106,1}, 0},	{{1,-2670,-4076,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-4121,-4121,-4121}, 0},	{{1,-4121,-4121,-4121}, 0},	{{-159,-159,-159,-159}, 0},
{{1,7,-4123,-4123}, 0},	{{1,-4123,-4123,-4123}, 0},	{{1,1,1,1}, 0},
{{1,-4123,-4123,-4123}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4123,-4123,-4123,2541}, 0},	{{1,-4129,-4129,-4129}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-4129}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4129,-4129,-4129,2536}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-4134,-4134,-4134,2532}, 0},
{{-4134,-4134,-4134,2532}, 0},	{{-2934,2532,-2685,0}, 62},	{{-3072,0,-458,0}, 0},
{{1,0,2231,0}, 0},	{{1,14,0,0}, 0},	{{0,0,14,0}, 116},
{{1,2528,-2690,0}, 62},	{{-227,-2738,-2688,-2738}, 0},	{{-3078,0,-321,0}, 0},
{{1,0,8,0}, 0},	{{1,2525,2526,0}, 0},	{{0,0,8,2351}, 0},
{{-2938,-2725,113,-2720}, 0},	{{-3083,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 143},	{{-2709,2521,160,0}, 0},	{{0,0,2294,0}, 0},
{{0,0,1,0}, 106},	{{0,0,0,0}, 101},	{{1,-2715,-4121,0}, 0},
{{1,-4151,-4151,-4151}, 0},	{{1,388,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4166,-4166,-4166,2507}, 0},	{{1,142,144,0}, 0},
{{1,1,1,1}, 51},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2502}, 0},	{{1,1,1,2502}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 79},	{{1,-2603,280,-2603}, 0},
{{1,1875,1875,1875}, 0},	{{1,1875,1875,1875}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2603,-2603,-2603,2495}, 0},	{{1,0,276,2}, 106},
{{-2765,2494,0,0}, 0},	{{0,0,278,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,48}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2493}, 0},
{{-2600,-2600,-2600,2493}, 51},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2494}, 0},	{{-2917,-2598,-2600,2494}, 0},
{{1,-645,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2494,0,0}, 0},
{{1,-2758,-4164,0}, 0},	{{1,1,-4194,-4194}, 0},	{{-2407,0,376,0}, 0},
{{1,1,1,-305}, 0},	{{1,1,1,1}, 0},	{{-2387,-2385,-2383,-2383}, 0},
{{-4203,-4203,-4203,2495}, 0},	{{1,104,106,0}, 0},	{{1,1,1,1}, 51},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2488,0,0}, 0},
{{1,1,2488,0}, 79},	{{0,0,0,0}, 127},	{{-2762,-2762,-2810,2487}, 0},
{{1,2491,0,0}, 0},	{{1,2496,1876,1876}, 0},	{{1,2496,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2495}, 0},
{{1,1,2495,-2649}, 0},	{{-2649,3,0,0}, 0},	{{-2807,2,-70,2494}, 106},
{{-2808,1,0,2494}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2490}, 0},
{{0,0,231,0}, 134},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2486}, 0},	{{0,0,0,2486}, 0},
{{1,1,4,4}, 0},	{{1,4,0,0}, 0},	{{1,1,4,0}, 0},
{{0,0,0,0}, 124},	{{-2,2459,0,0}, 0},	{{-28,2481,2459,0}, 0},
{{0,0,0,0}, 126},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2465}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2618}, 0},
{{1,-3037,-3037,-66}, 0},	{{1,-2825,-4231,0}, 0},	{{1,-4261,-4261,-4261}, 0},
{{1,0,0,0}, 0},	{{-4261,2457,-4261,-4261}, 0},	{{1,1,-214,-2841}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2841}, 0},	{{1,1,1,1}, 0},
{{1,1,-2552,-2552}, 0},	{{1,-2724,0,0}, 0},	{{1,1,2458,-2552}, 0},
{{0,0,0,2458}, 0},	{{1,-4257,-4243,0}, 0},	{{1,-4273,-4273,-4273}, 0},
{{-4273,0,2457,0}, 0},	{{1,-2840,-4246,0}, 0},	{{1,-4276,-4276,-4276}, 0},
{{-4276,0,2464,0}, 0},	{{1,-2843,-4249,0}, 0},	{{1,-84,-4279,-4279}, 0},
{{-2492,0,2462,0}, 0},	{{1,1,1,1}, 119},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2451}, 0},	{{1,1,0,0}, 4},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 120},	{{1,-2475,0,0}, 0},
{{0,2448,295,0}, 0},	{{-1,-2751,0,0}, 0},	{{-3656,-3656,-3656,2447}, 0},
{{1,1,1,1}, 0},	{{-3114,-496,-4301,-443}, 0},	{{0,0,0,0}, 70},
{{-3239,2445,-3239,-2757}, 0},	{{-2734,-2734,-2734,-2734}, 0},	{{0,0,0,2444}, 0},
{{1,1,1,1}, 51},	{{0,0,2443,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 87},	{{1,1,1,2437}, 0},	{{1,2437,0,0}, 0},
{{1,2437,0,0}, 79},	{{0,0,0,0}, 80},	{{1,1,1,2437}, 0},
{{1,2437,0,0}, 0},	{{-3,0,0,0}, 79},	{{-2877,1,2438,-3465}, 0},
{{-2877,-3465,-3465,-3465}, 0},	{{1,1,1,1}, 0},	{{-4476,2438,0,0}, 0},
{{0,0,0,0}, 89},	{{1,2372,2372,-348}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-348}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2433}, 0},
{{0,2433,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2930}, 0},
{{1,1,1,1}, 0},	{{-2930,-2930,-2930,2430}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-41,0,0}, 0},	{{1,1,1,-3273}, 76},
{{-3273,2427,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-49,0,0}, 0},	{{1,1,1,1}, 76},	{{0,0,0,2432}, 0},
{{0,0,0,2433}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 72},
{{0,0,0,0}, 71},	{{1,1,1,1}, 0},	{{1,-2838,-2838,-2838}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-3516}, 0},
{{1,-3516,-3516,-3516}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 53},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 92},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 94},
{{1,1,-3003,-3003}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2886,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2354}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-2885,-2885,-2885,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2343}, 0},	{{0,2343,0,0}, 0},
{{-2915,-2915,-2915,-2915}, 108},	{{0,0,0,0}, 108},	{{-3594,-3594,-3594,2341}, 0},
{{-2882,0,0,0}, 113},	{{0,0,0,2340}, 0},	{{0,2340,0,0}, 101},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,2338}, 0},
{{0,0,0,0}, 105},	{{0,2337,0,0}, 0},	{{0,0,0,2338}, 0},
{{0,0,0,2338}, 0},	{{1,0,0,0}, 0},	{{1,-3188,-3188,0}, 0},
{{1,1,1,1}, 52},	{{1,0,0,0}, 0},	{{-2866,-2866,-2866,-2866}, 0},
{{0,0,0,2342}, 0},	{{1,1,1,1}, 0},	{{1,1,-921,-921}, 0},
{{-921,-921,-921,-921}, 53},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-420,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 56},	{{0,0,0,2330}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2323}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-3069}, 0},
{{1,1,1,1}, 0},	{{-3269,-3269,-3269,2140}, 0},	{{1,-2947,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,2317}, 0},	{{1,1,1,1}, 0},
{{-3287,-3274,-4498,-2664}, 0},	{{1,-3062,-4468,0}, 0},	{{1,1,-2664,-2664}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-2664,-2597,-4513,2312}, 0},
{{1,1,1,1}, 0},	{{-3294,-3281,-4505,-647}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2574,-4515,-4515,-4515}, 0},	{{-2830,0,0,0}, 0},	{{0,0,0,2307}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2307}, 0},	{{1,-3081,-4487,0}, 0},
{{1,-2683,-2683,-2683}, 0},	{{1,22,0,0}, 0},	{{1,1,1,1}, 0},
{{1,29,-365,-365}, 0},	{{1,29,-365,-365}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4532,-4532,-4532,2296}, 0},	{{1,-3093,-4499,0}, 0},
{{1,-671,-671,-671}, 0},	{{1,10,0,0}, 0},	{{1,1,1,1}, 0},
{{1,17,-377,-377}, 0},	{{1,17,-377,-377}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4544,-4544,-4544,2285}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2277}, 0},	{{1,1,-393,-393}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-4560,-4560,-4560,2271}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4565,-4565,-4565,2267}, 0},	{{-4565,-4565,-4565,2267}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2259}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2251}, 0},
{{-4584,-4584,-4584,2251}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2243}, 0},	{{0,0,0,2243}, 0},	{{0,2244,0,0}, 0},
{{1,1,1,1}, 0},	{{-3950,-3950,-3950,2243}, 0},	{{-4598,-4598,-4598,2243}, 0},
{{1,-3160,-4566,0}, 0},	{{1,-4596,-4596,-4596}, 0},	{{1,0,0,0}, 0},
{{1,-4596,-4596,-4596}, 0},	{{1,-4611,-4611,-4611}, 0},	{{1,-4611,-4611,-4611}, 0},
{{1,-4611,-4611,-4611}, 0},	{{1,1,1,-4611}, 0},	{{-4611,-4611,2235,-4611}, 0},
{{-4608,-4608,-4608,2236}, 0},	{{-4609,-4609,-4609,2236}, 0},	{{1,1,1,-4609}, 0},
{{1,-3211,0,0}, 0},	{{1,1,1,1}, 5},	{{0,0,0,2233}, 0},
{{0,0,2234,0}, 0},	{{-4615,-4615,-4615,2239}, 0},	{{-4616,-4616,-4616,2239}, 0},
{{-4616,-4616,-4616,2239}, 0},	{{-4586,2252,-4586,-4586}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2251}, 0},	{{-5185,-5185,-5185,2251}, 0},	{{0,0,0,2266}, 0},
{{0,0,0,2266}, 0},	{{1,0,0,0}, 0},	{{1,2265,1,2266}, 0},
{{1,1,2273,0}, 0},	{{0,0,2277,0}, 0},	{{1,2281,2283,0}, 0},
{{0,0,0,2285}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2287}, 0},
{{1,1,1,1}, 0},	{{1,1,2286,0}, 0},	{{1,0,2286,0}, 0},
{{1,1,1,1}, 0},	{{0,0,2287,0}, 0},	{{0,0,0,2287}, 0},
{{-2669,-2669,2289,-2566}, 0},	{{1,2291,-2567,-2567}, 0},	{{1,-2670,-2670,-2670}, 0},
{{1,1,1,1}, 0},	{{1,1,2291,52}, 0},	{{1,1,1,1}, 0},
{{1,2253,2253,52}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2289}, 0},
{{1,-2677,3,-2677}, 0},	{{1,1,1,1}, 0},	{{-2606,-2606,2287,0}, 0},
{{1,1,1,1}, 0},	{{1,1,2287,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2283,0,0}, 0},	{{1,1,1,1}, 0},
{{0,2290,0,0}, 0},	{{0,2290,0,0}, 0},	{{1,2289,0,0}, 0},
{{0,0,0,9}, 0},	{{1,0,0,2288}, 0},	{{1,2290,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,2286,0}, 0},	{{0,0,10,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,2278}, 0},	{{0,0,2278,0}, 0},
{{-2639,0,0,0}, 0},	{{1,2277,2278,2280}, 0},	{{1,16,64,0}, 0},
{{-2703,-2703,-2703,-2703}, 0},	{{1,2274,2274,2278}, 0},	{{1,13,61,0}, 0},
{{-2706,2277,-2706,-2706}, 0},	{{1,2271,2271,2275}, 0},	{{-5,10,53,0}, 0},
{{-2673,9,96,0}, 0},	{{1,2279,95,0}, 0},	{{1,-2699,2282,-2699}, 0},
{{1,1,2282,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2278}, 0},
{{1,1,1,1}, 0},	{{1,2272,2277,2277}, 0},	{{1,103,0,0}, 0},
{{1,1,1,0}, 507},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,29}, 0},	{{1,1,1,1}, 0},
{{1,0,97,0}, 0},	{{-2385,-2385,-2385,-2385}, 0},	{{0,2269,102,0}, 487},
{{1,1,2272,-2729}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2729}, 0},	{{1,1,1,1}, 0},	{{-2729,-2729,-2729,2268}, 0},
{{-2734,-2734,-2734,0}, 481},	{{1,5,5,2268}, 0},	{{-2702,8,28,0}, 0},
{{1,3,3,3}, 0},	{{-2707,6,26,0}, 0},	{{1,1,1,1}, 0},
{{-2706,4,19,0}, 0},	{{-2707,3,62,0}, 0},	{{1,2262,61,0}, 0},
{{-2702,-2733,-2733,-2733}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,69,0}, 0},	{{-2741,-2741,-2741,2251}, 0},
{{-2742,-2742,-2742,-2742}, 0},	{{1,0,3,0}, 0},	{{1,0,0,0}, 0},
{{-47,-47,-47,-47}, 0},	{{0,0,0,0}, 487},	{{-2744,2,-1,0}, 0},
{{-2745,2245,2247,0}, 0},	{{1,1,1,-2714}, 0},	{{-2714,-17,2247,0}, 0},
{{0,2232,0,0}, 487},	{{1,0,5,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,2243,0}, 0},	{{0,0,1,2247}, 0},
{{1,0,0,0}, 481},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 498},	{{1,1,1,1}, 0},	{{-2763,-2763,-2763,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2763,0,2235,0}, 0},	{{0,0,0,0}, 496},
{{1,-2723,54,0}, 0},	{{1,-2723,-2723,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2232}, 0},
{{1,2243,32,0}, 487},	{{1,-2738,-2738,-2738}, 0},	{{1,-2738,-2738,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-2738,2246,0,0}, 0},
{{0,0,26,0}, 487},	{{1,0,54,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2730,-2730,-2730,-2730}, 0},	{{1,-66,2242,-66}, 0},
{{1,1,-120,-120}, 0},	{{1,1,-120,0}, 0},	{{1,1,1,-120}, 0},
{{1,-66,-66,-66}, 0},	{{1,-66,-66,-66}, 0},	{{-66,-66,-66,2237}, 0},
{{-2775,-2775,-2775,-106}, 481},	{{0,0,0,2236}, 0},	{{-2771,-74,2236,0}, 0},
{{-101,-101,-101,0}, 0},	{{-2213,-2213,-2213,-2213}, 0},	{{1,2174,0,0}, 0},
{{1,2174,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,2231,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2231}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 491},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2227,0}, 0},
{{-2776,-2776,-2776,0}, 481},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2215}, 0},	{{1,0,0,0}, 481},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 485},	{{1,1,1,1}, 0},
{{0,2201,0,0}, 0},	{{1,1,1,-2792}, 0},	{{1,20,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 484},	{{1,1,1,0}, 0},	{{0,0,0,0}, 483},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2177,0}, 0},
{{1,2182,0,0}, 0},	{{1,0,0,0}, 0},	{{0,2181,2184,0}, 0},
{{0,0,0,2184}, 0},	{{-2808,2,-2808,2186}, 0},	{{-2809,-2809,-2809,-2806}, 0},
{{-2800,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-161,0,0}, 0},
{{-87,-87,0,0}, 0},	{{-2811,-2811,-2811,-2811}, 0},	{{-2805,-166,0,0}, 0},
{{-2806,0,0,0}, 0},	{{-2807,2180,0,0}, 0},	{{1,-169,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2173}, 0},	{{-2873,2173,-2873,-2873}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2168}, 0},	{{0,0,0,2179}, 0},
{{1,2184,41,2185}, 0},	{{-2808,2188,56,0}, 409},	{{1,2188,81,83}, 0},
{{-2797,83,0,0}, 409},	{{1,2187,-2796,-2796}, 0},	{{0,83,0,0}, 409},
{{1,258,2186,0}, 416},	{{1,2188,0,0}, 424},	{{1,0,0,0}, 0},
{{-2796,-2796,-2796,-2796}, 0},	{{1,410,0,0}, 0},	{{0,2185,0,0}, 424},
{{1,252,2186,0}, 0},	{{1,2186,2187,0}, 0},	{{0,2187,2188,2189}, 0},
{{1,0,0,0}, 0},	{{1,2188,1,1}, 0},	{{1,2188,1,-2780}, 0},
{{1,1,1,1}, 0},	{{-2780,2188,-2780,-2780}, 0},	{{1,2206,2207,403}, 431},
{{-2775,-2775,-2775,-2775}, 0},	{{-2768,-2768,-2768,-2768}, 0},	{{-2748,-2748,-2748,-2748}, 0},
{{-2743,-2743,-2743,-2743}, 0},	{{1,13,2203,19}, 0},	{{-2833,2163,31,0}, 0},
{{-20,237,2165,0}, 370},	{{1,236,0,0}, 0},	{{1,2170,0,0}, 0},
{{0,2171,2172,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2796,-2796,-2796,-2796}, 0},	{{1,2196,2197,2198}, 0},	{{-2842,379,22,0}, 0},
{{-2831,2197,47,49}, 0},	{{-30,227,0,0}, 370},	{{1,2196,2197,0}, 370},
{{1,-31,0,0}, 424},	{{-31,0,0,0}, 445},	{{1,2196,16,0}, 0},
{{1,2196,0,0}, 424},	{{0,0,0,0}, 445},	{{1,2195,2199,0}, 0},
{{1,376,0,0}, 0},	{{0,0,0,0}, 452},	{{1,2198,2207,0}, 364},
{{1,1,1,1}, 394},	{{1,1,1,368}, 0},	{{1,1,1,409}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 396},
{{1,1,1,0}, 0},	{{0,0,0,0}, 448},	{{-38,2167,2168,364}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,123}, 0},	{{1,126,0,0}, 0},	{{1,-2779,-2779,0}, 0},
{{1,123,0,0}, 0},	{{1,-2806,-2775,-4874}, 0},	{{-2806,2187,94,94}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-4874,-4874,0}, 0},
{{1,-4874,0,0}, 0},	{{1,-4874,-4874,-4874}, 0},	{{-4874,2187,0,0}, 0},
{{1,7,2111,0}, 370},	{{-74,-74,0,0}, 424},	{{1,5,0,0}, 0},
{{0,2154,0,0}, 424},	{{-2582,3,0,0}, 0},	{{0,336,0,0}, 364},
{{0,1,2105,0}, 370},	{{0,0,0,0}, 364},	{{1,-3030,-3030,-3030}, 364},
{{1,1,1,1}, 0},	{{-2865,-2865,2193,-2865}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2192,-347,0}, 0},	{{-2883,-3035,-3035,-3035}, 431},
{{1,1,1,1}, 0},	{{-2882,2195,-2882,-2882}, 0},	{{0,101,0,0}, 0},
{{-9,2194,-3040,-3040}, 364},	{{1,1,1,-3040}, 431},	{{1,1,2201,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{-2855,0,0,0}, 0},
{{-3048,2196,-3048,-3048}, 444},	{{1,1,2196,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2195}, 0},	{{1,1,2195,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2193}, 0},	{{1,1,1,1}, 0},	{{1,1,2192,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 354},
{{1,1,1,1}, 0},	{{1,1,2186,0}, 0},	{{0,0,0,2192}, 0},
{{1,1,1,1}, 0},	{{1,2194,-2902,-2902}, 0},	{{1,2195,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2902}, 0},	{{1,-2902,-2902,-2902}, 0},
{{1,1,1,1}, 0},	{{1,2195,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 432},
{{0,0,0,0}, 367},	{{1,1,1,1}, 0},	{{-2913,2180,-2913,-2913}, 0},
{{1,1,2180,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,21,21}, 0},	{{1,-2907,0,0}, 0},
{{1,30,0,0}, 354},	{{1,2175,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{-2276,0,2164,0}, 0},	{{1,1,2164,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2927,-2927,0,0}, 0},	{{1,1,1,1}, 0},
{{-2932,2159,-2932,-2932}, 0},	{{0,0,0,0}, 360},	{{1,1,1,2158}, 0},
{{1,2158,-2927,-2927}, 0},	{{1,1,1,2158}, 0},	{{-2927,5,0,2158}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{-28,-28,0,0}, 0},	{{1,-2904,-2904,0}, 0},	{{1,-2,0,0}, 0},
{{-2931,-2931,-4999,-4999}, 0},	{{-4987,-4987,0,0}, 429},	{{1,1,1,1}, 0},
{{-2918,2154,-2918,-2918}, 0},	{{1,1,1,1}, 0},	{{-2914,2153,-2914,-2914}, 0},
{{-5009,-5009,-5009,-2982}, 428},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2150}, 0},	{{1,2161,23,24}, 0},	{{1,2031,0,0}, 409},
{{1,2160,2160,0}, 0},	{{1,2161,0,0}, 0},	{{-2849,2161,-2849,-2849}, 0},
{{-202,2164,-2999,-2999}, 0},	{{0,56,-2613,0}, 416},	{{0,211,0,0}, 0},
{{0,54,0,0}, 0},	{{1,0,0,0}, 364},	{{-2840,-2840,-2840,-2840}, 0},
{{0,2159,0,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,132,0,0}, 0},	{{1,5,8,9}, 0},	{{-2864,2016,0,0}, 0},
{{1,2155,2156,2157}, 0},	{{-2866,2157,0,0}, 0},	{{0,43,0,0}, 370},
{{1,2012,0,0}, 370},	{{1,0,0,0}, 0},	{{0,2154,0,0}, 0},
{{0,2012,0,0}, 0},	{{1,2013,221,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 474},	{{-181,2151,2025,0}, 364},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 471},	{{0,-172,0,0}, 370},
{{1,-173,0,0}, 0},	{{1,0,0,0}, 0},	{{0,2119,0,0}, 0},
{{-2759,0,0,0}, 364},	{{1,2121,0,0}, 364},	{{-2760,2122,-2760,-2760}, 0},
{{0,2122,0,0}, 0},	{{-2895,2125,-2895,-2895}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2892,0,0,0}, 0},	{{0,0,0,0}, 416},	{{-2767,2125,2126,0}, 416},
{{-2758,2126,-2638,0}, 0},	{{1,166,170,0}, 0},	{{1,2125,2126,-2793}, 0},
{{1,2126,134,0}, 0},	{{1,173,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2124}, 0},
{{1,34,2124,-307}, 364},	{{1,84,-237,-237}, 394},	{{1,1,-237,130}, 0},
{{1,1,1,171}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-469}, 0},	{{1,-497,-497,-497}, 0},
{{-497,0,-401,0}, 396},	{{-4949,-2433,-2433,2115}, 0},	{{-2728,5,0,0}, 416},
{{-2901,4,-2659,0}, 0},	{{-320,21,-320,-320}, 364},	{{-2720,2,0,0}, 416},
{{0,1,0,0}, 0},	{{-323,-323,-323,-323}, 364},	{{-2900,-324,-324,-324}, 364},
{{-2901,2108,-325,-325}, 364},	{{1,1,1,2116}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-203,0,0}, 0},	{{1,318,318,0}, 0},
{{0,-131,0,0}, 378},	{{1,2114,0,0}, 0},	{{1,1,1,1}, 0},
{{0,2114,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2649,-2649,-2649,-2649}, 0},	{{1,82,104,104}, 0},	{{1,1,-200,-200}, 0},
{{1,1,1,-200}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-530,-502}, 0},	{{-530,-530,-530,-530}, 354},
{{-2914,-2914,0,0}, 367},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 365},	{{-2904,2083,0,0}, 0},
{{0,0,2086,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2088}, 0},
{{1,2088,0,0}, 370},	{{1,2088,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,26,0,0}, 0},	{{-2843,2087,-2723,0}, 0},	{{1,81,85,0}, 0},
{{1,2040,2041,-2878}, 0},	{{1,2085,49,0}, 0},	{{1,88,-84,-84}, 0},
{{1,1,1,1}, 0},	{{-84,2083,-84,-84}, 0},	{{1,32,2084,-552}, 364},
{{1,1,-320,-320}, 394},	{{1,1,-320,47}, 0},	{{1,1,1,88}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-552}, 0},	{{1,-552,-552,-552}, 0},	{{0,0,-484,0}, 396},
{{1,5,0,0}, 370},	{{-26,-386,0,0}, 0},	{{-2984,3,-2742,0}, 0},
{{-565,19,-565,-565}, 364},	{{0,1,0,0}, 370},	{{-567,-567,-567,-567}, 364},
{{1,0,0,0}, 0},	{{0,0,11,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2058}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,163}, 0},
{{-2912,2057,-583,-583}, 364},	{{1,1,23,23}, 0},	{{1,1,-281,-281}, 0},
{{1,1,1,-281}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-583,-583}, 0},	{{-583,-583,-583,-583}, 354},
{{-56,1969,0,0}, 370},	{{-2891,2056,-2771,0}, 0},	{{1,2056,37,0}, 0},
{{1,2057,2058,0}, 0},	{{1,2037,1,0}, 0},	{{-132,-132,-132,-132}, 0},
{{1,8,1840,0}, 364},	{{1,1,1,1}, 394},	{{1,1,1,1}, 0},
{{-366,-366,-366,-366}, 0},	{{-39,-330,0,0}, 370},	{{-3023,-331,-2781,0}, 0},
{{-2915,1966,0,0}, 364},	{{0,234,0,0}, 0},	{{1,1,1,1}, 0},
{{-303,-303,-303,-303}, 0},	{{-2896,-3305,34,-3305}, 364},	{{1,2016,2045,2045}, 0},
{{1,1,2016,2016}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2045}, 0},	{{1,-2844,0,0}, 0},
{{-5171,-5171,-5171,-5171}, 400},	{{-2905,140,25,-3314}, 364},	{{0,2043,0,0}, 0},
{{1,1,1,2049}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-334,0,0}, 0},	{{-130,187,187,0}, 400},	{{1,-627,2009,-627}, 364},
{{1,1,1797,1797}, 394},	{{1,1,1797,0}, 0},	{{-627,-627,-627,2045}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 407},	{{-2927,2044,-36,0}, 0},
{{1,1999,0,0}, 0},	{{-463,-135,0,0}, 0},	{{0,0,2042,0}, 405},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2042}, 0},	{{0,0,0,2042}, 0},	{{-3338,-641,0,0}, 398},
{{1,1,1,-407}, 0},	{{-407,-407,-407,-407}, 397},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2035,21,21}, 0},	{{1,-3215,0,0}, 0},	{{1,202,-2642,-2642}, 393},
{{1,2034,-2654,0}, 0},	{{-3037,-3037,-3037,-3037}, 355},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,12,12,12}, 0},	{{1,-3224,0,0}, 0},	{{-2663,-2661,-2651,-2651}, 393},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-357,0,0}, 0},
{{0,0,0,0}, 393},	{{1,-3233,0,0}, 0},	{{-2676,202,203,-2660}, 393},
{{1,-3235,0,0}, 0},	{{-2674,202,-2662,-2662}, 393},	{{1,1,1,1}, 358},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2661,-2661,-2661,-2661}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2012}, 0},	{{1,0,0,0}, 0},
{{1,0,2,0}, 0},	{{0,0,0,0}, 391},	{{0,0,0,2010}, 0},
{{-5111,1,0,0}, 0},	{{0,0,0,0}, 388},	{{1,-3255,0,0}, 0},
{{1,182,-2682,-2682}, 354},	{{1,-20,-2694,0}, 0},	{{1,1,1,1}, 355},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1998}, 0},	{{1,-3290,-3290,-3290}, 0},
{{-3290,0,0,1997}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1983,0}, 0},	{{1,-2955,0,0}, 0},
{{1,1,-5282,-5282}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1625,1625}, 0},	{{1,1,1625,1625}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-5282,-5282,-5282,1972}, 0},	{{1,-5282,-5282,-5282}, 0},
{{1,-5282,-5282,-5282}, 0},	{{1,0,-2939,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1966}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1963}, 0},
{{1,1884,1814,1814}, 0},	{{1,1839,1721,1721}, 0},	{{1,1,1839,1721}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1884}, 0},	{{1,1,-3453,-3453}, 0},	{{-3453,0,-688,0}, 381},
{{1,-3356,-3356,-3356}, 0},	{{1,1,1,-3356}, 0},	{{1,1,-3356,-3356}, 0},
{{1,1952,1952,0}, 0},	{{1,1,1,1}, 0},	{{1,1,-3356,-3356}, 0},
{{1,-3356,-3356,-3356}, 0},	{{1,1,1,-3356}, 0},	{{1,1952,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 380},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 382},
{{1,1800,1800,1800}, 0},	{{1,1,1,1}, 0},	{{1,1800,1800,1800}, 0},
{{1,1,1,1}, 0},	{{1,1800,1800,1800}, 0},	{{1,0,0,0}, 0},
{{1,2,2,0}, 0},	{{-2980,-2980,-2980,-2980}, 378},	{{0,0,0,0}, 378},
{{-2981,-2981,-2981,-2981}, 360},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 376},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1884}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,1882,0,0}, 0},
{{0,0,0,1882}, 0},	{{0,0,0,1882}, 0},	{{0,0,0,1882}, 0},
{{-2985,-2985,0,0}, 367},	{{1,-3416,0,0}, 0},	{{-200,1884,-2843,-2843}, 354},
{{1,1884,-2855,0}, 0},	{{-2794,-2794,-2794,-2794}, 355},	{{1,1,1,1}, 358},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1875}, 0},	{{1,1,-2844,-2844}, 0},
{{1,1,-2844,-2844}, 0},	{{1,0,24,0}, 0},	{{0,0,0,0}, 361},
{{1,-5313,0,0}, 0},	{{1,-5313,0,0}, 0},	{{-5313,0,-2773,0}, 357},
{{-2877,3,-2873,0}, 0},	{{-2878,-2874,-2874,0}, 0},	{{-2875,1,-2875,0}, 0},
{{-3236,-3236,-3236,-3236}, 355},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2752,-2752,-2752,-2752}, 0},	{{1,-2862,-2862,-2862}, 0},
{{1,-2862,-2862,-2862}, 0},	{{-2862,0,-2746,0}, 357},	{{0,0,0,1856}, 0},
{{1,-5331,0,0}, 0},	{{1,-5331,0,0}, 0},	{{1,-10,-2791,0}, 0},
{{-10,-10,-10,-10}, 348},	{{0,0,0,0}, 352},	{{0,0,0,1851}, 0},
{{0,0,0,1851}, 0},	{{1,1,1,1}, 0},	{{-5301,-5301,-5301,1851}, 0},
{{1,1,-5261,-5261}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-5261}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-5261,-5261,-5261,1846}, 0},
{{0,0,0,1846}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1842}, 0},	{{0,0,0,1842}, 0},	{{1,1,1842,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1834,0,0}, 0},
{{0,0,1842,0}, 0},	{{-5275,1842,-5275,-5275}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,1828,0,0}, 0},	{{-26,-26,-26,-26}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1827}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1822}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1813}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-2659,1811,0}, 0},	{{1,-2648,-2648,-5253}, 0},
{{1,1,1,-2644}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-6206,-2644,-2750,-6206}, 0},	{{1,-6207,-2751,-6207}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-6207,-6207,-6207,59}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-66}, 0},	{{1,1,1,1}, 0},	{{-66,0,92,0}, 0},
{{1,1800,1800,-69}, 0},	{{1,1,1,1}, 0},	{{1,-2675,-2675,-2675}, 0},
{{1,-2675,-2675,-2675}, 0},	{{1,1,1,1}, 0},	{{-69,1800,-69,-69}, 0},
{{1,1794,1794,-75}, 0},	{{1,1,1,1794}, 0},	{{1,1789,1789,1789}, 0},
{{1,1789,1789,1789}, 0},	{{1,1,1,1}, 0},	{{-75,1795,-75,-75}, 0},
{{1,1,1,1}, 0},	{{1,-2675,-2675,-2675}, 0},	{{1,-2675,-2675,-2675}, 0},
{{1,1,1,1}, 0},	{{-2792,1791,-2792,-2792}, 0},	{{1,1,1,1}, 0},
{{1,-5285,-5285,-5285}, 0},	{{1,-5285,-5285,-5285}, 0},	{{1,1,1,1}, 0},
{{-2797,-2797,-2797,-2797}, 0},	{{1,-2680,-2680,-2680}, 0},	{{1,-2680,-2680,-2680}, 0},
{{1,1,1,1}, 0},	{{-2801,1,1783,-2801}, 0},	{{-2680,1783,-2680,-2680}, 254},
{{-2787,1785,-2787,-2787}, 0},	{{1,1743,1743,1743}, 0},	{{1,-6243,-6243,-6243}, 0},
{{1,1,1,1743}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-6243,-6243}, 0},
{{-6243,-6243,-6243,1785}, 0},	{{0,0,0,1785}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5306}, 0},	{{1,1,1,1}, 0},	{{-5306,-5306,-5306,1782}, 0},
{{1,5,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,7}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1778}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1778}, 0},	{{0,1778,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-5250,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-2800,-2800,-2800,0}, 0},
{{-2790,0,-2781,0}, 0},	{{1,-2781,-2781,-2781}, 0},	{{1,-2741,-2741,-2741}, 0},
{{1,-2741,-2741,0}, 0},	{{1,1,1,1}, 0},	{{-2781,-2781,1767,-2781}, 0},
{{-6282,-6282,-6282,-6282}, 254},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,1764,0}, 0},	{{0,0,0,0}, 160},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,1757,0,0}, 0},
{{1,-6295,-2770,-6295}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-6295,-6295,0}, 0},	{{1,-6295,-6295,-6295}, 0},
{{-2781,-2781,-2781,-2781}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6295,-6295,-6295,1758}, 0},
{{-6295,-6295,-6295,1758}, 0},	{{0,1758,0,0}, 0},	{{1,1,1,1}, 254},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2}, 0},
{{0,0,0,0}, 254},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 255},
{{-6324,-6324,-6324,1742}, 0},	{{0,0,0,1751}, 0},	{{-6315,-6315,-6315,1751}, 0},
{{-6315,-6315,-6315,1751}, 0},	{{0,0,0,1764}, 0},	{{1,0,0,0}, 0},
{{1,10,10,10}, 270},	{{-2726,11,1762,11}, 0},	{{1,0,0,0}, 0},
{{1,7,7,7}, 270},	{{-2675,0,1764,0}, 0},	{{1,-5457,-5457,-5457}, 0},
{{1,5,5,5}, 270},	{{-2678,0,1764,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 270},	{{-2681,0,0,0}, 0},	{{-2682,0,-2966,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,1760,0,0}, 0},
{{1,1749,1749,1754}, 0},	{{1,1749,1749,1749}, 0},	{{1,1758,1749,1749}, 0},
{{1,1,1,1}, 0},	{{-2969,-2969,-2969,1757}, 0},	{{-2741,-2741,-2741,1757}, 0},
{{0,0,0,1757}, 0},	{{1,1757,-5322,1759}, 0},	{{-5322,1759,0,0}, 0},
{{1,-5324,-5324,10}, 0},	{{1,1767,0,0}, 0},	{{0,1769,0,0}, 270},
{{-5327,-5327,-5327,1754}, 0},	{{1,2,19,0}, 0},	{{-2737,1774,0,0}, 270},
{{0,0,0,0}, 328},	{{-5331,-5331,-5331,1777}, 0},	{{1,0,0,0}, 0},
{{0,1776,0,0}, 270},	{{1,0,0,0}, 0},	{{1,1778,0,0}, 270},
{{0,0,0,1778}, 0},	{{1,1778,0,0}, 0},	{{0,1775,0,0}, 270},
{{1,1,1,0}, 0},	{{0,1782,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,1778}, 0},	{{-2755,0,0,0}, 0},
{{1,1777,1,1782}, 313},	{{1,1,1,1762}, 0},	{{1,1,1,1}, 0},
{{1,1780,1756,1756}, 0},	{{1,1,1,1781}, 0},	{{0,0,0,1781}, 0},
{{1,1,1,0}, 0},	{{0,0,0,1780}, 0},	{{-5355,2,0,0}, 0},
{{-2716,1779,41,0}, 0},	{{0,0,0,0}, 275},	{{-5358,2,0,0}, 0},
{{-2703,-2,38,0}, 0},	{{1,0,1,0}, 275},	{{0,0,1776,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2746,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 301},
{{0,1787,0,0}, 0},	{{-5331,0,68,1787}, 0},	{{1,1789,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,79,0,0}, 0},	{{-4,-4,-4,-4}, 0},	{{-2742,-22,-2915,0}, 0},
{{1,1783,-2916,0}, 0},	{{-2754,-2754,8,-2754}, 270},	{{-2745,3,-2918,0}, 0},
{{1,1781,-2919,0}, 0},	{{-2757,-2757,-2757,-2757}, 270},	{{1,1,1,0}, 275},
{{0,1780,0,0}, 0},	{{-3,-30,-2923,0}, 0},	{{-2760,49,-2697,0}, 0},
{{-2761,0,51,56}, 0},	{{-2924,47,0,0}, 0},	{{1,-34,0,0}, 0},
{{-2765,-2765,2,-2765}, 270},	{{-9,-36,0,0}, 0},	{{-2766,0,46,0}, 0},
{{1,-2752,1773,-2718}, 275},	{{-2752,-2752,-2752,1773}, 0},	{{-2714,-2714,-2714,-2714}, 0},
{{1,1,38,38}, 276},	{{-2690,-2690,-2690,-2690}, 277},	{{1,-2782,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1759}, 0},	{{0,1759,0,0}, 0},
{{1,3,-2755,-2736}, 275},	{{1,3,5,-2736}, 0},	{{-2755,1763,0,0}, 0},
{{-2738,1,-2738,-2738}, 0},	{{1,1763,0,0}, 0},	{{-2738,17,-2738,1763}, 0},
{{1,1772,1772,0}, 0},	{{1,1773,1,1772}, 0},	{{0,1773,0,0}, 276},
{{1,14,14,14}, 276},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2714,-2714,-2714}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2714,-2714,-2714}, 0},
{{-2714,0,0,0}, 292},	{{-2770,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-5423,-5423,-5423,1761}, 0},	{{1,1,1,1}, 276},	{{-2727,-2727,-2727,-2727}, 0},
{{0,0,0,0}, 272},	{{-2754,-1,0,0}, 0},	{{0,0,0,1759}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1755}, 0},	{{0,1755,0,0}, 0},
{{0,0,0,1757}, 0},	{{1,1,1,1}, 0},	{{0,1756,0,0}, 0},
{{0,0,0,1756}, 0},	{{-2750,-75,-75,-75}, 272},	{{1,-76,-76,-76}, 0},
{{1,1763,1,-76}, 0},	{{-76,-76,-76,-76}, 276},	{{1,1,1762,1762}, 276},
{{-2746,1762,-2746,-2746}, 277},	{{0,0,0,0}, 281},	{{1,1,1,1}, 276},
{{-2749,1,-2749,-2749}, 0},	{{-2749,-2749,-2749,-2749}, 279},	{{0,0,0,1758}, 0},
{{1,1759,-4538,0}, 62},	{{1,0,0,0}, 0},	{{-2664,-2664,-2664,0}, 0},
{{-2734,0,-2313,0}, 0},	{{1,0,376,0}, 0},	{{1,11,1756,0}, 0},
{{0,0,1756,66}, 116},	{{1,16,0,0}, 0},	{{-4725,-4725,-4725,-4725}, 0},
{{1,1,26,26}, 0},	{{1,1,26,26}, 0},	{{1,1,26,26}, 0},
{{1,1,-2645,15}, 0},	{{-5379,-5266,0,0}, 0},	{{1,0,0,0}, 0},
{{-4561,-4561,-4561,-4561}, 0},	{{0,0,1746,0}, 0},	{{0,0,1745,0}, 197},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1745}, 0},	{{0,0,0,1745}, 0},	{{-2602,-2602,-2602,-2602}, 0},
{{0,0,1744,0}, 58},	{{-6444,-5278,0,0}, 0},	{{-5295,-5279,0,0}, 0},
{{-5282,-5280,0,1742}, 0},	{{1,0,0,0}, 0},	{{-5279,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2741,1738,11,-2709}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,6,13}, 0},	{{-2745,-5291,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2718,-5296,0,0}, 0},	{{-2719,-5297,0,-2675}, 0},
{{1,55,-4583,0}, 62},	{{0,1726,0,0}, 0},	{{-2669,0,-1884,0}, 0},
{{-5433,-5301,0,0}, 0},	{{-2735,-5302,0,0}, 0},	{{-2725,-5303,0,1719}, 0},
{{0,1708,-4589,0}, 62},	{{1,-5665,-5665,-5665}, 0},	{{-1873,-1873,1720,-1873}, 0},
{{1,-2715,-2715,0}, 0},	{{1,-2715,-2715,-2715}, 0},	{{1,-2715,0,0}, 0},
{{-3170,1723,-3170,-3170}, 0},	{{1,1,1,1}, 0},	{{0,1723,0,0}, 0},
{{-5673,-5673,74,-5673}, 0},	{{1,-5674,89,-5674}, 0},	{{1,1,1722,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1722}, 0},	{{0,1722,1,0}, 197},	{{1,1695,1695,1695}, 0},
{{1,1695,1695,1695}, 0},	{{1,1695,1695,1695}, 0},	{{-2653,-2653,-2653,-2653}, 0},
{{0,0,0,0}, 199},	{{1,-4789,-4789,-4789}, 0},	{{1,-4789,-4789,-4789}, 0},
{{1,-4789,-4789,-4789}, 0},	{{1,1,1,86}, 0},	{{1,86,1716,1716}, 0},
{{1,1716,-3189,-3189}, 0},	{{1,1,1,-3189}, 0},	{{-3189,-3189,-3189,-3189}, 52},
{{-5447,-5334,0,1716}, 0},	{{-2578,-2572,-3194,-3194}, 0},	{{1,-5442,-2783,-2783}, 0},
{{1,-5442,-5442,-2713}, 0},	{{1,-5442,-5442,-5442}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1712}, 0},	{{1,145,145,-419}, 0},	{{1,-419,-419,-419}, 4},
{{1,-419,-419,-419}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2560,-2560,-2560,-2560}, 0},	{{-4253,-5428,-5428,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{-2520,-2520,-2520,-2520}, 0},	{{1,0,0,0}, 0},	{{-1883,-1883,-1883,-1883}, 0},
{{1,616,0,0}, 0},	{{1,1,1,1}, 0},	{{-1874,-1874,-1874,0}, 0},
{{0,1695,0,0}, 202},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1696}, 0},	{{1,-4655,-4655,-4655}, 0},
{{1,-4655,-4655,-4655}, 0},	{{1,-4655,-4655,-4655}, 0},	{{1,1,1693,1697}, 0},
{{1,1,1,1699}, 0},	{{1,1699,17,17}, 0},	{{1,1699,17,17}, 79},
{{-2681,-2681,-2681,-2681}, 80},	{{0,0,-3235,0}, 89},	{{1,1,1,1}, 0},
{{-3231,1697,-3231,-3231}, 0},	{{1,-3231,-3231,-3231}, 0},	{{-3231,1697,-3231,-3231}, 0},
{{1,1660,1660,0}, 0},	{{0,1,1696,0}, 0},	{{0,0,0,0}, 191},
{{1,-4581,-4581,-4581}, 0},	{{1,-4581,-4581,-4581}, 0},	{{1,-4581,-4581,-4581}, 0},
{{1,1,-3242,-3242}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2697,-2697,-2697,-2697}, 0},	{{0,0,-3251,0}, 58},
{{1,-4582,-4582,-4582}, 0},	{{1,-4582,-4582,-4582}, 0},	{{1,-4582,-4582,-4582}, 0},
{{1,1,1,-3251}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-3251}, 0},
{{1,-3251,-3251,-3251}, 0},	{{-3251,-3251,-3251,-3251}, 93},	{{1,0,0,0}, 0},
{{0,1684,0,0}, 0},	{{1,-4566,-4566,-4566}, 0},	{{1,-4566,-4566,-4566}, 0},
{{1,-4566,-4566,-4566}, 0},	{{1,1689,1690,-3261}, 0},	{{-18,-18,-18,1690}, 108},
{{0,0,-3267,0}, 113},	{{0,0,0,1689}, 0},	{{-3264,-3264,-3264,1}, 194},
{{-3264,-3264,-3264,1688}, 0},	{{1,-2732,-2732,-2732}, 0},	{{1,-2732,-2732,-2732}, 0},
{{1,-2732,-2732,-2732}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-3270,-3270,-3270}, 0},	{{-80,1682,-80,-3270}, 0},	{{0,0,0,0}, 189},
{{1,1,1631,1631}, 0},	{{-84,-2646,-3274,-3274}, 0},	{{-2730,-32,-32,-32}, 0},
{{-32,1678,-32,-32}, 0},	{{1,-4541,-4541,-4541}, 0},	{{1,-4541,-4541,-4541}, 0},
{{1,-4541,-4541,-4541}, 0},	{{1,-3282,-3282,-3282}, 0},	{{-2725,-3282,-3282,-3282}, 0},
{{-3287,0,1675,0}, 0},	{{-3284,-3284,-3284,1}, 0},	{{1,-3284,-3284,-3284}, 0},
{{1,1,-3284,-3284}, 0},	{{1,1,1,1}, 0},	{{1,1,-3284,-3284}, 0},
{{1,1,1,1}, 0},	{{-4540,1688,-4540,-4540}, 0},	{{1,-6300,-6300,-6300}, 0},
{{1,-6300,-6300,-6300}, 0},	{{1,-6300,-6300,-6300}, 0},	{{1,1,1,1}, 0},
{{-515,-515,-515,1689}, 0},	{{1,-3295,-3295,-3295}, 0},	{{1,-3295,-3295,-3295}, 0},
{{-3295,1693,-3295,-3295}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2720,1693,-2720,-2720}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1699}, 0},	{{1,-5461,-2878,-2878}, 0},	{{1,-5461,-5461,-2661}, 0},
{{1,-5461,-5461,-5461}, 0},	{{1,1,1,1}, 0},	{{-2676,-2676,-2676,-2676}, 0},
{{1,-3315,-3315,-3315}, 0},	{{1,-3315,-3315,-3315}, 0},	{{-3315,1692,-3315,-3315}, 0},
{{1,-6246,-5048,-5048}, 0},	{{1,-6246,-6246,-4371}, 0},	{{1,-6246,-6246,-6246}, 0},
{{1,1,1,1}, 0},	{{-123,-123,-123,-123}, 0},	{{1,-3322,-3322,-3322}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2666,1683,-2666,-2666}, 0},	{{1,-5462,-5462,-5462}, 0},	{{1,-5462,-5462,-5462}, 0},
{{1,-5462,-5462,-5462}, 0},	{{1,1,1,1}, 0},	{{1,-553,-553,-553}, 0},
{{-553,-553,-553,1686}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2661,1683,-2661,-2661}, 0},	{{1,-5566,-5566,-5566}, 0},
{{1,-5566,-5566,-5566}, 0},	{{1,-5566,-5566,-5566}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-563}, 0},	{{-563,-563,-563,-563}, 4},
{{-2706,1,1,1682}, 0},	{{1,-565,-565,-565}, 4},	{{1,-565,-565,-565}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-565}, 0},	{{-565,-565,-565,-565}, 181},
{{-4,-570,-570,-570}, 0},	{{1,-6638,-6638,-6638}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-6638}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1265,1265,1265}, 0},
{{1,1265,1265,1265}, 0},	{{1,1,1,1}, 8},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 186},
{{0,0,0,1661}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1658}, 0},	{{0,0,0,1658}, 0},	{{0,1671,0,0}, 0},
{{-6668,-6668,-6668,1671}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1679}, 0},
{{-2604,96,-2119,0}, 0},	{{1,0,145,0}, 0},	{{1,1,1,1}, 214},
{{-2589,-2589,-2589,-2589}, 0},	{{1,0,-2557,0}, 0},	{{-2886,-2886,-2886,-2886}, 214},
{{1,0,-2559,0}, 0},	{{1,1,1,1}, 214},	{{-2571,-2571,-2571,-2571}, 0},
{{0,0,1670,0}, 0},	{{1,1,1,1}, 0},	{{1,-5431,-5431,-5431}, 0},
{{1,-5431,0,0}, 0},	{{0,0,0,1670}, 0},	{{1,-5497,-5497,-5497}, 0},
{{1,-5497,-5497,-5497}, 0},	{{-5497,-2668,-5456,1668}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 207},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-5396}, 0},
{{1,1,1,1}, 0},	{{1,-5396,-5396,-5396}, 0},	{{1,0,0,0}, 0},
{{-5396,0,0,1668}, 0},	{{1,68,-2620,0}, 0},	{{1,-2726,-2726,-2726}, 0},
{{1,1,-2726,-2726}, 0},	{{1,-5462,-5462,-5462}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5462}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2603,0,0}, 0},	{{1,0,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 248},	{{1,0,-2605,0}, 0},	{{-2684,-2684,1643,49}, 214},
{{1,1,1,1}, 0},	{{1,1,1,-2678}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2678}, 0},	{{1,1,1,1}, 0},	{{-2678,-2678,-2678,1640}, 0},
{{1,35,0,0}, 0},	{{1,0,0,0}, 207},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1631}, 0},
{{1,1,1,-2760}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2760}, 0},
{{1,1,2,2}, 0},	{{-2735,-2735,3,1627}, 0},	{{1,1,1627,1628}, 0},
{{0,1628,0,0}, 0},	{{-5489,1629,-5489,-5489}, 0},	{{1,1628,-5490,-5490}, 0},
{{1,-5490,-5490,-5490}, 0},	{{-6501,1627,-6501,-6501}, 215},	{{1,1634,-5492,-5492}, 0},
{{-6503,-6503,-6503,-6503}, 243},	{{1,0,0,0}, 0},	{{1,0,0,0}, 207},
{{0,0,0,0}, 242},	{{1,0,-2641,0}, 0},	{{1,1,1,1}, 214},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2191,-2191,-2191,-2191}, 0},	{{0,1623,0,0}, 0},
{{1,0,-2649,0}, 0},	{{0,0,0,0}, 214},	{{1,0,77,0}, 0},
{{-318,-318,-318,-318}, 0},	{{0,0,0,1619}, 0},	{{0,0,0,1619}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2}, 0},	{{-2732,-3005,0,1615}, 0},	{{-3006,-3006,0,1614}, 0},
{{1,1616,1616,0}, 0},	{{1,0,0,0}, 0},	{{0,0,1616,0}, 231},
{{-2728,1616,0,0}, 0},	{{1,1,0,0}, 213},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 229},	{{-2862,-2862,-2862,-2862}, 226},	{{1,0,-2696,0}, 0},
{{0,1584,0,0}, 214},	{{-3044,-3044,0,0}, 0},	{{1,1,1,1}, 218},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 221},	{{1,1,-2740,-2740}, 0},
{{1,-2740,-2740,-2740}, 0},	{{-2740,-2740,1,4}, 212},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,327,0,0}, 79},	{{1,1,1,1}, 0},
{{1,1567,1569,0}, 0},	{{1,0,0,0}, 79},	{{1,1,1,1}, 0},
{{0,0,0,1569}, 0},	{{1,1,-4902,-4902}, 0},	{{1,-4902,-4902,-4902}, 0},
{{-4902,-4902,0,0}, 212},	{{1,1,-4897,-4897}, 0},	{{1,-4897,-4897,-4897}, 0},
{{-4897,-4897,-4897,0}, 212},	{{1,1,-2734,-2734}, 0},	{{1,-2734,-2734,-2734}, 0},
{{-2734,-4908,0,0}, 212},	{{0,0,0,0}, 113},	{{0,0,0,1564}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 215},
{{0,1563,0,0}, 0},	{{-3,1562,0,0}, 0},	{{1,-2903,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1554}, 0},	{{1,1,-4847,-4847}, 0},
{{1,-4847,-4847,-4847}, 0},	{{-4847,0,0,0}, 212},	{{0,0,0,1551}, 0},
{{0,0,0,1551}, 0},	{{1,-2642,1555,-2642}, 0},	{{1,-416,-416,-416}, 0},
{{1,-416,-416,-416}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2642,-2642,-2642,1551}, 0},	{{1,0,-2319,34}, 106},	{{-2659,203,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2242}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1546}, 0},	{{1,-2636,-4832,-5051}, 0},	{{1,1,1,1}, 144},
{{1,1,1,-5051}, 0},	{{1,1,1,1}, 0},	{{1,1542,-5051,-1986}, 0},
{{1,-4934,0,0}, 0},	{{0,1542,0,0}, 0},	{{1,1,1,-2590}, 0},
{{1,1,1,1}, 0},	{{-4672,1,-4668,-4668}, 0},	{{1,-4665,-2955,0}, 0},
{{0,1538,-1895,0}, 0},	{{1,216,0,0}, 0},	{{-399,221,-399,-399}, 0},
{{1,1,1536,-2668}, 0},	{{-2668,-2268,0,0}, 0},	{{-2681,-2269,-2341,1535}, 106},
{{-2682,-2270,0,1535}, 0},	{{0,0,0,0}, 134},	{{0,0,0,1534}, 0},
{{-2674,-2674,-2674,-2674}, 0},	{{0,0,0,1533}, 0},	{{1,1533,202,-2518}, 0},
{{-2169,-2169,-2169,-2169}, 144},	{{1,1,-2071,-5075}, 0},	{{-5075,-5075,-5075,-5075}, 144},
{{-2679,0,0,0}, 113},	{{0,0,0,1529}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 144},	{{0,0,0,1527}, 0},	{{0,0,0,1527}, 0},
{{0,0,0,1527}, 0},	{{-6511,-6511,-6511,1530}, 0},	{{-6512,-6512,-6512,1530}, 0},
{{-6513,-6513,-6513,1530}, 0},	{{-6513,-6513,-6513,1530}, 0},	{{-3523,-3523,101,-3523}, 0},
{{1,-2517,101,-2517}, 0},	{{1,-466,-466,-466}, 0},	{{1,-466,-466,-466}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2517,-2517,-2517,1529}, 0},
{{1,-2512,-2507,0}, 106},	{{-2516,4,-2512,0}, 0},	{{1,0,-2513,0}, 0},
{{1,1,1,1}, 0},	{{-2513,-2513,1525,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1522}, 0},
{{-5448,-5448,1522,-5448}, 0},	{{1,-4886,1,-5105}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5105}, 0},	{{1,1,1,1}, 0},	{{1,-5105,-5105,-2040}, 0},
{{1,-4988,0,0}, 0},	{{0,1516,0,0}, 0},	{{-6861,-6861,1516,-6861}, 0},
{{1,-5101,-6507,0}, 0},	{{1,-6537,-6537,-6537}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-2444,1512,-2444}, 0},	{{1,1,1,-6552}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6552,-6552,-6552,1512}, 0},
{{1,-5113,-6519,0}, 0},	{{1,-2577,-2577,-2577}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-6564,-6564,-6564}, 0},	{{1,-6564,-6564,-6564}, 0},
{{1,-2602,-2429,-2602}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2602}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6564,-6564,-6564,1501}, 0},
{{-2447,-6571,-6571,-6571}, 0},	{{1,0,1500,0}, 0},	{{1,1500,1501,0}, 0},
{{0,1138,0,0}, 0},	{{1,1,1500,-2569}, 0},	{{-2569,-2344,0,0}, 0},
{{-2604,-2345,-2417,1459}, 106},	{{-2605,-2346,0,1459}, 0},	{{1,6,6,0}, 0},
{{1,1,1,1}, 0},	{{1,1495,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1494}, 0},	{{1,1,1,0}, 101},	{{1,1,1,1}, 0},
{{0,1492,0,0}, 0},	{{-2,-2,-2,0}, 134},	{{1,1,1,1}, 0},
{{1,1489,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1488}, 0},
{{-2662,-2662,-2662,-2662}, 176},	{{0,0,0,1487}, 0},	{{1,-4764,0,0}, 0},
{{0,159,0,0}, 0},	{{-1,-5040,0,0}, 0},	{{-5403,-5403,1,-5403}, 0},
{{1,1,1,1}, 0},	{{-5403,-2785,-6590,1482}, 0},	{{1,-5154,-6560,0}, 0},
{{1,-6590,-6590,-6590}, 0},	{{1,0,0,0}, 0},	{{1,-6590,-6590,-6590}, 0},
{{1,1,1,1}, 0},	{{1,-6605,-6605,-6605}, 0},	{{1,-6605,-6605,-6605}, 0},
{{1,1,1,1}, 0},	{{1,-6605,-6605,-6605}, 0},	{{-6605,-6605,1484,-6605}, 0},
{{1,1,1,1}, 0},	{{-5415,-2797,-6602,-2495}, 0},	{{-6612,1,-6612,-6612}, 0},
{{1,-6612,-6612,-6612}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-6612}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6612,-6612,-6612,1477}, 0},
{{-6612,-6612,-6612,1477}, 0},	{{-2614,-2614,-2614,-2614}, 0},	{{0,0,0,1476}, 0},
{{-3622,0,0,0}, 89},	{{-3623,0,0,0}, 58},	{{-2617,0,0,0}, 113},
{{-3619,-3619,-3619,1473}, 0},	{{0,0,0,1473}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1470,0,0}, 0},
{{0,0,0,1474}, 0},	{{0,0,0,1474}, 0},	{{1,-3627,-3627,-3627}, 0},
{{1,-3627,-3627,-3627}, 0},	{{-3627,-3627,-849,0}, 56},	{{-2592,-2592,1,-5006}, 0},
{{1,1,-850,-850}, 0},	{{1,1,1,1}, 0},	{{-5006,-5006,1477,-5006}, 0},
{{-5006,-5006,-5006,-5006}, 160},	{{-6767,-6767,-6767,-6767}, 161},	{{1,-5196,-6602,0}, 0},
{{1,1,-6632,-6632}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-6647,-6647,-6647,178}, 0},	{{1,1,1,1}, 0},	{{-5428,-5415,-6639,-2532}, 0},
{{1,-5203,-6609,0}, 0},	{{1,-2532,-2532,-2532}, 0},	{{1,-2100,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-2487,-2487,-2487}, 0},	{{1,-2487,-2487,-2487}, 0},
{{-2578,-2578,-2578,-2578}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6654,-6654,-6654,1457}, 0},
{{-6654,-6654,-6654,1457}, 0},	{{-6655,-6655,-6655,1457}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-6662}, 0},
{{1,1,1,1}, 0},	{{-6662,-6662,-6662,1452}, 0},	{{-6662,-6662,-6662,1452}, 0},
{{-6663,-6663,-6663,1452}, 0},	{{-6664,-6664,-6664,1452}, 0},	{{-6665,-6665,-6665,1452}, 0},
{{-6665,-6665,-6665,1452}, 0},	{{-2500,4,-2357,0}, 0},	{{-2463,3,-2358,0}, 0},
{{0,0,-2516,1360}, 106},	{{0,0,0,1360}, 0},	{{0,0,0,0}, 51},
{{-6672,-6672,-6672,1460}, 0},	{{-2500,-2500,-2500,1460}, 0},	{{-2500,0,1460,0}, 0},
{{0,0,0,-2219}, 118},	{{1,1,1,1}, 0},	{{1,1,1,-2444}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1458}, 0},	{{0,0,0,1458}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-5092,-5092,-5092,2}, 0},	{{-5091,-5091,-5093,1}, 0},
{{1,0,0,0}, 0},	{{1,1,-5410,0}, 0},	{{0,0,0,1450}, 52},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1444}, 0},	{{-6697,-6697,-6697,1447}, 0},
{{-2486,-2486,1,0}, 0},	{{0,0,0,0}, 128},	{{1,1,1,-2719}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2719}, 0},	{{1,1,1,1}, 0},
{{-2719,-2719,-2719,1445}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,5}, 0},
{{0,0,0,1440}, 0},	{{-2494,1440,-2494,0}, 0},	{{1,1,1,1}, 0},
{{-2494,0,1442,0}, 0},	{{0,0,0,0}, 138},	{{-5143,-2491,0,0}, 113},
{{0,0,-2256,0}, 135},	{{0,0,-2257,0}, 137},	{{0,0,0,1439}, 0},
{{0,0,0,1439}, 0},	{{0,0,0,1439}, 0},	{{-3172,-3172,-3172,-3172}, 127},
{{0,0,0,1447}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6732,-6732,-6732,1440}, 0},
{{0,0,0,1455}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1455}, 0},
{{1,1,1,1}, 119},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2449,-2449,0,0}, 0},	{{0,0,0,0}, 119},	{{-2170,-2170,-2170,-2170}, 119},
{{0,0,0,1443}, 0},	{{1,1,1,1}, 0},	{{-6102,-6102,-6102,1443}, 0},
{{-5683,1443,-5683,-5683}, 0},	{{0,0,0,1444}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 86},	{{-2435,1,1379,0}, 0},
{{-2435,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1441,0,0}, 0},
{{-2435,1,1441,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 80},
{{0,0,0,1439}, 0},	{{1,-5902,1444,-5902}, 0},	{{1,1,1,1}, 0},
{{-6913,1443,0,0}, 0},	{{0,0,0,0}, 81},	{{-2270,1,0,0}, 0},
{{0,0,1448,0}, 70},	{{1,-2465,0,0}, 0},	{{1,1,-5697,-5697}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-6951,-6951,-6951,1444}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 77},	{{1,1,1,1}, 0},	{{0,0,0,1436}, 0},
{{1,0,1,0}, 0},	{{0,0,0,1435}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1434}, 0},	{{0,0,0,1434}, 0},	{{0,1434,0,0}, 0},
{{-5934,-5934,-5934,1437}, 0},	{{0,0,0,1446}, 0},	{{0,1455,0,0}, 0},
{{0,0,0,1455}, 0},	{{1,0,1455,0}, 0},	{{0,0,0,1455}, 0},
{{0,0,0,1455}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1462,0}, 0},	{{1,1468,1468,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1468}, 0},	{{0,0,0,1468}, 0},
{{0,0,0,1470}, 0},	{{0,0,0,1483}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1482}, 0},	{{1,1,-6824,-6824}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-6824,-6824,-6824,1476}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1475}, 0},	{{0,0,0,1475}, 0},	{{-6827,-6827,-6827,1475}, 0},
{{-6828,-6828,-6828,1475}, 0},	{{0,0,0,1475}, 0},	{{-6830,-6830,-6830,1475}, 0},
{{-6831,-6831,-6831,1475}, 0},	{{-6831,-6831,-6831,1475}, 0},	{{0,0,0,1476}, 0},
{{0,0,0,1476}, 0},	{{-6834,-6834,-6834,1476}, 0},	{{0,0,0,1477}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1476}, 0},	{{0,0,0,1476}, 0},
{{-6192,-6192,-6192,1476}, 0},	{{-6840,-6840,-6840,1476}, 0},	{{1,-6845,-6845,-6845}, 0},
{{-6845,-6845,-6845,1488}, 0},	{{-6843,-6843,-6843,1488}, 0},	{{-6844,-6844,-6844,1492}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1495}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1492,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1492}, 0},	{{-6853,-6853,-6853,1492}, 0},
{{-6854,-6854,-6854,1505}, 0},	{{1,-5456,0,0}, 0},	{{1,1290,1290,1290}, 5},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1514,1491,1523}, 0},
{{1,1491,1538,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1538}, 0},
{{0,-4938,0,0}, 20},	{{0,0,0,1537}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1061}, 0},
{{1,-7138,-7138,0}, 0},	{{1,-7138,-7138,-7138}, 0},	{{1,1061,1061,1061}, 8},
{{1,1,1,1}, 0},	{{1,1061,1061,1061}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-7435,-7435,-7435,1534}, 0},
{{0,0,0,1534}, 0},	{{0,0,0,1551}, 0},	{{-2263,-2263,0,0}, 0},
{{1,-2264,0,0}, 0},	{{1,0,12,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2200}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2200}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1547}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1543,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1546,1547,0}, 0},
{{1,1,1,1549}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 521},
{{1,0,0,0}, 0},	{{0,0,1546,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{0,1545,0,0}, 0},	{{1,-2242,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-2274,-2274,-2274,-2223}, 0},
{{-2179,0,0,0}, 0},	{{-2284,0,1543,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 518},	{{0,0,1544,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,1542,0,0}, 0},
{{1,-4957,-2277,-4957}, 0},	{{1,1,1,1}, 0},	{{0,1540,-2271,0}, 0},
{{1,-4960,-4960,-4960}, 0},	{{1,1,1,1}, 0},	{{-2257,-2257,1543,0}, 0},
{{1,1,1,1}, 0},	{{-2289,1543,-37,-2238}, 0},	{{0,0,0,1543}, 0},
{{1,1,1,1}, 0},	{{-4892,12,0,0}, 0},	{{1,1,1,1}, 0},
{{-2285,1540,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 513},	{{0,0,0,0}, 428},	{{0,0,0,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,1527,0,0}, 0},
{{0,0,1531,0}, 0},	{{0,1531,0,0}, 0},	{{0,0,0,1541}, 0},
{{0,1541,0,0}, 0},	{{-4942,-2260,-2217,0}, 0},	{{1,-2261,1550,0}, 0},
{{-4968,-4968,1552,-4968}, 0},	{{-4945,8,29,0}, 0},	{{-4946,7,-2221,0}, 0},
{{1,-2252,19,-4982}, 0},	{{1,-2252,-2252,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-4982}, 0},	{{1,1,1,1}, 0},	{{-4982,-4982,-4982,1548}, 0},
{{1,1,1,1}, 0},	{{1,1,6,6}, 0},	{{1,-2242,0,0}, 0},
{{-2242,-2242,-2242,0}, 507},	{{0,0,-4909,1555}, 0},	{{-2280,-2280,-2280,-2280}, 481},
{{0,0,0,1556}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 507},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{-2172,-2172,-2172,0}, 0},	{{-2270,-2270,-2270,0}, 481},	{{1,0,-2154,0}, 0},
{{-2154,0,0,0}, 505},	{{-4969,-2259,5,0}, 0},	{{-2192,-2259,-2259,-2259}, 0},
{{0,0,3,0}, 0},	{{1,1,1,-2261}, 0},	{{-2261,-2261,3,0}, 0},
{{1,1542,0,0}, 487},	{{0,0,0,1542}, 0},	{{-2239,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,9,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1529}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 497},	{{1,0,-2181,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1515}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,1508,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{0,0,1505,0}, 0},
{{-2307,-2307,3,0}, 0},	{{-2302,-2302,-2302,1515}, 0},	{{0,0,0,1515}, 0},
{{-2197,0,0,0}, 0},	{{1,-2229,-2229,-2229}, 0},	{{0,0,0,1522}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1515}, 0},
{{0,0,0,0}, 488},	{{0,0,0,1514}, 0},	{{1,1,1,0}, 0},
{{-2199,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1507}, 0},	{{0,0,0,1507}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{0,1506,0,0}, 0},	{{0,1506,0,0}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{0,1507,0,0}, 0},
{{1,-2345,0,0}, 0},	{{1,0,0,0}, 0},	{{0,1506,0,0}, 0},
{{-5044,1508,-5044,-5044}, 0},	{{0,0,0,1508}, 0},	{{-5045,-2348,0,1508}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1499}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1497,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1495}, 0},
{{-2145,50,51,0}, 416},	{{1,54,58,0}, 0},	{{1,-1765,0,0}, 0},
{{1,1,0,0}, 452},	{{0,0,1491,0}, 0},	{{-2141,-1767,65,0}, 364},
{{-2108,-2102,2,0}, 416},	{{0,-2103,1,0}, 416},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,92,0,0}, 0},	{{-2186,0,0,0}, 431},
{{1,1,1,0}, 431},	{{-2095,-2095,-2095,-2095}, 0},	{{0,0,1485,0}, 0},
{{0,-1544,0,0}, 444},	{{0,0,0,1484}, 0},	{{-2091,-2091,-2091,-2091}, 0},
{{-2088,-2088,-2088,-2088}, 0},	{{0,0,1484,0}, 0},	{{-2186,1,1485,-4967}, 0},
{{1,1,1,1}, 0},	{{-4967,1,1503,-4967}, 0},	{{1,-4967,-4967,-4967}, 0},
{{1,1,1,1}, 0},	{{1,1505,1505,0}, 0},	{{1,-4967,-4967,0}, 0},
{{1,1,1,1}, 437},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 458},
{{-2072,-2072,-2072,-2072}, 0},	{{-2053,-2053,-2053,-2053}, 0},	{{1,9,-2171,0}, 0},
{{-2186,1487,0,0}, 424},	{{-2191,147,-2173,0}, 370},	{{-2189,234,-2174,0}, 0},
{{-2187,234,11,0}, 0},	{{-2151,-2145,0,0}, 370},	{{-2186,0,20,0}, 364},
{{1,1,1,-42}, 0},	{{-42,-42,-42,-42}, 448},	{{-2189,149,17,0}, 364},
{{-41,-41,-41,0}, 0},	{{1,0,15,0}, 364},	{{1,1,1,1}, 394},
{{1,1,1,0}, 0},	{{0,0,0,249}, 0},	{{1,-2185,1495,0}, 0},
{{0,0,0,0}, 455},	{{1,1,1,1}, 0},	{{1,1,-2126,-2126}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2126}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2126,1488,0}, 0},	{{1,0,1,0}, 354},
{{0,0,0,0}, 447},	{{0,0,0,0}, 398},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-4992,-7060,0}, 0},	{{1,-4992,0,0}, 0},
{{1,-7060,-2072,-7060}, 0},	{{-7060,1,0,0}, 346},	{{1,1,1,1}, 425},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 446},	{{1,1,1,1}, 0},	{{-5057,1455,-5057,-5057}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 438},
{{-5076,-5076,-5076,-5076}, 428},	{{1,1,1,1}, 0},	{{1,1,1447,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 381},	{{1,1,1,1}, 0},	{{-2199,1440,-2199,-2199}, 0},
{{-1648,-1648,1440,-1648}, 0},	{{1,1,1,1}, 0},	{{-2194,1440,-2194,-2194}, 0},
{{0,0,0,1440}, 0},	{{1,1,1,1}, 0},	{{-2193,1439,-2193,-2193}, 0},
{{0,0,0,1439}, 0},	{{1,1,1,1}, 0},	{{-2190,1438,-2190,-2190}, 0},
{{1,1,1,1}, 0},	{{1,-276,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 436},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1428,0}, 0},	{{1,2,0,0}, 428},
{{-2192,-2192,-2192,1432}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-2193,-2193,0,0}, 0},
{{-2193,-2193,-2193,-2193}, 367},	{{-5092,-5092,-5092,-5092}, 428},	{{1,1,1,1}, 0},
{{-2178,1435,-2178,-2178}, 0},	{{-2173,-2173,-2173,-2173}, 360},	{{0,0,0,0}, 429},
{{1,1,1,1}, 0},	{{-2162,1432,-2162,-2162}, 0},	{{-5090,-5090,-5090,-5090}, 428},
{{-5084,1,-5084,-5084}, 0},	{{-5084,-5084,-5084,-2155}, 428},	{{-2155,-2155,0,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1423,0}, 0},
{{-5071,-5071,-5071,0}, 428},	{{-5066,-5066,-5066,0}, 428},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1415}, 0},	{{0,-129,0,0}, 416},
{{1,0,0,0}, 0},	{{0,1414,0,0}, 0},	{{-5009,1417,-5009,-5009}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-5009}, 0},	{{1,1,1,1}, 0},
{{-5009,-5009,0,1420}, 0},	{{0,-2283,0,0}, 416},	{{1,1,1,0}, 0},
{{0,0,1429,0}, 0},	{{0,3,0,0}, 370},	{{0,90,0,0}, 0},
{{-2149,90,-1929,0}, 0},	{{-1962,0,-123,0}, 364},	{{1,0,1,0}, 0},
{{0,0,0,1428}, 0},	{{1,0,0,0}, 0},	{{0,1428,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,1426}, 0},	{{1,1,1,1}, 0},	{{-92,-92,-92,-92}, 0},
{{-5162,1424,-5162,-5162}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1427}, 0},	{{1,1,1,1}, 0},
{{1,1,-5019,-5019}, 0},	{{1,1425,-2126,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5166}, 0},	{{1,-5166,-5166,-5166}, 0},	{{-5019,1425,-5019,-5019}, 0},
{{-2114,-2422,9,-2422}, 364},	{{0,0,1426,0}, 0},	{{-2116,9,7,-2424}, 364},
{{-2123,90,-1990,0}, 0},	{{-5004,45,0,0}, 0},	{{1,0,0,0}, 405},
{{1,1,1,1}, 0},	{{0,1429,0,0}, 0},	{{0,0,0,1429}, 0},
{{-2430,-2592,0,0}, 398},	{{0,0,1428,0}, 0},	{{1,46,-24,-24}, 0},
{{1,1,-117,-117}, 0},	{{1,1,1,-117}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,46}, 0},
{{1,1,-2622,-2622}, 0},	{{-2622,0,-2526,0}, 381},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-1797,-1797,-1797,0}, 0},
{{1,1,1,1}, 0},	{{0,1416,1417,0}, 0},	{{0,0,0,1418}, 0},
{{1,1418,1421,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,1421,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1418}, 0},	{{0,0,0,1419}, 0},
{{-2070,-2623,13,-2623}, 364},	{{1,1,30,30}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1416}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 400},
{{-2079,8,4,-2632}, 364},	{{0,0,0,0}, 405},	{{1,1,1,1}, 0},
{{0,0,0,1412}, 0},	{{-2635,-2635,0,0}, 398},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{-1898,0,0,0}, 0},	{{1,1,-69,-69}, 0},
{{1,1,-162,-162}, 0},	{{1,1,1,-162}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-2639,-2639}, 0},	{{0,0,-2571,0}, 381},	{{-2050,-79,-211,0}, 364},
{{1,0,-212,0}, 364},	{{0,0,0,0}, 394},	{{-2055,25,-2055,0}, 0},
{{0,-20,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-28,-28,-28,-28}, 0},
{{1,-4888,0,0}, 0},	{{-1932,-1932,-7215,-7215}, 400},	{{1,1,1,1}, 0},
{{1,-1863,-1863,-1863}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1863}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1863,1381,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{-1861,-1861,-1861,0}, 400},	{{1,1,1,0}, 0},	{{0,0,0,0}, 397},
{{-1837,-1837,-1837,-1837}, 405},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1368}, 0},	{{0,0,0,1368}, 0},
{{0,0,0,1368}, 0},	{{1,-5249,0,0}, 0},	{{-2033,51,-4676,-4676}, 393},
{{1,1,1,1}, 358},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1830,-1830,-1830,-1830}, 0},
{{1,0,0,0}, 0},	{{-2010,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1363}, 0},	{{0,0,0,1363}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1356}, 0},	{{0,0,0,0}, 375},	{{-7253,-7253,-7253,1355}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1347}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1346}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{-1950,-1950,-1950,0}, 0},	{{-1950,-1950,-1950,-1950}, 367},	{{0,0,0,1340}, 0},
{{0,0,0,1340}, 0},	{{0,0,0,1340}, 0},	{{0,0,0,1340}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 383},	{{-2083,1,-4738,0}, 0},
{{-4668,-4668,-4668,-4668}, 355},	{{1,-1873,-4718,-4718}, 0},	{{1,-1873,-4718,-4718}, 0},
{{-1873,0,-1850,0}, 357},	{{0,0,0,1333}, 0},	{{0,0,0,1334}, 0},
{{1,0,0,0}, 0},	{{0,1334,0,0}, 0},	{{-7151,-7151,-7151,1338}, 0},
{{-7106,-7106,-7106,1350}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1346,0,0}, 0},
{{0,0,0,1354}, 0},	{{0,0,0,1354}, 0},	{{-1840,1355,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,1347}, 0},
{{0,1345,0,0}, 0},	{{0,0,1346,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1263,-1263,-1263,-1263}, 0},
{{0,0,0,1340}, 0},	{{0,0,0,1340}, 0},	{{0,0,0,1340}, 0},
{{1,-4463,-4463,0}, 0},	{{1,1,1,-4463}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1343,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-4468,-4468,-4468}, 0},	{{1,-4468,-4468,-4468}, 0},
{{1,1,1,1}, 0},	{{-1868,1339,-1868,-1868}, 0},	{{-1712,1339,-1712,-1712}, 254},
{{-1758,1341,-1758,-1758}, 254},	{{-8023,-1779,-8023,-8023}, 254},	{{-4499,1342,-4499,-4499}, 0},
{{1,1336,-38,-38}, 0},	{{1,-4462,-4462,-4462}, 0},	{{-1780,-1780,-1780,1348}, 0},
{{1,-41,-41,-41}, 0},	{{1,-4571,-4571,-4571}, 0},	{{1,-1783,-1783,-41}, 0},
{{1,-1783,-1783,-1783}, 0},	{{1,1339,1,1339}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-4571,-4571}, 0},	{{-4571,-4571,-4571,1345}, 0},
{{-8027,-8027,-8027,-8027}, 264},	{{0,1344,0,0}, 0},	{{1,-8040,-8040,-8040}, 0},
{{1,-8040,-8040,-8040}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-8040,-8040,-8040,1343}, 0},	{{1,0,0,0}, 0},	{{0,1348,0,0}, 0},
{{0,1355,0,0}, 0},	{{0,1355,0,0}, 0},	{{-4547,1359,-4547,-4547}, 0},
{{0,0,0,0}, 161},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 265},	{{-8052,-8052,-8052,1345}, 0},
{{-8052,-8052,-8052,1345}, 0},	{{0,0,0,1352}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-8065,-8065,0}, 0},	{{1,1,1,-8065}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-8065,-8065,-8065,1353}, 0},
{{0,0,0,1353}, 0},	{{-8065,-8065,-8065,1360}, 0},	{{1,-8065,-8065,-8065}, 0},
{{1,1,1,1}, 0},	{{1,-7059,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1360}, 0},	{{0,0,0,1360}, 0},	{{1,1,1,6}, 0},
{{1,1,1,1}, 0},	{{1,10,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1371}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4,-4,-4,-4}, 0},	{{1,-2,-2,-2}, 0},	{{1,-2,-2,-2}, 0},
{{-1755,-7,-7,-7}, 0},	{{0,0,0,1365}, 0},	{{-8,-8,-8,1365}, 0},
{{-4725,-4725,-4725,1365}, 0},	{{0,0,0,-1756}, 310},	{{0,0,0,1364}, 0},
{{1,3,0,0}, 0},	{{0,1365,0,0}, 270},	{{-1743,1365,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 326},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1354,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,1353,0}, 0},
{{1,1357,1,27}, 313},	{{1,1360,1,7}, 0},	{{1,1,1,1}, 0},
{{1,1361,1,1}, 0},	{{-1754,-1754,-1754,-1754}, 0},	{{-1770,0,0,0}, 0},
{{1,1359,1,21}, 313},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-5,-5,-5,-5}, 0},	{{0,1358,0,17}, 313},	{{0,1362,0,0}, 0},
{{1,-1775,-1775,0}, 0},	{{1,6,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1358}, 0},	{{1,0,0,0}, 0},	{{0,0,0,59}, 0},
{{0,0,0,0}, 323},	{{1,1,1,1344}, 0},	{{1,1,1,1}, 0},
{{1,1353,1336,1336}, 0},	{{1,1,1,1354}, 0},	{{0,0,0,1354}, 0},
{{0,0,0,0}, 322},	{{1,-1778,-1778,2}, 0},	{{0,0,0,1352}, 0},
{{0,0,0,1352}, 0},	{{0,0,0,1352}, 0},	{{0,0,0,1352}, 0},
{{1,0,1352,0}, 275},	{{0,0,0,1352}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 302},	{{0,1331,0,0}, 0},
{{1,1331,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1331,0,0}, 0},
{{-1787,-1787,-1787,-1787}, 272},	{{-27,0,0,0}, 275},	{{1,-1778,-1778,0}, 275},
{{-1125,1,0,0}, 0},	{{1,1327,0,0}, 0},	{{0,0,0,1327}, 0},
{{-4524,1336,-4524,-4490}, 0},	{{-4490,1336,0,0}, 0},	{{0,0,0,1338}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,1332,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,450,0}, 0},
{{0,0,0,1344}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1352}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1352}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,1352}, 0},	{{1,1,1,1}, 0},
{{0,2,0,0}, 0},	{{-1757,1350,-1757,-1757}, 276},	{{0,0,0,0}, 297},
{{1,-4577,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 291},
{{0,0,0,1346}, 0},	{{0,0,0,1348}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 287},	{{0,0,0,1345}, 0},
{{0,1346,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,1345}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1339}, 0},	{{1,1,1,1}, 276},
{{-4507,1,-4507,-4507}, 0},	{{-4507,-4507,-4507,-4507}, 281},	{{1,1,1,1}, 0},
{{0,1335,0,0}, 0},	{{1,0,0,0}, 0},	{{-3580,-3580,-3580,-3580}, 0},
{{0,28,1,0}, 197},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1743,-1743,-1743,-1743}, 0},	{{0,0,0,1}, 194},
{{0,0,0,1329}, 0},	{{0,0,78,0}, 0},	{{1,0,0,0}, 0},
{{-4226,0,0,0}, 0},	{{-4478,-7024,0,26}, 0},	{{0,0,0,1325}, 0},
{{1,-3592,-3592,-3592}, 0},	{{1,-3592,-3592,-3592}, 0},	{{1,-3592,-3592,-3592}, 0},
{{1,1,1,1327}, 0},	{{1,1,1,1327}, 0},	{{1,-4889,-4889,-4889}, 0},
{{-4889,-4889,-4889,-4889}, 79},	{{1,1,1,1}, 0},	{{-4892,1324,-4892,-4892}, 0},
{{1,1,1,0}, 0},	{{0,0,37,0}, 0},	{{1,-1720,-1720,-1720}, 0},
{{1,-1720,-1720,-1720}, 0},	{{1,-1720,-1720,-1720}, 0},	{{-4900,-4900,-4900,1320}, 0},
{{0,0,0,0}, 118},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,1316,0,0}, 0},	{{-1714,-4904,-4904,-4904}, 0},
{{1,-1571,-4904,-4904}, 0},	{{1,1,1,1}, 0},	{{-4904,1313,-4904,-4904}, 0},
{{1,0,0,0}, 0},	{{0,0,1313,0}, 0},	{{-1710,-1566,-1566,1313}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1313}, 0},	{{0,0,0,1313}, 0},
{{1,1,1,1315}, 0},	{{1,1315,-4918,-4918}, 0},	{{1,1315,-4918,-4918}, 79},
{{-4918,-4918,-4918,-4918}, 80},	{{1,1,1,1315}, 0},	{{1,1315,-4922,-4922}, 0},
{{-3,-4922,-4922,-4922}, 79},	{{-1697,1,1316,-1681}, 0},	{{-1697,-1681,-1681,-1681}, 0},
{{1,1,1,1}, 0},	{{-4379,1316,-4924,-4924}, 0},	{{1,1289,1289,-4927}, 0},
{{-4927,1,1315,-4927}, 0},	{{-4927,-4927,-4927,-4927}, 191},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 192},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1300}, 0},	{{-1706,-1706,-1706,-1706}, 108},	{{-4950,-4950,-4950,-4950}, 108},
{{-1707,-1707,-1707,1298}, 0},	{{0,0,0,1298}, 0},	{{-4951,-4951,-4951,1298}, 0},
{{-4951,-4951,-4951,-4951}, 189},	{{1,1,1,1}, 0},	{{1,1,-1619,-1619}, 0},
{{-1619,-1619,-1619,-1619}, 53},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 190},
{{1,-6227,-6227,-6227}, 0},	{{1,-6227,-6227,-6227}, 0},	{{1,-6227,-6227,-6227}, 0},
{{1,1,1,1}, 0},	{{1,1,-2202,-2202}, 0},	{{-2202,-2202,-2202,1270}, 0},
{{1,-2203,-2203,-2203}, 0},	{{1,-2203,-2203,-2203}, 0},	{{1,-2203,-2203,-2203}, 0},
{{1,1,1,1}, 0},	{{1,-2203,-2203,-2203}, 0},	{{1,1,1,1}, 0},
{{-2203,-2203,-2203,1264}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1688,1264,-1688,-1688}, 0},	{{1,-4412,-4412,-4412}, 0},	{{1,-4412,-4412,-4412}, 0},
{{1,-4412,-4412,-4412}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-2218,-2218}, 0},	{{1,1,-2218,-2218}, 0},
{{1,-2218,-2218,-2218}, 43},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4412,1255,-4412,-4412}, 0},	{{0,0,0,1265}, 0},	{{-5006,-5006,-5006,1265}, 0},
{{1,-4348,-4348,-4348}, 0},	{{1,-4348,-4348,-4348}, 0},	{{1,-4348,-4348,-4348}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2235}, 0},	{{1,-2235,-2235,-2235}, 0},	{{-2235,-2235,-2235,-2235}, 22},
{{-2238,-2238,-2238,1257}, 0},	{{1,-4343,-4343,-4343}, 0},	{{1,-4343,-4343,-4343}, 0},
{{1,-4343,-4343,-4343}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2245,-2245,1251,-2245}, 0},	{{1,-2246,-2246,-2246}, 0},
{{1,-2246,-2246,-2246}, 0},	{{1,-1680,1,-1680}, 0},	{{1,-1680,-1680,-2246}, 0},
{{1,1,1,1}, 181},	{{-2246,-2246,-2246,1246}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1243}, 0},	{{0,0,0,1243}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,1230}, 0},	{{0,0,0,0}, 20},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 8},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1214}, 0},	{{0,0,0,1214}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1211}, 0},
{{0,0,0,1211}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 207},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1}, 0},
{{0,0,0,1200}, 0},	{{1,1,1,-4326}, 0},	{{1,1,1,1}, 0},
{{-4326,-4326,1198,-4326}, 0},	{{1,-1588,0,0}, 0},	{{1,-4317,0,0}, 207},
{{0,0,0,0}, 246},	{{0,0,0,1196}, 0},	{{-4247,5,-7113,-7113}, 0},
{{0,1195,0,0}, 0},	{{-1527,1194,0,0}, 0},	{{1,1194,0,0}, 0},
{{0,0,0,0}, 243},	{{-1624,-1624,-7117,-7117}, 0},	{{1,-8127,0,0}, 0},
{{1,1,1,1}, 53},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1185}, 0},	{{-3515,-3515,-3515,-3515}, 243},	{{0,0,0,0}, 226},
{{0,0,0,1183}, 0},	{{0,0,0,1183}, 0},	{{1,3,3,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 231},	{{1,0,0,0}, 0},
{{0,0,0,0}, 233},	{{0,1178,0,0}, 0},	{{0,0,0,0}, 228},
{{0,0,1184,0}, 0},	{{1,0,0,0}, 0},	{{-1238,-1238,-1238,-1238}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1183}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1183}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1181}, 0},
{{-1560,0,0,0}, 0},	{{0,0,0,0}, 216},	{{0,0,0,0}, 209},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1174}, 0},	{{-4196,1175,0,0}, 113},
{{0,0,0,-1517}, 118},	{{0,0,0,1178}, 0},	{{1,-6475,0,0}, 0},
{{0,2,0,0}, 0},	{{0,0,0,1176}, 0},	{{0,0,0,1177}, 0},
{{-4203,-3803,0,0}, 113},	{{0,0,0,0}, 135},	{{0,0,0,0}, 137},
{{0,0,0,1175}, 0},	{{0,0,0,1178}, 0},	{{-1330,-1330,-1330,-1330}, 144},
{{0,0,0,1180}, 0},	{{0,0,0,1183}, 0},	{{0,0,0,1185}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,227,1185}, 0},
{{-1234,233,1186,0}, 0},	{{-8040,-8040,-8040,1191}, 0},	{{-8041,-8041,-8041,1192}, 0},
{{-8042,-8042,-8042,1196}, 0},	{{1,-6644,0,0}, 0},	{{1,1,1,1}, 5},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,326,303,0}, 0},
{{-1187,303,0,0}, 0},	{{-5052,-5052,-5052,-1432}, 118},	{{-4037,-4037,1194,-4037}, 0},
{{0,0,0,1194}, 0},	{{0,0,0,1194}, 0},	{{0,0,0,1194}, 0},
{{-8376,-7036,-8053,1195}, 0},	{{1,1,1,-8063}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-8063,-8063,-8063,1193}, 0},	{{-8063,-8063,-8063,1193}, 0},
{{-8064,-8064,-8064,1193}, 0},	{{0,1193,2,0}, 0},	{{0,1193,0,0}, 0},
{{0,1195,0,0}, 0},	{{-4068,-3843,0,0}, 113},	{{-1493,-1493,-1493,-1493}, 176},
{{0,0,0,1196}, 0},	{{0,0,0,0}, 176},	{{0,0,0,1195}, 0},
{{0,0,0,1195}, 0},	{{1,-6635,-8041,0}, 0},	{{1,-8071,-8071,-8071}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,-8086,-8086}, 0},
{{1,-8086,-8086,-8086}, 0},	{{1,-8086,-8086,-8086}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-8086}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-8086,-8086,-8086,1187}, 0},	{{1,1,1,1}, 0},	{{-8088,-8088,-8088,1186}, 0},
{{-8088,-8088,-8088,1186}, 0},	{{-8088,-8088,-8088,1186}, 0},	{{0,0,0,1188}, 0},
{{-5091,-5091,-5091,1191}, 0},	{{0,0,0,1194}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 165},	{{0,0,0,1192}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1188,0}, 0},	{{1,0,1192,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1192}, 0},
{{-6482,-6482,-6482,-6482}, 161},	{{-8110,-8110,-8110,1191}, 0},	{{-8110,-8110,-8110,1191}, 0},
{{-8111,-8111,-8111,1192}, 0},	{{-8113,-8113,-8113,1194}, 0},	{{-8113,-8113,-8113,1194}, 0},
{{-8114,-8114,-8114,1195}, 0},	{{-8115,-8115,-8115,1202}, 0},	{{-8116,-8116,-8116,1209}, 0},
{{1,-6718,0,0}, 0},	{{1,1,1,1}, 5},	{{1,1193,1193,1193}, 0},
{{1,1,1,1}, 0},	{{1,1193,1193,1193}, 0},	{{1,1193,1193,1193}, 0},
{{1,788,788,788}, 0},	{{1,1,1,1}, 154},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1209}, 0},	{{-8131,-8131,-8131,1209}, 0},
{{-3959,0,67,0}, 0},	{{1,0,1209,0}, 0},	{{1,1,1,1}, 0},
{{0,1208,0,0}, 0},	{{0,0,0,1208}, 0},	{{0,0,0,1208}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1210}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1207,0,0}, 0},
{{1,-6745,0,0}, 0},	{{1,1,1,1}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-100,225,202,234}, 0},	{{-3653,-3846,0,0}, 0},
{{0,0,0,1212}, 0},	{{1,1,1,1}, 0},	{{1,1108,1108,0}, 0},
{{1,1,1,1210}, 0},	{{0,0,0,1210}, 0},	{{1,1,1,0}, 0},
{{0,0,0,1209}, 0},	{{0,0,0,1209}, 0},	{{0,0,0,1212}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1213,1213,1213}, 0},
{{1,1213,110,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1208}, 0},	{{0,0,0,1208}, 0},	{{1,-8171,-8171,-8171}, 0},
{{1,-8171,-8171,-8171}, 0},	{{1,-6773,0,0}, 0},	{{1,0,0,0}, 5},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1195}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1194}, 0},	{{0,0,0,1194}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1201}, 0},	{{-7544,-7544,-7544,1201}, 0},
{{1,1,1,1}, 0},	{{-7125,-7125,-7125,1200}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-34,75,75,0}, 0},
{{0,0,0,0}, 84},	{{0,0,1143,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1189}, 0},	{{-8356,-8356,-8356,-8356}, 83},
{{1,1,1,1}, 53},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1181}, 0},	{{0,0,0,1181}, 0},
{{1,1,-8394,-8394}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-8394,-8394,-8394,1176}, 0},	{{0,0,0,1176}, 0},	{{0,0,0,1176}, 0},
{{0,0,0,1176}, 0},	{{0,0,0,0}, 90},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1174}, 0},	{{0,0,0,1174}, 0},
{{1,1,1,1}, 0},	{{1,-8381,0,0}, 0},	{{1,1,1,1}, 53},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,1165}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1156}, 0},	{{0,1156,0,0}, 0},
{{0,0,0,1156}, 0},	{{0,0,0,1156}, 0},	{{0,0,0,1156}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,8,0}, 0},
{{1,14,14,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1147}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1141}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1136}, 0},	{{0,0,0,1136}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 54},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1120}, 0},	{{0,0,0,1120}, 0},
{{0,0,0,1125}, 0},	{{-8299,-8299,-8299,1125}, 0},	{{0,0,0,1125}, 0},
{{0,0,0,0}, 48},	{{-8301,-8301,-8301,1124}, 0},	{{-8302,-8302,-8302,1125}, 0},
{{0,0,0,1126}, 0},	{{-8304,-8304,-8304,1127}, 0},	{{-8305,-8305,-8305,1128}, 0},
{{1,-6907,0,0}, 0},	{{-161,-161,-161,-161}, 45},	{{0,0,0,1127}, 0},
{{0,0,0,1128}, 0},	{{1,-6911,0,0}, 0},	{{0,0,0,0}, 36},
{{0,0,0,1127}, 0},	{{0,0,0,1131}, 0},	{{0,0,0,1131}, 0},
{{-7667,-7667,-7667,-7667}, 39},	{{1,-6917,0,0}, 0},	{{1,1,1,1}, 5},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,30,0}, 0},
{{1,30,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1122}, 0},
{{-8332,-8332,-8332,1122}, 0},	{{1,-6932,0,0}, 0},	{{1,-287,-287,-287}, 5},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-1475,38,15,0}, 0},
{{1,-6937,0,0}, 0},	{{1,898,898,898}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1480,-19,10,0}, 0},	{{0,0,0,1112}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1123}, 0},	{{0,0,0,1123}, 0},
{{1,-6946,0,0}, 0},	{{1,1,1,1}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1110}, 0},	{{1,-6960,0,0}, 0},
{{1,880,880,880}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1106,1115,1124}, 0},	{{1,-13,34,0}, 0},	{{1,-1503,-1503,-1503}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1124}, 0},	{{1,-22,0,0}, 0},	{{1,1,-51,-51}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1116}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1101}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1095}, 0},	{{0,0,0,1095}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1083}, 0},
{{-8968,-8968,-8968,1084}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1067}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1063}, 0},
{{0,0,0,1064}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 525},
{{-1544,-1544,-1544,-1544}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 524},	{{-1547,-1547,1055,0}, 0},	{{1,0,0,0}, 0},
{{0,1054,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,1053,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,-1541,0}, 0},	{{1,1,1,1}, 518},	{{1,1,0,0}, 0},
{{0,0,0,0}, 519},	{{0,0,1048,0}, 0},	{{0,1048,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,1043,0,0}, 0},
{{1,1,1,1}, 0},	{{-3799,-1527,0,0}, 0},	{{-1579,0,0,0}, 428},
{{0,0,0,1040}, 0},	{{-3824,-3824,0,0}, 428},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1044}, 0},	{{0,1044,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,1042,0}, 0},	{{0,0,0,1048}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,1047,0}, 0},	{{1,0,0,0}, 487},	{{1,1,0,0}, 0},
{{0,0,1055,0}, 0},	{{1,1,1065,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,1063,0,0}, 0},	{{1,0,-3687,0}, 0},
{{1,0,0,0}, 505},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1056}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,1054,0,0}, 0},	{{0,0,0,1054}, 0},
{{0,0,0,1063}, 0},	{{0,0,0,0}, 501},	{{1,1,1,1}, 0},
{{0,0,0,1061}, 0},	{{0,0,0,1061}, 0},	{{1,1,1,1}, 0},
{{0,0,1060,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 492},	{{-3816,-3816,-3816,1054}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1034,1034,1034}, 0},	{{1,1034,0,0}, 0},	{{0,0,0,1045}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,-1520,0,0}, 0},
{{1,-1520,-1520,-1520}, 0},	{{-1520,-1520,-1520,1041}, 0},	{{0,0,0,1047}, 0},
{{0,0,0,1047}, 0},	{{0,0,0,1048}, 0},	{{1,0,0,0}, 0},
{{0,1047,0,0}, 0},	{{0,0,1047,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1045,0,0}, 0},
{{1,0,1,0}, 0},	{{0,1044,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,1043,0,0}, 0},	{{-6551,-3854,0,1043}, 0},
{{0,0,0,1047}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1045,0,0}, 0},	{{0,0,0,1048}, 0},	{{-1495,1048,0,0}, 0},
{{0,0,0,1049}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1046}, 0},	{{0,0,0,1046}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1046,0,0}, 0},
{{1,1,1,1}, 0},	{{0,1045,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-1483,-6451,-6451}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 437},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 461},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 460},
{{1,0,0,0}, 0},	{{-1503,-1503,-1503,-1503}, 0},	{{1,1,-1519,0}, 0},
{{1,-3615,-3615,-3615}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-3615}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-3615,0,0}, 0},
{{1,1011,1011,0}, 0},	{{1,1011,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 467},
{{0,0,0,0}, 457},	{{-1486,0,-1486,0}, 0},	{{-6511,0,0,0}, 428},
{{1,1,1,1}, 0},	{{-1445,994,-1445,-1445}, 0},	{{-3638,-3638,-3638,-3638}, 428},
{{1,1,1,1}, 0},	{{-3087,992,-3087,-3087}, 0},	{{0,0,0,-1439}, 428},
{{0,0,0,991}, 0},	{{-3631,-3631,-3631,-3631}, 428},	{{0,0,0,990}, 0},
{{-3627,-3627,-3627,-3627}, 428},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,985}, 0},	{{1,1,-3623,-6526}, 0},	{{1,-6526,-6526,-6526}, 0},
{{1,1,1,1}, 0},	{{1,-1429,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-3623,-3623,0}, 0},	{{1,1,1,1}, 0},
{{-3623,-3623,-3623,974}, 0},	{{-3612,-3612,-3612,-3612}, 428},	{{-3593,-3593,-3593,-3593}, 428},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,967}, 0},
{{1,1,1,1}, 0},	{{0,0,0,966}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,8}, 0},
{{1,1,1,-6425}, 0},	{{1,1,1,-6425}, 0},	{{1,1,1,1}, 0},
{{1,1,959,959}, 0},	{{1,0,0,0}, 0},	{{1,1,959,0}, 0},
{{0,0,959,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,960}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,956,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,960}, 0},	{{1,1,1,1}, 0},
{{0,0,960,0}, 0},	{{0,0,0,961}, 0},	{{1,1,1,1}, 0},
{{1,1,-6585,-6585}, 0},	{{1,959,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-6585}, 0},	{{1,-6585,-6585,-6585}, 0},	{{-6585,959,-6585,-6585}, 0},
{{0,0,0,960}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{-3550,957,-3550,-3550}, 0},	{{1,-3674,0,0}, 0},
{{1,1,1,1}, 468},	{{0,0,955,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 421},	{{0,0,0,956}, 0},
{{0,0,0,956}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,951,0}, 0},	{{0,951,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,950}, 0},	{{0,0,0,950}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,948,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-1416,1,0,0}, 0},	{{0,0,0,945}, 0},
{{1,0,1,0}, 0},	{{0,0,0,945}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,942,0}, 0},
{{1,0,0,0}, 0},	{{-1694,-1694,0,0}, 400},	{{0,0,0,944}, 0},
{{0,0,944,0}, 0},	{{0,0,0,944}, 0},	{{0,0,0,944}, 0},
{{1,944,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,936}, 0},	{{0,0,0,936}, 0},	{{0,0,0,939}, 0},
{{0,0,0,940}, 0},	{{-8607,-8607,-8607,940}, 0},	{{0,0,0,941}, 0},
{{0,0,0,941}, 0},	{{0,0,0,941}, 0},	{{0,0,0,942}, 0},
{{0,0,0,942}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,948,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 356},	{{1,0,0,0}, 0},	{{0,0,0,0}, 351},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,940}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 341},	{{0,0,0,928}, 0},
{{-8455,-8455,-8455,929}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,922}, 0},	{{0,0,0,922}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 339},	{{0,0,924,0}, 0},	{{0,0,0,0}, 264},
{{1,0,0,0}, 0},	{{1,923,923,0}, 0},	{{1,923,923,0}, 0},
{{1,1,1,-5966}, 0},	{{-5966,-5966,-5966,923}, 0},	{{0,0,0,927}, 0},
{{0,0,0,0}, 268},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,919}, 0},	{{-3094,-3094,-3094,-3094}, 254},	{{0,-1373,0,0}, 254},
{{1,1,-1373,-1373}, 0},	{{1,-3050,-3050,-3050}, 0},	{{-1373,-1373,-1373,13}, 0},
{{1,-1376,-1376,-1376}, 0},	{{1,-3098,-3098,-3098}, 0},	{{-1376,-1376,-1376,913}, 0},
{{1,-1379,-1379,-1379}, 0},	{{1,-5840,-5840,-5840}, 0},	{{1,-3121,-3121,-1379}, 0},
{{1,-3121,-3121,-3121}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-8363,-8363}, 0},	{{-8363,-8363,-8363,906}, 0},
{{1,1,-1385,-1385}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-3061,-3061}, 0},	{{-3061,-3061,-3061,901}, 0},
{{-5915,-5915,-5915,-5915}, 264},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,897}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,892}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,885,0,0}, 0},	{{0,886,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,886}, 0},	{{-5905,-5905,-5905,886}, 0},
{{-9396,-9396,-9396,891}, 0},	{{1,-9396,-9396,-9396}, 0},	{{1,1,1,1}, 0},
{{1,-8390,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-786,-786,-786,-786}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,875,0,0}, 0},	{{-9417,-9417,-9417,875}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,868}, 0},	{{1,-9424,-9424,-9424}, 0},
{{1,1,1,1}, 0},	{{1,-8418,0,0}, 0},	{{1,1,1,1}, 0},
{{1,551,551,551}, 0},	{{1,0,0,0}, 0},	{{1,-1358,-1358,-1358}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,856}, 0},	{{0,0,0,856}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,841}, 0},
{{0,0,0,841}, 0},	{{0,0,0,0}, 310},	{{0,0,0,-2}, 310},
{{-6089,-6089,-6089,839}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,109}, 0},	{{0,0,0,0}, 327},	{{1,0,0,0}, 0},
{{-1330,0,-1330,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 334},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 333},	{{1,822,1,9}, 0},	{{1,1,1,1}, 0},
{{1,823,1,1}, 0},	{{-1334,-1334,-1334,-1334}, 0},	{{1,1,1,1}, 0},
{{1,821,-1358,-1358}, 0},	{{-3113,-3113,-3113,821}, 0},	{{-1335,-3114,-3114,-3114}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-7,-7,-7,-7}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,813}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 324},	{{0,0,0,810}, 0},
{{1,-1351,-1351,2}, 0},	{{0,0,0,809}, 0},	{{0,0,0,809}, 0},
{{0,0,0,809}, 0},	{{0,0,0,809}, 0},	{{0,0,0,809}, 0},
{{0,0,0,809}, 0},	{{0,0,0,809}, 0},	{{0,811,0,0}, 0},
{{0,17,0,0}, 0},	{{0,810,0,0}, 272},	{{1,1,1,1}, 0},
{{-1289,810,-1289,0}, 0},	{{0,810,0,0}, 0},	{{0,0,0,810}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,810}, 0},	{{-5859,810,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 289},	{{0,0,0,810}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 298},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,789,789,789}, 0},	{{1,0,789,0}, 0},
{{0,0,0,789}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,782}, 0},
{{0,0,0,782}, 0},	{{-5834,-5834,-5834,-5834}, 297},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1338,0,0,0}, 0},	{{0,0,0,778}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 284},	{{1,1,1,1}, 0},
{{0,0,0,776}, 0},	{{0,0,0,0}, 283},	{{0,0,0,776}, 0},
{{1,1,1,1}, 0},	{{1,775,0,0}, 0},	{{0,0,0,0}, 336},
{{0,0,0,774}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,770,0}, 0},	{{-1325,-1325,-1325,771}, 0},	{{-1325,-6215,771,-6215}, 0},
{{1,1,1,-6215}, 0},	{{-6215,-6215,27,-6215}, 0},	{{-6219,-6219,-6219,-6219}, 118},
{{0,0,0,770}, 0},	{{1,1,1,1}, 0},	{{-2406,769,-2406,-2406}, 0},
{{0,774,0,0}, 0},	{{1,-3442,-3442,-3442}, 0},	{{1,-3442,-3442,-3442}, 0},
{{1,-3442,1,-3442}, 0},	{{1,-3442,-3442,-3442}, 0},	{{-1195,-1195,-1195,-1195}, 0},
{{0,0,0,776}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 204},	{{-1313,1,754,-6232}, 0},	{{-1313,-6232,-6232,-6232}, 0},
{{1,1,1,1}, 0},	{{-6232,770,-6232,-6232}, 0},	{{-1313,1,770,-6236}, 0},
{{1,-6236,-6236,-6236}, 0},	{{1,1,1,1}, 80},	{{-6236,-6236,-6236,768}, 0},
{{1,-2996,769,-2996}, 0},	{{1,1,1,1}, 0},	{{-5694,768,-6239,-6239}, 0},
{{-6239,-6239,-6239,-6239}, 81},	{{1,1,1,-6241}, 0},	{{1,1,1,1}, 0},
{{-1312,766,-1312,0}, 0},	{{0,0,0,770}, 0},	{{-3004,-3004,-3004,770}, 0},
{{0,0,0,773}, 0},	{{1,-6248,1,-6248}, 0},	{{-6248,-6248,-6248,-6248}, 196},
{{-3471,-3471,-3471,773}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4645,771,-4645,-4645}, 0},	{{1,-2951,-2951,-2951}, 0},	{{1,-2951,-2951,-2951}, 0},
{{1,-2951,-2951,-2951}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3481,-3481,-3481,770}, 0},	{{1,-5666,-5666,-5666}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5666}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-2909,-2909}, 0},	{{-2909,-2909,-2909,-2909}, 187},
{{0,0,0,759}, 0},	{{1,1,1,1}, 0},	{{-1240,759,-1240,-1240}, 0},
{{-3494,-3494,-3494,762}, 0},	{{-3495,768,-3495,-3495}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2892,766,-2892,-2892}, 0},	{{0,0,0,770}, 0},
{{0,0,0,770}, 0},	{{0,0,0,770}, 0},	{{0,0,0,770}, 0},
{{0,0,0,770}, 0},	{{0,0,0,770}, 0},	{{0,0,0,770}, 0},
{{0,0,0,772}, 0},	{{1,-5523,-5523,-2789}, 0},	{{-5523,-5796,0,771}, 0},
{{0,0,0,773}, 0},	{{-1192,-1192,0,0}, 0},	{{-5620,-5620,-5620,-5620}, 243},
{{0,0,0,772}, 0},	{{0,0,0,772}, 0},	{{-1162,0,772,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,766}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,763}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,758}, 0},
{{0,0,0,758}, 0},	{{0,0,0,0}, 224},	{{1,1,1,1}, 0},
{{0,0,0,756}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,753}, 0},
{{0,0,0,753}, 0},	{{1,1,1,1}, 0},	{{0,0,0,754}, 0},
{{1,1,1,1}, 0},	{{0,0,0,753}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,167,167,167}, 0},	{{-1045,750,17,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{-1049,-940,13,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-971,0,748,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,4}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-964,0,-957,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 147},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,740}, 0},	{{1,-7832,0,0}, 0},	{{-1187,-1187,-1187,-1187}, 45},
{{1,-7834,0,0}, 0},	{{1,1,1,1}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1189,-916,-887,0}, 0},	{{1,-7839,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,227,236,245}, 0},	{{-878,-892,0,0}, 0},	{{0,0,0,727}, 0},
{{0,0,0,727}, 0},	{{0,0,0,730}, 0},	{{1,1,1,1}, 0},
{{0,0,0,729}, 0},	{{1,-7811,-9217,0}, 0},	{{1,-9247,-9247,-9247}, 0},
{{1,0,0,0}, 0},	{{1,-9247,-9247,-9247}, 0},	{{-9262,-9262,-9262,725}, 0},
{{-9255,-9255,-9255,726}, 0},	{{-9255,-9255,-9255,726}, 0},	{{-9256,-9256,-9256,739}, 0},
{{0,752,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{-1106,-1106,-1106,-1106}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,749}, 0},	{{0,0,0,749}, 0},
{{0,0,0,752}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,105,105,105}, 0},	{{-1168,752,0,0}, 0},	{{-9272,-9272,-9272,752}, 0},
{{-9273,-9273,-9273,752}, 0},	{{-9273,-9273,-9273,752}, 0},	{{1,-7875,0,0}, 0},
{{1,1,1,1}, 5},	{{-369,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-1178,0,0,0}, 0},
{{1,-6281,-3503,0}, 0},	{{1,1,1,1}, 0},	{{1,-6281,-6281,-6281}, 0},
{{-1039,0,-3503,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,5,0}, 0},	{{1,0,0,0}, 0},
{{1,1,-1190,-1190}, 0},	{{1,742,743,742}, 0},	{{-1190,743,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,742}, 0},
{{0,0,0,742}, 0},	{{-9300,-9300,-9300,742}, 0},	{{1,-7902,0,0}, 0},
{{-26,-26,-26,-26}, 45},	{{1,-7904,0,0}, 0},	{{1,0,0,0}, 36},
{{0,0,0,0}, 159},	{{-9306,-9306,-9306,738}, 0},	{{1,-7908,0,0}, 0},
{{0,0,0,0}, 158},	{{1,-7910,0,0}, 0},	{{1,1,1,1}, 5},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 154},
{{1,-7918,0,0}, 0},	{{1,1,1,1}, 5},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 156},	{{1,-7926,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,158,158,158}, 0},	{{1,0,0,0}, 0},	{{1,-420,-420,-420}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,709}, 0},	{{0,0,0,709}, 0},	{{1,-7941,0,0}, 0},
{{0,0,0,0}, 45},	{{0,0,0,0}, 83},	{{-1135,-1135,-1135,-1135}, 0},
{{0,0,0,705}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,628,706,628}, 0},	{{-1089,706,-1076,0}, 0},	{{0,0,0,706}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,695}, 0},
{{0,0,0,695}, 0},	{{0,0,0,1}, 138},	{{0,0,0,702}, 0},
{{0,0,0,702}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,699,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-1101,-1101,-1101,0}, 0},
{{0,648,0,0}, 0},	{{-1102,-1102,-1102,-1102}, 129},	{{0,0,0,693}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 125},
{{0,0,0,690}, 0},	{{0,0,0,690}, 0},	{{1,1,1,1}, 48},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,682}, 0},	{{0,0,0,683}, 0},
{{-8744,-8744,-8744,-8744}, 121},	{{-8324,-8324,-8324,682}, 0},	{{0,0,0,684}, 0},
{{0,0,0,684}, 0},	{{1,1,1,1}, 0},	{{0,0,0,683}, 0},
{{-9569,-9569,-9569,683}, 0},	{{0,0,0,0}, 78},	{{0,0,0,0}, 73},
{{1,0,0,0}, 0},	{{0,0,0,0}, 91},	{{0,0,0,679}, 0},
{{0,0,0,679}, 0},	{{0,0,0,679}, 0},	{{0,0,0,679}, 0},
{{0,0,0,0}, 107},	{{0,0,0,678}, 0},	{{0,0,0,679}, 0},
{{0,0,0,679}, 0},	{{0,0,0,679}, 0},	{{0,0,0,679}, 0},
{{0,0,0,679}, 0},	{{0,0,0,679}, 0},	{{0,0,0,679}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,674}, 0},
{{0,0,0,0}, 42},	{{-9423,-9423,-9423,674}, 0},	{{0,0,0,0}, 49},
{{1,-8026,0,0}, 0},	{{-1108,-1108,-1108,-1108}, 45},	{{1,-8028,0,0}, 0},
{{-193,-193,-193,-193}, 45},	{{1,0,0,0}, 0},	{{0,0,0,0}, 46},
{{1,-8032,0,0}, 0},	{{-1085,-1085,-1085,-1085}, 45},	{{1,-8034,0,0}, 0},
{{-194,-194,-194,-194}, 45},	{{1,0,0,0}, 0},	{{0,0,0,0}, 37},
{{1,0,0,0}, 0},	{{0,0,0,0}, 38},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,656}, 0},	{{0,0,0,0}, 39},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,651}, 0},	{{0,0,0,651}, 0},
{{-9453,-9453,-9453,651}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,639}, 0},	{{0,0,0,640}, 0},
{{0,0,0,640}, 0},	{{0,0,0,642}, 0},	{{1,-1118,0,0}, 0},
{{1,-1147,-1147,-1147}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,634}, 0},	{{1,-1127,0,0}, 0},
{{1,-1127,-1127,-1127}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,626}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,618}, 0},	{{0,0,0,618}, 0},
{{0,0,0,618}, 0},	{{1,1,1,1}, 0},	{{0,0,0,617}, 0},
{{0,0,0,617}, 0},	{{0,0,0,617}, 0},	{{1,1,1,1}, 0},
{{0,0,0,616}, 0},	{{-10051,-10051,-10051,617}, 0},	{{0,0,0,617}, 0},
{{1,1,1,1}, 0},	{{0,0,0,616}, 0},	{{0,0,0,616}, 0},
{{0,0,0,0}, 523},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,622,0}, 0},	{{0,622,0,0}, 0},	{{0,0,632,637}, 0},
{{0,637,0,0}, 0},	{{0,0,0,0}, 514},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,608,608,68}, 0},	{{1,608,0,0}, 0},	{{0,0,0,628}, 0},
{{0,0,0,628}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,620,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 530},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,605}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 529},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 510},	{{-1063,-1063,0,0}, 481},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 509},	{{0,0,0,577}, 0},	{{0,0,0,0}, 508},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,567}, 0},	{{0,0,0,0}, 502},	{{0,0,0,566}, 0},
{{0,0,0,569}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 493},	{{-59,-59,563,-59}, 0},
{{0,0,0,571}, 0},	{{1,-2560,-2560,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2560,-2560,-2560}, 0},
{{1,1,1,1}, 0},	{{0,0,0,565}, 0},	{{0,0,0,565}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 482},	{{0,0,0,564}, 0},
{{0,0,565,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,564}, 0},
{{0,0,0,564}, 0},	{{1,0,0,0}, 0},	{{0,0,0,563}, 0},
{{0,0,0,563}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,559}, 0},
{{-851,-851,-851,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,557,0,0}, 0},	{{0,0,0,557}, 0},
{{1,1,1,1}, 0},	{{0,0,0,556}, 0},	{{0,0,0,556}, 0},
{{0,0,0,556}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{0,554,0,0}, 0},	{{0,0,0,0}, 464},	{{0,0,0,0}, 462},
{{-1009,-1009,0,0}, 0},	{{-1009,-1009,-1009,-1009}, 360},	{{-2438,-2438,-2438,-2438}, 428},
{{-4078,-4078,-4078,-4078}, 428},	{{0,0,0,548}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 443},	{{0,0,0,547}, 0},	{{-4596,-4596,-4596,547}, 0},
{{0,0,0,547}, 0},	{{0,0,0,547}, 0},	{{1,0,0,0}, 0},
{{-957,-957,-957,0}, 0},	{{-4516,-4516,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 478},
{{0,0,0,531}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,526,0,0}, 0},	{{1,1,1,1}, 0},	{{0,531,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,530}, 0},	{{0,0,0,541}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{0,538,0,0}, 0},	{{1,-4627,0,0}, 0},	{{-952,-952,-952,-952}, 0},
{{0,0,0,536}, 0},	{{-955,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 469},	{{0,0,0,524}, 0},	{{0,524,0,0}, 0},
{{0,0,0,524}, 0},	{{0,0,0,525}, 0},	{{0,0,0,525}, 0},
{{0,0,0,525}, 0},	{{0,0,0,525}, 0},	{{1,1,1,1}, 0},
{{0,0,0,524}, 0},	{{0,0,0,524}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,528}, 0},	{{0,0,0,529}, 0},	{{0,0,0,0}, 401},
{{0,0,0,529}, 0},	{{-923,507,0,0}, 0},	{{-942,-942,-942,-942}, 404},
{{0,0,0,528}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 390},	{{1,0,0,0}, 0},
{{0,0,0,0}, 408},	{{0,0,0,522}, 0},	{{1,0,-7203,0}, 0},
{{0,0,0,0}, 373},	{{0,0,0,520}, 0},	{{0,0,0,0}, 372},
{{1,0,1,0}, 0},	{{0,0,0,0}, 387},	{{0,0,0,518}, 0},
{{1,518,0,0}, 0},	{{1,-940,-940,-940}, 0},	{{1,1,1,1}, 0},
{{1,518,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,513}, 0},	{{0,0,0,0}, 385},	{{0,0,0,512}, 0},
{{1,1,1,1}, 0},	{{0,0,0,511}, 0},	{{1,0,-6887,0}, 0},
{{0,0,0,0}, 344},	{{0,0,0,510}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 339},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,506}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,503}, 0},
{{1,-6888,-6888,-6888}, 0},	{{1,-6888,-6888,-6888}, 0},	{{1,-6888,-6888,-6888}, 0},
{{1,1,-6888,-6888}, 0},	{{-6888,-6888,-6888,503}, 0},	{{1,0,0,0}, 0},
{{0,0,0,509}, 0},	{{1,1,1,1}, 0},	{{0,0,0,508}, 0},
{{1,-2288,-2288,-2288}, 0},	{{-2288,517,-2288,-2288}, 0},	{{-9268,-9268,-9268,-9268}, 264},
{{-3961,-3961,-3961,-3961}, 264},	{{1,0,0,0}, 0},	{{0,517,0,0}, 0},
{{0,0,0,517}, 0},	{{1,1,1,1}, 0},	{{0,0,0,516}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,513}, 0},	{{0,0,0,513}, 0},
{{1,-6790,-6790,-6790}, 0},	{{1,-6790,-6790,-6790}, 0},	{{1,1,511,-875}, 0},
{{1,-6790,-6790,-6790}, 0},	{{1,1,1,1}, 0},	{{-875,-875,511,-875}, 0},
{{1,-10286,-10286,-10286}, 0},	{{1,1,1,1}, 0},	{{-468,-9280,0,0}, 0},
{{0,0,0,508}, 0},	{{-10291,-10291,-10291,508}, 0},	{{1,1,1,1}, 0},
{{0,0,0,507}, 0},	{{0,0,0,507}, 0},	{{0,0,0,507}, 0},
{{0,0,0,507}, 0},	{{0,0,0,507}, 0},	{{1,-6927,-6927,-6927}, 0},
{{-6927,-6927,-6927,-6927}, 311},	{{1,1,1,1}, 0},	{{1,505,-820,-820}, 0},
{{-2155,-2155,-2155,505}, 0},	{{-804,-2156,-2156,-2156}, 0},	{{-2154,-3933,-3933,1}, 0},
{{0,0,0,503}, 0},	{{0,0,0,503}, 0},	{{0,0,0,503}, 0},
{{0,0,0,504}, 0},	{{0,0,0,504}, 0},	{{0,0,0,504}, 0},
{{0,0,0,505}, 0},	{{0,0,0,506}, 0},	{{0,0,506,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 312},
{{0,16,0,0}, 0},	{{1,1,1,1}, 0},	{{0,501,0,0}, 0},
{{0,1,0,0}, 287},	{{0,0,0,500}, 0},	{{1,0,0,0}, 0},
{{1,1,1,499}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,499}, 0},
{{1,1,1,1}, 0},	{{1,0,499,0}, 0},	{{0,0,0,499}, 0},
{{0,0,0,499}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,496}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 288},	{{-787,0,0,0}, 0},	{{0,0,0,493}, 0},
{{0,0,0,493}, 0},	{{0,0,0,493}, 0},	{{0,0,0,493}, 0},
{{1,-776,0,0}, 0},	{{0,0,0,0}, 286},	{{1,1,1,1}, 0},
{{0,0,0,490}, 0},	{{0,0,0,490}, 0},	{{0,0,0,0}, 335},
{{1,0,1,0}, 0},	{{0,0,0,0}, 196},	{{1,1,0,0}, 0},
{{0,0,0,486}, 0},	{{-2095,-6985,21,-6985}, 0},	{{1,-6985,486,-6985}, 0},
{{1,1,1,1}, 0},	{{-6985,485,-6985,-6985}, 0},	{{0,0,0,485}, 0},
{{1,-3174,-3174,-3174}, 0},	{{1,-3174,-3174,-3174}, 0},	{{1,-3174,-3174,-3174}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-4215,-4215,-4215,480}, 0},
{{1,-3622,-3622,-3622}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3622,-3622,-3622,476}, 0},	{{0,0,0,476}, 0},
{{-7001,-7001,-7001,-7001}, 84},	{{-7005,-7005,466,-7005}, 0},	{{1,1,1,1}, 0},
{{-1682,475,-1682,-1682}, 0},	{{-6462,-6462,-6462,-6462}, 83},	{{1,1,1,1}, 53},
{{-1678,476,-1678,-1678}, 0},	{{1,-2077,-2077,-2077}, 0},	{{1,-2077,-2077,-2077}, 0},
{{1,-2077,-2077,-2077}, 0},	{{1,1,-4237,-4237}, 0},	{{-4237,-4237,-4237,-4237}, 192},
{{0,0,0,476}, 0},	{{1,1,1,1}, 0},	{{1,-6471,-7016,-7016}, 0},
{{1,1,1,1}, 53},	{{-1662,473,-1662,-1662}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 195},	{{-4243,-4243,-4243,475}, 0},
{{1,-5415,-5415,-5415}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-5415}, 0},
{{1,1,1,1}, 0},	{{-2409,-2409,-2409,477}, 0},	{{-4250,-4250,-4250,477}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 188},	{{1,-1998,-1998,-1998}, 0},
{{1,-1998,-1998,-1998}, 0},	{{1,-1998,-1998,-1998}, 0},	{{-4259,-4259,-4259,472}, 0},
{{1,1,1,-4255}, 0},	{{1,-4255,-4255,-4255}, 0},	{{1,1,1,1}, 0},
{{1,-4255,-4255,-4255}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1997,466,-1997,-1997}, 0},	{{-4262,-4262,-4262,-4262}, 20},	{{1,-3657,-3657,-3657}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3657}, 0},	{{1,1,1,1}, 0},
{{-2429,-2429,-2429,467}, 0},	{{0,0,0,467}, 0},	{{0,467,0,0}, 0},
{{0,0,0,467}, 0},	{{0,0,0,467}, 0},	{{0,0,0,467}, 0},
{{0,0,0,467}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,-743}, 241},	{{0,0,0,466}, 0},	{{1,-1944,-1944,0}, 0},
{{1,0,0,0}, 0},	{{0,467,-1944,0}, 231},	{{1,0,0,0}, 0},
{{0,0,0,0}, 245},	{{0,0,0,472}, 0},	{{0,0,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,470}, 0},	{{0,0,0,470}, 0},
{{0,0,0,470}, 0},	{{0,0,0,470}, 0},	{{0,0,0,0}, 219},
{{1,1,0,0}, 0},	{{0,0,0,468}, 0},	{{0,0,0,468}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-607,20,98,466}, 0},
{{0,0,0,466}, 0},	{{0,0,0,471}, 0},	{{1,1,1,1}, 129},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,473}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,468}, 0},	{{0,0,0,468}, 0},
{{0,0,0,468}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,465,0,0}, 0},	{{0,0,0,465}, 0},
{{0,0,0,469}, 0},	{{1,-9986,-9986,-9986}, 0},	{{-9986,-9986,473,-9986}, 0},
{{-9980,-9980,-9980,477}, 0},	{{1,-8582,0,0}, 0},	{{1,1,1,1}, 158},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,477}, 0},
{{1,-8596,0,0}, 0},	{{1,1,1,1}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,473,473,473}, 0},	{{1,0,0,0}, 0},
{{1,-1090,-1090,-1090}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,473}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,470}, 0},
{{0,0,0,470}, 0},	{{1,-647,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,467,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,464,0,0}, 0},
{{0,0,0,0}, 129},	{{-10023,-10023,-10023,463}, 0},	{{-10024,-10024,-10024,476}, 0},
{{1,-8626,0,0}, 0},	{{1,1,1,1}, 5},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 173},	{{0,2,0,0}, 0},
{{0,1,-741,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 164},
{{0,0,0,472}, 0},	{{0,0,0,472}, 0},	{{1,-8643,0,0}, 0},
{{-716,-716,-716,-716}, 45},	{{1,-8645,0,0}, 0},	{{1,0,0,0}, 5},
{{0,0,0,0}, 157},	{{0,0,0,467}, 0},	{{0,0,0,467}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-76,-76,-76}, 0},
{{-1780,2,-1780,0}, 0},	{{-1787,387,0,0}, 0},	{{-1781,-1781,-1781,-1781}, 117},
{{0,0,0,0}, 115},	{{0,0,0,460}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 141},	{{0,0,0,451}, 0},
{{0,0,0,460}, 0},	{{0,0,0,0}, 130},	{{0,0,0,461}, 0},
{{0,0,0,461}, 0},	{{-688,-688,-688,-688}, 49},	{{1,1,1,1}, 0},
{{0,0,0,461}, 0},	{{0,0,0,0}, 121},	{{1,1,1,1}, 0},
{{1,-8528,0,0}, 0},	{{-9005,-9005,-9005,459}, 0},	{{0,0,0,0}, 85},
{{0,0,0,458}, 0},	{{0,0,0,460}, 0},	{{-10251,-10251,-10251,460}, 0},
{{0,0,0,460}, 0},	{{0,0,0,460}, 0},	{{0,0,0,462}, 0},
{{0,0,0,462}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 102},
{{0,0,0,460}, 0},	{{0,0,0,460}, 0},	{{0,0,0,463}, 0},
{{0,0,0,463}, 0},	{{0,0,0,463}, 0},	{{0,0,0,463}, 0},
{{0,0,0,463}, 0},	{{1,1,1,1}, 0},	{{0,0,0,462}, 0},
{{1,-8698,0,0}, 0},	{{0,0,0,0}, 41},	{{1,1,1,1}, 0},
{{0,0,0,467}, 0},	{{0,0,0,467}, 0},	{{0,0,0,467}, 0},
{{-10103,-10103,-10103,467}, 0},	{{1,1,1,1}, 0},	{{0,0,0,469}, 0},
{{0,0,0,470}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,470,0,0}, 0},	{{0,0,0,480}, 0},	{{0,0,0,480}, 0},
{{0,0,0,480}, 0},	{{0,0,0,480}, 0},	{{0,0,0,480}, 0},
{{0,0,0,480}, 0},	{{0,0,0,480}, 0},	{{0,0,0,481}, 0},
{{0,0,0,481}, 0},	{{1,1,1,1}, 0},	{{0,0,0,480}, 0},
{{-10667,-10667,-10667,480}, 0},	{{0,0,0,480}, 0},	{{0,0,0,480}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-539}, 0},	{{1,1,0,0}, 0},
{{0,0,0,480}, 0},	{{0,0,0,480}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,471,0,0}, 0},
{{0,0,471,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,482,0,0}, 0},
{{0,0,0,0}, 517},	{{1,0,0,0}, 0},	{{0,0,0,480}, 0},
{{0,0,0,480}, 0},	{{0,0,0,480}, 0},	{{1,1,1,1}, 0},
{{0,0,480,0}, 0},	{{0,0,0,490}, 0},	{{0,0,0,490}, 0},
{{0,0,0,491}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 499},	{{1,0,0,0}, 0},
{{0,0,0,0}, 504},	{{1,-7577,-7577,-7577}, 0},	{{1,1,-621,-621}, 0},
{{1,1,-621,-621}, 0},	{{1,1,-621,-621}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-7577,-7577,-7577}, 0},	{{1,-7577,-7577,-7577}, 0},
{{-7577,-7577,-7577,477}, 0},	{{0,0,0,477}, 0},	{{0,0,0,477}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 489},	{{1,0,0,0}, 0},
{{0,0,0,0}, 479},	{{0,0,473,0}, 0},	{{0,0,0,474}, 0},
{{0,0,0,477}, 0},	{{0,0,0,479}, 0},	{{0,0,0,479}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 534},
{{0,0,0,476}, 0},	{{-460,0,0,0}, 0},	{{0,0,0,476}, 0},
{{0,0,0,476}, 0},	{{0,0,0,476}, 0},	{{0,0,0,0}, 465},
{{1,476,0,0}, 0},	{{0,0,0,0}, 440},	{{0,0,0,475}, 0},
{{-5142,-5142,-5142,476}, 0},	{{0,0,0,478}, 0},	{{0,0,0,0}, 427},
{{0,0,0,484}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 476},	{{0,478,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,467}, 0},
{{0,0,0,467}, 0},	{{-536,0,0,0}, 0},	{{0,0,467,0}, 0},
{{0,0,0,469}, 0},	{{0,0,0,0}, 404},	{{1,1,1,1}, 0},
{{0,0,0,467}, 0},	{{0,0,0,467}, 0},	{{0,0,0,467}, 0},
{{0,0,0,475}, 0},	{{-523,475,-523,-523}, 0},	{{0,0,0,475}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,470}, 0},
{{1,0,0,0}, 0},	{{0,0,0,470}, 0},	{{1,-19,0,0}, 0},
{{0,0,0,0}, 423},	{{1,0,0,0}, 0},	{{0,0,0,0}, 406},
{{0,0,0,467}, 0},	{{0,0,0,467}, 0},	{{1,0,0,0}, 0},
{{-497,-497,-497,-497}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-516,-516,0,0}, 0},	{{-516,0,0,0}, 385},
{{0,0,0,460}, 0},	{{0,0,0,460}, 0},	{{1,1,1,1}, 0},
{{0,0,0,461}, 0},	{{0,0,0,461}, 0},	{{1,1,1,1}, 0},
{{0,0,0,460}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,456}, 0},
{{1,-4621,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,449}, 0},	{{0,0,0,0}, 269},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,439}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-1402,-1402}, 0},	{{-1402,-1402,-1402,436}, 0},
{{0,0,0,0}, 263},	{{0,0,0,435}, 0},	{{1,1,1,1}, 0},
{{0,0,0,435}, 0},	{{0,0,0,435}, 0},	{{0,0,0,435}, 0},
{{1,-4522,-4522,-4522}, 0},	{{1,1,1,1}, 0},	{{-1385,-1385,434,-1385}, 0},
{{-1385,-1385,-1385,-1385}, 160},	{{0,0,0,433}, 0},	{{-10798,-10798,-10798,433}, 0},
{{0,0,0,433}, 0},	{{0,0,0,433}, 0},	{{0,0,0,433}, 0},
{{0,0,0,433}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 311},
{{-1307,-2659,-2659,1}, 0},	{{0,0,0,430}, 0},	{{0,0,0,430}, 0},
{{0,0,0,430}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 325},
{{0,0,0,428}, 0},	{{0,0,0,429}, 0},	{{1,0,429,0}, 0},
{{0,0,0,0}, 318},	{{1,1,3,0}, 0},	{{0,0,427,0}, 0},
{{0,0,434,0}, 0},	{{0,0,0,0}, 314},	{{0,0,0,433}, 0},
{{0,0,0,433}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-497,0,427,0}, 0},	{{0,0,0,427}, 0},
{{0,0,0,427}, 0},	{{0,0,0,427}, 0},	{{0,0,0,427}, 0},
{{0,0,0,427}, 0},	{{0,0,0,427}, 0},	{{0,0,0,427}, 0},
{{0,0,427,0}, 293},	{{0,427,0,0}, 0},	{{0,0,0,427}, 0},
{{1,1,1,1}, 0},	{{0,0,0,426}, 0},	{{-7470,-7470,-7470,-7470}, 83},
{{-462,-462,-462,-462}, 0},	{{0,0,0,424}, 0},	{{1,-4694,-4694,-4694}, 0},
{{1,-4694,-4694,-4694}, 0},	{{1,1,1,1}, 0},	{{-4694,422,-4694,-4694}, 0},
{{0,0,0,426}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,424}, 0},	{{1,-2156,-2156,-2156}, 0},	{{1,-2156,-2156,-2156}, 0},
{{1,-2156,-2156,-2156}, 0},	{{-4708,-4708,-4708,421}, 0},	{{1,-2153,-2153,-2153}, 0},
{{1,-2153,-2153,-2153}, 0},	{{1,-2153,-2153,-2153}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4712,-4712,-4712,416}, 0},	{{0,0,416,0}, 0},
{{1,-2134,-2134,-2134}, 0},	{{1,-2134,-2134,-2134}, 0},	{{1,-2134,-2134,-2134}, 0},
{{1,1,1,1}, 0},	{{1,1,-4719,-4719}, 0},	{{-4719,-4719,-4719,412}, 0},
{{1,1,1,1}, 0},	{{1,1,-4717,-4717}, 0},	{{1,1,1,1}, 0},
{{1,1,-4717,-4717}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2093,406,-2093,-2093}, 0},	{{-2885,-2885,-2885,412}, 0},	{{-4726,-4726,-4726,412}, 0},
{{-4730,-4730,-4730,413}, 0},	{{1,-2462,-2462,-2462}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2462}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2893}, 0},	{{-2893,-2893,-2893,407}, 0},	{{-2895,-2895,-2895,407}, 0},
{{0,0,0,407}, 0},	{{0,0,0,0}, 184},	{{0,0,0,406}, 0},
{{0,0,0,406}, 0},	{{0,0,0,406}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 241},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,402}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,402}, 0},	{{0,0,0,402}, 0},
{{0,0,0,0}, 236},	{{0,0,0,403}, 0},	{{0,0,0,405}, 0},
{{0,0,0,0}, 220},	{{0,0,0,407}, 0},	{{0,0,0,407}, 0},
{{-1197,409,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,404}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,399,0,0}, 0},
{{0,0,0,399}, 0},	{{0,0,0,399}, 0},	{{0,0,0,399}, 0},
{{0,0,0,399}, 0},	{{0,0,0,0}, 117},	{{1,0,0,0}, 0},
{{1,1,1,-2342}, 0},	{{1,400,402,400}, 0},	{{1,400,-1151,0}, 0},
{{-2342,-2342,-2342,-2342}, 171},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,395,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-10458}, 0},
{{1,1,1,-10458}, 0},	{{1,1,1,1}, 0},	{{-10458,-10458,-10458,392}, 0},
{{1,-9058,0,0}, 0},	{{1,1,1,1}, 158},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,379}, 0},	{{0,0,0,379}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,371}, 0},
{{0,0,0,371}, 0},	{{0,0,0,371}, 0},	{{0,0,0,371}, 0},
{{0,0,0,0}, 178},	{{0,0,0,0}, 177},	{{1,-9087,0,0}, 0},
{{1,1,1,1}, 5},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,359}, 0},	{{1,-9101,0,0}, 0},	{{1,0,0,0}, 5},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 174},	{{0,0,0,347}, 0},	{{0,0,0,347}, 0},
{{0,0,0,347}, 0},	{{0,0,0,347}, 0},	{{0,0,0,347}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,340}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,338,0}, 0},	{{0,0,0,338}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 122},	{{1,1,1,1}, 0},
{{0,0,0,334}, 0},	{{-9463,334,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 82},	{{0,0,0,0}, 74},
{{-443,-9013,0,0}, 0},	{{0,0,0,329}, 0},	{{1,329,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,330,0}, 0},	{{0,0,0,330}, 0},
{{0,0,0,330}, 0},	{{0,0,0,330}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,332,0,0}, 0},
{{0,0,0,335}, 0},	{{0,0,0,335}, 0},	{{0,0,0,335}, 0},
{{0,0,0,335}, 0},	{{0,0,0,339}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,331}, 0},	{{0,0,0,331}, 0},
{{0,0,0,340}, 0},	{{0,0,0,342}, 0},	{{1,-9171,0,0}, 0},
{{1,0,0,0}, 5},	{{1,0,0,0}, 0},	{{0,0,0,339}, 0},
{{1,1,1,1}, 0},	{{0,0,0,339}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,337,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,337,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,337}, 0},	{{0,0,0,337}, 0},	{{0,0,0,337}, 0},
{{0,0,0,337}, 0},	{{0,0,0,337}, 0},	{{0,0,0,337}, 0},
{{0,0,0,337}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 29},
{{0,0,0,335}, 0},	{{0,0,0,335}, 0},	{{0,0,0,350}, 0},
{{-11146,-11146,-11146,350}, 0},	{{0,0,0,350}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,341}, 0},
{{0,0,0,341}, 0},	{{0,0,0,341}, 0},	{{0,0,341,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 527},	{{0,0,0,0}, 516},	{{0,0,0,338}, 0},
{{0,0,0,338}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 532},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 531},	{{0,0,0,325}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 512},	{{0,0,0,323}, 0},
{{-8053,-8053,-8053,323}, 0},	{{0,0,0,323}, 0},	{{0,0,0,323}, 0},
{{1,1,1,1}, 0},	{{0,324,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,322}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{0,325,0,0}, 0},
{{0,0,0,325}, 0},	{{0,0,0,325}, 0},	{{1,1,1,1}, 0},
{{0,0,0,324}, 0},	{{0,0,0,324}, 0},	{{0,0,0,324}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 466},	{{0,0,0,0}, 442},
{{1,0,0,0}, 0},	{{0,0,0,0}, 435},	{{1,1,1,1}, 0},
{{1,-5617,0,0}, 0},	{{0,0,0,0}, 434},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 430},	{{1,0,0,0}, 0},	{{0,0,0,0}, 477},
{{0,313,0,0}, 0},	{{0,0,0,315}, 0},	{{1,1,0,0}, 0},
{{0,0,0,314}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,314,0,0}, 0},	{{0,0,0,314}, 0},	{{0,0,0,314}, 0},
{{0,0,0,314}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 419},	{{0,305,0,0}, 0},	{{0,0,0,305}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 413},	{{1,0,0,0}, 0},	{{0,0,0,300}, 0},
{{1,1,1,1}, 0},	{{0,0,0,300}, 0},	{{0,0,0,300}, 0},
{{0,0,0,0}, 374},	{{0,0,0,299}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,297}, 0},	{{0,0,0,298}, 0},
{{0,0,0,298}, 0},	{{0,0,0,298}, 0},	{{-454,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,312,0}, 0},	{{0,0,0,313}, 0},
{{-1837,-1837,-1837,-1837}, 264},	{{1,0,0,0}, 0},	{{0,0,0,0}, 262},
{{0,0,0,310}, 0},	{{0,0,0,310}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 259},	{{-1818,-1818,-1818,-1818}, 161},	{{0,0,0,308}, 0},
{{-11230,-11230,-11230,321}, 0},	{{0,0,0,0}, 253},	{{0,0,0,324}, 0},
{{0,0,0,324}, 0},	{{0,0,0,339}, 0},	{{0,0,0,339}, 0},
{{0,0,0,339}, 0},	{{-424,0,-424,0}, 0},	{{1,-423,3,0}, 0},
{{0,0,3,0}, 318},	{{-427,0,336,0}, 0},	{{0,0,0,0}, 319},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,328}, 0},	{{0,0,0,0}, 316},
{{0,0,0,327}, 0},	{{0,0,0,329}, 0},	{{0,0,0,329}, 0},
{{0,0,0,329}, 0},	{{0,0,0,329}, 0},	{{0,0,0,0}, 305},
{{0,0,0,328}, 0},	{{0,0,0,331}, 0},	{{0,0,331,0}, 0},
{{0,0,0,0}, 293},	{{0,0,0,0}, 294},	{{0,0,0,329}, 0},
{{0,0,0,329}, 0},	{{0,0,0,333}, 0},	{{1,0,0,0}, 0},
{{0,0,332,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1425,328,-1425,-1425}, 0},
{{0,0,0,334}, 0},	{{0,0,0,0}, 203},	{{-5128,-5128,-5128,333}, 0},
{{-5127,-5127,-5127,333}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 193},
{{-5130,-5130,-5130,331}, 0},	{{1,-2498,-2498,-2498}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2498}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3295,-3295,-3295,325}, 0},	{{-3296,-3296,-3296,325}, 0},
{{1,-5137,-5137,-5137}, 0},	{{-5137,-5137,-5137,-5137}, 188},	{{-5142,-5142,-5142,328}, 0},
{{-3299,-3299,-3299,328}, 0},	{{-3301,-3301,-3301,328}, 0},	{{0,0,0,328}, 0},
{{0,0,0,329}, 0},	{{0,0,0,331}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 182},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 240},	{{0,0,0,320}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 244},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 232},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,311,0,0}, 0},
{{0,0,0,311}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,312}, 0},	{{0,0,0,0}, 150},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 149},	{{0,0,0,309}, 0},
{{0,0,0,310}, 0},	{{0,0,0,310}, 0},	{{0,0,0,310}, 0},
{{1,0,0,0}, 0},	{{1,1,1,-1552}, 0},	{{1,308,1,308}, 0},
{{1,1,-1548,0}, 0},	{{0,0,0,0}, 172},	{{1,1,0,0}, 0},
{{0,0,0,0}, 171},	{{-1,-1,-1552,0}, 0},	{{1,0,0,0}, 0},
{{0,302,0,0}, 0},	{{-10849,-10849,-10849,302}, 0},	{{0,0,0,302}, 0},
{{0,0,0,302}, 0},	{{0,0,0,302}, 0},	{{0,0,0,302}, 0},
{{0,0,0,302}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,299,0,0}, 0},	{{0,0,0,304}, 0},
{{0,0,0,304}, 0},	{{0,0,0,304}, 0},	{{0,0,0,308}, 0},
{{0,0,0,308}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 114},	{{0,0,0,320}, 0},	{{0,320,0,0}, 0},
{{0,0,0,325}, 0},	{{0,0,0,329}, 0},	{{0,0,0,329}, 0},
{{0,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,327,0}, 0},	{{0,0,327,0}, 0},	{{0,0,0,332}, 0},
{{0,0,0,334}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,333,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 103},	{{0,0,0,330}, 0},
{{0,0,0,334}, 0},	{{0,0,0,338}, 0},	{{1,0,333,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,328,0}, 0},
{{0,0,0,0}, 97},	{{0,0,0,337}, 0},	{{0,0,0,339}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,330}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 40},	{{0,0,0,327}, 0},	{{1,1,1,1}, 0},
{{0,0,341,0}, 0},	{{0,0,0,342}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,332}, 0},	{{0,0,0,332}, 0},	{{0,0,0,332}, 0},
{{0,0,0,333}, 0},	{{0,0,0,333}, 0},	{{0,0,0,333}, 0},
{{0,0,0,333}, 0},	{{0,0,0,340}, 0},	{{0,0,0,355}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 23},	{{1,368,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,379}, 0},	{{1,305,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,379}, 0},	{{0,0,0,379}, 0},	{{-11495,-11495,-11495,-11495}, 14},
{{0,0,0,378}, 0},	{{0,0,0,397}, 0},	{{0,0,0,397}, 0},
{{0,397,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,383,0}, 0},	{{0,0,0,383}, 0},	{{0,0,0,383}, 0},
{{0,0,0,383}, 0},	{{0,0,0,383}, 0},	{{-8375,-8375,-8375,383}, 0},
{{0,0,0,383}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 489},
{{0,0,0,0}, 490},	{{1,1,1,1}, 0},	{{0,0,0,390}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,385}, 0},
{{0,0,0,385}, 0},	{{0,0,0,390}, 0},	{{0,0,0,390}, 0},
{{0,0,0,390}, 0},	{{0,0,0,390}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,383}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,381,0,0}, 0},	{{0,0,0,381}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 475},	{{0,0,379,0}, 0},
{{0,381,0,0}, 0},	{{0,0,0,0}, 420},	{{0,380,0,0}, 0},
{{0,0,0,380}, 0},	{{0,0,0,382}, 0},	{{1,1,1,1}, 0},
{{0,0,0,385}, 0},	{{0,0,0,385}, 0},	{{0,0,0,385}, 0},
{{0,0,0,396}, 0},	{{1,1,1,1}, 0},	{{0,0,0,395}, 0},
{{0,0,0,395}, 0},	{{0,0,0,395}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,394}, 0},	{{1,1,0,0}, 0},	{{0,0,0,394}, 0},
{{0,0,0,395}, 0},	{{0,395,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 260},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,380}, 0},
{{1,-10544,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 257},	{{0,0,0,375}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,236,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,105}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,367}, 0},	{{0,0,0,367}, 0},	{{0,0,0,367}, 0},
{{0,0,367,0}, 0},	{{0,0,0,0}, 321},	{{0,0,0,366}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,364,0,0}, 0},
{{0,0,0,364}, 0},	{{0,0,0,364}, 0},	{{0,0,0,364}, 0},
{{0,0,0,0}, 306},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,360,0}, 0},	{{0,0,360,0}, 0},
{{0,0,0,0}, 295},	{{0,0,0,368}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 282},	{{0,0,0,0}, 205},	{{0,0,366,0}, 0},
{{1,-1752,-1752,-1752}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1752}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3615,-3615,-3615,366}, 0},	{{0,0,0,366}, 0},	{{-5460,-5460,-5460,-5460}, 85},
{{-5459,-5459,-5459,365}, 0},	{{-5460,-5460,-5460,367}, 0},	{{-3619,-3619,-3619,367}, 0},
{{1,-3620,-3620,-3620}, 0},	{{1,-3620,-3620,-3620}, 0},	{{1,1,1,1}, 0},
{{1,-4884,-4884,-4884}, 0},	{{1,1,1,1}, 0},	{{-4884,-4884,-4884,362}, 0},
{{-5469,-5469,-5469,363}, 0},	{{-3626,-3626,-3626,363}, 0},	{{-3628,-3628,-3628,363}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 185},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 183},	{{0,0,0,0}, 14},
{{0,0,0,357}, 0},	{{0,0,0,0}, 239},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 249},
{{1,1,0,0}, 0},	{{0,0,0,0}, 151},	{{1,1,1,1}, 0},
{{0,0,0,349}, 0},	{{0,0,0,350}, 0},	{{0,0,0,350}, 0},
{{0,0,0,350}, 0},	{{-306,-306,0,0}, 0},	{{0,0,0,352}, 0},
{{-11150,-11150,-11150,353}, 0},	{{0,0,0,355}, 0},	{{0,0,0,355}, 0},
{{0,0,0,355}, 0},	{{0,0,0,355}, 0},	{{0,0,355,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,358}, 0},
{{0,0,0,358}, 0},	{{0,0,0,358}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 162},	{{0,0,0,354}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,346}, 0},
{{0,0,0,346}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,341}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,36,0}, 0},	{{0,0,0,0}, 96},
{{0,0,0,336}, 0},	{{1,1,1,1}, 0},	{{0,0,335,0}, 0},
{{0,0,0,0}, 111},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,331}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 109},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 112},
{{1,1,1,0}, 0},	{{0,0,0,0}, 104},	{{1,0,6,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 99},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 100},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 98},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 57},	{{0,0,0,303}, 0},
{{0,0,0,303}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 23},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,288}, 0},	{{1,1,0,0}, 0},
{{0,287,0,0}, 0},	{{0,0,0,290}, 0},	{{0,0,0,290}, 0},
{{0,0,0,290}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 23},
{{0,0,0,288}, 0},	{{0,0,0,295}, 0},	{{0,0,0,302}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 23},	{{1,301,294,294}, 0},
{{1,1,1,1}, 0},	{{1,1,1,304}, 0},	{{1,286,294,294}, 0},
{{1,-329,-329,-329}, 0},	{{-329,-329,-329,-329}, 30},	{{1,0,0,0}, 0},
{{1,1,1,1}, 23},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,-33,-33}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,288}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,273}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,261}, 0},	{{1,-73,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,251}, 0},	{{0,0,0,251}, 0},	{{0,0,0,0}, 15},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,231}, 0},	{{0,0,0,231}, 0},
{{0,0,0,231}, 0},	{{0,231,0,0}, 0},	{{0,0,0,0}, 528},
{{0,0,0,230}, 0},	{{0,0,0,230}, 0},	{{0,0,0,232}, 0},
{{0,0,0,242}, 0},	{{-8757,-8757,-8757,252}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,241,241,241}, 0},
{{1,1,0,0}, 494},	{{0,0,0,241}, 0},	{{0,0,0,241}, 0},
{{0,0,0,241}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,236}, 0},	{{0,236,0,0}, 0},	{{0,236,0,0}, 0},
{{0,0,0,0}, 533},	{{0,0,0,235}, 0},	{{0,0,0,235}, 0},
{{0,0,0,235}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 472},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 470},
{{0,0,0,230}, 0},	{{0,232,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 417},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 413},
{{0,0,0,0}, 414},	{{0,0,0,224}, 0},	{{0,0,0,224}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,213}, 0},
{{0,0,0,213}, 0},	{{0,0,0,218}, 0},	{{0,0,0,0}, 342},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,203}, 0},	{{1,1,1,1}, 0},	{{0,0,0,202}, 0},
{{1,1,1,1}, 0},	{{0,0,0,202}, 0},	{{0,0,0,0}, 267},
{{0,0,0,0}, 261},	{{0,0,0,200}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,125,118,118}, 0},	{{1,1,1,1}, 0},
{{1,1,1,84}, 0},	{{1,118,118,118}, 0},	{{1,-373,-373,-373}, 0},
{{-373,-373,-373,-373}, 30},	{{0,0,0,192}, 0},	{{0,0,0,0}, 252},
{{-1128,0,191,0}, 0},	{{0,0,0,0}, 330},	{{0,0,0,190}, 0},
{{0,0,0,190}, 0},	{{0,195,0,0}, 0},	{{0,0,0,195}, 0},
{{0,0,195,0}, 307},	{{0,0,0,0}, 290},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,185,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 285},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,174}, 0},
{{-3980,-3980,-3980,174}, 0},	{{0,174,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-5823,-5823,-5823}, 0},	{{-5823,-5823,-5823,-5823}, 82},	{{-5826,-5826,-5826,172}, 0},
{{-3985,-3985,-3985,172}, 0},	{{1,1,1,1}, 0},	{{-5245,-5245,-5245,171}, 0},
{{-5831,-5831,-5831,175}, 0},	{{-5252,-5252,-5252,176}, 0},	{{-3990,-3990,-3990,176}, 0},
{{0,0,0,178}, 0},	{{1,1,1,1}, 0},	{{0,0,0,179}, 0},
{{0,0,0,179}, 0},	{{0,0,0,183}, 0},	{{1,183,0,0}, 0},
{{1,1,1,1}, 145},	{{1,1,1,1}, 0},	{{-268,181,-268,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,180}, 0},	{{1,-10104,0,0}, 0},
{{1,0,0,0}, 5},	{{0,0,0,179}, 0},	{{0,0,0,180}, 0},
{{0,0,0,180}, 0},	{{0,0,0,181}, 0},	{{0,0,0,181}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,180}, 0},
{{0,0,0,180}, 0},	{{0,0,0,180}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 163},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,35,35,35}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,35,35,35}, 0},	{{1,-352,-352,-352}, 0},	{{-352,-352,-352,-352}, 30},
{{0,0,0,170}, 0},	{{0,0,0,170}, 0},	{{0,0,0,170}, 0},
{{0,0,0,0}, 123},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,167}, 0},	{{0,0,0,167}, 0},	{{0,0,0,167}, 0},
{{0,0,0,167}, 0},	{{0,0,0,167}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,164}, 0},
{{0,0,0,0}, 21},	{{0,0,0,163}, 0},	{{0,0,0,163}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 23},	{{1,9,9,9}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,9,9}, 0},
{{1,-310,-310,-310}, 0},	{{-310,-310,-310,-310}, 30},	{{1,0,0,0}, 0},
{{1,1,1,1}, 23},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 30},	{{1,0,0,0}, 0},	{{-7,-7,-7,-7}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-6}, 0},	{{1,-6,-6,-6}, 0},
{{1,-262,-262,-262}, 0},	{{-262,-262,-262,-262}, 30},	{{1,-17,-9,-9}, 0},
{{1,-254,-254,-254}, 0},	{{-254,-254,-254,-254}, 30},	{{0,0,0,137}, 0},
{{0,0,0,137}, 0},	{{0,0,0,137}, 0},	{{0,0,0,137}, 0},
{{0,0,0,137}, 0},	{{0,0,0,137}, 0},	{{0,0,0,137}, 0},
{{0,0,0,137}, 0},	{{0,0,139,0}, 0},	{{0,139,0,0}, 0},
{{1,1,1,1}, 0},	{{1,138,0,0}, 0},	{{-225,-225,-225,-225}, 515},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 494},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-239,-239,0,0}, 0},	{{-9008,-9008,-9008,115}, 0},	{{0,0,0,125}, 0},
{{0,0,0,125}, 0},	{{0,0,0,126}, 0},	{{0,0,0,126}, 0},
{{0,0,0,126}, 0},	{{0,0,0,127}, 0},	{{0,0,0,129}, 0},
{{0,0,0,130}, 0},	{{0,0,0,130}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 422},	{{0,0,0,0}, 418},
{{0,0,0,126}, 0},	{{0,0,0,0}, 410},	{{0,0,0,125}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 386},
{{1,0,0,0}, 0},	{{0,0,0,0}, 345},	{{0,0,0,117}, 0},
{{1,1,1,1}, 0},	{{0,0,0,116}, 0},	{{0,0,0,116}, 0},
{{0,0,0,121}, 0},	{{0,0,0,121}, 0},	{{0,0,0,0}, 332},
{{0,0,0,120}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,115}, 0},	{{0,0,0,115}, 0},	{{0,0,0,0}, 307},
{{0,0,0,0}, 308},	{{0,0,0,113}, 0},	{{0,0,0,113}, 0},
{{-4153,-4153,-4153,113}, 0},	{{1,0,0,0}, 184},	{{0,0,0,0}, 198},
{{-5997,-5997,-5997,113}, 0},	{{-5420,-5420,-5420,115}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-1100,-1100}, 0},
{{-1100,-1100,-1100,-1100}, 186},	{{1,1,-6005,-6005}, 0},	{{-6005,-6005,-6005,-6005}, 185},
{{-5427,-5427,-5427,108}, 0},	{{1,1,1,-5429}, 0},	{{1,-5429,-5429,-5429}, 0},
{{-5429,-5429,-5429,-5429}, 182},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,105,0}, 0},	{{0,0,0,105}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,-445,0}, 0},
{{0,0,0,0}, 153},	{{1,1,0,0}, 0},	{{0,0,0,0}, 145},
{{0,0,0,0}, 146},	{{1,1,1,1}, 0},	{{0,0,0,96}, 0},
{{1,1,1,1}, 0},	{{0,0,0,95}, 0},	{{0,0,0,95}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 168},	{{0,0,0,94}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,94,94,94}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,94,94,94}, 0},
{{1,-519,-519,-519}, 0},	{{-519,-519,-519,-519}, 166},	{{0,0,0,93}, 0},
{{0,0,0,93}, 0},	{{0,0,0,93}, 0},	{{0,0,0,100}, 0},
{{0,0,0,100}, 0},	{{0,0,0,100}, 0},	{{0,0,0,100}, 0},
{{0,0,0,100}, 0},	{{0,0,0,100}, 0},	{{0,0,0,100}, 0},
{{0,0,0,100}, 0},	{{0,0,0,100}, 0},	{{0,0,0,100}, 0},
{{0,0,0,100}, 0},	{{0,0,0,102}, 0},	{{0,0,0,102}, 0},
{{0,0,0,102}, 0},	{{0,0,0,102}, 0},	{{0,0,0,102}, 0},
{{0,0,0,102}, 0},	{{0,0,0,102}, 0},	{{1,1,1,1}, 0},
{{1,4,0,0}, 0},	{{-119,-119,-119,-119}, 515},	{{0,0,0,100}, 0},
{{0,0,0,105}, 0},	{{0,0,0,0}, 515},	{{1,1,1,-136}, 0},
{{1,-9122,-9122,-9122}, 0},	{{1,1,1,1}, 0},	{{1,1,-136,-136}, 0},
{{1,1,-136,-136}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-9122,-9122,-9122}, 0},
{{-9122,-9122,-9122,-9122}, 494},	{{0,0,0,97}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 538},	{{0,0,0,95}, 0},	{{0,0,0,95}, 0},
{{1,1,1,1}, 0},	{{0,94,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 535},	{{1,0,0,0}, 0},
{{0,90,0,0}, 0},	{{0,0,0,91}, 0},	{{0,0,0,91}, 0},
{{0,0,0,0}, 411},	{{0,0,0,90}, 0},	{{0,0,0,90}, 0},
{{0,0,0,90}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 266},	{{0,0,0,84}, 0},	{{0,0,0,84}, 0},
{{0,0,0,84}, 0},	{{0,0,0,86}, 0},	{{0,0,0,86}, 0},
{{0,0,0,86}, 0},	{{0,0,0,86}, 0},	{{1,1,1,1}, 0},
{{1,-5529,-5529,-5529}, 0},	{{-5529,-5529,-5529,-5529}, 114},	{{1,1,1,1}, 0},
{{1,-6109,-6109,-6109}, 0},	{{-6109,-6109,-6109,-6109}, 109},	{{-5534,-5534,-5534,80}, 0},
{{1,1,1,1}, 0},	{{1,-5534,-5534,-5534}, 0},	{{-5534,-5534,-5534,-5534}, 183},
{{0,0,0,79}, 0},	{{0,0,0,86}, 0},	{{0,0,0,86}, 0},
{{0,0,0,86}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 169},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 166},	{{0,0,0,77}, 0},
{{0,0,0,77}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 175},
{{0,0,0,69}, 0},	{{0,0,69,0}, 0},	{{0,0,0,69}, 0},
{{0,0,0,69}, 0},	{{0,0,0,71}, 0},	{{0,0,0,71}, 0},
{{0,0,0,73}, 0},	{{0,0,0,74}, 0},	{{0,0,0,74}, 0},
{{0,0,0,74}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 32},	{{0,0,0,73}, 0},	{{0,0,0,73}, 0},
{{0,0,0,73}, 0},	{{0,0,0,73}, 0},	{{0,0,0,73}, 0},
{{0,0,0,73}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 13},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,66}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,62,0,0}, 0},	{{0,0,0,62}, 0},
{{0,0,0,62}, 0},	{{0,0,0,63}, 0},	{{0,63,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,63,0}, 0},	{{0,0,0,70}, 0},
{{0,0,0,70}, 0},	{{0,0,0,70}, 0},	{{0,0,0,70}, 0},
{{0,0,0,70}, 0},	{{0,0,0,70}, 0},	{{0,0,0,72}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 317},
{{0,0,0,69}, 0},	{{0,0,0,0}, 300},	{{0,0,0,68}, 0},
{{0,0,0,68}, 0},	{{1,1,1,1}, 0},	{{1,1,-5613,-5613}, 0},
{{-5613,-5613,-5613,-5613}, 57},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,58}, 0},
{{0,0,0,0}, 148},	{{0,0,0,57}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 167},	{{0,0,0,64}, 0},	{{0,0,0,64}, 0},
{{0,0,0,68}, 0},	{{0,0,0,0}, 140},	{{0,0,0,67}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,66}, 0},
{{0,0,0,67}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 55},	{{1,0,0,0}, 0},	{{0,0,0,0}, 35},
{{0,0,0,73}, 0},	{{0,0,0,73}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 33},	{{0,0,0,70}, 0},
{{0,0,0,70}, 0},	{{0,0,0,70}, 0},	{{0,0,0,70}, 0},
{{0,0,0,70}, 0},	{{0,0,0,70}, 0},	{{0,0,0,70}, 0},
{{0,0,0,0}, 520},	{{0,0,0,69}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 536},	{{0,0,0,67}, 0},	{{1,1,1,1}, 0},
{{0,66,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,59}, 0},
{{0,0,0,60}, 0},	{{0,0,0,0}, 473},	{{0,0,0,59}, 0},
{{0,0,0,59}, 0},	{{0,0,0,0}, 340},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 256},	{{0,0,0,55}, 0},
{{0,0,0,55}, 0},	{{0,0,0,55}, 0},	{{0,0,0,55}, 0},
{{0,0,0,56}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 170},	{{0,0,0,46}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 179},	{{0,0,0,42}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 139},	{{1,0,0,0}, 0},
{{0,0,0,0}, 142},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,27}, 0},	{{0,0,0,27}, 0},	{{0,0,0,27}, 0},
{{0,0,0,27}, 0},	{{0,0,0,27}, 0},	{{0,0,0,27}, 0},
{{0,0,0,27}, 0},	{{0,0,0,27}, 0},	{{0,0,0,44}, 0},
{{0,0,0,44}, 0},	{{0,0,0,44}, 0},	{{0,44,0,0}, 0},
{{0,0,0,44}, 0},	{{1,1,1,1}, 0},	{{0,0,0,43}, 0},
{{0,0,0,43}, 0},	{{0,0,0,44}, 0},	{{0,0,0,44}, 0},
{{0,0,0,44}, 0},	{{0,0,0,45}, 0},	{{0,0,0,45}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 200},	{{0,0,0,43}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 180},	{{0,0,0,41}, 0},
{{0,0,0,42}, 0},	{{0,0,0,42}, 0},	{{0,0,0,43}, 0},
{{0,0,0,43}, 0},	{{0,0,0,44}, 0},	{{0,0,0,61}, 0},
{{0,0,0,62}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 25},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,46}, 0},	{{0,0,0,46}, 0},	{{0,0,0,47}, 0},
{{0,0,0,47}, 0},	{{0,0,0,0}, 537},	{{0,0,0,48}, 0},
{{0,0,0,48}, 0},	{{1,1,1,1}, 0},	{{0,0,48,0}, 0},
{{0,0,0,55}, 0},	{{0,0,0,59}, 0},	{{1,0,0,0}, 0},
{{-27,-27,-27,-27}, 155},	{{0,58,0,0}, 0},	{{0,0,0,0}, 296},
{{0,0,0,57}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 155},
{{0,0,0,55}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 24},
{{0,0,0,53}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 28},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,35}, 0},
{{1,0,0,0}, 0},	{{-58,-58,-58,-58}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 25},	{{0,0,0,31}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 12},	{{0,0,0,29}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 495},	{{0,0,0,27}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 542},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,18}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,14,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 343},	{{0,0,0,0}, 299},
{{0,0,0,11}, 0},	{{0,0,0,11}, 0},	{{1,0,0,0}, 0},
{{0,0,0,10}, 0},	{{0,0,0,11}, 0},	{{0,0,0,11}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 526},	{{0,0,0,9}, 0},
{{0,0,0,9}, 0},	{{0,0,0,0}, 402},	{{0,0,0,8}, 0},
{{0,0,0,8}, 0},	{{1,1,1,1}, 0},	{{0,0,0,7}, 0},
{{0,0,0,15}, 0},	{{0,0,0,15}, 0},	{{0,0,0,15}, 0},
{{0,0,0,15}, 0},	{{0,0,0,15}, 0},	{{0,0,0,16}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,8}, 0},
{{0,0,0,8}, 0},	{{0,0,0,8}, 0},	{{0,0,0,8}, 0},
{{0,0,0,8}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 247},
{{0,0,0,6}, 0},	{{0,0,0,6}, 0},	{{0,0,0,6}, 0},
{{0,0,0,6}, 0},	{{0,0,0,6}, 0},	{{0,0,0,7}, 0},
{{0,0,7,0}, 0},	{{0,0,0,7}, 0},	{{0,0,0,7}, 0},
{{0,0,0,7}, 0},	{{1,1,1,1}, 0},	{{0,0,0,6}, 0},
{{0,0,0,8}, 0},	{{0,0,0,0}, 110},	{{0,0,0,7}, 0},
{{0,0,0,7}, 0},	{{0,0,0,7}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,5,0,0}, 0},	{{0,0,0,5}, 0},
{{0,0,0,5}, 0},	{{0,0,0,5}, 0},	{{0,0,0,5}, 0},
{{0,0,0,0}, 539},	{{0,0,0,5}, 0},	{{0,0,0,5}, 0},
{{0,0,0,5}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 26},
{{0,0,0,4}, 0},	{{0,0,0,12}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 27},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 540},	{{0,0,0,1}, 0},	{{0,0,0,1}, 0},
{{0,0,0,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 34},	};

static const attrib_rt_t idx_owl_defendpat[543] = {
{-1,0},	{267,0},	{272,1},	{192,2},
{439,0},	{436,0},	{377,0},	{410,6},
{411,7},	{365,0},	{403,0},	{440,10},
{25,0},	{202,0},	{366,0},	{48,0},
{402,0},	{400,16},	{401,17},	{440,0},
{195,0},	{289,0},	{427,0},	{353,0},
{354,0},	{412,24},	{17,0},	{75,0},
{355,24},	{101,0},	{419,0},	{15,0},
{58,31},	{58,0},	{31,0},	{108,0},
{40,5},	{22,0},	{40,0},	{64,0},
{211,0},	{230,5},	{218,0},	{390,0},
{378,0},	{44,5},	{44,0},	{398,0},
{37,0},	{64,48},	{179,0},	{183,50},
{180,0},	{198,0},	{51,0},	{104,0},
{49,0},	{73,0},	{434,0},	{373,0},
{376,59},	{369,60},	{367,61},	{416,0},
{361,0},	{360,0},	{370,0},	{371,66},
{374,67},	{400,68},	{401,69},	{484,0},
{485,0},	{28,0},	{143,0},	{368,0},
{94,75},	{197,0},	{136,0},	{177,0},
{176,0},	{191,53},	{131,0},	{141,0},
{191,0},	{127,0},	{200,0},	{178,0},
{340,0},	{434,88},	{71,0},	{135,0},
{350,0},	{435,0},	{352,0},	{52,0},
{60,95},	{59,96},	{60,0},	{59,98},
{59,0},	{171,0},	{107,0},	{239,0},
{462,0},	{205,0},	{486,0},	{150,0},
{181,0},	{169,0},	{145,0},	{149,0},
{55,0},	{312,58},	{164,0},	{227,0},
{487,0},	{173,0},	{207,0},	{91,0},
{364,0},	{21,0},	{11,0},	{396,0},
{335,52},	{23,0},	{336,52},	{335,0},
{336,0},	{8,0},	{153,0},	{203,0},
{100,131},	{99,132},	{220,133},	{220,0},
{99,0},	{220,136},	{480,0},	{152,0},
{72,0},	{167,0},	{156,0},	{246,0},
{172,0},	{57,0},	{56,0},	{217,0},
{162,0},	{221,0},	{173,147},	{231,0},
{9,0},	{60,152},	{1,0},	{412,0},
{14,0},	{24,0},	{4,5},	{18,0},
{417,0},	{418,0},	{54,0},	{39,0},
{63,0},	{46,0},	{27,0},	{252,0},
{33,0},	{34,0},	{158,0},	{116,0},
{117,0},	{13,0},	{121,0},	{122,0},
{399,0},	{109,0},	{110,130},	{274,0},
{488,0},	{359,0},	{105,0},	{70,0},
{174,0},	{209,0},	{201,0},	{386,0},
{45,0},	{187,52},	{308,0},	{190,0},
{185,0},	{142,0},	{254,0},	{165,0},
{129,0},	{339,0},	{253,0},	{206,0},
{130,0},	{77,0},	{338,0},	{208,0},
{157,0},	{138,0},	{325,0},	{84,0},
{76,0},	{3,0},	{98,0},	{88,0},
{89,211},	{405,0},	{166,0},	{115,0},
{10,0},	{275,0},	{273,217},	{128,0},
{132,0},	{194,0},	{344,0},	{343,222},
{216,0},	{260,0},	{199,0},	{93,0},
{93,226},	{310,0},	{114,0},	{111,230},
{124,0},	{111,0},	{175,0},	{487,234},
{155,0},	{261,0},	{262,237},	{331,0},
{251,0},	{489,0},	{38,0},	{123,0},
{106,0},	{35,0},	{93,242},	{237,0},
{379,0},	{236,0},	{414,0},	{424,0},
{0,0},	{210,0},	{277,0},	{278,0},
{65,0},	{61,0},	{408,0},	{243,0},
{244,0},	{140,0},	{222,0},	{479,0},
{112,0},	{184,0},	{470,0},	{5,0},
{337,0},	{238,0},	{188,0},	{357,0},
{448,0},	{362,0},	{363,273},	{271,274},
{113,0},	{276,0},	{450,0},	{451,278},
{406,0},	{451,0},	{53,0},	{204,0},
{182,0},	{240,0},	{168,284},	{242,0},
{29,0},	{468,0},	{137,0},	{235,0},
{279,0},	{125,0},	{126,0},	{144,0},
{146,0},	{320,0},	{319,0},	{234,0},
{465,0},	{79,0},	{380,0},	{453,0},
{454,303},	{455,304},	{476,0},	{475,0},
{147,0},	{226,0},	{225,309},	{134,0},
{259,0},	{118,0},	{456,0},	{228,0},
{456,315},	{47,0},	{452,0},	{456,318},
{452,315},	{456,320},	{457,0},	{219,0},
{469,0},	{292,0},	{381,0},	{382,0},
{330,0},	{229,0},	{456,329},	{229,318},
{456,331},	{313,0},	{422,0},	{154,0},
{193,335},	{81,0},	{426,0},	{20,0},
{103,0},	{82,0},	{41,0},	{26,0},
{30,337},	{247,0},	{394,0},	{395,346},
{392,347},	{392,0},	{393,349},	{12,0},
{393,338},	{85,0},	{86,353},	{87,0},
{2,0},	{16,0},	{346,355},	{345,0},
{346,0},	{394,359},	{473,0},	{471,362},
{189,363},	{348,0},	{349,0},	{441,0},
{356,0},	{472,0},	{474,369},	{309,0},
{19,0},	{323,0},	{102,0},	{351,0},
{306,0},	{285,0},	{286,377},	{287,0},
{307,0},	{388,0},	{295,0},	{342,0},
{42,0},	{43,384},	{32,0},	{432,0},
{291,0},	{268,0},	{269,389},	{245,0},
{80,354},	{95,392},	{437,0},	{90,0},
{347,395},	{159,0},	{321,0},	{80,0},
{95,399},	{324,0},	{447,0},	{442,0},
{443,403},	{446,0},	{389,0},	{477,0},
{36,0},	{429,0},	{407,0},	{303,0},
{264,0},	{265,412},	{266,0},	{429,369},
{474,415},	{255,0},	{139,0},	{170,0},
{302,0},	{317,0},	{256,0},	{483,0},
{328,0},	{326,0},	{358,0},	{66,0},
{449,0},	{393,0},	{50,0},	{438,0},
{315,0},	{67,0},	{315,433},	{391,0},
{329,0},	{316,0},	{322,0},	{212,0},
{213,439},	{214,0},	{215,441},	{263,0},
{428,431},	{397,0},	{413,0},	{186,0},
{314,0},	{280,0},	{281,449},	{397,450},
{282,451},	{332,0},	{333,453},	{314,454},
{133,0},	{314,456},	{318,0},	{296,0},
{316,459},	{421,0},	{458,0},	{461,0},
{459,463},	{459,0},	{151,0},	{387,0},
{78,0},	{423,0},	{304,0},	{311,0},
{68,0},	{232,0},	{163,0},	{258,0},
{297,0},	{288,0},	{298,0},	{30,0},
{482,0},	{481,480},	{62,0},	{83,0},
{415,0},	{444,0},	{284,0},	{283,486},
{425,0},	{290,0},	{334,0},	{327,0},
{420,0},	{301,0},	{74,0},	{430,0},
{431,0},	{97,0},	{445,0},	{69,0},
{466,0},	{467,500},	{467,0},	{6,0},
{62,503},	{404,0},	{372,0},	{375,506},
{460,0},	{96,0},	{305,0},	{7,0},
{62,511},	{384,0},	{120,0},	{433,0},
{463,0},	{464,0},	{119,0},	{383,0},
{250,0},	{341,0},	{148,0},	{341,522},
{385,0},	{196,0},	{478,0},	{299,0},
{300,0},	{293,0},	{92,0},	{294,0},
{409,0},	{160,0},	{248,0},	{257,0},
{249,0},	{241,0},	{161,0},	{233,0},
{270,0},	{224,0},	{223,541},	};

static dfa_rt_t dfa_owl_defendpat = {
 "owl_defendpat",
state_owl_defendpat,
idx_owl_defendpat};

struct pattern_db owl_defendpat_db = {
  -1,
  0,
  owl_defendpat
 ,& dfa_owl_defendpat
};
