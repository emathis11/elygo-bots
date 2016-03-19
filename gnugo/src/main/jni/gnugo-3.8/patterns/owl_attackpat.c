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

static struct patval owl_attackpat0[] = {
  {758,1},	{721,1},	{757,3}
};

static struct patval owl_attackpat1[] = {
  {719,1},	{721,1},	{757,3}
};

static struct patval owl_attackpat2[] = {
  {685,1},	{684,1}
};

static struct patval owl_attackpat3[] = {
  {684,1}
};

static struct patval owl_attackpat4[] = {
  {685,1},	{647,1},	{610,1}
};

static struct patval owl_attackpat5[] = {
  {646,1},	{647,1},	{757,3},	{758,3}
};

static struct patval owl_attackpat6[] = {
  {647,1},	{685,1}
};

static struct patval owl_attackpat7[] = {
  {609,1},	{684,1},	{646,3}
};

static struct patval owl_attackpat8[] = {
  {719,1},	{758,1},	{684,1}
};

static struct patval owl_attackpat9[] = {
  {684,1}
};

static struct patval owl_attackpat10[] = {
  {684,1},	{720,3},	{721,3}
};

static struct patval owl_attackpat11[] = {
  {684,1}
};

static struct patval owl_attackpat12[] = {
  {685,1},	{648,1},	{647,1}
};

static struct patval owl_attackpat13[] = {
  {684,1},	{721,3}
};

static struct patval owl_attackpat14[] = {
  {685,1},	{684,1}
};

static struct patval owl_attackpat15[] = {
  {648,1},	{758,1},	{759,3}
};

static struct patval owl_attackpat16[] = {
  {687,1},	{684,1}
};

static struct patval owl_attackpat17[] = {
  {722,1},	{684,1}
};

static struct patval owl_attackpat18[] = {
  {721,1},	{685,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat19[] = {
  {684,1},	{648,1},	{647,3},	{758,3}
};

static struct patval owl_attackpat20[] = {
  {722,1}
};

static struct patval owl_attackpat21[] = {
  {684,1},	{721,1}
};

static struct patval owl_attackpat22[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat23[] = {
  {685,1},	{721,1}
};

static struct patval owl_attackpat24[] = {
  {685,1},	{647,1}
};

static struct patval owl_attackpat25[] = {
  {758,1}
};

static struct patval owl_attackpat26[] = {
  {684,1},	{648,3},	{647,3}
};

static struct patval owl_attackpat27[] = {
  {684,1},	{648,3},	{647,3},	{610,3},
  {611,3}
};

static struct patval owl_attackpat28[] = {
  {684,1},	{796,1},	{647,3},	{610,3},
  {648,3},	{611,3}
};

static struct patval owl_attackpat29[] = {
  {684,1},	{721,1}
};

static struct patval owl_attackpat30[] = {
  {684,1}
};

static struct patval owl_attackpat31[] = {
  {648,1},	{723,1},	{686,1},	{649,3}
};

static struct patval owl_attackpat32[] = {
  {684,1},	{683,1}
};

static struct patval owl_attackpat33[] = {
  {684,1}
};

static struct patval owl_attackpat34[] = {
  {684,1},	{648,3},	{647,3}
};

static struct patval owl_attackpat35[] = {
  {684,1},	{647,3},	{794,3},	{648,3},
  {795,3}
};

static struct patval owl_attackpat36[] = {
  {759,1}
};

static struct patval owl_attackpat37[] = {
  {683,1},	{647,1},	{646,3}
};

static struct patval owl_attackpat38[] = {
  {685,1},	{686,1},	{646,3},	{723,3}
};

static struct patval owl_attackpat39[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat40[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat41[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat42[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat43[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat44[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat45[] = {
  {685,1},	{647,1}
};

static struct patval owl_attackpat46[] = {
  {684,1},	{720,3},	{683,3},	{647,3}
};

static struct patval owl_attackpat47[] = {
  {684,1},	{720,3},	{683,3},	{647,3}
};

static struct patval owl_attackpat48[] = {
  {648,1},	{684,1},	{610,1}
};

static struct patval owl_attackpat49[] = {
  {758,1}
};

static struct patval owl_attackpat50[] = {
  {685,1},	{648,1}
};

static struct patval owl_attackpat51[] = {
  {759,1},	{721,1},	{760,3}
};

static struct patval owl_attackpat52[] = {
  {759,1},	{721,1},	{760,3}
};

static struct patval owl_attackpat53[] = {
  {648,1},	{723,1},	{685,1},	{721,1},
  {645,3},	{646,3}
};

static struct patval owl_attackpat54[] = {
  {686,1},	{722,1},	{723,3},	{610,3}
};

static struct patval owl_attackpat55[] = {
  {721,1}
};

static struct patval owl_attackpat56[] = {
  {647,1},	{685,1},	{794,3},	{795,3},
  {757,3}
};

static struct patval owl_attackpat57[] = {
  {721,1},	{649,3},	{650,3},	{648,3}
};

static struct patval owl_attackpat58[] = {
  {721,1},	{649,3},	{648,3}
};

static struct patval owl_attackpat59[] = {
  {648,1},	{721,1}
};

static struct patval owl_attackpat60[] = {
  {759,1}
};

static struct patval owl_attackpat61[] = {
  {650,1}
};

static struct patval owl_attackpat62[] = {
  {648,1}
};

static struct patval owl_attackpat63[] = {
  {684,1}
};

static struct patval owl_attackpat64[] = {
  {723,1}
};

static struct patval owl_attackpat65[] = {
  {684,1},	{722,1},	{721,3}
};

static struct patval owl_attackpat66[] = {
  {685,1},	{722,1},	{684,1},	{720,3}
};

static struct patval owl_attackpat67[] = {
  {684,1},	{685,1},	{683,3},	{686,3}
};

static struct patval owl_attackpat68[] = {
  {684,1},	{648,1},	{647,3}
};

static struct patval owl_attackpat69[] = {
  {760,1},	{686,1},	{723,3}
};

static struct patval owl_attackpat70[] = {
  {684,1}
};

static struct patval owl_attackpat71[] = {
  {646,1},	{684,1}
};

static struct patval owl_attackpat72[] = {
  {684,1}
};

static struct patval owl_attackpat73[] = {
  {685,1},	{722,3}
};

static struct patval owl_attackpat74[] = {
  {647,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat75[] = {
  {684,1},	{722,1},	{720,1},	{611,3},
  {758,3}
};

static struct patval owl_attackpat76[] = {
  {684,1},	{721,3},	{758,3},	{648,3},
  {647,3}
};

static struct patval owl_attackpat77[] = {
  {684,1}
};

static struct patval owl_attackpat78[] = {
  {684,1}
};

static struct patval owl_attackpat79[] = {
  {684,1}
};

static struct patval owl_attackpat80[] = {
  {648,1},	{649,1}
};

static struct patval owl_attackpat81[] = {
  {648,1},	{649,1}
};

static struct patval owl_attackpat82[] = {
  {686,1},	{722,1},	{684,1},	{723,3},
  {721,3}
};

static struct patval owl_attackpat83[] = {
  {722,1},	{611,3},	{610,3},	{612,3}
};

static struct patval owl_attackpat84[] = {
  {722,1},	{611,3},	{612,3},	{610,3}
};

static struct patval owl_attackpat85[] = {
  {648,1},	{759,3},	{758,3}
};

static struct patval owl_attackpat86[] = {
  {649,1},	{685,1},	{645,3},	{686,3},
  {682,3},	{608,3}
};

static struct patval owl_attackpat87[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat88[] = {
  {684,1},	{720,1}
};

static struct patval owl_attackpat89[] = {
  {684,1}
};

static struct patval owl_attackpat90[] = {
  {720,1},	{684,1},	{610,3},	{612,3},
  {611,3}
};

static struct patval owl_attackpat91[] = {
  {684,1},	{685,1},	{719,3},	{645,3},
  {682,3}
};

static struct patval owl_attackpat92[] = {
  {684,1}
};

static struct patval owl_attackpat93[] = {
  {684,1}
};

static struct patval owl_attackpat94[] = {
  {684,1}
};

static struct patval owl_attackpat95[] = {
  {684,1},	{688,3},	{651,3},	{725,3}
};

static struct patval owl_attackpat96[] = {
  {684,1}
};

static struct patval owl_attackpat97[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat98[] = {
  {686,1},	{684,1},	{723,3}
};

static struct patval owl_attackpat99[] = {
  {684,1},	{687,3},	{650,3},	{724,3},
  {761,3}
};

static struct patval owl_attackpat100[] = {
  {721,1},	{685,1},	{722,3}
};

static struct patval owl_attackpat101[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat102[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat103[] = {
  {683,1},	{684,1},	{649,3},	{686,3},
  {760,3},	{723,3}
};

static struct patval owl_attackpat104[] = {
  {759,1},	{648,3},	{649,3}
};

static struct patval owl_attackpat105[] = {
  {648,1},	{759,1},	{686,3}
};

static struct patval owl_attackpat106[] = {
  {648,1},	{759,1},	{686,3}
};

static struct patval owl_attackpat107[] = {
  {721,1},	{684,1},	{687,1}
};

static struct patval owl_attackpat108[] = {
  {721,1},	{684,1},	{687,1}
};

static struct patval owl_attackpat109[] = {
  {720,1},	{683,1},	{685,1},	{722,1}
};

static struct patval owl_attackpat110[] = {
  {758,1},	{686,1}
};

static struct patval owl_attackpat111[] = {
  {684,1}
};

static struct patval owl_attackpat112[] = {
  {684,1},	{721,1}
};

static struct patval owl_attackpat113[] = {
  {684,1},	{758,3}
};

static struct patval owl_attackpat114[] = {
  {648,1},	{723,1},	{721,1},	{686,1}
};

static struct patval owl_attackpat115[] = {
  {720,1},	{757,1},	{684,1},	{759,1},
  {685,1}
};

static struct patval owl_attackpat116[] = {
  {646,1},	{683,1},	{720,1},	{610,1},
  {611,1},	{685,1}
};

static struct patval owl_attackpat117[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat118[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat119[] = {
  {648,1},	{649,1}
};

static struct patval owl_attackpat120[] = {
  {686,1},	{684,1}
};

static struct patval owl_attackpat121[] = {
  {611,1},	{684,1},	{647,3},	{612,3}
};

static struct patval owl_attackpat122[] = {
  {721,1},	{686,1},	{684,1},	{647,3},
  {649,3}
};

static struct patval owl_attackpat123[] = {
  {685,1},	{648,1},	{647,1},	{645,1}
};

static struct patval owl_attackpat124[] = {
  {684,1},	{758,3},	{760,3},	{759,3}
};

static struct patval owl_attackpat125[] = {
  {684,1},	{720,1},	{683,3}
};

static struct patval owl_attackpat126[] = {
  {684,1}
};

static struct patval owl_attackpat127[] = {
  {646,1},	{685,1},	{684,1},	{720,3}
};

static struct patval owl_attackpat128[] = {
  {758,1},	{721,1},	{684,1},	{759,1}
};

static struct patval owl_attackpat129[] = {
  {720,1},	{758,1},	{683,1}
};

static struct patval owl_attackpat130[] = {
  {758,1},	{683,1},	{720,1},	{796,1},
  {757,3},	{794,3}
};

static struct patval owl_attackpat131[] = {
  {721,1},	{684,1},	{722,1},	{683,3},
  {646,3}
};

static struct patval owl_attackpat132[] = {
  {648,1},	{684,1},	{650,3},	{649,3}
};

static struct patval owl_attackpat133[] = {
  {684,1}
};

static struct patval owl_attackpat134[] = {
  {684,1},	{647,1},	{611,3},	{610,3}
};

static struct patval owl_attackpat135[] = {
  {684,1},	{758,3},	{647,3}
};

static struct patval owl_attackpat136[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat137[] = {
  {684,1}
};

static struct patval owl_attackpat138[] = {
  {610,1},	{684,1},	{647,3},	{611,3}
};

static struct patval owl_attackpat139[] = {
  {647,1},	{684,1}
};

static struct patval owl_attackpat140[] = {
  {684,1}
};

static struct patval owl_attackpat141[] = {
  {684,1},	{647,3}
};

static struct patval owl_attackpat142[] = {
  {684,1},	{721,1}
};

static struct patval owl_attackpat143[] = {
  {684,1},	{721,3}
};

static struct patval owl_attackpat144[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat145[] = {
  {758,1},	{684,1}
};

static struct patval owl_attackpat146[] = {
  {758,1},	{684,1},	{647,1},	{720,3}
};

static struct patval owl_attackpat147[] = {
  {685,1},	{684,1},	{720,1},	{758,1}
};

static struct patval owl_attackpat148[] = {
  {649,1},	{684,1},	{647,1}
};

static struct patval owl_attackpat149[] = {
  {649,1},	{648,1},	{684,1},	{723,1}
};

static struct patval owl_attackpat150[] = {
  {721,1},	{647,1},	{684,1}
};

static struct patval owl_attackpat151[] = {
  {646,1},	{684,1},	{720,3},	{757,3}
};

static struct patval owl_attackpat152[] = {
  {686,1},	{720,1},	{684,1},	{685,1},
  {758,1}
};

static struct patval owl_attackpat153[] = {
  {648,1},	{647,1},	{722,1},	{685,1},
  {683,1}
};

static struct patval owl_attackpat154[] = {
  {684,1}
};

static struct patval owl_attackpat155[] = {
  {684,1},	{722,3}
};

static struct patval owl_attackpat156[] = {
  {721,1},	{759,1}
};

static struct patval owl_attackpat157[] = {
  {648,1},	{684,1},	{647,3}
};

static struct patval owl_attackpat158[] = {
  {684,1},	{647,3}
};

static struct patval owl_attackpat159[] = {
  {684,1},	{721,1},	{723,1},	{611,1},
  {648,1},	{759,1}
};

static struct patval owl_attackpat160[] = {
  {722,1},	{684,1},	{686,1},	{649,3}
};

static struct patval owl_attackpat161[] = {
  {722,1},	{684,1},	{686,1},	{610,3}
};

static struct patval owl_attackpat162[] = {
  {684,1},	{685,1},	{723,1},	{760,3}
};

static struct patval owl_attackpat163[] = {
  {686,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat164[] = {
  {686,1},	{684,1}
};

static struct patval owl_attackpat165[] = {
  {722,1},	{684,1},	{686,1}
};

static struct patval owl_attackpat166[] = {
  {722,1},	{684,1},	{686,1}
};

static struct patval owl_attackpat167[] = {
  {684,1},	{722,1},	{648,3},	{686,3}
};

static struct patval owl_attackpat168[] = {
  {684,1},	{722,1},	{648,3},	{721,3}
};

static struct patval owl_attackpat169[] = {
  {684,1},	{722,1},	{648,3},	{686,3}
};

static struct patval owl_attackpat170[] = {
  {684,1},	{722,1},	{723,1},	{650,1},
  {687,1},	{721,3}
};

static struct patval owl_attackpat171[] = {
  {684,1},	{721,1},	{760,1},	{759,1}
};

static struct patval owl_attackpat172[] = {
  {686,1},	{723,1},	{684,1},	{721,1},
  {760,3},	{758,3}
};

static struct patval owl_attackpat173[] = {
  {684,1},	{685,1},	{757,1},	{795,1},
  {723,1},	{797,3},	{760,3}
};

static struct patval owl_attackpat174[] = {
  {686,1},	{684,1},	{721,1},	{649,3},
  {611,3},	{722,3}
};

static struct patval owl_attackpat175[] = {
  {722,1},	{686,1},	{684,1},	{649,3},
  {723,3},	{721,3}
};

static struct patval owl_attackpat176[] = {
  {610,1},	{721,1},	{685,1},	{611,1}
};

static struct patval owl_attackpat177[] = {
  {686,1},	{684,1},	{721,3},	{649,3},
  {722,3},	{647,3},	{723,3}
};

static struct patval owl_attackpat178[] = {
  {684,1},	{721,1},	{686,1},	{648,1},
  {723,1},	{759,1}
};

static struct patval owl_attackpat179[] = {
  {647,1},	{684,1},	{686,1},	{649,1},
  {722,1}
};

static struct patval owl_attackpat180[] = {
  {758,1},	{757,1},	{647,3},	{646,3}
};

static struct patval owl_attackpat181[] = {
  {684,1},	{721,1},	{686,1},	{648,1},
  {723,1}
};

static struct patval owl_attackpat182[] = {
  {758,1},	{720,1},	{684,1},	{648,1},
  {647,3},	{683,3},	{757,3}
};

static struct patval owl_attackpat183[] = {
  {686,1},	{722,1},	{684,1},	{723,3},
  {721,3}
};

static struct patval owl_attackpat184[] = {
  {720,1},	{721,1},	{646,3},	{683,3}
};

static struct patval owl_attackpat185[] = {
  {684,1}
};

static struct patval owl_attackpat186[] = {
  {609,1},	{721,1},	{720,1},	{646,3},
  {683,3}
};

static struct patval owl_attackpat187[] = {
  {684,1},	{757,1}
};

static struct patval owl_attackpat188[] = {
  {683,1},	{684,1}
};

static struct patval owl_attackpat189[] = {
  {647,1},	{685,1}
};

static struct patval owl_attackpat190[] = {
  {645,1},	{646,1},	{684,1}
};

static struct patval owl_attackpat191[] = {
  {686,1},	{684,1}
};

static struct patval owl_attackpat192[] = {
  {686,1},	{722,1},	{684,1},	{649,1}
};

static struct patval owl_attackpat193[] = {
  {684,1},	{686,1}
};

static struct patval owl_attackpat194[] = {
  {646,1},	{684,1},	{685,1}
};

static struct patval owl_attackpat195[] = {
  {646,1},	{684,1},	{685,1}
};

static struct patval owl_attackpat196[] = {
  {648,1},	{719,1},	{684,1},	{683,1},
  {682,1}
};

static struct patval owl_attackpat197[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat198[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat199[] = {
  {758,1},	{683,1},	{720,1},	{646,3}
};

static struct patval owl_attackpat200[] = {
  {683,1},	{647,1},	{685,1},	{720,3}
};

static struct patval owl_attackpat201[] = {
  {685,1},	{683,1},	{722,1}
};

static struct patval owl_attackpat202[] = {
  {646,1},	{648,1},	{684,1},	{721,1},
  {759,1}
};

static struct patval owl_attackpat203[] = {
  {646,1},	{722,1},	{684,1},	{721,1},
  {759,1}
};

static struct patval owl_attackpat204[] = {
  {722,1},	{683,1},	{721,1},	{684,1},
  {759,3}
};

static struct patval owl_attackpat205[] = {
  {646,1},	{760,1},	{684,1},	{721,1},
  {722,1}
};

static struct patval owl_attackpat206[] = {
  {647,1},	{683,1},	{722,1},	{684,1},
  {648,1}
};

static struct patval owl_attackpat207[] = {
  {647,1},	{684,1},	{721,1}
};

static struct patval owl_attackpat208[] = {
  {610,1},	{611,1},	{684,1}
};

static struct patval owl_attackpat209[] = {
  {758,1},	{720,1},	{684,1}
};

static struct patval owl_attackpat210[] = {
  {683,1},	{684,1},	{720,1},	{686,1}
};

static struct patval owl_attackpat211[] = {
  {683,1},	{684,1},	{720,1},	{686,1}
};

static struct patval owl_attackpat212[] = {
  {610,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat213[] = {
  {720,1},	{758,1},	{647,1},	{684,1},
  {757,3}
};

static struct patval owl_attackpat214[] = {
  {648,1},	{686,1},	{720,1},	{684,1},
  {758,1}
};

static struct patval owl_attackpat215[] = {
  {720,1},	{758,1},	{648,1},	{684,1}
};

static struct patval owl_attackpat216[] = {
  {648,1},	{684,1},	{721,1},	{759,1},
  {797,3}
};

static struct patval owl_attackpat217[] = {
  {721,1},	{684,1},	{759,1},	{648,1},
  {612,3},	{760,3}
};

static struct patval owl_attackpat218[] = {
  {647,1},	{684,1},	{611,1},	{722,1},
  {760,3},	{612,3}
};

static struct patval owl_attackpat219[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat220[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat221[] = {
  {722,1},	{684,1}
};

static struct patval owl_attackpat222[] = {
  {722,1},	{684,1}
};

static struct patval owl_attackpat223[] = {
  {648,1},	{721,1}
};

static struct patval owl_attackpat224[] = {
  {648,1},	{721,1}
};

static struct patval owl_attackpat225[] = {
  {721,1},	{647,1}
};

static struct patval owl_attackpat226[] = {
  {721,1},	{647,1}
};

static struct patval owl_attackpat227[] = {
  {722,1},	{648,1}
};

static struct patval owl_attackpat228[] = {
  {684,1},	{686,1}
};

static struct patval owl_attackpat229[] = {
  {683,1},	{686,1}
};

static struct patval owl_attackpat230[] = {
  {649,1},	{684,1}
};

static struct patval owl_attackpat231[] = {
  {721,1},	{647,1},	{722,3},	{648,3}
};

static struct patval owl_attackpat232[] = {
  {646,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat233[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat234[] = {
  {685,1},	{647,3},	{795,3},	{832,3}
};

static struct patval owl_attackpat235[] = {
  {684,1},	{724,1},	{721,1},	{687,1}
};

static struct patval owl_attackpat236[] = {
  {684,1},	{724,1},	{721,1},	{687,1}
};

static struct patval owl_attackpat237[] = {
  {758,1},	{648,1},	{721,3}
};

static struct patval owl_attackpat238[] = {
  {758,1},	{648,1},	{721,3}
};

static struct patval owl_attackpat239[] = {
  {720,1},	{686,1},	{684,1},	{683,3}
};

static struct patval owl_attackpat240[] = {
  {758,1},	{686,1}
};

static struct patval owl_attackpat241[] = {
  {684,1},	{650,1}
};

static struct patval owl_attackpat242[] = {
  {684,1}
};

static struct patval owl_attackpat243[] = {
  {686,1},	{684,1}
};

static struct patval owl_attackpat244[] = {
  {684,1},	{686,1},	{610,1}
};

static struct patval owl_attackpat245[] = {
  {684,1},	{687,1},	{650,3},	{647,3},
  {613,3},	{724,3}
};

static struct patval owl_attackpat246[] = {
  {647,1},	{759,1},	{648,3}
};

static struct patval owl_attackpat247[] = {
  {647,1},	{759,1},	{648,3}
};

static struct patval owl_attackpat248[] = {
  {647,1},	{685,1},	{758,1},	{759,3}
};

static struct patval owl_attackpat249[] = {
  {758,1},	{684,1},	{757,1}
};

static struct patval owl_attackpat250[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat251[] = {
  {648,1}
};

static struct patval owl_attackpat252[] = {
  {648,1}
};

static struct patval owl_attackpat253[] = {
  {684,1}
};

static struct patval owl_attackpat254[] = {
  {723,1},	{648,1}
};

static struct patval owl_attackpat255[] = {
  {685,1},	{721,1}
};

static struct patval owl_attackpat256[] = {
  {685,1},	{647,1},	{649,3},	{648,3}
};

static struct patval owl_attackpat257[] = {
  {685,1},	{721,1},	{647,1},	{648,3},
  {649,3},	{686,3}
};

static struct patval owl_attackpat258[] = {
  {647,1}
};

static struct patval owl_attackpat259[] = {
  {647,1}
};

static struct patval owl_attackpat260[] = {
  {647,1}
};

static struct patval owl_attackpat261[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat262[] = {
  {720,1},	{684,1},	{683,3}
};

static struct patval owl_attackpat263[] = {
  {684,1}
};

static struct patval owl_attackpat264[] = {
  {685,1},	{647,1},	{648,1},	{610,3}
};

static struct patval owl_attackpat265[] = {
  {646,1},	{683,1}
};

static struct patval owl_attackpat266[] = {
  {723,1},	{760,3},	{646,3}
};

static struct patval owl_attackpat267[] = {
  {648,1},	{612,3},	{611,3},	{720,3}
};

static struct patval owl_attackpat268[] = {
  {684,1},	{685,1},	{646,3},	{760,3},
  {647,3}
};

static struct patval owl_attackpat269[] = {
  {683,1},	{722,1},	{684,1},	{723,3},
  {649,3},	{686,3}
};

static struct patval owl_attackpat270[] = {
  {722,1},	{647,1}
};

static struct patval owl_attackpat271[] = {
  {722,1},	{647,1}
};

static struct patval owl_attackpat272[] = {
  {646,1},	{684,1}
};

static struct patval owl_attackpat273[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat274[] = {
  {684,1}
};

static struct patval owl_attackpat275[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat276[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat277[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat278[] = {
  {758,1},	{648,1},	{721,3}
};

static struct patval owl_attackpat279[] = {
  {758,1},	{648,1},	{721,3}
};

static struct patval owl_attackpat280[] = {
  {647,1}
};

static struct patval owl_attackpat281[] = {
  {647,1},	{722,3},	{649,3},	{686,3},
  {723,3}
};

static struct patval owl_attackpat282[] = {
  {721,1},	{648,3},	{686,3},	{649,3}
};

static struct patval owl_attackpat283[] = {
  {685,1},	{647,1},	{683,1},	{759,3},
  {757,3},	{758,3}
};

static struct patval owl_attackpat284[] = {
  {684,1}
};

static struct patval owl_attackpat285[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat286[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat287[] = {
  {648,1},	{684,1},	{722,1},	{610,1}
};

static struct patval owl_attackpat288[] = {
  {720,1},	{684,1},	{683,1},	{649,3},
  {646,3}
};

static struct patval owl_attackpat289[] = {
  {721,1},	{683,1},	{722,1},	{646,3}
};

static struct patval owl_attackpat290[] = {
  {683,1},	{686,1}
};

static struct patval owl_attackpat291[] = {
  {722,1},	{759,1},	{760,1},	{684,1},
  {721,1}
};

static struct patval owl_attackpat292[] = {
  {758,1},	{759,3}
};

static struct patval owl_attackpat293[] = {
  {758,1}
};

static struct patval owl_attackpat294[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat295[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat296[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat297[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat298[] = {
  {611,1},	{721,1}
};

static struct patval owl_attackpat299[] = {
  {720,1},	{723,1}
};

static struct patval owl_attackpat300[] = {
  {648,1},	{685,1},	{645,3},	{682,3},
  {720,3},	{608,3}
};

static struct patval owl_attackpat301[] = {
  {686,1},	{722,1},	{610,3},	{572,3},
  {573,3},	{609,3}
};

static struct patval owl_attackpat302[] = {
  {758,1},	{684,1},	{720,1},	{757,3}
};

static struct patval owl_attackpat303[] = {
  {684,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat304[] = {
  {684,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat305[] = {
  {723,1},	{684,1}
};

static struct patval owl_attackpat306[] = {
  {723,1},	{684,1}
};

static struct patval owl_attackpat307[] = {
  {685,1}
};

static struct patval owl_attackpat308[] = {
  {684,1}
};

static struct patval owl_attackpat309[] = {
  {684,1}
};

static struct patval owl_attackpat310[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat311[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat312[] = {
  {722,1},	{684,1},	{647,1}
};

static struct patval owl_attackpat313[] = {
  {645,1},	{684,1}
};

static struct patval owl_attackpat314[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat315[] = {
  {722,1},	{648,1}
};

static struct patval owl_attackpat316[] = {
  {647,1},	{648,1},	{685,1}
};

static struct patval owl_attackpat317[] = {
  {647,1},	{684,1}
};

static struct patval owl_attackpat318[] = {
  {684,1},	{686,1},	{721,1}
};

static struct patval owl_attackpat319[] = {
  {684,1},	{685,1},	{683,1},	{758,1}
};

static struct patval owl_attackpat320[] = {
  {721,1},	{647,1},	{720,1}
};

static struct patval owl_attackpat321[] = {
  {648,1},	{684,1}
};

static struct patval owl_attackpat322[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {760,1}
};

static struct patval owl_attackpat323[] = {
  {721,1},	{684,1},	{612,1},	{611,1}
};

static struct patval owl_attackpat324[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {760,1}
};

static struct patval owl_attackpat325[] = {
  {646,1},	{684,1},	{720,1},	{758,1},
  {759,1},	{683,3}
};

static struct patval owl_attackpat326[] = {
  {720,1},	{647,1},	{611,1},	{684,1},
  {683,3},	{610,3}
};

static struct patval owl_attackpat327[] = {
  {610,1},	{684,1},	{647,3},	{611,3}
};

static struct patval owl_attackpat328[] = {
  {758,1},	{684,1},	{759,3}
};

static struct patval owl_attackpat329[] = {
  {646,1},	{684,1},	{720,1},	{758,1},
  {759,1},	{683,3}
};

static struct patval owl_attackpat330[] = {
  {686,1},	{647,1},	{648,1},	{683,1}
};

static struct patval owl_attackpat331[] = {
  {683,1},	{647,1},	{648,1},	{686,1}
};

static struct patval owl_attackpat332[] = {
  {647,1},	{683,1},	{611,1},	{684,1},
  {612,3}
};

static struct patval owl_attackpat333[] = {
  {684,1},	{683,3}
};

static struct patval owl_attackpat334[] = {
  {683,1},	{684,1},	{757,3}
};

static struct patval owl_attackpat335[] = {
  {684,1},	{682,1},	{720,1}
};

static struct patval owl_attackpat336[] = {
  {759,1},	{684,1},	{721,1},	{760,1}
};

static struct patval owl_attackpat337[] = {
  {684,1},	{647,1},	{646,1}
};

static struct patval owl_attackpat338[] = {
  {684,1},	{722,1},	{720,1},	{721,1}
};

static struct patval owl_attackpat339[] = {
  {685,1},	{720,1},	{684,1},	{648,3}
};

static struct patval owl_attackpat340[] = {
  {758,1},	{720,1},	{759,1}
};

static struct patval owl_attackpat341[] = {
  {685,1},	{720,1},	{759,1},	{684,1},
  {648,3}
};

static struct patval owl_attackpat342[] = {
  {648,1},	{683,1},	{684,1}
};

static struct patval owl_attackpat343[] = {
  {646,1},	{721,1},	{684,1}
};

static struct patval owl_attackpat344[] = {
  {723,1},	{684,1},	{721,1}
};

static struct patval owl_attackpat345[] = {
  {647,1},	{684,1},	{722,1},	{723,1}
};

static struct patval owl_attackpat346[] = {
  {684,1}
};

static struct patval owl_attackpat347[] = {
  {648,1},	{686,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat348[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat349[] = {
  {720,1},	{684,1},	{648,1}
};

static struct patval owl_attackpat350[] = {
  {684,1},	{720,1},	{648,1},	{758,3},
  {757,3},	{649,3},	{686,3}
};

static struct patval owl_attackpat351[] = {
  {720,1},	{684,1},	{648,3},	{649,3}
};

static struct patval owl_attackpat352[] = {
  {646,1},	{683,1},	{648,1},	{684,1},
  {721,1},	{722,1}
};

static struct patval owl_attackpat353[] = {
  {683,1},	{647,1},	{685,1}
};

static struct patval owl_attackpat354[] = {
  {686,1},	{684,1},	{611,1},	{612,3},
  {721,3},	{647,3}
};

static struct patval owl_attackpat355[] = {
  {719,1},	{682,1},	{645,1},	{611,1},
  {610,1},	{721,1},	{609,1}
};

static struct patval owl_attackpat356[] = {
  {720,1},	{683,1},	{646,1},	{721,1},
  {611,1},	{612,1},	{610,1},	{722,1}
};

static struct patval owl_attackpat357[] = {
  {722,1},	{684,1},	{683,1}
};

static struct patval owl_attackpat358[] = {
  {685,1},	{721,1},	{720,1}
};

static struct patval owl_attackpat359[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {686,1}
};

static struct patval owl_attackpat360[] = {
  {646,1},	{683,1},	{759,1},	{760,1},
  {648,1},	{721,1},	{758,3},	{720,3}
};

static struct patval owl_attackpat361[] = {
  {686,1},	{648,1},	{722,1},	{760,1},
  {684,1},	{723,3}
};

static struct patval owl_attackpat362[] = {
  {758,1},	{720,1},	{684,1},	{757,3},
  {759,3},	{683,3}
};

static struct patval owl_attackpat363[] = {
  {720,1},	{647,1},	{646,1},	{611,1},
  {610,3}
};

static struct patval owl_attackpat364[] = {
  {719,1},	{683,1},	{685,1},	{757,1},
  {684,1}
};

static struct patval owl_attackpat365[] = {
  {721,1},	{611,1},	{722,1},	{647,1},
  {684,1}
};

static struct patval owl_attackpat366[] = {
  {683,1},	{684,1},	{647,3},	{649,3},
  {720,3},	{648,3}
};

static struct patval owl_attackpat367[] = {
  {647,1},	{684,1},	{721,1},	{648,1}
};

static struct patval owl_attackpat368[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat369[] = {
  {646,1},	{684,1},	{685,1},	{645,3},
  {722,3},	{682,3}
};

static struct patval owl_attackpat370[] = {
  {685,1},	{684,1},	{723,1},	{720,3},
  {757,3}
};

static struct patval owl_attackpat371[] = {
  {648,1},	{682,1},	{722,1},	{721,1},
  {720,1},	{684,1},	{645,3},	{683,3}
};

static struct patval owl_attackpat372[] = {
  {758,1},	{760,1},	{724,1},	{720,1},
  {759,1},	{684,1}
};

static struct patval owl_attackpat373[] = {
  {684,1},	{759,1},	{760,1},	{719,1},
  {724,1},	{758,1},	{720,1}
};

static struct patval owl_attackpat374[] = {
  {757,1},	{720,1},	{683,1},	{648,1},
  {685,1},	{684,1},	{759,1}
};

static struct patval owl_attackpat375[] = {
  {722,1},	{720,1},	{646,1},	{723,1},
  {684,1},	{758,1}
};

static struct patval owl_attackpat376[] = {
  {646,1},	{610,1},	{722,1},	{684,1},
  {685,1},	{723,3}
};

static struct patval owl_attackpat377[] = {
  {646,1},	{610,1},	{722,1},	{684,1},
  {685,1},	{723,3}
};

static struct patval owl_attackpat378[] = {
  {684,1}
};

static struct patval owl_attackpat379[] = {
  {758,1}
};

static struct patval owl_attackpat380[] = {
  {684,1}
};

static struct patval owl_attackpat381[] = {
  {684,1}
};

static struct patval owl_attackpat382[] = {
  {722,1},	{686,1},	{648,1},	{684,1}
};

static struct patval owl_attackpat383[] = {
  {722,1},	{686,1},	{648,1},	{684,1}
};

static struct patval owl_attackpat384[] = {
  {648,1},	{646,1},	{647,1},	{722,1},
  {684,1},	{686,1}
};

static struct patval owl_attackpat385[] = {
  {684,1},	{723,1},	{648,3},	{649,3}
};

static struct patval owl_attackpat386[] = {
  {684,1},	{648,1},	{722,1}
};

static struct patval owl_attackpat387[] = {
  {684,1},	{720,1},	{685,1}
};

static struct patval owl_attackpat388[] = {
  {647,1},	{684,1},	{722,1},	{686,1}
};

static struct patval owl_attackpat389[] = {
  {647,1},	{684,1},	{723,1},	{722,1}
};

static struct patval owl_attackpat390[] = {
  {649,1},	{648,1},	{684,1},	{722,1}
};

static struct patval owl_attackpat391[] = {
  {757,1},	{720,1},	{685,1},	{684,1}
};

static struct patval owl_attackpat392[] = {
  {649,1},	{648,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat393[] = {
  {686,1},	{647,1},	{684,1},	{722,1},
  {610,3}
};

static struct patval owl_attackpat394[] = {
  {758,1},	{684,1},	{720,1},	{648,1}
};

static struct patval owl_attackpat395[] = {
  {611,1},	{647,1},	{684,1},	{721,1},
  {649,1}
};

static struct patval owl_attackpat396[] = {
  {611,1},	{647,1},	{684,1},	{721,1},
  {759,1},	{758,3}
};

static struct patval owl_attackpat397[] = {
  {722,1},	{720,1},	{684,1},	{758,1}
};

static struct patval owl_attackpat398[] = {
  {683,1},	{720,1},	{647,1},	{685,1},
  {759,1},	{758,3}
};

static struct patval owl_attackpat399[] = {
  {722,1},	{684,1},	{723,1},	{648,3},
  {647,3}
};

static struct patval owl_attackpat400[] = {
  {684,1},	{682,1},	{720,1},	{646,1},
  {721,3},	{719,3}
};

static struct pattern owl_attackpat[402];

static int
autohelperowl_attackpat0(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(A)<4;
}

static int
autohelperowl_attackpat6(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);

  return  countlib(a)>2;
}

static int
autohelperowl_attackpat11(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return  (somewhere(color, 0, 1, a) || !somewhere(color, 0, 1, b));
}

static int
autohelperowl_attackpat14(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(722, trans, move);

  return  countlib(A)>2;
}

static int
autohelperowl_attackpat17(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat18(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(756, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a) || !play_attack_defend_n(color, 1, 4, move, a, b, c, move);
}

static int
autohelperowl_attackpat27(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);

  return !somewhere(OTHER_COLOR(color), 0, 1, a) || ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat28(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat32(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, a, move);
}

static int
autohelperowl_attackpat33(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_attackpat34(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a)>2;
}

static int
autohelperowl_attackpat35(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat37(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat40(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, a, move);
}

static int
autohelperowl_attackpat42(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_attackpat43(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, b, c, a, b);
}

static int
autohelperowl_attackpat45(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(608, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  e = AFFINE_TRANSFORM(610, trans, move);
  f = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(609, trans, move);

  return (accuratelib(a, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==1 || countlib(b)>2) && countlib(A)<=3 && accuratelib(e, color, MAX_LIBERTIES, NULL)>1&& play_attack_defend_n(color, 1, 6, move, c, a, d, e, f, A)&& play_attack_defend_n(color, 0, 4, move, c, a, e, move);
}

static int
autohelperowl_attackpat46(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return  (owl_escape_value(b) <= 0 && owl_escape_value(c) <= 0) || !play_attack_defend_n(color, 1, 2, move, a, d);
}

static int
autohelperowl_attackpat47(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a) < 1;
}

static int
autohelperowl_attackpat49(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return countlib(B)<=3 && play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_attackpat50(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_attackpat52(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, C) || !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, a, C);
}

static int
autohelperowl_attackpat53(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat54(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 && !play_attack_defend_n(color, 1, 3, move, a, b, move);
}

static int
autohelperowl_attackpat55(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_attackpat56(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat57(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat58(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat59(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(a) > 0;
}

static int
autohelperowl_attackpat60(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  return owl_escape_value(a)+owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat62(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 4, move, a, b, c, c);
}

static int
autohelperowl_attackpat63(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);
  e = AFFINE_TRANSFORM(682, trans, move);

  return  accuratelib(d, OTHER_COLOR(color), MAX_LIBERTIES, NULL)<=2 && countlib(e)>3 && play_attack_defend_n(color, 1, 4, move, a, b, c, c);
}

static int
autohelperowl_attackpat67(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return  !play_attack_defend_n(color, 1, 1, move, move);
}

static int
autohelperowl_attackpat68(int trans, int move, int color, int action)
{
  int a, b, c, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return  (somewhere(OTHER_COLOR(color), 0, 1, a) || ! safe_move(a, color)) && !play_attack_defend_n(OTHER_COLOR(color), 0, 3, move, b, c, A);
}

static int
autohelperowl_attackpat72(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return !play_connect_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_attackpat73(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return play_connect_n(OTHER_COLOR(color), 0, 2, move, a, a, c) && play_connect_n(OTHER_COLOR(color), 0, 2, move, b, b, c);
}

static int
autohelperowl_attackpat74(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);

  return !owl_goal_dragon(A);
}

static int
autohelperowl_attackpat77(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, a, move, b) && !play_attack_defend_n(color, 1, 2, move, a, b);
}

static int
autohelperowl_attackpat78(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, a, move, b);
}

static int
autohelperowl_attackpat79(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return countlib(a)<=2 || accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>2;
}

static int
autohelperowl_attackpat80(int trans, int move, int color, int action)
{
  int a, b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(645, trans, move);

  return  play_attack_defend2_n(color, 0, 4, move, a, b, c, A, b) && play_attack_defend2_n(color, 0, 4, move, b, a, d, move, A);
}

static int
autohelperowl_attackpat81(int trans, int move, int color, int action)
{
  int a, b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(645, trans, move);

  return  owl_escape_value(e)>0 && play_attack_defend2_n(color, 0, 4, move, a, b, c, A, b) && play_attack_defend2_n(color, 0, 4, move, b, a, d, move, A);
}

static int
autohelperowl_attackpat83(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  (owl_escape_value(a)>0)||(owl_escape_value(b)>0);
}

static int
autohelperowl_attackpat84(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0&& (!somewhere(OTHER_COLOR(color), 0, 2, b, c)    || somewhere(color, 0, 2, b, d)    || (somewhere(color, 0, 1, c) && !safe_move(d, OTHER_COLOR(color))));
}

static int
autohelperowl_attackpat85(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(610, trans, move);

  return owl_escape_value(a)>0 && (play_attack_defend_n(OTHER_COLOR(color), 1, 4, b, c, move, d, d) || !play_attack_defend_n(OTHER_COLOR(color), 0, 4, move, b, d, e, e));
}

static int
autohelperowl_attackpat86(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat87(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return !(somewhere(color, 0, 1, a) && somewhere(color, 0, 1, b)) || somewhere(OTHER_COLOR(color), 0, 1, c);
}

static int
autohelperowl_attackpat89(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(573, trans, move);
  d = AFFINE_TRANSFORM(572, trans, move);
  e = AFFINE_TRANSFORM(685, trans, move);

  return somewhere(color, 0, 4, a, b, c, d) && owl_escape_value(e) > 0;
}

static int
autohelperowl_attackpat90(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat91(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat92(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);
  e = AFFINE_TRANSFORM(718, trans, move);
  f = AFFINE_TRANSFORM(717, trans, move);
  g = AFFINE_TRANSFORM(682, trans, move);
  h = AFFINE_TRANSFORM(681, trans, move);
  i = AFFINE_TRANSFORM(680, trans, move);
  j = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a)>0&& ((somewhere(color, 0, 3, b, c, j) && somewhere(color, 0, 6, d, e, f, g, h, i))   || (somewhere(color, 0, 1, j) && owl_escape_value(d)==0 && owl_escape_value(e)==0));
}

static int
autohelperowl_attackpat93(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(681, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);
  e = AFFINE_TRANSFORM(718, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  g = AFFINE_TRANSFORM(611, trans, move);
  h = AFFINE_TRANSFORM(610, trans, move);
  i = AFFINE_TRANSFORM(574, trans, move);
  j = AFFINE_TRANSFORM(573, trans, move);

  return owl_escape_value(a)>0 && somewhere(color, 0, 5, f, g, h, i, j) && somewhere(color, 0, 4, b, c, d, e);
}

static int
autohelperowl_attackpat94(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, i, j, k;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);
  d = AFFINE_TRANSFORM(612, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  f = AFFINE_TRANSFORM(611, trans, move);
  i = AFFINE_TRANSFORM(613, trans, move);
  j = AFFINE_TRANSFORM(650, trans, move);
  k = AFFINE_TRANSFORM(687, trans, move);

  return (somewhere(color, 0, 1, j) || (somewhere(color, 0, 1, i) && somewhere(color, 0, 1, k)))&& !play_attack_defend_n(color, 1, 7, move, a, b, c, d, e, f, move) && !play_attack_defend_n(color, 1, 5, move, a, b, e, f, move);
}

static int
autohelperowl_attackpat95(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j, k;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(794, trans, move);
  d = AFFINE_TRANSFORM(757, trans, move);
  e = AFFINE_TRANSFORM(722, trans, move);
  f = AFFINE_TRANSFORM(610, trans, move);
  g = AFFINE_TRANSFORM(573, trans, move);
  h = AFFINE_TRANSFORM(609, trans, move);
  i = AFFINE_TRANSFORM(572, trans, move);
  j = AFFINE_TRANSFORM(608, trans, move);
  k = AFFINE_TRANSFORM(571, trans, move);

  return  somewhere(color, 0, 4, a, b, c, d) && owl_escape_value(e)>0 && somewhere(color, 0, 6, f, g, h, i, j, k);
}

static int
autohelperowl_attackpat96(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(760, trans, move);
  b = AFFINE_TRANSFORM(538, trans, move);
  c = AFFINE_TRANSFORM(537, trans, move);
  d = AFFINE_TRANSFORM(536, trans, move);
  e = AFFINE_TRANSFORM(757, trans, move);
  f = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a)>0&& owl_escape_value(b)==0&& owl_escape_value(c)==0&& owl_escape_value(d)==0&& somewhere(color, 0, 2, e, f);
}

static int
autohelperowl_attackpat97(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(A)>0 && play_attack_defend2_n(color, 0, 2, move, b, move, c);
}

static int
autohelperowl_attackpat99(int trans, int move, int color, int action)
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
autohelperowl_attackpat100(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(758, trans, move);

  return  countlib(A)>1;
}

static int
autohelperowl_attackpat101(int trans, int move, int color, int action)
{
  int c, d, A;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(A)>0) && play_attack_defend2_n(color, 0, 2, move, c, move, d);
}

static int
autohelperowl_attackpat102(int trans, int move, int color, int action)
{
  int c, d, A;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return (owl_escape_value(A)>0) && play_attack_defend2_n(color, 0, 2, move, c, move, d);
}

static int
autohelperowl_attackpat103(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(609, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(e)>0 && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, c, d);
}

static int
autohelperowl_attackpat104(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat105(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(b))&& !play_connect_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat106(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(a))&& !play_connect_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat107(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(a) > 0);
}

static int
autohelperowl_attackpat108(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(719, trans, move);

  return (owl_escape_value(a) > 0);
}

static int
autohelperowl_attackpat109(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(a) > 0;
}

static int
autohelperowl_attackpat111(int trans, int move, int color, int action)
{
  int a, b, e, f, C, D, G;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  e = AFFINE_TRANSFORM(759, trans, move);
  f = AFFINE_TRANSFORM(686, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);
  D = AFFINE_TRANSFORM(722, trans, move);
  G = AFFINE_TRANSFORM(723, trans, move);

  return  countlib(G) == 3 && countlib(e) > 2 && (owl_escape_value(a) > 0 || owl_escape_value(b) > 0     || owl_escape_value(C) > 0) && play_attack_defend_n(color, 0, 4, move, D, C, f, G);
}

static int
autohelperowl_attackpat112(int trans, int move, int color, int action)
{
  int a, b, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(757, trans, move);
  D = AFFINE_TRANSFORM(759, trans, move);

  return owl_escape_value(a) > 0 && countlib(b)==3 && !play_attack_defend2_n(color, 1, 1, move, C, D);
}

static int
autohelperowl_attackpat114(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat116(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return accuratelib(move, color, MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_attackpat122(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return countlib(A)<=3 && accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL) <= 2 && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_attackpat124(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return owl_eyespace(a);
}

static int
autohelperowl_attackpat126(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return somewhere(OTHER_COLOR(color), 0, 1, b) || play_attack_defend_n(color, 1, 2, a, b, a);
}

static int
autohelperowl_attackpat127(int trans, int move, int color, int action)
{
  int b, A, C, W;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(611, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(646, trans, move);
  W = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, W) && !play_attack_defend_n(color, 1, 4, move, A, b, C, b);
}

static int
autohelperowl_attackpat128(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !play_attack_defend_n(color, 1, 3, move, a, b, move);
}

static int
autohelperowl_attackpat129(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !obvious_false_eye(a, OTHER_COLOR(color)) || !obvious_false_eye(b, color);
}

static int
autohelperowl_attackpat133(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat134(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);

  return !ATTACK_MACRO(a) && owl_proper_eye(b)&& (somewhere(OTHER_COLOR(color), 0, 1, c) || owl_proper_eye(c));
}

static int
autohelperowl_attackpat135(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_eyespace(b) && !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat138(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return countlib(c) > 1 && !play_attack_defend_n(color, 1, 3, move, a, b, move);
}

static int
autohelperowl_attackpat139(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_maxeye(b) > 0 && !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat140(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return owl_maxeye(b)>0 && !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat141(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_eyespace(b) && !play_attack_defend_n(color, 1, 2, move, b, a);
}

static int
autohelperowl_attackpat142(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(609, trans, move);

  return owl_maxeye(b)==0&& ((somewhere(color, 0, 1, c) && owl_lunch(c))    || (somewhere(color, 0, 1, d) && owl_lunch(d)))&& !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat143(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return countlib(C)==2 && countstones(C)>1 && !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat145(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat146(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);

  return countlib(A)==2;
}

static int
autohelperowl_attackpat147(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);

  return countlib(a) > 1;
}

static int
autohelperowl_attackpat148(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  D = AFFINE_TRANSFORM(610, trans, move);

  return play_attack_defend_n(color, 1, 4, move, a, b, c, D);
}

static int
autohelperowl_attackpat149(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return !play_attack_defend_n(color, 1, 2, a, move, move);
}

static int
autohelperowl_attackpat150(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return countlib(A) == 3;
}

static int
autohelperowl_attackpat151(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  C = AFFINE_TRANSFORM(609, trans, move);

  return  !ATTACK_MACRO(C) && (!somewhere(OTHER_COLOR(color), 0, 1, b) || (somewhere(OTHER_COLOR(color), 0, 1, b) && somewhere(color, 0, 1, a)));
}

static int
autohelperowl_attackpat152(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return  countlib(A) == 3;
}

static int
autohelperowl_attackpat153(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(610, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, A, b, move);
}

static int
autohelperowl_attackpat155(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !obvious_false_eye(a, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat156(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);

  return countlib(A)<3 && owl_eyespace(move);
}

static int
autohelperowl_attackpat157(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, a) && (somewhere(OTHER_COLOR(color), 0, 1, b) || !safe_move(b, color));
}

static int
autohelperowl_attackpat159(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return owl_proper_eye(a);
}

static int
autohelperowl_attackpat160(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(759, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat161(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(759, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat164(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return owl_eyespace(a) && accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL) <= 2 && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_attackpat165(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  A = AFFINE_TRANSFORM(722, trans, move);

  return  (owl_topological_eye(a, board[A])<=2) && (owl_topological_eye(b, board[A])==2);
}

static int
autohelperowl_attackpat166(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_topological_eye(a, board[A])==2) && ((owl_topological_eye(b, board[A])==2) || (owl_topological_eye(b, board[A])==3));
}

static int
autohelperowl_attackpat167(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return owl_topological_eye(a, board[B])==3 && does_attack(move, B);
}

static int
autohelperowl_attackpat168(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(682, trans, move);

  return  owl_topological_eye(a, board[A])==3 && safe_move(b, color) && safe_move(move, color) && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, b, b);
}

static int
autohelperowl_attackpat169(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return  countlib(a)==2 && owl_topological_eye(b, board[A])==3;
}

static int
autohelperowl_attackpat172(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(572, trans, move);

  return !ATTACK_MACRO(b) && play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b);
}

static int
autohelperowl_attackpat173(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_attackpat174(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(760, trans, move);

  return !owl_proper_eye(move) && !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat175(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_attackpat176(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return  owl_big_eyespace(A) && play_attack_defend_n(color, 1, 1, move, b);
}

static int
autohelperowl_attackpat177(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  1 || play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat178(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return owl_mineye(move)==1 && accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==2 && !play_attack_defend_n(color, 1, 1, move, c) && !play_attack_defend_n(color, 1, 3, move, a, b, b);
}

static int
autohelperowl_attackpat179(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==2 && !play_attack_defend_n(color, 1, 1, move, c) && !play_attack_defend_n(color, 1, 3, move, a, b, b);
}

static int
autohelperowl_attackpat180(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);

  return (owl_eyespace(a) || owl_eyespace(c))&& play_attack_defend_n(color, 1, 1, a, a) && play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_attackpat181(int trans, int move, int color, int action)
{
  int b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);

  return countlib(A) == 3 && !obvious_false_eye(d, OTHER_COLOR(color))&& play_attack_defend_n(color, 0, 3, move, b, c, move) && play_attack_defend_n(color, 0, 3, move, e, c, move)&& play_attack_defend2_n(color, 0, 5, move, c, b, d, e, b, e);
}

static int
autohelperowl_attackpat184(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return  ATTACK_MACRO(A) && !play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat185(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_attackpat190(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return  countlib(A)>2;
}

static int
autohelperowl_attackpat191(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_eyespace(move);
}

static int
autohelperowl_attackpat192(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(722, trans, move);

  return  countlib(C) <= 3 && owl_proper_eye(a) && owl_proper_eye(b);
}

static int
autohelperowl_attackpat193(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_eyespace(move);
}

static int
autohelperowl_attackpat194(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);
  d = AFFINE_TRANSFORM(723, trans, move);

  return (!ATTACK_MACRO(a) && accuratelib(d, color, MAX_LIBERTIES, NULL)>=3)|| (!ATTACK_MACRO(b) && accuratelib(c, color, MAX_LIBERTIES, NULL)>=3);
}

static int
autohelperowl_attackpat195(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return countlib(B) == 3 && owl_big_eyespace(move) && accuratelib(move, color, MAX_LIBERTIES, NULL)>2 && accuratelib(a, color, MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_attackpat197(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return countlib(a)==1 && countlib(b)==1 && countlib(c)<=2;
}

static int
autohelperowl_attackpat198(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return countlib(a)<=2 && countlib(b)==1 && countlib(c)<=2;
}

static int
autohelperowl_attackpat200(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(609, trans, move);

  return countlib(a) == 1 && countlib(B) > 1;
}

static int
autohelperowl_attackpat202(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(718, trans, move);

  return !somewhere(color, 0, 1, a) || !DEFEND_MACRO(a);
}

static int
autohelperowl_attackpat203(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(718, trans, move);

  return !somewhere(color, 0, 1, a) || !DEFEND_MACRO(a);
}

static int
autohelperowl_attackpat204(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !DEFEND_MACRO(a);
}

static int
autohelperowl_attackpat205(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return accuratelib(a, OTHER_COLOR(color), MAX_LIBERTIES, NULL) == 2;
}

static int
autohelperowl_attackpat207(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !obvious_false_eye(a, OTHER_COLOR(color)) && owl_maxeye(move)>1;
}

static int
autohelperowl_attackpat208(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);

  return countlib(A)==2;
}

static int
autohelperowl_attackpat210(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(645, trans, move);

  return countlib(A)==2 && !safe_move(b, color);
}

static int
autohelperowl_attackpat211(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !safe_move(a, color);
}

static int
autohelperowl_attackpat212(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(795, trans, move);

  return somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat218(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A)!=WIN;
}

static int
autohelperowl_attackpat219(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return !same_string(B, C)&& (owl_escape_value(B)>0 || owl_escape_value(C)>0)&& !play_attack_defend2_n(color, 1, 1, move, move, a);
}

static int
autohelperowl_attackpat220(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return !same_string(B, C) && !play_attack_defend2_n(color, 1, 1, move, move, a);
}

static int
autohelperowl_attackpat221(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  return  !safe_move(a, color) && !play_attack_defend2_n(color, 1, 3, move, NO_MOVE, a, a, c) && !play_attack_defend_n(color, 1, 2, move, a, move);
}

static int
autohelperowl_attackpat222(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  return  !safe_move(a, color) && !play_attack_defend2_n(color, 1, 3, move, NO_MOVE, a, a, c);
}

static int
autohelperowl_attackpat223(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(C)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat224(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(C)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat226(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a) <= 2;
}

static int
autohelperowl_attackpat227(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat228(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0) && play_attack_defend_n(color, 1, 2, move, c, c);
}

static int
autohelperowl_attackpat229(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, a);
}

static int
autohelperowl_attackpat230(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_attackpat231(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat232(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  !safe_move(a, color) && countlib(b)>1;
}

static int
autohelperowl_attackpat233(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return  owl_escape_value(b)>0 && play_attack_defend2_n(color, 0, 3, move, A, b, c, b) && play_attack_defend2_n(color, 0, 3, move, A, b, b, move);
}

static int
autohelperowl_attackpat234(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(794, trans, move);
  B = AFFINE_TRANSFORM(757, trans, move);

  return somewhere(OTHER_COLOR(color), 0, 2, A, B) && owl_escape_value(A) + owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat235(int trans, int move, int color, int action)
{
  int e, f, g, A, B;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(720, trans, move);
  g = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_attack_defend2_n(color, 0, 4, move, g, f, e, f, move);
}

static int
autohelperowl_attackpat236(int trans, int move, int color, int action)
{
  int e, f, g, A, B;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(720, trans, move);
  g = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_attack_defend2_n(color, 0, 4, move, g, f, e, f, move);
}

static int
autohelperowl_attackpat237(int trans, int move, int color, int action)
{
  int c, d, e, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(757, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && ((somewhere(OTHER_COLOR(color), 0, 1, d) && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, c, c, e))     || (!somewhere(OTHER_COLOR(color), 0, 1, d) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, c, d, c, e)));
}

static int
autohelperowl_attackpat238(int trans, int move, int color, int action)
{
  int c, d, e, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(757, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && ((somewhere(OTHER_COLOR(color), 0, 1, d) && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, c, c, e))     || (!somewhere(OTHER_COLOR(color), 0, 1, d) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, c, d, c, e)));
}

static int
autohelperowl_attackpat239(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, a, move)&& (somewhere(color, 0, 1, b) || !play_attack_defend_n(color, 1, 2, move, b, move))&& !ATTACK_MACRO(C);
}

static int
autohelperowl_attackpat241(int trans, int move, int color, int action)
{
  int b, c, d, e, f, g, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);
  e = AFFINE_TRANSFORM(723, trans, move);
  f = AFFINE_TRANSFORM(758, trans, move);
  g = AFFINE_TRANSFORM(759, trans, move);
  A = AFFINE_TRANSFORM(686, trans, move);

  return !owl_goal_dragon(A) && !play_attack_defend2_n(color, 1, 5, move, b, c, d, e, c, e)&& (somewhere(color, 0, 1, f) || !play_attack_defend2_n(color, 1, 5, move, d, b, f, g, b, g));
}

static int
autohelperowl_attackpat242(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(688, trans, move);
  b = AFFINE_TRANSFORM(651, trans, move);
  c = AFFINE_TRANSFORM(614, trans, move);
  d = AFFINE_TRANSFORM(577, trans, move);
  e = AFFINE_TRANSFORM(540, trans, move);
  f = AFFINE_TRANSFORM(539, trans, move);
  g = AFFINE_TRANSFORM(538, trans, move);
  h = AFFINE_TRANSFORM(537, trans, move);
  i = AFFINE_TRANSFORM(536, trans, move);

  return (owl_escape_value(a)>0) + (owl_escape_value(b)>0)+(owl_escape_value(c)>0) + (owl_escape_value(d)>0)+(owl_escape_value(e)>0) + (owl_escape_value(f)>0)+(owl_escape_value(g)>0) + (owl_escape_value(h)>0)+(owl_escape_value(i)>0) < 2;
}

static int
autohelperowl_attackpat243(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return !owl_goal_dragon(A) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat244(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat245(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(686, trans, move);

  return play_connect_n(color, 0, 2, move, a, B, C);
}

static int
autohelperowl_attackpat246(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return owl_strong_dragon(B) && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat247(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(758, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return owl_strong_dragon(B) && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat248(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(B)>0 && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat249(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);

  return (owl_escape_value(c) > 0 || (owl_goal_dragon(c) && owl_escape_value(a)))&& !play_attack_defend2_n(color, 1, 3, move, d, b, b, move) && !play_attack_defend2_n(color, 1, 3, move, b, d, d, move);
}

static int
autohelperowl_attackpat250(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(c)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat251(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return  play_break_through_n(OTHER_COLOR(color), 2, move, a, b, a, c) == WIN;
}

static int
autohelperowl_attackpat252(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return  countlib(b)<=4 && countlib(c)<=4 && play_break_through_n(OTHER_COLOR(color), 2, move, a, b, a, c) == WIN;
}

static int
autohelperowl_attackpat253(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return  vital_chain(A) && vital_chain(B) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat254(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, a, c);
}

static int
autohelperowl_attackpat255(int trans, int move, int color, int action)
{
  int a, A, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(686, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, B) && !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_attackpat256(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);

  return !ATTACK_MACRO(A) && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, b);
}

static int
autohelperowl_attackpat257(int trans, int move, int color, int action)
{
  int a, A, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(611, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return !ATTACK_MACRO(A) && ATTACK_MACRO(a) && !play_attack_defend_n(color, 0, 1, move, B);
}

static int
autohelperowl_attackpat258(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return  vital_chain(a) && vital_chain(b) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat259(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);

  return countlib(c)>2 && vital_chain(b) && vital_chain(c)&& play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, a, b, c);
}

static int
autohelperowl_attackpat260(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);

  return countlib(c)>2 && vital_chain(b) && vital_chain(c)&& play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, a, b, c);
}

static int
autohelperowl_attackpat261(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(B) > 0 && does_defend(move, a);
}

static int
autohelperowl_attackpat262(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return  somewhere(color, 0, 2, a, b) && ATTACK_MACRO(c);
}

static int
autohelperowl_attackpat265(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return  ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat266(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(681, trans, move);
  b = AFFINE_TRANSFORM(573, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat267(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(796, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat269(int trans, int move, int color, int action)
{
  int a, b, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(722, trans, move);
  D = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(C)>0 && owl_goal_dragon(D) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat270(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat271(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat272(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return  ATTACK_MACRO(A) && !play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat273(int trans, int move, int color, int action)
{
  int a, b, c, D, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  D = AFFINE_TRANSFORM(720, trans, move);
  E = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0)&& ((somewhere(color, 0, 1, E) || somewhere(OTHER_COLOR(color), 0, 1, E)) || owl_escape_value(a) < 0)&& !play_attack_defend2_n(color, 1, 3, move, c, D, move, D);
}

static int
autohelperowl_attackpat274(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return !same_string(a, b) && (countlib(a) <= 4 || countlib(b) <= 4 || countlib(c) <= 4);
}

static int
autohelperowl_attackpat275(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !owl_goal_dragon(b) && !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat276(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !owl_goal_dragon(a) && !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat277(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return countlib(a) == 2 && !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat278(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(a) > 0 || owl_escape_value(b) > 0) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, c, d, c, E);
}

static int
autohelperowl_attackpat279(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(a) > 0 || owl_escape_value(b) > 0) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, c, d, c, E);
}

static int
autohelperowl_attackpat280(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return (owl_escape_value(c) > 0 || owl_escape_value(b) > 0)&& play_attack_defend2_n(color, 0, 2, move, d, A, move);
}

static int
autohelperowl_attackpat281(int trans, int move, int color, int action)
{
  int b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return (owl_escape_value(d) > 0 || owl_escape_value(b) > 0 || owl_escape_value(c) > 0)&& !play_attack_defend2_n(color, 0, 2, e, move, A, e);
}

static int
autohelperowl_attackpat282(int trans, int move, int color, int action)
{
  int b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return (owl_escape_value(d) > 0 || owl_escape_value(b) > 0 || owl_escape_value(c) > 0)&& play_connect_n(OTHER_COLOR(color), 1, 2, e, move, e, A)&& play_connect_n(color, 0, 2, move, e, e, A);
}

static int
autohelperowl_attackpat284(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return  vital_chain(a) && vital_chain(b) && play_attack_defend2_n(OTHER_COLOR(color), 1, 1, move, a, b) && !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperowl_attackpat285(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return  (ATTACK_MACRO(A) != WIN || (countstones(A)<=2 && does_attack(move, A))) && (!owl_goal_dragon(b) || !owl_goal_dragon(c));
}

static int
autohelperowl_attackpat286(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return  (ATTACK_MACRO(A) != WIN || (countstones(A)<=2 && does_attack(move, A))) && (!owl_goal_dragon(b) || !owl_goal_dragon(c));
}

static int
autohelperowl_attackpat287(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);

  return  owl_escape_value(a) > 0 && play_attack_defend_n(color, 1, 1, move, b) && !play_attack_defend_n(color, 1, 3, move, c, d, d);
}

static int
autohelperowl_attackpat288(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, B);
}

static int
autohelperowl_attackpat290(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(649, trans, move);

  return owl_strong_dragon(A) && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat292(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(612, trans, move);
  d = AFFINE_TRANSFORM(649, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) +owl_escape_value(c) + owl_escape_value(d) > 0;
}

static int
autohelperowl_attackpat293(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(612, trans, move);
  c = AFFINE_TRANSFORM(613, trans, move);
  d = AFFINE_TRANSFORM(650, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) +owl_escape_value(c) + owl_escape_value(d) > 0;
}

static int
autohelperowl_attackpat294(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return  countlib(a) == 1 && owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat295(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return  countlib(a) == 1 && owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat296(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(a) == 1;
}

static int
autohelperowl_attackpat297(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(a) == 1;
}

static int
autohelperowl_attackpat298(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(A)>0 && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat299(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(686, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(A)>0 && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat300(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat302(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(796, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(color, 1, 1, b, d) && play_attack_defend_n(color, 1, 2, move, a, a)&& play_attack_defend_n(color, 1, 4, move, b, NO_MOVE, a, a) && !play_attack_defend_n(color, 1, 2, move, b, c);
}

static int
autohelperowl_attackpat303(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(A) > 0 && play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) != WIN;
}

static int
autohelperowl_attackpat304(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(B) > 0 && play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) != WIN;
}

static int
autohelperowl_attackpat305(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat306(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat307(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  (countlib(a)==1) && (countlib(B)==1);
}

static int
autohelperowl_attackpat308(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countstones(A)>3 && countlib(A)==1;
}

static int
autohelperowl_attackpat309(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countstones(A)<=3 && countlib(A)==1 && accuratelib(move, color, MAX_LIBERTIES, NULL) > 1;
}

static int
autohelperowl_attackpat310(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countstones(A)>3 && does_attack(move, A);
}

static int
autohelperowl_attackpat311(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countstones(A)<=3 && does_attack(move, A)&& (accuratelib(move, color, MAX_LIBERTIES, NULL) > 1 || is_ko_point(move));
}

static int
autohelperowl_attackpat312(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_attackpat314(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_proper_eye(move);
}

static int
autohelperowl_attackpat315(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return ATTACK_MACRO(a) && !play_attack_defend_n(color, 1, 1, move, a) && !play_attack_defend2_n(color, 0, 1, move, B, C);
}

static int
autohelperowl_attackpat316(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(643, trans, move);
  b = AFFINE_TRANSFORM(644, trans, move);

  return  somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat320(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return DEFEND_MACRO(a) != WIN;
}

static int
autohelperowl_attackpat321(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==2 && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat327(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return countlib(a)>1 && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat334(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat337(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return countlib(A) == 4 && ATTACK_MACRO(A) != WIN;
}

static int
autohelperowl_attackpat338(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);

  return countlib(A) == 2 && ATTACK_MACRO(A) != WIN;
}

static int
autohelperowl_attackpat339(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat341(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat352(int trans, int move, int color, int action)
{
  int a, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)<=3 && DEFEND_MACRO(a) != WIN;
}

static int
autohelperowl_attackpat353(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);

  return play_attack_defend_n(color, 1, 1, a, a);
}

static int
autohelperowl_attackpat354(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 0, 2, move, a, move);
}

static int
autohelperowl_attackpat355(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return !somewhere(OTHER_COLOR(color), 0, 1, a) || (countlib(B) <= 6);
}

static int
autohelperowl_attackpat357(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(573, trans, move);

  return play_attack_defend_n(color, 1, 1, a, a) != 0 && !play_attack_defend_n(color, 1, 1, a, b);
}

static int
autohelperowl_attackpat358(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 1, a, c) != 0 || play_attack_defend_n(color, 1, 1, a, a);
}

static int
autohelperowl_attackpat359(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 1, 3, move, a, b, b) && play_attack_defend_n(color, 0, 2, move, c, d);
}

static int
autohelperowl_attackpat371(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  B = AFFINE_TRANSFORM(719, trans, move);

  return countlib(a)==1 && countlib(B)<=3 && DEFEND_MACRO(a)!=WIN;
}

static int
autohelperowl_attackpat372(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(722, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat373(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(722, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat374(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(718, trans, move);

  return countlib(A)==3;
}

static int
autohelperowl_attackpat376(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return is_proper_eye_space(a);
}

static int
autohelperowl_attackpat377(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return is_proper_eye_space(a) && play_attack_defend_n(color, 0, 3, move, b, c, move);
}

static int
autohelperowl_attackpat380(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && finish_ko_helper(A);
}

static int
autohelperowl_attackpat381(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && finish_ko_helper(A);
}

static int
autohelperowl_attackpat382(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(A) > 0 || owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat383(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(A) > 0 || owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat384(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(614, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return !ATTACK_MACRO(a) && !play_attack_defend_n(OTHER_COLOR(color), 0, 1, b, c);
}

static int
autohelperowl_attackpat385(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return !safe_move(a, color) && play_attack_defend_n(color, 0, 2, move, a, move) && !play_attack_defend_n(color, 1, 3, move, b, c, c);
}

static int
autohelperowl_attackpat386(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(682, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, a, b, C);
}

static int
autohelperowl_attackpat387(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, a, b, C);
}

static int
autohelperowl_attackpat388(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat389(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat390(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat391(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat392(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_attackpat395(int trans, int move, int color, int action)
{
  int b, c, d, e, f, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(571, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(609, trans, move);
  f = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(608, trans, move);

  return countlib(A)==3 && !ATTACK_MACRO(b) && !play_attack_defend_n(color, 1, 5, move, c, d, e, f, f);
}

static int
autohelperowl_attackpat396(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(794, trans, move);

  return play_attack_defend_n(color, 1, 6, move, a, b, c, d, e, e) && !play_attack_defend_n(color, 1, 1, move, f);
}

static int
autohelperowl_attackpat397(int trans, int move, int color, int action)
{
  int e, A, B, C, D;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(797, trans, move);
  B = AFFINE_TRANSFORM(686, trans, move);
  C = AFFINE_TRANSFORM(760, trans, move);
  D = AFFINE_TRANSFORM(722, trans, move);

  return countlib(A) > 2 && !play_attack_defend_n(color, 0, 7, move, NO_MOVE, B, NO_MOVE, C, NO_MOVE, D, e);
}

static int
autohelperowl_attackpat399(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);
  B = AFFINE_TRANSFORM(756, trans, move);

  return  countlib(A) == 2 && countlib(B) > 1 && accuratelib(move, color, MAX_LIBERTIES, NULL) > 1;
}

static int
autohelperowl_attackpat400(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(644, trans, move);

  return  owl_proper_eye(a) && !ATTACK_MACRO(B);
}

static struct pattern_attribute attributes[] = {
#ifdef HAVE_TRANSPARENT_UNIONS
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_TO_CAPTURE,{.offset=757}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=682}},
  {LAST_ATTRIBUTE,{.offset=0}}
#else
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_TO_CAPTURE,0.0,757},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,682},
  {LAST_ATTRIBUTE,0.0,0}
#endif
};

static struct pattern owl_attackpat[] = {
  {owl_attackpat0,3,8, "A1",-1,-2,2,2,3,4,0x2,683,
    { 0xfdffffff, 0xfcfcfcf4, 0xfffffc00, 0xffffff3f, 0xfcfcfcf0, 0xfffffd00, 0xffffff7f, 0xfcffffff},
    { 0x041a0000, 0x00102420, 0x00904000, 0x60100000, 0x24100000, 0x001a0400, 0x00106020, 0x40900000}
   , 0x20,80.000000,attributes+0,1,NULL,autohelperowl_attackpat0,0,0.010000},
  {owl_attackpat1,3,8, "A2",-2,-2,2,2,4,4,0x2,683,
    { 0xfdffffff, 0xfffffff7, 0xfffffcfc, 0xffffff3f, 0xfffffff0, 0xfffffdff, 0xffffff7f, 0xfcffffff},
    { 0x00180000, 0x00102200, 0x00900080, 0x20100000, 0x22100000, 0x00180008, 0x00102000, 0x00900000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat2,2,8, "A3",-1,-2,2,1,3,3,0x2,720,
    { 0xfcfcf000, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0x3fffffff, 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00},
    { 0x00242000, 0x00a11000, 0x20600010, 0x10280000, 0x10a10000, 0x20240010, 0x00281000, 0x00602000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat3,1,8, "A101",-1,0,2,2,3,2,0x2,721,
    { 0x3f3f3800, 0x00ffbf3f, 0xb0f0f0f0, 0xf8fc0000, 0xbfff0000, 0x383f3f3f, 0x00fcf8f0, 0xf0f0b000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat4,3,8, "A102",-1,-2,2,2,3,4,0x2,721,
    { 0xfcffffff, 0xfcfcfcf0, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfffffc00, 0xffffff3f, 0xffffffff},
    { 0x40902000, 0x24900000, 0x201a0500, 0x00186060, 0x00902424, 0x20904000, 0x60180000, 0x051a2000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat5,4,8, "A103",-2,-2,1,1,3,3,0x2,720,
    { 0xfdfdfc00, 0xfcfeff14, 0xfcfcfce0, 0xfcfcfc00, 0xfffefc00, 0xfcfdfd2c, 0xfcfcfc50, 0xfcfcfc00},
    { 0x80900000, 0x28100100, 0x00180840, 0x0010a000, 0x01102800, 0x00908004, 0xa0100000, 0x08180000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat6,2,8, "A104",-1,-2,2,1,3,3,0x2,721,
    { 0xfcffffff, 0xfcfcfcf0, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffffc00, 0xffffff3f, 0xfcfcfcfc},
    { 0x40902000, 0x24900000, 0x20180400, 0x00186000, 0x00902400, 0x20904000, 0x60180000, 0x04182000}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_attackpat6,0,0.010000},
  {owl_attackpat7,3,8, "A105",-1,-3,2,2,3,5,0x2,721,
    { 0x7fffffff, 0xf4fcfcfc, 0xfffff700, 0xffff7fff, 0xfcfcf4fc, 0xffff7f00, 0x7fffffff, 0xf7ffffff},
    { 0x10200000, 0x00240000, 0x00201200, 0x00600080, 0x00240008, 0x00201000, 0x00600000, 0x12200000}
   , 0x0,99.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat8,3,8, "A106",-2,-2,1,1,3,3,0x2,683,
    { 0xffffff00, 0xfcfcfffc, 0xfcfcfcc0, 0xfcfcfc00, 0xfffcfc00, 0xffffff0c, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x40620000, 0x14200220, 0x00240480, 0x00205000, 0x02201400, 0x00624008, 0x50200020, 0x04240000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat9,1,8, "A107",-1,0,2,4,3,4,0x2,686,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat10,3,8, "A108",-1,-1,1,1,2,2,0x2,646,
    { 0xf4f4fc00, 0xfcfcd400, 0xfc7c7c00, 0x5cfcfc00, 0xd4fcfc00, 0xfcf4f400, 0xfcfc5c00, 0x7c7cfc00},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x20,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat11,1,8, "A109",-1,0,2,2,3,2,0x2,685,
    { 0x00f8fcf8, 0xf0f0e000, 0xffbf0000, 0x2e3f3f3f, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2e00, 0x00bfffbf},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat11,3,0.016000},
  {owl_attackpat12,3,8, "A110",-1,-1,2,2,3,3,0x2,721,
    { 0xfeffffff, 0xfcfcfcf8, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffffe00, 0xffffffbf, 0xfcfcfcfc},
    { 0x4090a000, 0xa4900000, 0x28180400, 0x00186800, 0x0090a400, 0xa0904000, 0x68180000, 0x04182800}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat13,2,8, "A111",-2,0,2,3,4,3,0x2,686,
    { 0x0037ffff, 0xc0f0d0f0, 0xff700000, 0x1f3f0f0e, 0xd0f0c0c0, 0xff370000, 0x0f3f1f3f, 0x0070fffe},
    { 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200040, 0x00200000, 0x00200000, 0x00200100}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat14,2,8, "A112",-1,-2,2,1,3,3,0x2,683,
    { 0xfcfcf000, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0x3fffffff, 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00},
    { 0x00242000, 0x00a11000, 0x20600010, 0x10280000, 0x10a10000, 0x20240010, 0x00281000, 0x00602000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat14,3,0.010000},
  {owl_attackpat15,3,8, "A113",-2,-3,1,0,3,3,0x8,685,
    { 0x003ffdff, 0xc0f0f070, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfd3f0000, 0x0f3f3f37, 0x00f0fcfc},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x80,99.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat16,2,8, "A114",0,-2,3,1,3,3,0x8,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff},
    { 0x00200004, 0x00200000, 0x00200000, 0x01200000, 0x00200000, 0x00200000, 0x00200100, 0x00200040}
   , 0x80,99.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat17,2,8, "A115",0,-3,3,1,3,4,0x2,648,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0x003fffff},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat17,3,0.010000},
  {owl_attackpat18,4,8, "A201",-1,-2,2,2,3,4,0x2,611,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x055aa000, 0x90902424, 0x28944000, 0x60181800, 0x24909000, 0xa05a0500, 0x18186060, 0x40942800}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat18,0,1.600000},
  {owl_attackpat19,4,8, "A203",-1,-2,1,1,2,3,0x2,721,
    { 0x0c7dff00, 0xd0f0fcd0, 0xfcf4c000, 0xfc3c1c00, 0xfcf0d000, 0xff7d0c00, 0x1c3cfc1c, 0xc0f4fc00},
    { 0x04208000, 0x80200400, 0x08204000, 0x40200800, 0x04208000, 0x80200400, 0x08204000, 0x40200800}
   , 0x80,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat20,1,8, "A204",0,-2,2,2,2,4,0x2,685,
    { 0x0030fcff, 0xc0f0c000, 0xfc300000, 0x0f3f0f03, 0xc0f0c000, 0xfc300000, 0x0f3f0f03, 0x0030fcff},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat21,2,8, "A205",-1,-1,1,1,2,2,0x2,647,
    { 0xb0fcfc00, 0xf8fcf000, 0xfcfc3800, 0x3cfcbc00, 0xf0fcf800, 0xfcfcb000, 0xbcfc3c00, 0x38fcfc00},
    { 0x10280000, 0x00242000, 0x00a01000, 0x20600000, 0x20240000, 0x00281000, 0x00602000, 0x10a00000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat22,2,8, "A205b",-1,-1,1,1,2,2,0x2,721,
    { 0x38fcfc00, 0xf0fcf800, 0xfcfcb000, 0xbcfc3c00, 0xf8fcf000, 0xfcfc3800, 0x3cfcbc00, 0xb0fcfc00},
    { 0x10a01000, 0x20640000, 0x10281000, 0x00642000, 0x00642000, 0x10a01000, 0x20640000, 0x10281000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat23,2,8, "A206",-1,-1,2,1,3,2,0x2,648,
    { 0x30bcfcfc, 0xe0fcf000, 0xfcf83000, 0x3fff2f00, 0xf0fce000, 0xfcbc3000, 0x2fff3f00, 0x30f8fcfc},
    { 0x10182000, 0x00942000, 0x20901000, 0x20580000, 0x20940000, 0x20181000, 0x00582000, 0x10902000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat24,2,8, "A206b",-1,-1,2,1,3,2,0x2,722,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x04902000, 0x20900400, 0x20184000, 0x40182000, 0x04902000, 0x20900400, 0x20184000, 0x40182000}
   , 0x0,78.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat25,1,8, "A207",0,0,2,2,2,2,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat26,3,8, "A207b",0,-2,2,1,2,3,0x2,722,
    { 0x007f7f3f, 0x50f0f0f0, 0xf4f40000, 0x3f3f1400, 0xf0f05000, 0x7f7f0000, 0x143f3f3f, 0x00f4f4f0},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x0,58.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat27,5,8, "A207c",0,-3,2,2,2,5,0x2,722,
    { 0x007f7f3f, 0x50f0f0f0, 0xf5f50000, 0x3f3f1414, 0xf0f05050, 0x7f7f0000, 0x143f3f3f, 0x00f5f5f0},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x0,78.000000,attributes+0,1,NULL,autohelperowl_attackpat27,3,0.610000},
  {owl_attackpat28,6,8, "A207d",0,-3,2,2,2,5,0x2,722,
    { 0x007f7f3f, 0x50f0f0f0, 0xf5f50000, 0x3f3f1414, 0xf0f05050, 0x7f7f0000, 0x143f3f3f, 0x00f5f5f0},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x80,60.000000,attributes+0,1,NULL,autohelperowl_attackpat28,3,1.000000},
  {owl_attackpat29,2,8, "A208a",-1,-2,1,0,2,2,0x2,686,
    { 0x00bcbcfc, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00, 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0x00f8f8fc},
    { 0x00280004, 0x00202000, 0x00a00000, 0x21200000, 0x20200000, 0x00280000, 0x00202100, 0x00a00040}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat30,1,8, "A208b",-1,-2,1,0,2,2,0x2,686,
    { 0x00f8f8fc, 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00, 0x00bcbcfc},
    { 0x00200040, 0x00200000, 0x00200000, 0x00200100, 0x00200000, 0x00200000, 0x01200000, 0x00200004}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat31,4,8, "A208c",-1,0,2,2,3,2,0x2,722,
    { 0x003ffe7e, 0xc0f0f0b0, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xfe3f0000, 0x0d3f3f3a, 0x00f0fcf4},
    { 0x00108028, 0x80100000, 0x08100000, 0x02120800, 0x00108000, 0x80100000, 0x08120200, 0x001008a0}
   , 0x0,56.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat32,2,8, "A208d",-1,-2,1,0,2,2,0x2,647,
    { 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0x00f8f8fc, 0x00bcbcfc, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00},
    { 0x20200000, 0x00280000, 0x00202100, 0x00a00040, 0x00280004, 0x00202000, 0x00a00000, 0x21200000}
   , 0x0,56.000000,attributes+0,1,NULL,autohelperowl_attackpat32,3,1.000000},
  {owl_attackpat33,1,8, "A208e",-1,-2,1,0,2,2,0x2,647,
    { 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0x00f8f8fc, 0x00bcbcfc, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00},
    { 0x00200000, 0x00200000, 0x00200100, 0x00200040, 0x00200004, 0x00200000, 0x00200000, 0x01200000}
   , 0x0,56.000000,attributes+0,1,NULL,autohelperowl_attackpat33,3,1.000000},
  {owl_attackpat34,3,8, "A209",-1,-1,1,2,2,3,0x2,721,
    { 0x3a7f7f00, 0x50fcf8f8, 0xf4f4b000, 0xbcfc1400, 0xf8fc5000, 0x7f7f3a00, 0x14fcbcbc, 0xb0f4f400},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat34,3,0.010000},
  {owl_attackpat35,5,8, "A210",-1,-1,1,3,2,4,0x2,721,
    { 0x3c7f7f00, 0x50fcfcf0, 0xf4f4f000, 0xfcfc1400, 0xfcfc5000, 0x7f7f3c00, 0x14fcfc3c, 0xf0f4f400},
    { 0x14200000, 0x00240400, 0x00205000, 0x40600000, 0x04240000, 0x00201400, 0x00604000, 0x50200000}
   , 0x80,85.000000,attributes+0,1,NULL,autohelperowl_attackpat35,3,0.010000},
  {owl_attackpat36,1,8, "A211",0,-1,3,2,3,3,0x2,723,
    { 0x0038bfbf, 0x80f0e0c0, 0xf8b00000, 0x2f3f0a00, 0xe0f08000, 0xbf380000, 0x0a3f2f0f, 0x00b0f8f8},
    { 0x00100200, 0x00100080, 0x00100000, 0x00100000, 0x00100000, 0x02100000, 0x00100008, 0x00100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat37,3,8, "A214",-1,-1,1,2,2,3,0x1,685,
    { 0x7cfcfc3c, 0xf4fcfc00, 0xfcfcf400, 0xffff7c00, 0xfcfcf400, 0xfcfc7c00, 0x7cffff00, 0xf4fcfcf0},
    { 0x20904000, 0x60180000, 0x04182000, 0x00902400, 0x00186000, 0x40902000, 0x24900000, 0x20180400}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat37,0,0.010000},
  {owl_attackpat38,4,8, "A215",-1,-1,2,2,3,3,0x2,647,
    { 0x40f8fcf4, 0xf4f0e000, 0xffbf0700, 0x2d3f7fff, 0xe0f0f4fc, 0xfcf84000, 0x7f3f2d00, 0x07bfff7f},
    { 0x00102420, 0x00904000, 0x60100000, 0x041a0000, 0x40900000, 0x24100000, 0x001a0400, 0x00106020}
   , 0x80,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat39,2,8, "A216",-1,-1,2,1,3,2,0x2,722,
    { 0x0cfcfcfc, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f00, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xc0fcfcfc},
    { 0x04a40000, 0x20201400, 0x00684000, 0x50202000, 0x14202000, 0x00a40400, 0x20205000, 0x40680000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat40,2,8, "A216b",-1,-1,2,1,3,2,0x2,685,
    { 0x0cfcfcfc, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f00, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xc0fcfcfc},
    { 0x04a40000, 0x20201400, 0x00684000, 0x50202000, 0x14202000, 0x00a40400, 0x20205000, 0x40680000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat40,3,1.000000},
  {owl_attackpat41,2,8, "A217",0,-1,2,2,2,3,0x2,685,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat42,2,8, "A217b",0,-1,2,2,2,3,0x2,685,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat42,0,0.010000},
  {owl_attackpat43,2,8, "A217c",0,-1,2,2,2,3,0x2,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat43,0,3.000000},
  {owl_attackpat44,2,8, "A218",-1,-1,2,2,3,3,0x2,685,
    { 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc},
    { 0x051a0000, 0x00102424, 0x00904000, 0x60100000, 0x24100000, 0x001a0500, 0x00106060, 0x40900000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat45,2,8, "A219",-1,-1,2,2,3,3,0x2,722,
    { 0xfcfcfffc, 0xfcfcfcc0, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffcfc00, 0xffffff0c, 0xfcfcfcfc},
    { 0x40902000, 0x24900000, 0x20180400, 0x00186000, 0x00902400, 0x20904000, 0x60180000, 0x04182000}
   , 0x10,70.000000,attributes+0,1,NULL,autohelperowl_attackpat45,0,0.277760},
  {owl_attackpat46,4,8, "A220",-2,-1,1,2,3,3,0x2,721,
    { 0x177fff00, 0xd0f4f4fc, 0xfcf45000, 0x7c7c1c00, 0xf4f4d000, 0xff7f1700, 0x1c7c7cfc, 0x50f4fc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat46,3,0.376000},
  {owl_attackpat47,4,8, "A221",-2,-1,1,3,3,4,0x2,758,
    { 0x177fff00, 0xd0f4f4fc, 0xfcf45000, 0x7c7c1c00, 0xf4f4d000, 0xff7f1700, 0x1c7c7cfc, 0x50f4fc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_attackpat47,3,0.010000},
  {owl_attackpat48,3,8, "A222",-2,-2,1,3,3,5,0x2,721,
    { 0xeaffff00, 0xfefbfaf8, 0xffffacb8, 0xbcbcfc3c, 0xfafbfef0, 0xffffeab8, 0xfcbcbcbc, 0xacffff00},
    { 0x40608000, 0x94210000, 0x08260410, 0x00205820, 0x00219420, 0x80604010, 0x58200000, 0x04260800}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat49,1,8, "A223",0,0,2,2,2,2,0x2,759,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat49,0,0.610000},
  {owl_attackpat50,2,8, "A224",-1,-1,2,2,3,3,0x2,722,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x0050a000, 0x90900000, 0x28140000, 0x00181800, 0x00909000, 0xa0500000, 0x18180000, 0x00142800}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat50,0,1.000000},
  {owl_attackpat51,3,8, "A225",0,-1,2,2,2,3,0x2,685,
    { 0x003cfffd, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0d, 0x00f0fcfc},
    { 0x00180200, 0x00102080, 0x00900000, 0x20100000, 0x20100000, 0x02180000, 0x00102008, 0x00900000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat52,3,8, "A226",0,-1,2,2,2,3,0x2,685,
    { 0x00fcfffd, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0d, 0x00fcfcfc},
    { 0x00180200, 0x00102080, 0x00900000, 0x20100000, 0x20100000, 0x02180000, 0x00102008, 0x00900000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat52,0,2.800000},
  {owl_attackpat53,6,8, "A227",-1,-2,1,2,2,4,0x2,683,
    { 0x7cfcfc0c, 0xf5ffff00, 0xfcfcf4f4, 0xfffc7c00, 0xfffff500, 0xfcfc7c7c, 0x7cfcff00, 0xf4fcfcc0},
    { 0x0058a008, 0x90902000, 0x28940000, 0x22181800, 0x20909000, 0xa0580000, 0x18182200, 0x00942880}
   , 0x80,35.000000,attributes+0,1,NULL,autohelperowl_attackpat53,0,0.010000},
  {owl_attackpat54,4,8, "A227b",0,-1,2,2,2,3,0x2,648,
    { 0x00f0fcf4, 0xf0f0c000, 0xff3d0000, 0x0d3f3f1f, 0xc0f0f0d0, 0xfcf00000, 0x3f3f0d00, 0x003dff7f},
    { 0x00100820, 0x00108000, 0x80100000, 0x08120000, 0x80100000, 0x08100000, 0x00120800, 0x00108020}
   , 0x80,65.000000,attributes+0,1,NULL,autohelperowl_attackpat54,0,0.610000},
  {owl_attackpat55,1,8, "A228",0,-2,1,0,1,2,0x2,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat55,0,1.000000},
  {owl_attackpat56,5,8, "A229",-1,-3,1,1,2,4,0x2,721,
    { 0x3dffff00, 0xf0fcfcf4, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3d00, 0x3cfcfc7c, 0xf0fcfc00},
    { 0x10902000, 0x20940000, 0x20181000, 0x00582000, 0x00942000, 0x20901000, 0x20580000, 0x10182000}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat56,0,0.019600},
  {owl_attackpat57,4,8, "A229b",-1,-3,1,0,2,3,0x2,685,
    { 0x003c7c7c, 0x40f0f000, 0xf4f00000, 0x3f3f0500, 0xf0f04000, 0x7c3c0000, 0x053f3f00, 0x00f0f4f4},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x80,79.000000,attributes+0,1,NULL,autohelperowl_attackpat57,0,0.016000},
  {owl_attackpat58,3,8, "A229c",-1,-2,1,0,2,2,0x2,685,
    { 0x003c7c7c, 0x40f0f000, 0xf4f00000, 0x3f3f0500, 0xf0f04000, 0x7c3c0000, 0x053f3f00, 0x00f0f4f4},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat58,0,0.016000},
  {owl_attackpat59,2,8, "A229d",-1,-1,1,0,2,1,0x2,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x80,79.000000,attributes+0,1,NULL,autohelperowl_attackpat59,0,0.010000},
  {owl_attackpat60,1,8, "A230",0,-1,2,2,2,3,0x2,722,
    { 0x0038ffff, 0xc0f0e0c0, 0xfcb00000, 0x2f3f0f00, 0xe0f0c000, 0xff380000, 0x0f3f2f0f, 0x00b0fcfc},
    { 0x00100200, 0x00100080, 0x00100000, 0x00100000, 0x00100000, 0x02100000, 0x00100008, 0x00100000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat60,0,0.016000},
  {owl_attackpat61,1,8, "A231",-1,0,1,3,2,3,0x0,686,
    { 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat62,1,8, "A232",0,-1,3,2,3,3,0x2,686,
    { 0x003cfcff, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f03, 0x00f0fcfc},
    { 0x00148000, 0x80101000, 0x08500000, 0x10100800, 0x10108000, 0x80140000, 0x08101000, 0x00500800}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat62,0,1.000000},
  {owl_attackpat63,1,8, "A232b",-1,0,2,2,3,2,0x2,722,
    { 0x0f3f3f3f, 0x00f0fcfc, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3f3f0f00, 0x003fffff, 0xc0f0f0f0},
    { 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat63,3,0.416000},
  {owl_attackpat64,1,8, "A233",0,-1,3,2,3,3,0x2,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0c, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0x00fcfffc},
    { 0x00140008, 0x00101000, 0x00500000, 0x12100000, 0x10100000, 0x00140000, 0x00101200, 0x00500080}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat65,3,8, "A234",-1,0,2,1,3,1,0x2,648,
    { 0x00f4fc00, 0xf0f0d000, 0xff7f0000, 0x1c3c3c3c, 0xd0f0f0f0, 0xfcf40000, 0x3c3c1c00, 0x007fff00},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x80,20.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat66,4,8, "A235",-1,-1,1,3,2,4,0x2,758,
    { 0xf73f3f00, 0x0cfcf4fc, 0xf0f07c00, 0x7cfcc000, 0xf4fc0c00, 0x3f3ff700, 0xc0fc7cfc, 0x7cf0f000},
    { 0x00202900, 0x00a08040, 0xa0200000, 0x08280000, 0x80a00000, 0x29200000, 0x00280804, 0x0020a000}
   , 0x0,77.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat67,4,8, "A236",-1,0,2,2,3,2,0x1,758,
    { 0x1f3f3f1f, 0x00f4fcfc, 0xf0f0d000, 0xff7d0000, 0xfcf40000, 0x3f3f1f00, 0x007dffff, 0xd0f0f0d0},
    { 0x00202004, 0x00a00000, 0x20200000, 0x01280000, 0x00a00000, 0x20200000, 0x00280100, 0x00202040}
   , 0x0,66.000000,attributes+0,1,NULL,autohelperowl_attackpat67,3,1.000000},
  {owl_attackpat68,3,8, "A237",-1,-1,1,2,2,3,0x2,721,
    { 0x0f7ffe00, 0xd0f0fcbc, 0xfcf4c000, 0xfc3c1c00, 0xfcf0d000, 0xfe7f0f00, 0x1c3cfcf8, 0xc0f4fc00},
    { 0x04218000, 0x80200410, 0x08204000, 0x40200800, 0x04208000, 0x80210400, 0x08204010, 0x40200800}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat68,3,0.970000},
  {owl_attackpat69,3,8, "A238",0,-1,3,2,3,3,0x2,758,
    { 0x2b3f0f37, 0x0038f8fc, 0xc0f0a000, 0xbdb30000, 0xf8380000, 0x0f3f2b00, 0x00b3bdff, 0xa0f0c070},
    { 0x00100022, 0x00100000, 0x00100000, 0x00120000, 0x00100000, 0x00100000, 0x00120002, 0x00100020}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat70,1,8, "A239",0,-1,2,1,2,2,0x2,685,
    { 0x00f8fcfc, 0xf0f0e000, 0xfcbc0000, 0x2f3f3f00, 0xe0f0f000, 0xfcf80000, 0x3f3f2f00, 0x00bcfcfc},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat71,2,8, "A240",-1,-2,1,1,2,3,0x2,647,
    { 0xf0fcfc00, 0xfcfcf000, 0xfefe3c00, 0x3cfcfc28, 0xf0fcfca0, 0xfcfcf000, 0xfcfc3c00, 0x3cfefe00},
    { 0x90240000, 0x08241000, 0x00601800, 0x10608000, 0x10240800, 0x00249000, 0x80601000, 0x18600000}
   , 0x80,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat72,1,8, "A241",0,-2,2,1,2,3,0x2,685,
    { 0x00fcf8fc, 0xf0f0b000, 0xbeff0000, 0x3b3f3f3b, 0xb0f0f0b0, 0xf8fc0000, 0x3f3f3b00, 0x00ffbeff},
    { 0x00240000, 0x00201000, 0x00610000, 0x10200010, 0x10200010, 0x00240000, 0x00201000, 0x00610000}
   , 0x0,37.000000,attributes+0,1,NULL,autohelperowl_attackpat72,3,10.000000},
  {owl_attackpat73,2,8, "A242",-1,-3,1,1,2,4,0x2,647,
    { 0xe0f0f400, 0xfcf84000, 0x7f3f2f00, 0x04bcfcfc, 0x40f8fcfc, 0xf4f0e000, 0xfcbc0400, 0x2f3f7f00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x0,37.000000,attributes+0,1,NULL,autohelperowl_attackpat73,0,16.000000},
  {owl_attackpat74,3,8, "A301",0,-1,1,2,1,3,0x2,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00928000, 0xa0100020, 0x08180000, 0x00102800, 0x0010a000, 0x80920000, 0x28100020, 0x00180800}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat74,0,0.010000},
  {owl_attackpat75,5,8, "A302",-1,-2,1,2,2,4,0x2,648,
    { 0xbcfdfe00, 0xf8fcfc90, 0xfdfcf800, 0xfcfcbc04, 0xfcfcf840, 0xfefdbc00, 0xbcfcfc18, 0xf8fcfd00},
    { 0x18600800, 0x10248800, 0x80249000, 0x88601000, 0x88241000, 0x08601800, 0x10608800, 0x90248000}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat76,5,8, "A305",0,-1,2,3,2,4,0x2,686,
    { 0x00757fff, 0x50f0d0d0, 0xf4740000, 0x1f3f1700, 0xd0f05000, 0x7f750000, 0x173f1f1f, 0x0074f4fc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x80,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat77,1,8, "A401",-1,0,1,3,2,3,0x0,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat77,3,3.600000},
  {owl_attackpat78,1,8, "A401a",-1,0,1,3,2,3,0x0,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat78,3,3.000000},
  {owl_attackpat79,1,8, "A402",-1,0,2,3,3,3,0x0,722,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat79,3,0.040000},
  {owl_attackpat80,2,8, "A403",-1,0,1,2,2,2,0x0,723,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00508080, 0x90100000, 0x08140000, 0x00101a00, 0x00109000, 0x80500000, 0x1a100000, 0x00140808}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_attackpat80,0,4.800000},
  {owl_attackpat81,2,8, "A403b",-2,0,1,2,3,2,0x0,723,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00508080, 0x90100000, 0x08140000, 0x00101a00, 0x00109000, 0x80500000, 0x1a100000, 0x00140808}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat81,0,2.890000},
  {owl_attackpat82,5,4, "A404",-1,0,1,2,2,2,0x0,648,
    { 0x00f4fcf4, 0xf0f0d000, 0xfc7c0000, 0x1d3f3f00, 0xd0f0f000, 0xfcf40000, 0x3f3f1d00, 0x007cfc7c},
    { 0x00200820, 0x00208000, 0x80200000, 0x08220000, 0x80200000, 0x08200000, 0x00220800, 0x00208020}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat83,4,8, "A406",-2,-2,1,0,3,2,0x0,685,
    { 0x00f0fcfc, 0xf0f0c000, 0xfd3d0000, 0x0f3f3f15, 0xc0f0f050, 0xfcf00000, 0x3f3f0f00, 0x003dfdfd},
    { 0x00100804, 0x00108000, 0x80100000, 0x09100000, 0x80100000, 0x08100000, 0x00100900, 0x00108040}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat83,0,0.016000},
  {owl_attackpat84,4,8, "A406b",-2,-3,1,1,3,4,0x0,685,
    { 0xa0f0fcfc, 0xf8f8c000, 0xfd3d2800, 0x0fbfbf15, 0xc0f8f850, 0xfcf0a000, 0xbfbf0f00, 0x283dfdfd},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat84,0,0.151360},
  {owl_attackpat85,3,8, "A406c",-2,-2,1,0,3,2,0x0,723,
    { 0x00fdfdfc, 0xf0f0f050, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfdfd0000, 0x3f3f3f14, 0x00fcfcfc},
    { 0x00508000, 0x90100000, 0x08140000, 0x00101800, 0x00109000, 0x80500000, 0x18100000, 0x00140800}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_attackpat85,0,0.970000},
  {owl_attackpat86,6,8, "A406d",-2,-3,2,1,4,4,0x0,647,
    { 0xf8f8f0d0, 0xfdfd2800, 0x3fbfbf15, 0xa0fdfffc, 0x28fdfdfd, 0xf0f8f850, 0xfffda000, 0xbfbf3f1c},
    { 0x00102080, 0x00900000, 0x20100000, 0x00180200, 0x00900000, 0x20100000, 0x02180000, 0x00102008}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat86,0,0.010000},
  {owl_attackpat87,2,8, "A407",-1,-2,2,1,3,3,0x0,721,
    { 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00},
    { 0x00208400, 0x80204000, 0x48200000, 0x04200800, 0x40208000, 0x84200000, 0x08200400, 0x00204800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat87,3,0.019600},
  {owl_attackpat88,2,8, "A407b",-1,-2,2,1,3,3,0x0,648,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfeffff00, 0xfffffff8, 0xfcfcfcbc, 0xfcfcfc00, 0xffffff00, 0xfffffefc},
    { 0x48200000, 0x04200800, 0x00218500, 0x80204050, 0x08200414, 0x00204800, 0x40208000, 0x85210000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat89,1,8, "A408",-2,-3,3,0,5,3,0x0,686,
    { 0x00fefffe, 0xf0f0f0e0, 0xfcff0000, 0x3f3f3f30, 0xf0f0f030, 0xfffe0000, 0x3f3f3f2e, 0x00fffcfc},
    { 0x00200100, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat89,3,0.016000},
  {owl_attackpat90,5,8, "A409",-2,-2,1,2,3,4,0x0,647,
    { 0xfcfcfcf8, 0xfefffc00, 0xfdfdfc38, 0xfeffff15, 0xfcfffe50, 0xfcfcfcb0, 0xfffffe00, 0xfcfdfdbd},
    { 0x48200410, 0x04214800, 0x40208410, 0x84214000, 0x48210400, 0x04204810, 0x40218400, 0x84204010}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat90,3,0.019600},
  {owl_attackpat91,5,4, "A410",-2,-1,1,1,3,2,0x0,683,
    { 0xfcfc3000, 0x3dfd3d00, 0x30fcfc54, 0xf0fcf000, 0x3dfd3d00, 0x30fcfc54, 0xf0fcf000, 0xfcfc3000},
    { 0x00642000, 0x10a01000, 0x20640000, 0x10281000, 0x10a01000, 0x20640000, 0x10281000, 0x00642000}
   , 0x200,90.000000,attributes+0,1,NULL,autohelperowl_attackpat91,3,0.010000},
  {owl_attackpat92,1,8, "A411",-3,-4,1,3,4,7,0x0,722,
    { 0x0a3fbfaf, 0x80f0fafa, 0xf8f08080, 0xbf3e0a00, 0xfaf08000, 0xbf3f0a0a, 0x0a3ebfbf, 0x80f0f8e8},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat92,3,0.023834},
  {owl_attackpat93,1,8, "A411a",-3,-4,2,2,5,6,0x0,722,
    { 0x0a3fbfaf, 0x80f0fafa, 0xfaf08080, 0xbf3e0a0a, 0xfaf08080, 0xbf3f0a0a, 0x0a3ebfbf, 0x80f0faea},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat93,3,0.019600},
  {owl_attackpat94,1,8, "A413a",-3,-2,0,3,3,5,0x0,646,
    { 0xf0f0f0b0, 0xffff0000, 0x3f3f3f3f, 0x00fffefe, 0x00ffffff, 0xf0f0f0f0, 0xfeff0000, 0x3f3f3f3a},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_attackpat94,3,0.365200},
  {owl_attackpat95,4,8, "A414",-4,-3,0,3,4,6,0x0,686,
    { 0x00fcfefe, 0xf0f0f080, 0xfefc0000, 0x3f3f3f0a, 0xf0f0f080, 0xfefc0000, 0x3f3f3f0a, 0x00fcfefe},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,82.000000,attributes+0,1,NULL,autohelperowl_attackpat95,3,0.019600},
  {owl_attackpat96,1,8, "A414a",-3,-3,0,3,3,6,0x0,722,
    { 0x00feffff, 0xf0f0f0e0, 0xfffe0000, 0x3f3f3f2f, 0xf0f0f0e0, 0xfffe0000, 0x3f3f3f2f, 0x00feffff},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat96,3,0.023056},
  {owl_attackpat97,2,8, "A415",-1,-2,1,0,2,2,0x0,685,
    { 0x00fcfcbc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3e00, 0xf0f0f000, 0xfcfc0000, 0x3e3f3f00, 0x00fcfcf8},
    { 0x00240008, 0x00201000, 0x00600000, 0x12200000, 0x10200000, 0x00240000, 0x00201200, 0x00600080}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat97,3,1.810000},
  {owl_attackpat98,3,8, "A416",-1,-2,1,2,2,4,0x0,683,
    { 0xfcfc3c34, 0x3cfffc00, 0xf0fcfc30, 0xfdfff000, 0xfcff3c00, 0x3cfcfc30, 0xf0fffd00, 0xfcfcf070},
    { 0x00600020, 0x10200000, 0x00240000, 0x00221000, 0x00201000, 0x00600000, 0x10220000, 0x00240020}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat99,5,8, "A417",0,-1,3,2,3,3,0x0,722,
    { 0x003fffbf, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0e00, 0xf0f0c000, 0xff3f0000, 0x0e3f3f3f, 0x00f0fcf8},
    { 0x00214000, 0x40200010, 0x04200000, 0x00200400, 0x00204000, 0x40210000, 0x04200010, 0x00200400}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat99,3,0.019600},
  {owl_attackpat100,3,8, "A418",-1,-2,1,1,2,3,0x0,647,
    { 0xfcfcf400, 0xfcfc7c00, 0x7fffff00, 0xf4fcfcfc, 0x7cfcfcfc, 0xf4fcfc00, 0xfcfcf400, 0xffff7f00},
    { 0x04182000, 0x00902400, 0x21904000, 0x60180004, 0x24900040, 0x20180400, 0x00186000, 0x40902100}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat100,0,0.010000},
  {owl_attackpat101,2,8, "A419",0,0,1,2,1,2,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200018, 0x00200000, 0x00200000, 0x02210000, 0x00200000, 0x00200000, 0x00210200, 0x00200090}
   , 0x80,68.000000,attributes+0,1,NULL,autohelperowl_attackpat101,3,1.810000},
  {owl_attackpat102,2,8, "A419b",0,0,1,2,1,2,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200018, 0x00200000, 0x00200000, 0x02210000, 0x00200000, 0x00200000, 0x00210200, 0x00200090}
   , 0x80,68.000000,attributes+0,1,NULL,autohelperowl_attackpat102,3,1.810000},
  {owl_attackpat103,6,8, "A420",-1,-1,2,2,3,3,0x0,722,
    { 0x3effff55, 0xf0fcfcf8, 0xfcfcf000, 0xfdfd3d00, 0xfcfcf000, 0xffff3e00, 0x3dfdfdbd, 0xf0fcfc54},
    { 0x20611000, 0x10680010, 0x10242000, 0x00a41000, 0x00681000, 0x10612000, 0x10a40010, 0x20241000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat103,3,1.810000},
  {owl_attackpat104,3,8, "A421",-1,-2,2,0,3,2,0x0,722,
    { 0x003c7f7f, 0x40f0f0c0, 0xf4f00000, 0x3f3f0500, 0xf0f04000, 0x7f3c0000, 0x053f3f0f, 0x00f0f4f4},
    { 0x00100201, 0x00100080, 0x00100000, 0x00100000, 0x00100000, 0x02100000, 0x00100009, 0x00100000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat104,0,0.016000},
  {owl_attackpat105,3,8, "A422",0,-1,2,2,2,3,0x0,685,
    { 0x0038ff18, 0xc0f0e0c0, 0xfcb00000, 0x2e3d0c00, 0xe0f0c000, 0xff380000, 0x0c3d2e0c, 0x00b0fc90},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat105,0,6.010000},
  {owl_attackpat106,3,8, "A422a",0,-1,2,2,2,3,0x0,685,
    { 0x0038ff18, 0xc0f0e0c0, 0xfcb00000, 0x2e3d0c00, 0xe0f0c000, 0xff380000, 0x0c3d2e0c, 0x00b0fc90},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat106,0,6.010000},
  {owl_attackpat107,3,8, "A423",-1,0,1,3,2,3,0x0,686,
    { 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc},
    { 0x00280040, 0x00202000, 0x00a00000, 0x20200100, 0x20200000, 0x00280000, 0x01202000, 0x00a00004}
   , 0x80,61.000000,attributes+0,1,NULL,autohelperowl_attackpat107,3,0.010000},
  {owl_attackpat108,3,8, "A423a",-1,0,1,3,2,3,0x0,686,
    { 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc},
    { 0x00280040, 0x00202000, 0x00a00000, 0x20200100, 0x20200000, 0x00280000, 0x01202000, 0x00a00004}
   , 0x0,61.000000,attributes+0,1,NULL,autohelperowl_attackpat108,3,0.010000},
  {owl_attackpat109,4,8, "A424",-1,-1,1,2,2,3,0x0,648,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfffefc00, 0xfcfcfc2c, 0xfcfcfce0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfeff00},
    { 0x68102800, 0x04988800, 0xa010a400, 0x88984000, 0x88980400, 0x28106800, 0x40988800, 0xa410a000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat109,0,0.010000},
  {owl_attackpat110,2,4, "A425",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120021, 0x00100020, 0x00100000, 0x00120000, 0x00100000, 0x00120000, 0x00120021, 0x00100020}
   , 0x20,90.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat111,1,8, "A426",-2,-2,1,1,3,3,0x0,609,
    { 0xfcf0c000, 0xff3f0c00, 0x0f3fff3c, 0xc0f0fcfc, 0x0c3ffffc, 0xc0f0fcf0, 0xfcf0c000, 0xff3f0f00},
    { 0x04204000, 0x40200400, 0x04204000, 0x40200400, 0x04204000, 0x40200400, 0x04204000, 0x40200400}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat111,3,0.100816},
  {owl_attackpat112,2,4, "A427",-1,-2,1,1,2,3,0x0,647,
    { 0x3cfc3c00, 0x30fcfc00, 0xf0fff000, 0xfcfc3030, 0xfcfc3030, 0x3cfc3c00, 0x30fcfc00, 0xf0fff000},
    { 0x04280400, 0x00206400, 0x40a04000, 0x64200000, 0x64200000, 0x04280400, 0x00206400, 0x40a04000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat112,3,1.096000},
  {owl_attackpat113,2,8, "A501",0,-2,2,1,2,3,0x2,722,
    { 0x003dffff, 0xc0f0f0d0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3d0000, 0x0f3f3f1f, 0x00f0fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x80,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat114,4,8, "A502",-1,0,1,2,2,2,0x2,685,
    { 0x003cfcbc, 0xc0f0f000, 0xfcf00000, 0x3f3f0e00, 0xf0f0c000, 0xfc3c0000, 0x0e3f3f00, 0x00f0fcf8},
    { 0x00188028, 0x80102000, 0x08900000, 0x22120800, 0x20108000, 0x80180000, 0x08122200, 0x009008a0}
   , 0xa0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat114,0,1.000000},
  {owl_attackpat115,5,8, "A503",-1,0,1,2,2,2,0x2,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x0a212200, 0x00a00898, 0x20208000, 0x80280000, 0x08a00000, 0x22210a00, 0x00288098, 0x80202000}
   , 0x90,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat116,6,8, "A503b",-1,-2,1,1,2,3,0x2,722,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00},
    { 0xa8102000, 0x08980800, 0x2212a800, 0x80988028, 0x089808a0, 0x2010a800, 0x80988000, 0xa8122200}
   , 0x10,32.000000,attributes+0,1,NULL,autohelperowl_attackpat116,0,0.050000},
  {owl_attackpat117,2,8, "A504",0,0,1,1,1,1,0x2,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x80,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat118,2,8, "A505",0,-1,2,2,2,3,0x2,722,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat119,2,8, "A506",-1,0,1,2,2,2,0x2,685,
    { 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc},
    { 0x00108080, 0x80100000, 0x08100000, 0x00100a00, 0x00108000, 0x80100000, 0x0a100000, 0x00100808}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat120,2,8, "A507",-1,0,1,2,2,2,0x2,685,
    { 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c},
    { 0x00200420, 0x00204000, 0x40200000, 0x04220000, 0x40200000, 0x04200000, 0x00220400, 0x00204020}
   , 0x80,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat121,4,8, "A508",0,-2,2,2,2,4,0x2,685,
    { 0x007effff, 0xd0f0f0e0, 0xfff40000, 0x3f3f1f0d, 0xf0f0d0c0, 0xff7e0000, 0x1f3f3f2f, 0x00f4fffd},
    { 0x00200100, 0x00200040, 0x02200000, 0x00200008, 0x00200080, 0x01200000, 0x00200004, 0x00200200}
   , 0x80,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat122,5,8, "A509",-1,0,1,2,2,2,0x2,685,
    { 0x007cfc7c, 0xd0f0f000, 0xfcf40000, 0x3f3f1d00, 0xf0f0d000, 0xfc7c0000, 0x1d3f3f00, 0x00f4fcf4},
    { 0x00280024, 0x00202000, 0x00a00000, 0x21220000, 0x20200000, 0x00280000, 0x00222100, 0x00a00060}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat122,3,0.400000},
  {owl_attackpat123,4,8, "A510",-1,-2,1,2,2,4,0x2,683,
    { 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc},
    { 0x0090a410, 0xa2904000, 0x68180008, 0x04192800, 0x4090a200, 0xa4900080, 0x28190400, 0x00186810}
   , 0x80,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat124,4,8, "A511",0,-1,2,2,2,3,0x2,685,
    { 0x003dfdfd, 0xc0f0f050, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfd3d0000, 0x0f3f3f15, 0x00f0fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat124,3,0.010000},
  {owl_attackpat125,3,8, "A512",-1,-2,1,1,2,3,0x2,685,
    { 0x1c38fcfc, 0xc0f4ec00, 0xfcb0d000, 0xef7f0f00, 0xecf4c000, 0xfc381c00, 0x0f7fef00, 0xd0b0fcfc},
    { 0x08204000, 0x40200800, 0x04208000, 0x80200400, 0x08204000, 0x40200800, 0x04208000, 0x80200400}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat126,1,8, "A513",-2,0,1,2,3,2,0x4,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat126,3,0.610000},
  {owl_attackpat127,4,8, "A514",-1,-1,2,1,3,2,0x4,721,
    { 0xf7ffbf00, 0xbcfcf4fc, 0xf8fc7c00, 0x7cfcf800, 0xf4fcbc00, 0xbffff700, 0xf8fc7cfc, 0x7cfcf800},
    { 0x80602400, 0x18a04000, 0x60240800, 0x04289000, 0x40a01800, 0x24608000, 0x90280400, 0x08246000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat127,3,1.600000},
  {owl_attackpat128,4,8, "A515",0,-2,1,2,1,4,0x2,647,
    { 0x00ffff00, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0x00ffff00},
    { 0x002a1600, 0x006060a0, 0x50a10000, 0x24240010, 0x60600010, 0x162a0000, 0x00242428, 0x00a15000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat128,3,1.000000},
  {owl_attackpat129,3,8, "A516",-1,-2,1,2,2,4,0x2,721,
    { 0xffffff00, 0xfcfcfcfc, 0xfffffe00, 0xfcfcfcbc, 0xfcfcfcf8, 0xffffff00, 0xfcfcfcfc, 0xfeffff00},
    { 0x68120000, 0x04180820, 0x0010a400, 0x80904000, 0x08180400, 0x00126800, 0x40908020, 0xa4100000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat129,0,0.016000},
  {owl_attackpat130,6,8, "A517",-1,-2,1,3,2,5,0x2,647,
    { 0xfdffff00, 0xfcfcfcf4, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffffd00, 0xfcfcfc7c, 0xfcffff00},
    { 0x68120000, 0x04180820, 0x0010a400, 0x80904000, 0x08180400, 0x00126800, 0x40908020, 0xa4100000}
   , 0x0,5.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat131,5,8, "A518",-1,-3,1,1,2,4,0x2,610,
    { 0x50fcfc00, 0xf4f4f000, 0xffff1700, 0x3c7c7cfc, 0xf0f4f4fc, 0xfcfc5000, 0x7c7c3c00, 0x17ffff00},
    { 0x00280800, 0x0020a000, 0x80a00000, 0x28200000, 0xa0200000, 0x08280000, 0x00202800, 0x00a08000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat132,4,8, "A601",-1,0,1,3,2,3,0x1,723,
    { 0x003cfc7c, 0xc0f0f000, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xfc3c0000, 0x0d3f3f00, 0x00f0fcf4},
    { 0x00248000, 0x80201000, 0x08600000, 0x10200800, 0x10208000, 0x80240000, 0x08201000, 0x00600800}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat133,1,8, "A602",-1,0,1,1,2,1,0x5,685,
    { 0x00fcbc00, 0xb0f0f000, 0xf8fc0000, 0x3c3c3800, 0xf0f0b000, 0xbcfc0000, 0x383c3c00, 0x00fcf800},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat133,3,1.000000},
  {owl_attackpat134,4,8, "A603",0,-2,1,2,1,4,0x2,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfdfd0000, 0x3c3c3c14, 0xf0f0f050, 0xffff0000, 0x3c3c3c3c, 0x00fdfd00},
    { 0x00a10000, 0x20200010, 0x00280000, 0x00202000, 0x00202000, 0x00a10000, 0x20200010, 0x00280000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat134,3,1.011760},
  {owl_attackpat135,3,8, "A603b",0,-1,1,2,1,3,0x2,685,
    { 0x007dff00, 0xd0f0f0d0, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xff7d0000, 0x1c3c3c1c, 0x00f4fc00},
    { 0x00200100, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat135,3,0.610000},
  {owl_attackpat136,2,8, "A604",0,-1,1,3,1,4,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00280000, 0x00202000, 0x00a00000, 0x20200000, 0x20200000, 0x00280000, 0x00202000, 0x00a00000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat137,1,8, "A605",0,-1,1,2,1,3,0xa,685,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200010, 0x00200000, 0x00200000, 0x00210000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat138,4,8, "A606",0,-2,1,2,1,4,0x2,685,
    { 0x007fff00, 0xd0f0f0f0, 0xfdf70000, 0x3c3c1c34, 0xf0f0d070, 0xff7f0000, 0x1c3c3c3c, 0x00f7fd00},
    { 0x00214000, 0x40200010, 0x04220000, 0x00200420, 0x00204020, 0x40210000, 0x04200010, 0x00220400}
   , 0x10,50.000000,attributes+0,1,NULL,autohelperowl_attackpat138,3,0.610000},
  {owl_attackpat139,2,8, "A607a",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00a40000, 0x20201000, 0x00680000, 0x10202000, 0x10202000, 0x00a40000, 0x20201000, 0x00680000}
   , 0x10,36.000000,attributes+0,1,NULL,autohelperowl_attackpat139,3,0.613600},
  {owl_attackpat140,1,8, "A607b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x10,36.000000,attributes+0,1,NULL,autohelperowl_attackpat140,3,0.613600},
  {owl_attackpat141,2,8, "A607c",0,-1,1,1,1,2,0x2,685,
    { 0x007cfc00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0x00f4fc00},
    { 0x00240400, 0x00205000, 0x40600000, 0x14200000, 0x50200000, 0x04240000, 0x00201400, 0x00604000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_attackpat141,3,0.610000},
  {owl_attackpat142,2,8, "A607d",0,-1,1,2,1,3,0x2,722,
    { 0x003fbf00, 0x80f0f0f0, 0xf8f00000, 0x3c3c0800, 0xf0f08000, 0xbf3f0000, 0x083c3c3c, 0x00f0f800},
    { 0x00290000, 0x00202010, 0x00a00000, 0x20200000, 0x20200000, 0x00290000, 0x00202010, 0x00a00000}
   , 0x10,36.000000,attributes+0,1,NULL,autohelperowl_attackpat142,3,0.101283},
  {owl_attackpat143,2,8, "A608",0,-1,1,1,1,2,0x2,685,
    { 0x00f4fc00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0x007cfc00},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat143,3,0.378160},
  {owl_attackpat144,2,8, "A609",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat145,2,8, "A610",0,-2,1,1,1,3,0x2,722,
    { 0x00ff3f00, 0x30f0f0f0, 0xf0fc0000, 0x3c3c3000, 0xf0f03000, 0x3fff0000, 0x303c3c3c, 0x00fcf000},
    { 0x00620000, 0x10200020, 0x00240000, 0x00201000, 0x00201000, 0x00620000, 0x10200020, 0x00240000}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat145,3,1.000000},
  {owl_attackpat146,4,8, "A611",-1,-1,1,2,2,3,0x2,722,
    { 0x34ffff00, 0xf0fcf4f0, 0xfcfc7000, 0x7cfc3c00, 0xf4fcf000, 0xffff3400, 0x3cfc7c3c, 0x70fcfc00},
    { 0x10a24000, 0x60240020, 0x04281000, 0x00602400, 0x00246000, 0x40a21000, 0x24600020, 0x10280400}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat146,3,0.010000},
  {owl_attackpat147,4,8, "A612",-1,-1,1,2,2,3,0x2,648,
    { 0xbcffff00, 0xf8fcfcf0, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbc00, 0xbcfcfc3c, 0xf8fcfc00},
    { 0x18622100, 0x10a40860, 0x20249000, 0x80681000, 0x08a41000, 0x21621800, 0x10688024, 0x90242000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat147,3,0.010000},
  {owl_attackpat148,3,8, "A613",-1,-2,1,1,2,3,0x2,721,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x10a00080, 0x20240000, 0x00281000, 0x00602200, 0x00242000, 0x00a01000, 0x22600000, 0x10280008}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat148,3,1.000000},
  {owl_attackpat149,4,8, "A614",-1,-2,1,1,2,3,0x2,721,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x10608088, 0x90240000, 0x08241000, 0x02601a00, 0x00249000, 0x80601000, 0x1a600200, 0x10240888}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat149,3,1.000000},
  {owl_attackpat150,3,4, "A615",0,-2,2,2,2,4,0x2,686,
    { 0x00fffcfc, 0xf0f0f030, 0xfcff0000, 0x3f3f3f30, 0xf0f0f030, 0xfcff0000, 0x3f3f3f30, 0x00fffcfc},
    { 0x00a90000, 0x20202010, 0x00a90000, 0x20202010, 0x20202010, 0x00a90000, 0x20202010, 0x00a90000}
   , 0x10,65.000000,attributes+0,1,NULL,autohelperowl_attackpat150,3,0.010000},
  {owl_attackpat151,4,8, "A616",-1,-2,2,1,3,3,0x4,722,
    { 0xf5ffbf00, 0xbcfcf4f4, 0xf8fc7c00, 0x7cfcf800, 0xf4fcbc00, 0xbffff500, 0xf8fc7c7c, 0x7cfcf800},
    { 0x80600000, 0x18200000, 0x00240800, 0x00209000, 0x00201800, 0x00608000, 0x90200000, 0x08240000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat151,3,1.011760},
  {owl_attackpat152,5,8, "A617",-1,0,2,2,3,2,0x2,723,
    { 0x3c3f3f3f, 0x00fcfcf0, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3c00, 0x00ffff3f, 0xf0f0f0f0},
    { 0x18222120, 0x00a40860, 0x20209000, 0x806a0000, 0x08a40000, 0x21221800, 0x006a8024, 0x90202020}
   , 0x10,50.000000,attributes+0,1,NULL,autohelperowl_attackpat152,3,0.010000},
  {owl_attackpat153,5,8, "A618",-1,-1,1,1,2,2,0x2,720,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x6090a800, 0xa4988000, 0xa8182400, 0x08986800, 0x8098a400, 0xa8906000, 0x68980800, 0x2418a800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat153,0,3.000000},
  {owl_attackpat154,1,8, "A619",0,-1,1,0,1,1,0xa,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat155,2,8, "A620",0,-1,1,1,1,2,0x2,648,
    { 0x00fcf400, 0xf0f07000, 0x7cfc0000, 0x343c3c00, 0x70f0f000, 0xf4fc0000, 0x3c3c3400, 0x00fc7c00},
    { 0x00241000, 0x00601000, 0x10600000, 0x10240000, 0x10600000, 0x10240000, 0x00241000, 0x00601000}
   , 0x10,65.000000,attributes+0,1,NULL,autohelperowl_attackpat155,3,0.010000},
  {owl_attackpat156,2,8, "A621",0,-2,1,2,1,4,0x2,648,
    { 0x00bcff00, 0xe0f0f0c0, 0xfff80000, 0x3c3c2c0c, 0xf0f0e0c0, 0xffbc0000, 0x2c3c3c0c, 0x00f8ff00},
    { 0x00180200, 0x00102080, 0x00900000, 0x20100000, 0x20100000, 0x02180000, 0x00102008, 0x00900000}
   , 0x10,10.000000,attributes+0,1,NULL,autohelperowl_attackpat156,0,0.016000},
  {owl_attackpat157,3,8, "A622",0,-1,1,2,1,3,0x2,722,
    { 0x007ffe00, 0xd0f0f0b0, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xfe7f0000, 0x1c3c3c38, 0x00f4fc00},
    { 0x00218000, 0x80200010, 0x08200000, 0x00200800, 0x00208000, 0x80210000, 0x08200010, 0x00200800}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat157,3,1.366000},
  {owl_attackpat158,2,8, "A623",0,-2,2,2,2,4,0xa,649,
    { 0x007fffff, 0xd0f0f0f0, 0xfff70000, 0x3f3f1f3f, 0xf0f0d0f0, 0xff7f0000, 0x1f3f3f3f, 0x00f7ffff},
    { 0x00210100, 0x00200050, 0x00200000, 0x00200000, 0x00200000, 0x01210000, 0x00200014, 0x00200000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat159,6,8, "A626",0,-2,2,3,2,5,0x2,649,
    { 0x003fffff, 0xc0f0f0f0, 0xfff00000, 0x3f3f0f0f, 0xf0f0c0c0, 0xff3f0000, 0x0f3f3f3f, 0x00f0ffff},
    { 0x00298208, 0x80202090, 0x0aa00000, 0x22200808, 0x20208080, 0x82290000, 0x08202218, 0x00a00a80}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat159,3,0.010000},
  {owl_attackpat160,4,8, "A701",-1,-2,1,1,2,3,0x0,647,
    { 0xf8fcfc70, 0xfcfcf800, 0xfcfcbc00, 0xbcfffd00, 0xf8fcfc00, 0xfcfcf800, 0xfdffbc00, 0xbcfcfc34},
    { 0x10240820, 0x00249000, 0x80601000, 0x18620000, 0x90240000, 0x08241000, 0x00621800, 0x10608020}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat160,3,0.010000},
  {owl_attackpat161,4,8, "A702",-1,-2,2,1,3,3,0x0,647,
    { 0xf8fcfcf0, 0xfcfcf800, 0xfcfdbc00, 0xbcffff10, 0xf8fcfc10, 0xfcfcf800, 0xffffbc00, 0xbcfdfc3c},
    { 0x50240820, 0x04249000, 0x80601400, 0x18624000, 0x90240400, 0x08245000, 0x40621800, 0x14608020}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat161,3,0.010000},
  {owl_attackpat162,4,8, "A703",0,-1,2,2,2,3,0x0,721,
    { 0x0c3f3f0d, 0x00f0fcf0, 0xf0f0c000, 0xff3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cff3d, 0xc0f0f0c0},
    { 0x04202008, 0x00a00400, 0x20204000, 0x42280000, 0x04a00000, 0x20200400, 0x00284200, 0x40202080}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat163,3,8, "A704",-1,-1,1,2,2,3,0x0,647,
    { 0xf0fcfc30, 0xfcfcf000, 0xfcfc3c00, 0x3cfffc00, 0xf0fcfc00, 0xfcfcf000, 0xfcff3c00, 0x3cfcfc30},
    { 0x10241820, 0x00649000, 0x90601000, 0x18660000, 0x90640000, 0x18241000, 0x00661800, 0x10609020}
   , 0x80,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat164,2,8, "A705b",-1,0,1,2,2,2,0x0,685,
    { 0x0030fc30, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0x0030fc30},
    { 0x00200020, 0x00200000, 0x00200000, 0x00220000, 0x00200000, 0x00200000, 0x00220000, 0x00200020}
   , 0x80,61.000000,attributes+0,1,NULL,autohelperowl_attackpat164,3,0.400000},
  {owl_attackpat165,3,8, "A706",-1,0,1,2,2,2,0x0,648,
    { 0x0030fc3c, 0xc0f0c000, 0xfc300000, 0x0f3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0f00, 0x0030fcf0},
    { 0x00200820, 0x00208000, 0x80200000, 0x08220000, 0x80200000, 0x08200000, 0x00220800, 0x00208020}
   , 0x80,70.000000,attributes+0,1,NULL,autohelperowl_attackpat165,3,0.016000},
  {owl_attackpat166,3,8, "A707",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204820, 0x40208000, 0x84200000, 0x08220400, 0x80204000, 0x48200000, 0x04220800, 0x00208420}
   , 0x80,70.000000,attributes+0,1,NULL,autohelperowl_attackpat166,3,0.019600},
  {owl_attackpat167,4,8, "A708",0,-1,2,1,2,2,0x0,721,
    { 0x003c7c10, 0x40f0f000, 0xf4f00000, 0x3c3d0400, 0xf0f04000, 0x7c3c0000, 0x043d3c00, 0x00f0f410},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x20,80.000000,attributes+0,1,NULL,autohelperowl_attackpat167,3,0.610000},
  {owl_attackpat168,4,8, "A709",-1,0,1,2,2,2,0x0,686,
    { 0x00347c3c, 0x40f0d000, 0xf4700000, 0x1f3f0400, 0xd0f04000, 0x7c340000, 0x043f1f00, 0x0070f4f0},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x80,45.000000,attributes+0,1,NULL,autohelperowl_attackpat168,3,1.186000},
  {owl_attackpat169,4,8, "A710",0,-1,2,1,2,2,0x0,721,
    { 0x003c7c10, 0x40f0f000, 0xf4f00000, 0x3c3d0400, 0xf0f04000, 0x7c3c0000, 0x043d3c00, 0x00f0f410},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat169,3,0.016000},
  {owl_attackpat170,6,8, "A711",-1,0,1,3,2,3,0x0,648,
    { 0x00f4fcfc, 0xf0f0d000, 0xfc7c0000, 0x1f3f3f00, 0xd0f0f000, 0xfcf40000, 0x3f3f1f00, 0x007cfcfc},
    { 0x00600808, 0x10208000, 0x80240000, 0x0a201000, 0x80201000, 0x08600000, 0x10200a00, 0x00248080}
   , 0x80,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat171,4,8, "A712",0,-1,3,2,3,3,0x0,686,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00280202, 0x00202080, 0x00a00000, 0x20200000, 0x20200000, 0x02280000, 0x0020200a, 0x00a00000}
   , 0x80,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat172,6,8, "A713",-1,0,2,2,3,2,0x0,759,
    { 0x00fdff3d, 0xf0f0f0d0, 0xfcfc0000, 0x3f3f3c00, 0xf0f0f000, 0xfffd0000, 0x3c3f3f1d, 0x00fcfcf0},
    { 0x00684028, 0x50202000, 0x04a40000, 0x22221400, 0x20205000, 0x40680000, 0x14222200, 0x00a404a0}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat172,3,1.600000},
  {owl_attackpat173,7,8, "A714",0,-1,3,2,3,3,0x0,758,
    { 0x0f3f3f0d, 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfffd, 0xc0f0f0c0},
    { 0x06202008, 0x00a00408, 0x20204000, 0x42280000, 0x04a00000, 0x20200600, 0x00284280, 0x40202080}
   , 0x80,82.000000,attributes+0,1,NULL,autohelperowl_attackpat173,3,0.010000},
  {owl_attackpat174,6,8, "A715",0,-2,2,1,2,3,0x0,647,
    { 0x00fcf47c, 0xf0f07000, 0x7dfc0000, 0x373f3d04, 0x70f0f040, 0xf4fc0000, 0x3d3f3700, 0x00fc7df4},
    { 0x00280024, 0x00202000, 0x00a00000, 0x21220000, 0x20200000, 0x00280000, 0x00222100, 0x00a00060}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat174,3,0.610000},
  {owl_attackpat175,6,8, "A716",-1,0,1,2,2,2,0x0,648,
    { 0x00f4fc74, 0xf0f0d000, 0xfc7c0000, 0x1d3f3d00, 0xd0f0f000, 0xfcf40000, 0x3d3f1d00, 0x007cfc74},
    { 0x00600820, 0x10208000, 0x80240000, 0x08221000, 0x80201000, 0x08600000, 0x10220800, 0x00248020}
   , 0x80,50.000000,attributes+0,1,NULL,autohelperowl_attackpat175,3,1.000000},
  {owl_attackpat176,4,8, "A717",-1,-1,1,2,2,3,0x0,647,
    { 0x30fcf000, 0xf0fc3000, 0x3fff3000, 0x30fc3c3c, 0x30fcf0f0, 0xf0fc3000, 0x3cfc3000, 0x30ff3f00},
    { 0x00182000, 0x00902000, 0x22920000, 0x20180028, 0x209000a0, 0x20180000, 0x00182000, 0x00922200}
   , 0x90,75.000000,attributes+0,1,NULL,autohelperowl_attackpat176,0,0.610000},
  {owl_attackpat177,7,8, "A718",0,-1,2,2,2,3,0x0,648,
    { 0x0074f474, 0xd0f05000, 0x7f740000, 0x153f1d0c, 0x50f0d0c0, 0xf4740000, 0x1d3f1500, 0x00747f74},
    { 0x00200020, 0x00200000, 0x01200000, 0x00220004, 0x00200040, 0x00200000, 0x00220000, 0x00200120}
   , 0x80,50.000000,attributes+0,1,NULL,autohelperowl_attackpat177,3,1.000000},
  {owl_attackpat178,6,8, "A719",0,-1,2,2,2,3,0x0,722,
    { 0x003fff3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3f0000, 0x0c3f3f3f, 0x00f0fcf0},
    { 0x00298228, 0x80202090, 0x08a00000, 0x22220800, 0x20208000, 0x82290000, 0x08222218, 0x00a008a0}
   , 0x10,50.000000,attributes+0,1,NULL,autohelperowl_attackpat178,3,0.616000},
  {owl_attackpat179,5,8, "A719b",0,-1,2,1,2,2,0x8,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00a408a0, 0x20209000, 0x80680000, 0x18222200, 0x90202000, 0x08a40000, 0x22221800, 0x00688028}
   , 0x10,50.000000,attributes+0,1,NULL,autohelperowl_attackpat179,3,1.010000},
  {owl_attackpat180,4,8, "A720",-2,-2,2,1,4,3,0x0,721,
    { 0x7f7ffc3c, 0xd4fcff3c, 0xfcf4f4c0, 0xffff5c00, 0xfffcd400, 0xfc7f7f0c, 0x5cfffff0, 0xf4f4fcf0},
    { 0x02120014, 0x00100028, 0x00100000, 0x01110000, 0x00100000, 0x00120200, 0x001101a0, 0x00100050}
   , 0x80,40.000000,attributes+0,1,NULL,autohelperowl_attackpat180,0,0.592000},
  {owl_attackpat181,5,8, "A721",0,-1,2,2,2,3,0x0,722,
    { 0x003fff3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3f0000, 0x0c3f3f3f, 0x00f0fcf0},
    { 0x00288028, 0x80202000, 0x08a00000, 0x22220800, 0x20208000, 0x80280000, 0x08222200, 0x00a008a0}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat181,3,0.980800},
  {owl_attackpat182,7,8, "A801",-1,-1,1,2,2,3,0x2,722,
    { 0x1d7fff00, 0xd0f4fcf4, 0xfcf4d000, 0xfc7c1c00, 0xfcf4d000, 0xff7f1d00, 0x1c7cfc7c, 0xd0f4fc00},
    { 0x08228100, 0x80200860, 0x08208000, 0x80200800, 0x08208000, 0x81220800, 0x08208024, 0x80200800}
   , 0x20,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat183,5,8, "A802",-1,0,1,2,2,2,0x2,648,
    { 0x00f4fcf4, 0xf0f0d000, 0xfc7c0000, 0x1d3f3f00, 0xd0f0f000, 0xfcf40000, 0x3f3f1d00, 0x007cfc7c},
    { 0x00200860, 0x00208000, 0x80200000, 0x08220100, 0x80200000, 0x08200000, 0x01220800, 0x00208024}
   , 0x20,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat184,4,8, "A803",-1,-1,1,2,2,3,0x2,722,
    { 0x5cbfff00, 0xe4f4fcf0, 0xfcf8d400, 0xfc7c6c00, 0xfcf4e400, 0xffbf5c00, 0x6c7cfc3c, 0xd4f8fc00},
    { 0x08190000, 0x00102810, 0x00908000, 0xa0100000, 0x28100000, 0x00190800, 0x0010a010, 0x80900000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat184,0,1.600000},
  {owl_attackpat185,1,8, "A804",0,-1,1,2,1,3,0x2,685,
    { 0x00fcfa00, 0xf0f0b080, 0xbcfc0000, 0x383c3c00, 0xb0f0f000, 0xfafc0000, 0x3c3c3808, 0x00fcbc00},
    { 0x00244000, 0x40201000, 0x04600000, 0x10200400, 0x10204000, 0x40240000, 0x04201000, 0x00600400}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat185,3,1.000000},
  {owl_attackpat186,5,8, "A805",-1,-2,1,2,2,4,0x2,722,
    { 0x5cbfff00, 0xe4f4fcf0, 0xfffbd700, 0xfc7c6cfc, 0xfcf4e4fc, 0xffbf5c00, 0x6c7cfc3c, 0xd7fbff00},
    { 0x08190000, 0x00102810, 0x00908200, 0xa0100080, 0x28100008, 0x00190800, 0x0010a010, 0x82900000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat187,2,8, "A806",-1,-1,1,2,2,3,0x2,721,
    { 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x42600000, 0x14200008, 0x00240400, 0x00205000, 0x00201400, 0x00604200, 0x50200080, 0x04240000}
   , 0x80,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat188,2,8, "A807",-1,-1,1,1,2,2,0x2,721,
    { 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00},
    { 0x20601000, 0x10680000, 0x10242000, 0x00a41000, 0x00681000, 0x10602000, 0x10a40000, 0x20241000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat189,2,8, "A808",0,-1,1,2,1,3,0xa,722,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00906000, 0x60900000, 0x24190000, 0x00182410, 0x00906010, 0x60900000, 0x24180000, 0x00192400}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat190,3,8, "A809",-1,-2,1,2,2,4,0x2,721,
    { 0xfcfcfc0c, 0xffffff00, 0xfcfcfcfc, 0xfffcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcff00, 0xfcfcfcc0},
    { 0x80205000, 0x4a610100, 0x14200858, 0x00248400, 0x01614a00, 0x50208094, 0x84240000, 0x08201400}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat190,3,0.010000},
  {owl_attackpat191,2,8, "A810",-1,0,1,2,2,2,0x0,648,
    { 0x0030fc30, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0x0030fc30},
    { 0x00200420, 0x00204000, 0x40200000, 0x04220000, 0x40200000, 0x04200000, 0x00220400, 0x00204020}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat191,3,0.010000},
  {owl_attackpat192,4,8, "A811",-1,0,1,2,2,2,0x0,648,
    { 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0x3c3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c},
    { 0x002008a0, 0x00208000, 0x80200000, 0x08220200, 0x80200000, 0x08200000, 0x02220800, 0x00208028}
   , 0x10,65.000000,attributes+0,1,NULL,autohelperowl_attackpat192,3,0.019600},
  {owl_attackpat193,2,8, "A812",-2,-1,1,1,3,2,0x2,721,
    { 0xbcfcfc3c, 0xf8fcfc00, 0xfcfcf800, 0xffffbc00, 0xfcfcf800, 0xfcfcbc00, 0xbcffff00, 0xf8fcfcf0},
    { 0x00604020, 0x50200000, 0x04240000, 0x00221400, 0x00205000, 0x40600000, 0x14220000, 0x00240420}
   , 0x80,40.000000,attributes+0,1,NULL,autohelperowl_attackpat193,3,0.010000},
  {owl_attackpat194,3,8, "A813",-1,-1,1,1,2,2,0x2,683,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x80642000, 0x18a01000, 0x20640800, 0x10289000, 0x10a01800, 0x20648000, 0x90281000, 0x08642000}
   , 0x90,85.000000,attributes+0,1,NULL,autohelperowl_attackpat194,3,1.400800},
  {owl_attackpat195,3,8, "A814",-1,-1,1,1,2,2,0x2,721,
    { 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000},
    { 0x80602000, 0x18a00000, 0x20240800, 0x00289000, 0x00a01800, 0x20608000, 0x90280000, 0x08242000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat195,3,0.044800},
  {owl_attackpat196,5,8, "A901",-1,-1,1,2,2,3,0xa,722,
    { 0x3c3cfc00, 0xc0ffff00, 0xfcf0f0f0, 0xfcfc0c00, 0xffffc000, 0xfc3c3c3c, 0x0cfcfc00, 0xf0f0fc00},
    { 0x20249000, 0x806a1200, 0x186020a0, 0x10a40800, 0x126a8000, 0x90242028, 0x08a41000, 0x20601800}
   , 0x10,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat197,2,8, "A902",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00984400, 0x60106000, 0x44980000, 0x24102400, 0x60106000, 0x44980000, 0x24102400, 0x00984400}
   , 0x10,70.000000,attributes+0,1,NULL,autohelperowl_attackpat197,0,0.019600},
  {owl_attackpat198,2,8, "A902b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00984400, 0x60106000, 0x44980000, 0x24102400, 0x60106000, 0x44980000, 0x24102400, 0x00984400}
   , 0x10,30.000000,attributes+0,1,NULL,autohelperowl_attackpat198,0,0.019600},
  {owl_attackpat199,4,8, "A903",-1,-1,1,2,2,3,0xa,722,
    { 0x7cffff00, 0xf4fcfcf0, 0xfcfcf400, 0xfcfc7c00, 0xfcfcf400, 0xffff7c00, 0x7cfcfc3c, 0xf4fcfc00},
    { 0x28120000, 0x00180820, 0x0010a000, 0x80900000, 0x08180000, 0x00122800, 0x00908020, 0xa0100000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat200,4,8, "A904",-1,-1,1,1,2,2,0xa,722,
    { 0x34fcfc00, 0xf0fcf400, 0xfcfc7000, 0x7cfc3c00, 0xf4fcf000, 0xfcfc3400, 0x3cfc7c00, 0x70fcfc00},
    { 0x20906000, 0x60980000, 0x24182000, 0x00982400, 0x00986000, 0x60902000, 0x24980000, 0x20182400}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat200,0,0.016000},
  {owl_attackpat201,3,8, "A905",-1,-1,1,1,2,2,0xa,646,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x24102800, 0x00988400, 0xa0106000, 0x48980000, 0x84980000, 0x28102400, 0x00984800, 0x6010a000}
   , 0x10,36.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat202,5,8, "A906a",-1,-1,2,2,3,3,0xa,649,
    { 0xc0fcffff, 0xfcf0f0c0, 0xfcfc0c00, 0x3f3fff00, 0xf0f0fc00, 0xfffcc000, 0xff3f3f0f, 0x0cfcfcfc},
    { 0x80289204, 0x88602080, 0x18a00800, 0x21248800, 0x20608800, 0x92288000, 0x88242108, 0x08a01840}
   , 0x10,32.000000,attributes+0,1,NULL,autohelperowl_attackpat202,3,0.610000},
  {owl_attackpat203,5,8, "A906b",-1,-1,2,2,3,3,0xa,649,
    { 0xc0fcffff, 0xfcf0f0c0, 0xfcfc0c00, 0x3f3fff00, 0xf0f0fc00, 0xfffcc000, 0xff3f3f0f, 0x0cfcfcfc},
    { 0x80281a04, 0x0860a080, 0x90a00800, 0x29248000, 0xa0600800, 0x1a288000, 0x80242908, 0x08a09040}
   , 0x10,32.000000,attributes+0,1,NULL,autohelperowl_attackpat203,3,0.610000},
  {owl_attackpat204,5,8, "A907",-1,-1,2,2,3,3,0xa,648,
    { 0xf0fcfdff, 0xfcfcf040, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfdfcf000, 0xffff3f07, 0x3cfcfcfc},
    { 0x20680800, 0x1028a000, 0x80a42000, 0x28a01000, 0xa0281000, 0x08682000, 0x10a02800, 0x20a48000}
   , 0x10,65.000000,attributes+0,1,NULL,autohelperowl_attackpat204,3,1.000000},
  {owl_attackpat205,5,8, "A908",-1,-1,2,2,3,3,0xa,686,
    { 0xc0fcfcff, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f03, 0x0cfcfcfc},
    { 0x80681842, 0x1860a000, 0x90a40800, 0x28249100, 0xa0601800, 0x18688000, 0x91242802, 0x08a49004}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat205,3,0.050000},
  {owl_attackpat206,5,8, "A909",-1,-1,2,1,3,2,0xa,723,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x20a49810, 0xa0689000, 0x98682000, 0x18a52800, 0x9068a000, 0x98a42000, 0x28a51800, 0x20689810}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat207,3,8, "A910",0,-1,1,1,1,2,0x6,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00a80000, 0x20202000, 0x00a80000, 0x20202000, 0x20202000, 0x00a80000, 0x20202000, 0x00a80000}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_attackpat207,3,0.016000},
  {owl_attackpat208,3,8, "A911",0,-2,1,1,1,3,0x6,685,
    { 0x00f8fc00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0x00bfff00},
    { 0x00200000, 0x00200000, 0x02220000, 0x00200028, 0x002000a0, 0x00200000, 0x00200000, 0x00220200}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_attackpat208,3,0.010000},
  {owl_attackpat209,3,8, "A912",-1,-2,1,1,2,3,0x2,722,
    { 0xbfffff00, 0xf8fcfcfc, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbf00, 0xbcfcfcfc, 0xf8fcfc00},
    { 0x19620000, 0x10240824, 0x00249000, 0x80601000, 0x08241000, 0x00621900, 0x10608060, 0x90240000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat210,4,8, "A913",0,-1,1,2,1,3,0x2,722,
    { 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0},
    { 0x28200020, 0x00280800, 0x0020a000, 0x80a20000, 0x08280000, 0x00202800, 0x00a28000, 0xa0200020}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_attackpat210,3,0.610000},
  {owl_attackpat211,4,8, "A914",0,-1,1,2,1,3,0x2,722,
    { 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0},
    { 0x28200020, 0x00280800, 0x0020a000, 0x80a20000, 0x08280000, 0x00202800, 0x00a28000, 0xa0200020}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_attackpat211,3,1.000000},
  {owl_attackpat212,3,8, "A915",0,-2,2,2,2,4,0x2,648,
    { 0x00fafeff, 0xf0f0e0a0, 0xffbf0000, 0x2f3f3f3f, 0xe0f0f0f0, 0xfefa0000, 0x3f3f2f2b, 0x00bfffff},
    { 0x00200800, 0x00208000, 0x80220000, 0x08200020, 0x80200020, 0x08200000, 0x00200800, 0x00228000}
   , 0x10,85.000000,attributes+0,1,NULL,autohelperowl_attackpat212,3,0.010000},
  {owl_attackpat213,5,8, "A916",-1,-1,1,2,2,3,0x2,722,
    { 0x0dffff00, 0xf0f0fcf4, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xffff0d00, 0x3c3cfc7c, 0xc0fcfc00},
    { 0x08a20000, 0x20200820, 0x00288000, 0x80202000, 0x08202000, 0x00a20800, 0x20208020, 0x80280000}
   , 0x10,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat214,5,4, "A917",-1,-2,2,1,3,3,0x0,722,
    { 0x0c3ffc30, 0xc0f0fc30, 0xfcf0c000, 0xfc3f0c00, 0xfcf0c000, 0xfc3f0c00, 0x0c3ffc30, 0xc0f0fc30},
    { 0x08228020, 0x80200820, 0x08208000, 0x80220800, 0x08208000, 0x80220800, 0x08228020, 0x80200820}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat215,4,8, "A918",-1,-2,2,1,3,3,0x0,722,
    { 0x0c3ffc00, 0xc0f0fc30, 0xfcf0c000, 0xfc3c0c00, 0xfcf0c000, 0xfc3f0c00, 0x0c3cfc30, 0xc0f0fc00},
    { 0x08228000, 0x80200820, 0x08208000, 0x80200800, 0x08208000, 0x80220800, 0x08208020, 0x80200800}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat216,5,8, "A919",0,-2,2,3,2,5,0x2,686,
    { 0x003cffff, 0xc0f0f0c0, 0xfff20000, 0x3f3f0f2f, 0xf0f0c0e0, 0xff3c0000, 0x0f3f3f0f, 0x00f2ffff},
    { 0x00288200, 0x80202080, 0x09a00000, 0x20200804, 0x20208040, 0x82280000, 0x08202008, 0x00a00900}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat217,6,8, "A920",0,-2,2,2,2,4,0x2,686,
    { 0x003cfffd, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f01, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0d, 0x00f0fcfd},
    { 0x00288204, 0x80202080, 0x08a00000, 0x21200800, 0x20208000, 0x82280000, 0x08202108, 0x00a00840}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat218,6,8, "A921",0,-2,2,2,2,4,0x2,685,
    { 0x00f0fcfd, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0d, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f01, 0x003cfffd},
    { 0x00a00840, 0x20208000, 0x82280000, 0x08202108, 0x80202080, 0x08a00000, 0x21200800, 0x00288204}
   , 0x10,30.000000,attributes+0,1,NULL,autohelperowl_attackpat218,3,1.000000},
  {owl_attackpat219,2,8, "A1001",0,0,1,1,1,1,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0xa0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat219,3,0.667600},
  {owl_attackpat220,2,8, "A1001b",0,0,1,1,1,1,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0xa0,50.000000,attributes+0,1,NULL,autohelperowl_attackpat220,3,1.810000},
  {owl_attackpat221,2,8, "A1002",-1,-3,1,0,2,3,0x0,686,
    { 0x003c3c30, 0x00f0f000, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3c00, 0x00f0f030},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat221,3,3.160000},
  {owl_attackpat222,2,8, "A1003",-1,-3,1,0,2,3,0x0,686,
    { 0x003c3c30, 0x00f0f000, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3c00, 0x00f0f030},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x80,55.000000,attributes+0,1,NULL,autohelperowl_attackpat222,3,2.800000},
  {owl_attackpat223,2,8, "A1005",-1,-1,1,0,2,1,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x80,90.000000,attributes+0,1,NULL,autohelperowl_attackpat223,0,1.810000},
  {owl_attackpat224,2,8, "A1005b",-1,-1,1,0,2,1,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x80,90.000000,attributes+0,1,NULL,autohelperowl_attackpat224,0,1.810000},
  {owl_attackpat225,2,8, "A1006",0,-1,2,1,2,2,0x0,685,
    { 0x00fcfc30, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0x00fcfc30},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x80,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat226,2,8, "A1006b",0,-1,2,1,2,2,0x0,685,
    { 0x00fcfc30, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0x00fcfc30},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat226,0,0.010000},
  {owl_attackpat227,2,8, "A1008",-1,-1,0,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat227,0,0.016000},
  {owl_attackpat228,2,8, "A1008b",-1,0,1,2,2,2,0x0,685,
    { 0x00bcbcb0, 0xa0f0f000, 0xf8f80000, 0x3c3f2a00, 0xf0f0a000, 0xbcbc0000, 0x2a3f3c00, 0x00f8f838},
    { 0x00240020, 0x00201000, 0x00600000, 0x10220000, 0x10200000, 0x00240000, 0x00221000, 0x00600020}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat228,3,0.376000},
  {owl_attackpat229,2,8, "A1009",0,-1,1,2,1,3,0x2,685,
    { 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0},
    { 0x20100020, 0x00180000, 0x00102000, 0x00920000, 0x00180000, 0x00102000, 0x00920000, 0x20100020}
   , 0x80,55.000000,attributes+0,1,NULL,autohelperowl_attackpat229,0,1.000000},
  {owl_attackpat230,2,8, "A1010",-1,-2,1,0,2,2,0x2,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00600080, 0x10200000, 0x00240000, 0x00201200, 0x00201000, 0x00600000, 0x12200000, 0x00240008}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat230,3,1.000000},
  {owl_attackpat231,4,8, "A1011",0,-1,1,1,1,2,0x2,685,
    { 0x00fc7400, 0x70f07000, 0x74fc0000, 0x343c3400, 0x70f07000, 0x74fc0000, 0x343c3400, 0x00fc7400},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat231,0,0.016000},
  {owl_attackpat232,3,8, "A1012",-1,-1,1,2,2,3,0x0,721,
    { 0xf0ffbc00, 0xbcfcf030, 0xf8fc3c00, 0x3cfcf800, 0xf0fcbc00, 0xbcfff000, 0xf8fc3c30, 0x3cfcf800},
    { 0x80611800, 0x18608010, 0x90240800, 0x08249000, 0x80601800, 0x18618000, 0x90240810, 0x08249000}
   , 0x80,45.000000,attributes+0,1,NULL,autohelperowl_attackpat232,3,1.006000},
  {owl_attackpat233,2,8, "A1013",-1,0,1,2,2,2,0x0,722,
    { 0x003cfc30, 0xc0f0f000, 0xfcf00000, 0x3c3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3c00, 0x00f0fc30},
    { 0x00284000, 0x40202000, 0x04a00000, 0x20200400, 0x20204000, 0x40280000, 0x04202000, 0x00a00400}
   , 0x0,10.000000,attributes+0,1,NULL,autohelperowl_attackpat233,3,2.890000},
  {owl_attackpat234,4,8, "A1014",0,-4,1,1,1,5,0x2,722,
    { 0x007fff00, 0xd0f0f0f0, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xff7f0000, 0x1c3c3c3c, 0x00f4fc00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x80,55.000000,attributes+0,1,NULL,autohelperowl_attackpat234,0,0.019600},
  {owl_attackpat235,4,8, "A1015",0,0,1,3,1,3,0x0,686,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00280000, 0x00202000, 0x00a00000, 0x20200000, 0x20200000, 0x00280000, 0x00202000, 0x00a00000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat235,3,1.096000},
  {owl_attackpat236,4,8, "A1015a",0,0,1,3,1,3,0x0,686,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00280000, 0x00202000, 0x00a00000, 0x20200000, 0x20200000, 0x00280000, 0x00202000, 0x00a00000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat236,3,1.096000},
  {owl_attackpat237,3,8, "A1016",0,-2,1,1,1,3,0x2,685,
    { 0x0037fe00, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0x0070fc00},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat237,0,0.902176},
  {owl_attackpat238,3,8, "A1016a",0,-2,1,1,1,3,0x2,685,
    { 0x0037fe00, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0x0070fc00},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat238,0,0.902176},
  {owl_attackpat239,4,8, "A1017",-1,-1,0,2,1,3,0x0,722,
    { 0x1c3c3c38, 0x00f4fc00, 0xf0f0d000, 0xfe7f0000, 0xfcf40000, 0x3c3c1c00, 0x007ffe00, 0xd0f0f0b0},
    { 0x08200020, 0x00200800, 0x00208000, 0x80220000, 0x08200000, 0x00200800, 0x00228000, 0x80200020}
   , 0x80,65.000000,attributes+0,1,NULL,autohelperowl_attackpat239,3,1.582000},
  {owl_attackpat240,2,8, "A1018",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3e, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3e, 0x00f0f0f0},
    { 0x00120020, 0x00100020, 0x00100000, 0x00120000, 0x00100000, 0x00120000, 0x00120020, 0x00100020}
   , 0x80,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat241,2,8, "A1019",-1,0,1,3,2,3,0x0,648,
    { 0x00fcf8fc, 0xf0f0b000, 0xbcfc0000, 0x3b3f3f00, 0xb0f0f000, 0xf8fc0000, 0x3f3f3b00, 0x00fcbcfc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x80,65.000000,attributes+0,1,NULL,autohelperowl_attackpat241,3,2.461600},
  {owl_attackpat242,1,4, "A1020",-3,-1,1,3,4,4,0x0,720,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat242,3,0.024748},
  {owl_attackpat243,2,8, "A1021",-1,0,1,2,2,2,0x0,685,
    { 0x00303cfc, 0x00f0c000, 0xf0300000, 0x0f3f0300, 0xc0f00000, 0x3c300000, 0x033f0f00, 0x0030f0fc},
    { 0x00200460, 0x00204000, 0x40200000, 0x04220100, 0x40200000, 0x04200000, 0x01220400, 0x00204024}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat243,3,6.010000},
  {owl_attackpat244,3,8, "A1022",-2,-1,1,2,3,3,0x0,648,
    { 0xfcfcfcf8, 0xfcfcfc00, 0xfffffe00, 0xfeffffbf, 0xfcfcfcf8, 0xfcfcfc00, 0xfffffe00, 0xfeffffbf},
    { 0x00200020, 0x00200000, 0x00220000, 0x00220021, 0x00200020, 0x00200000, 0x00220000, 0x00220021}
   , 0x80,55.000000,attributes+0,1,NULL,autohelperowl_attackpat244,3,10.000000},
  {owl_attackpat245,6,8, "A1023",0,-1,3,2,3,3,0x0,685,
    { 0x0070fcf0, 0xd0f0c000, 0xfc340000, 0x0c3f1f00, 0xc0f0d000, 0xfc700000, 0x1f3f0c00, 0x0034fc3c},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x80,45.000000,attributes+0,1,NULL,autohelperowl_attackpat245,3,10.000000},
  {owl_attackpat246,3,8, "A1024a",0,-1,1,2,1,3,0x2,685,
    { 0x00fc7f00, 0x70f0f0c0, 0xf4fc0000, 0x3c3c3400, 0xf0f07000, 0x7ffc0000, 0x343c3c0c, 0x00fcf400},
    { 0x00900200, 0x20100080, 0x00180000, 0x00102000, 0x00102000, 0x02900000, 0x20100008, 0x00180000}
   , 0x2880,90.000000,attributes+0,1,NULL,autohelperowl_attackpat246,0,6.010000},
  {owl_attackpat247,3,8, "A1024b",0,-1,1,2,1,3,0x2,685,
    { 0x00fe7f00, 0x70f0f0e0, 0xf4fc0000, 0x3c3c3400, 0xf0f07000, 0x7ffe0000, 0x343c3c2c, 0x00fcf400},
    { 0x00900200, 0x20100080, 0x00180000, 0x00102000, 0x00102000, 0x02900000, 0x20100008, 0x00180000}
   , 0x2800,90.000000,attributes+0,1,NULL,autohelperowl_attackpat247,0,6.010000},
  {owl_attackpat248,4,8, "A1025",0,-1,1,2,1,3,0x2,722,
    { 0x00fffd00, 0xf0f0f070, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfdff0000, 0x3c3c3c34, 0x00fcfc00},
    { 0x00926000, 0x60900020, 0x24180000, 0x00182400, 0x00906000, 0x60920000, 0x24180020, 0x00182400}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat248,0,9.610001},
  {owl_attackpat249,3,8, "A1026",-1,-2,1,2,2,4,0x0,683,
    { 0x3fff3800, 0x30fcbc3c, 0xb0fff000, 0xf8fc3030, 0xbcfc3030, 0x38ff3f00, 0x30fcf8f0, 0xf0ffb000},
    { 0x02221000, 0x00600028, 0x10200000, 0x00240000, 0x00600000, 0x10220200, 0x002400a0, 0x00201000}
   , 0x80,85.000000,attributes+0,1,NULL,autohelperowl_attackpat249,3,1.056400},
  {owl_attackpat250,2,8, "A1100",0,0,2,1,2,1,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00240018, 0x00201000, 0x00600000, 0x12210000, 0x10200000, 0x00240000, 0x00211200, 0x00600090}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_attackpat250,3,1.810000},
  {owl_attackpat251,1,4, "A1101",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x0,93.000000,attributes+0,1,NULL,autohelperowl_attackpat251,0,5.000000},
  {owl_attackpat252,1,4, "A1101b",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x0,94.000000,attributes+0,1,NULL,autohelperowl_attackpat252,0,1.816000},
  {owl_attackpat253,1,8, "A1101c",-1,-1,0,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00204400, 0x40204000, 0x44200000, 0x04200400, 0x40204000, 0x44200000, 0x04200400, 0x00204400}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_attackpat253,3,1.160000},
  {owl_attackpat254,2,8, "A1102",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108018, 0x80100000, 0x08100000, 0x02110800, 0x00108000, 0x80100000, 0x08110200, 0x00100890}
   , 0x80,95.000000,attributes+0,1,NULL,autohelperowl_attackpat254,0,3.000000},
  {owl_attackpat255,2,8, "A1104",-1,-1,1,1,2,2,0x0,683,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x04182400, 0x00906400, 0x60904000, 0x64180000, 0x64900000, 0x24180400, 0x00186400, 0x40906000}
   , 0x80,85.000000,attributes+0,1,NULL,autohelperowl_attackpat255,0,1.600000},
  {owl_attackpat256,4,8, "A1105",-1,-1,2,1,3,2,0x2,721,
    { 0xfcfc7c7c, 0x7cfcfc00, 0xf4fcfc00, 0xfffff500, 0xfcfc7c00, 0x7cfcfc00, 0xf5ffff00, 0xfcfcf4f4},
    { 0x40902400, 0x24904000, 0x60180400, 0x04186000, 0x40902400, 0x24904000, 0x60180400, 0x04186000}
   , 0xa0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat256,0,1.600000},
  {owl_attackpat257,6,8, "A1106",-1,-1,2,2,3,3,0x2,758,
    { 0xfcff7f5f, 0x7cfcfcf0, 0xf4fcfc00, 0xfffdf500, 0xfcfc7c00, 0x7ffffc00, 0xf5fdff3f, 0xfcfcf4d4},
    { 0x50982400, 0x24946000, 0x60981400, 0x24586000, 0x60942400, 0x24985000, 0x60582400, 0x14986000}
   , 0x80,70.000000,attributes+0,1,NULL,autohelperowl_attackpat257,0,1.960000},
  {owl_attackpat258,1,4, "A1107",-1,0,1,2,2,2,0x0,685,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_attackpat258,0,1.160000},
  {owl_attackpat259,1,8, "A1107b",-2,0,1,1,3,1,0x0,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x0,96.000000,attributes+0,1,NULL,autohelperowl_attackpat259,0,0.662800},
  {owl_attackpat260,1,8, "A1107c",-1,0,1,1,2,1,0x0,722,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat260,0,0.662800},
  {owl_attackpat261,2,8, "A1108",0,-1,1,1,1,2,0x0,648,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00241800, 0x00609000, 0x90600000, 0x18240000, 0x90600000, 0x18240000, 0x00241800, 0x00609000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat261,3,0.610000},
  {owl_attackpat262,3,8, "A1109",-1,-2,2,2,3,4,0x2,685,
    { 0x1cbcffff, 0xe0f4fcc0, 0xfffad000, 0xff7f2f2f, 0xfcf4e0e0, 0xffbc1c00, 0x2f7fff0f, 0xd0faffff},
    { 0x08240100, 0x00201840, 0x00608000, 0x90200000, 0x18200000, 0x01240800, 0x00209004, 0x80600000}
   , 0x80,65.000000,attributes+0,1,NULL,autohelperowl_attackpat262,3,0.610000},
  {owl_attackpat263,1,8, "A1110",0,-3,1,2,1,5,0x2,648,
    { 0x00fcfa00, 0xf0f0b080, 0xbfff0000, 0x383c3c3c, 0xb0f0f0f0, 0xfafc0000, 0x3c3c3808, 0x00ffbf00},
    { 0x00241000, 0x00601000, 0x10600000, 0x10240000, 0x10600000, 0x10240000, 0x00241000, 0x00601000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat264,4,8, "A1111",-2,-2,2,2,4,4,0x4,683,
    { 0xfcffffff, 0xfffffcf0, 0xfffdff3c, 0xffffffdf, 0xfcffffdc, 0xfffffcf0, 0xffffff3f, 0xfffdffff},
    { 0x4090a400, 0xa4904000, 0x68180400, 0x04186800, 0x4090a400, 0xa4904000, 0x68180400, 0x04186800}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat265,2,8, "A1112",-1,-1,1,2,2,3,0x2,648,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0xa0100040, 0x08180000, 0x00102800, 0x00908100, 0x00180800, 0x0010a000, 0x81900000, 0x28100004}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_attackpat265,0,1.000000},
  {owl_attackpat266,3,8, "A1113",-2,-2,2,2,4,4,0x0,722,
    { 0x7ffffcfd, 0xf4fcfc3c, 0xfcfcf400, 0xffff7f00, 0xfcfcf400, 0xfcff7f00, 0x7ffffff1, 0xf4fcfcfc},
    { 0x00110018, 0x00100010, 0x00100000, 0x02110000, 0x00100000, 0x00110000, 0x00110210, 0x00100090}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat266,0,0.016000},
  {owl_attackpat267,4,8, "A1114",-2,-2,2,2,4,4,0x0,647,
    { 0xf4fcfc3c, 0xfcfcf400, 0xfdff7f00, 0x7ffffcf5, 0xf4fcfc7c, 0xfcfcf400, 0xfcff7f00, 0x7ffffdf1},
    { 0x00108010, 0x80100000, 0x08110000, 0x00110810, 0x00108010, 0x80100000, 0x08110000, 0x00110810}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_attackpat267,0,0.016000},
  {owl_attackpat268,5,8, "A1115",-1,-1,2,2,3,3,0x0,721,
    { 0x4f7ffffd, 0xd4f0fcfc, 0xfcf4c400, 0xff3f5f00, 0xfcf0d400, 0xff7f4f00, 0x5f3ffffd, 0xc4f4fcfc},
    { 0x04206410, 0x40a04400, 0x64204000, 0x44290400, 0x44a04000, 0x64200400, 0x04294400, 0x40206410}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat269,6,8, "A1116",-1,-1,2,1,3,2,0x0,648,
    { 0x30fcfc54, 0xf0fcf000, 0xfcfc3000, 0x3dfd3d00, 0xf0fcf000, 0xfcfc3000, 0x3dfd3d00, 0x30fcfc54},
    { 0x20641800, 0x10689000, 0x90642000, 0x18a41000, 0x90681000, 0x18642000, 0x10a41800, 0x20649000}
   , 0x80,90.000000,attributes+0,1,NULL,autohelperowl_attackpat269,3,1.096000},
  {owl_attackpat270,2,8, "A1117",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00904800, 0x60108000, 0x84180000, 0x08102400, 0x80106000, 0x48900000, 0x24100800, 0x00188400}
   , 0xa0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat270,0,3.000000},
  {owl_attackpat271,2,8, "A1117a",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00904800, 0x60108000, 0x84180000, 0x08102400, 0x80106000, 0x48900000, 0x24100800, 0x00188400}
   , 0xa0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat271,0,3.000000},
  {owl_attackpat272,2,8, "A1118",-1,-1,1,1,2,2,0x2,721,
    { 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00},
    { 0x90600000, 0x18240000, 0x00241800, 0x00609000, 0x00241800, 0x00609000, 0x90600000, 0x18240000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat272,3,1.600000},
  {owl_attackpat273,2,8, "A1119",0,0,1,2,1,2,0x0,685,
    { 0x00383c0c, 0x00f0e000, 0xf0b00000, 0x2f3c0000, 0xe0f00000, 0x3c380000, 0x003c2f00, 0x00b0f0c0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0xa0,36.000000,attributes+0,1,NULL,autohelperowl_attackpat273,3,0.256336},
  {owl_attackpat274,1,8, "A1121",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00244004, 0x40201000, 0x04600000, 0x11200400, 0x10204000, 0x40240000, 0x04201100, 0x00600440}
   , 0x80,35.000000,attributes+0,1,NULL,autohelperowl_attackpat274,3,0.021760},
  {owl_attackpat275,2,8, "A1122",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat275,3,6.010000},
  {owl_attackpat276,2,8, "A1122a",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat276,3,6.010000},
  {owl_attackpat277,2,8, "A1122b",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x80,76.000000,attributes+0,1,NULL,autohelperowl_attackpat277,3,6.010000},
  {owl_attackpat278,3,8, "A1123",0,-2,1,1,1,3,0x2,685,
    { 0x0037fe00, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0x0070fc00},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat278,0,1.096000},
  {owl_attackpat279,3,8, "A1123a",0,-2,1,1,1,3,0x2,685,
    { 0x0037fe00, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0x0070fc00},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat279,0,1.096000},
  {owl_attackpat280,1,8, "A1124",0,-1,2,1,2,2,0x0,648,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat280,0,1.096000},
  {owl_attackpat281,5,8, "A1124a",0,-1,2,1,2,2,0x0,685,
    { 0x00f0f454, 0xf0f04000, 0x7c3c0000, 0x053d3d00, 0x40f0f000, 0xf4f00000, 0x3d3d0500, 0x003c7c54},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat281,0,0.667600},
  {owl_attackpat282,4,8, "A1124b",0,-1,2,1,2,2,0x0,722,
    { 0x003c7c50, 0x40f0f000, 0xf4f00000, 0x3c3d0500, 0xf0f04000, 0x7c3c0000, 0x053d3c00, 0x00f0f414},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x80,70.000000,attributes+0,1,NULL,autohelperowl_attackpat282,0,3.475600},
  {owl_attackpat283,6,8, "A1125",-2,-1,1,2,3,3,0x0,721,
    { 0x3dfdfd20, 0xf0fcfc54, 0xfcfcf000, 0xfcfe3c00, 0xfcfcf000, 0xfdfd3d00, 0x3cfefc54, 0xf0fcfc20},
    { 0x24902400, 0x20984400, 0x60186000, 0x44982000, 0x44982000, 0x24902400, 0x20984400, 0x60186000}
   , 0x80,76.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat284,1,4, "A1126",-1,-1,0,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00204400, 0x40204000, 0x44200000, 0x04200400, 0x40204000, 0x44200000, 0x04200400, 0x00204400}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_attackpat284,3,3.320000},
  {owl_attackpat285,2,8, "A1127",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00608400, 0x90204000, 0x48240000, 0x04201800, 0x40209000, 0x84600000, 0x18200400, 0x00244800}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_attackpat285,3,1.369456},
  {owl_attackpat286,2,8, "A1127a",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00608400, 0x90204000, 0x48240000, 0x04201800, 0x40209000, 0x84600000, 0x18200400, 0x00244800}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_attackpat286,3,1.369456},
  {owl_attackpat287,4,8, "A1128",0,-1,1,2,1,3,0x0,647,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00248800, 0x80209000, 0x88620000, 0x18200820, 0x90208020, 0x88240000, 0x08201800, 0x00628800}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat287,3,0.970000},
  {owl_attackpat288,5,8, "A1129",-1,-1,2,2,3,3,0x0,648,
    { 0x7fffff7c, 0xf4fcfcfc, 0xfcfcf400, 0xffff7d00, 0xfcfcf400, 0xffff7f00, 0x7dfffffc, 0xf4fcfcf4},
    { 0x29641000, 0x10681804, 0x1064a000, 0x90a41000, 0x18681000, 0x10642900, 0x10a49040, 0xa0641000}
   , 0x80,86.000000,attributes+0,1,NULL,autohelperowl_attackpat288,3,1.000000},
  {owl_attackpat289,4,8, "A1130",-2,-3,2,1,4,4,0x0,686,
    { 0x7cfeffff, 0xf4fcfce0, 0xfffef400, 0xffff7f2f, 0xfcfcf4e0, 0xfffe7c00, 0x7fffff2f, 0xf4feffff},
    { 0x24580800, 0x1018a400, 0x80946000, 0x68901000, 0xa4181000, 0x08582400, 0x10906800, 0x60948000}
   , 0x80,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat290,2,8, "A1131",0,-1,1,2,1,3,0x2,721,
    { 0x303c3c30, 0x00fcf000, 0xf0f03000, 0x3cff0000, 0xf0fc0000, 0x3c3c3000, 0x00ff3c00, 0x30f0f030},
    { 0x20100020, 0x00180000, 0x00102000, 0x00920000, 0x00180000, 0x00102000, 0x00920000, 0x20100020}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_attackpat290,0,6.010000},
  {owl_attackpat291,5,8, "A1132",-1,-1,2,2,3,3,0xa,648,
    { 0xf0fcffff, 0xfcfcf0c0, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfffcf000, 0xffff3f0f, 0x3cfcfcfc},
    { 0x10681a06, 0x1064a080, 0x90a41000, 0x29641000, 0xa0641000, 0x1a681000, 0x1064290a, 0x10a49040}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat292,2,8, "A1133a",0,-1,4,2,4,3,0x0,723,
    { 0x003f3d3f, 0x00f0f070, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3d3f0000, 0x003f3f37, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat292,0,0.021760},
  {owl_attackpat293,1,8, "A1133b",0,-1,4,2,4,3,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat293,0,0.021760},
  {owl_attackpat294,2,8, "A1134",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980400, 0x20106000, 0x40980000, 0x24102000, 0x60102000, 0x04980000, 0x20102400, 0x00984000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat294,0,0.016000},
  {owl_attackpat295,2,8, "A1134b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980400, 0x20106000, 0x40980000, 0x24102000, 0x60102000, 0x04980000, 0x20102400, 0x00984000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat295,0,0.016000},
  {owl_attackpat296,2,8, "A1134c",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980400, 0x20106000, 0x40980000, 0x24102000, 0x60102000, 0x04980000, 0x20102400, 0x00984000}
   , 0x80,40.000000,attributes+0,1,NULL,autohelperowl_attackpat296,0,0.010000},
  {owl_attackpat297,2,8, "A1134d",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980400, 0x20106000, 0x40980000, 0x24102000, 0x60102000, 0x04980000, 0x20102400, 0x00984000}
   , 0x80,40.000000,attributes+0,1,NULL,autohelperowl_attackpat297,0,0.010000},
  {owl_attackpat298,2,8, "A1135",0,-2,1,1,1,3,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00180000, 0x00102000, 0x02900000, 0x20100008, 0x20100080, 0x00180000, 0x00102000, 0x00900200}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat298,0,9.610001},
  {owl_attackpat299,2,8, "A1136",-1,0,2,2,3,2,0x0,721,
    { 0x0c3f3c0c, 0x00f0fc30, 0xf0f0c000, 0xff3c0000, 0xfcf00000, 0x3c3f0c00, 0x003cff30, 0xc0f0f0c0},
    { 0x08110008, 0x00100810, 0x00108000, 0x82100000, 0x08100000, 0x00110800, 0x00108210, 0x80100080}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat299,0,9.610001},
  {owl_attackpat300,6,8, "A1137",-2,-2,1,1,3,3,0x0,647,
    { 0xf4fcfc00, 0xfdfdf400, 0xfcff7f15, 0x7cfcfcf0, 0xf4fdfd3d, 0xfcfcf450, 0xfcfc7c00, 0x7ffffc00},
    { 0x0010a400, 0x80904000, 0x68100000, 0x04180800, 0x40908000, 0xa4100000, 0x08180400, 0x00106800}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat300,0,0.019600},
  {owl_attackpat301,6,8, "A1138",-1,-3,2,1,3,4,0x2,648,
    { 0xc0f0fcfc, 0xfcf0c000, 0xff3d0d00, 0x0f3fff5f, 0xc0f0fcd4, 0xfcf0c000, 0xff3f0f00, 0x0d3dffff},
    { 0x00101820, 0x00508000, 0x90100000, 0x08160000, 0x80500000, 0x18100000, 0x00160800, 0x00109020}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat302,4,8, "A1139",-1,-1,2,2,3,3,0x0,647,
    { 0xfdffbf0c, 0xbcfcfcf4, 0xf8fcfc00, 0xfffcf800, 0xfcfcbc00, 0xbffffd00, 0xf8fcff7c, 0xfcfcf8c0},
    { 0x18260104, 0x00241860, 0x00609000, 0x91600000, 0x18240000, 0x01261800, 0x00609124, 0x90600040}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat302,3,2.176000},
  {owl_attackpat303,3,8, "A1140a",0,-1,1,2,1,3,0x2,722,
    { 0x003ffe00, 0xc0f0f0b0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfe3f0000, 0x0c3c3c38, 0x00f0fc00},
    { 0x00269000, 0x80601020, 0x18600000, 0x10240800, 0x10608000, 0x90260000, 0x08241020, 0x00601800}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_attackpat303,3,6.010000},
  {owl_attackpat304,3,8, "A1140b",0,-1,1,2,1,3,0x2,722,
    { 0x003ffe00, 0xc0f0f0b0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfe3f0000, 0x0c3c3c38, 0x00f0fc00},
    { 0x00269000, 0x80601020, 0x18600000, 0x10240800, 0x10608000, 0x90260000, 0x08241020, 0x00601800}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_attackpat304,3,6.010000},
  {owl_attackpat305,2,8, "A1141",-1,0,2,2,3,2,0x0,685,
    { 0x3c3f3e3c, 0x00fcfcb0, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3e3f3c00, 0x00ffff38, 0xf0f0f0f0},
    { 0x14210008, 0x00240410, 0x00205000, 0x42600000, 0x04240000, 0x00211400, 0x00604210, 0x50200080}
   , 0x80,76.000000,attributes+0,1,NULL,autohelperowl_attackpat305,3,10.000000},
  {owl_attackpat306,2,8, "A1141b",-1,0,2,2,3,2,0x0,685,
    { 0x3c3f3e3c, 0x00fcfcb0, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3e3f3c00, 0x00ffff38, 0xf0f0f0f0},
    { 0x14210008, 0x00240410, 0x00205000, 0x42600000, 0x04240000, 0x00211400, 0x00604210, 0x50200080}
   , 0x80,76.000000,attributes+0,1,NULL,autohelperowl_attackpat306,3,10.000000},
  {owl_attackpat307,1,8, "A1201",0,-1,1,1,1,2,0x0,648,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat307,0,0.016000},
  {owl_attackpat308,1,8, "A1203",-1,-1,0,1,1,2,0x0,685,
    { 0x00fc3000, 0x30f03000, 0x30fc0000, 0x303c3000, 0x30f03000, 0x30fc0000, 0x303c3000, 0x00fc3000},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_attackpat308,3,0.016000},
  {owl_attackpat309,1,8, "A1204",-1,-1,0,1,1,2,0x0,685,
    { 0x00fc3000, 0x30f03000, 0x30fc0000, 0x303c3000, 0x30f03000, 0x30fc0000, 0x303c3000, 0x00fc3000},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x10,30.000000,attributes+0,1,NULL,autohelperowl_attackpat309,3,0.034000},
  {owl_attackpat310,2,8, "A1205",-1,0,0,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat310,3,0.610000},
  {owl_attackpat311,2,8, "A1206",-1,0,0,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x90,30.000000,attributes+0,1,NULL,autohelperowl_attackpat311,3,0.630160},
  {owl_attackpat312,3,8, "A1207",-1,-2,1,0,2,2,0x0,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00a40800, 0x20209000, 0x80680000, 0x18202000, 0x90202000, 0x08a40000, 0x20201800, 0x00688000}
   , 0x80,45.000000,attributes+0,1,NULL,autohelperowl_attackpat312,3,1.000000},
  {owl_attackpat313,2,8, "A1208",-2,-2,1,1,3,3,0x2,683,
    { 0xfcfcbc00, 0xbfffff00, 0xfafefffc, 0xfcfcf8e8, 0xffffbfac, 0xbcfcfcfc, 0xf8fcfc00, 0xfffefa00},
    { 0x00201000, 0x02600000, 0x10200108, 0x00240040, 0x00600204, 0x10200080, 0x00240000, 0x01201000}
   , 0x80,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat314,2,8, "A1209",0,-1,1,2,1,3,0x2,758,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00681000, 0x10602000, 0x10a40000, 0x20241000, 0x20601000, 0x10680000, 0x10242000, 0x00a41000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat314,3,0.010000},
  {owl_attackpat315,2,8, "A1210",0,-1,1,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat315,0,2.680000},
  {owl_attackpat316,3,8, "A1301",-2,-2,3,3,5,5,0xa,723,
    { 0xeaffffff, 0xfffaf8f8, 0xffffaf2f, 0xbfbfffff, 0xf8faffff, 0xffffeae0, 0xffbfbfbf, 0xafffffff},
    { 0x4094a000, 0xa4901000, 0x28580400, 0x10186800, 0x1090a400, 0xa0944000, 0x68181000, 0x04582800}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_attackpat316,0,0.010000},
  {owl_attackpat317,2,8, "A1302",-1,-2,1,1,2,3,0xa,685,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x10a00000, 0x20240000, 0x00281000, 0x00602000, 0x00242000, 0x00a01000, 0x20600000, 0x10280000}
   , 0x10,30.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat318,3,8, "A1303",-1,-2,1,1,2,3,0xa,648,
    { 0x20fcfcfc, 0xf0f8f000, 0xfcfc2000, 0x3fbf3f00, 0xf0f8f000, 0xfcfc2000, 0x3fbf3f00, 0x20fcfcfc},
    { 0x00280020, 0x00202000, 0x00a00000, 0x20220000, 0x20200000, 0x00280000, 0x00222000, 0x00a00020}
   , 0x10,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat319,4,8, "A1303b",-1,-2,1,1,2,3,0xa,721,
    { 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000},
    { 0x20622400, 0x10a84020, 0x60242000, 0x04a81000, 0x40a81000, 0x24622000, 0x10a80420, 0x20246000}
   , 0x10,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat320,3,8, "A1303c",-1,-1,1,2,2,3,0xa,685,
    { 0xfcfefc00, 0xfcfcfc20, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfefc00, 0xfcfcfc20, 0xfcfcfc00},
    { 0x08980000, 0x20102800, 0x00988000, 0xa0102000, 0x28102000, 0x00980800, 0x2010a000, 0x80980000}
   , 0x10,85.000000,attributes+0,1,NULL,autohelperowl_attackpat320,0,1.000000},
  {owl_attackpat321,2,8, "A1304",0,-1,1,1,1,2,0xa,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00608000, 0x90200000, 0x08240000, 0x00201800, 0x00209000, 0x80600000, 0x18200000, 0x00240800}
   , 0x10,60.000000,attributes+0,1,NULL,autohelperowl_attackpat321,3,0.016000},
  {owl_attackpat322,5,8, "A1305",0,-1,2,2,2,3,0xa,685,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00a80202, 0x20202080, 0x00a80000, 0x20202000, 0x20202000, 0x02a80000, 0x2020200a, 0x00a80000}
   , 0x10,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat323,4,8, "A1305b",0,-1,2,2,2,3,0xa,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0x00fcffff},
    { 0x00280000, 0x00202000, 0x02a00000, 0x2020000a, 0x20200080, 0x00280000, 0x00202000, 0x00a00202}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat324,5,8, "A1306",0,-1,2,2,2,3,0xa,686,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00a80202, 0x20202080, 0x00a80000, 0x20202000, 0x20202000, 0x02a80000, 0x2020200a, 0x00a80000}
   , 0x10,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat325,6,8, "A1307",-1,-1,1,2,2,3,0xa,722,
    { 0xdcffff00, 0xfcf4fcf0, 0xfcfcdc00, 0xfc7cfc00, 0xfcf4fc00, 0xffffdc00, 0xfc7cfc3c, 0xdcfcfc00},
    { 0x88221200, 0x086008a0, 0x10208800, 0x80248000, 0x08600800, 0x12228800, 0x80248028, 0x88201000}
   , 0x10,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat326,6,8, "A1308",-1,-1,1,2,2,3,0xa,685,
    { 0x1cfcfc00, 0xf0f4fc00, 0xfffdd000, 0xfc7c3c1c, 0xfcf4f0d0, 0xfcfc1c00, 0x3c7cfc00, 0xd0fdff00},
    { 0x08a00000, 0x20200800, 0x02288000, 0x80202008, 0x08202080, 0x00a00800, 0x20208000, 0x80280200}
   , 0x10,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat327,4,8, "A1309",0,-1,1,2,1,3,0xa,685,
    { 0x007cfc00, 0xd0f0f000, 0xfdf70000, 0x3c3c1c34, 0xf0f0d070, 0xfc7c0000, 0x1c3c3c00, 0x00f7fd00},
    { 0x00204000, 0x40200000, 0x04220000, 0x00200420, 0x00204020, 0x40200000, 0x04200000, 0x00220400}
   , 0x10,90.000000,attributes+0,1,NULL,autohelperowl_attackpat327,3,0.016000},
  {owl_attackpat328,3,8, "A1310",0,-1,1,2,1,3,0xa,647,
    { 0x00fffd00, 0xf0f0f070, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfdff0000, 0x3c3c3c34, 0x00fcfc00},
    { 0x00221400, 0x00604020, 0x50200000, 0x04240000, 0x40600000, 0x14220000, 0x00240420, 0x00205000}
   , 0x10,30.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat329,6,8, "A1310b",-1,-1,1,2,2,3,0xa,648,
    { 0xdcffff00, 0xfcf4fcf0, 0xfcfcdc00, 0xfc7cfc00, 0xfcf4fc00, 0xffffdc00, 0xfc7cfc3c, 0xdcfcfc00},
    { 0x88221600, 0x086048a0, 0x50208800, 0x84248000, 0x48600800, 0x16228800, 0x80248428, 0x88205000}
   , 0x10,31.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat330,4,8, "A1311",-1,-1,1,2,2,3,0xa,722,
    { 0xfcfcfc3c, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00, 0xfcfcfcf0},
    { 0x20908020, 0xa0180000, 0x08182000, 0x00922800, 0x0018a000, 0x80902000, 0x28920000, 0x20180820}
   , 0x10,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat331,4,8, "A1311b",-1,-1,1,3,2,4,0xa,721,
    { 0xfcfcfc3c, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00, 0xfcfcfcf0},
    { 0x20908020, 0xa0180000, 0x08182000, 0x00922800, 0x0018a000, 0x80902000, 0x28920000, 0x20180820}
   , 0x10,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat332,5,8, "A1312",-1,-1,2,2,3,3,0xa,685,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfffcf000, 0xffff3f0d, 0xfcfcf0c0, 0xfcfc3c00, 0x3fffff00, 0xf0fcfffd},
    { 0x24a00000, 0x20280400, 0x02286000, 0x40a02008, 0x04282080, 0x00a02400, 0x20a04000, 0x60280200}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat333,2,8, "A1313",-1,-2,2,3,3,5,0xa,722,
    { 0x1f3fffaf, 0xc3f7ffff, 0xfcf0d0fc, 0xff7e0e00, 0xfff7c300, 0xff3f1fff, 0x0e7effff, 0xd0f0fce8},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat334,3,8, "A1314",-1,-2,1,1,2,3,0xa,722,
    { 0x3dffbf00, 0xb0fcfcf4, 0xf8fcf000, 0xfcfc3800, 0xfcfcb000, 0xbfff3d00, 0x38fcfc7c, 0xf0fcf800},
    { 0x20600000, 0x10280000, 0x00242000, 0x00a01000, 0x00281000, 0x00602000, 0x10a00000, 0x20240000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat334,3,1.000000},
  {owl_attackpat335,3,8, "A1315",-2,-1,1,2,3,3,0xa,721,
    { 0xfcffff00, 0xfffffff0, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfffffcfc, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08210000, 0x00220910, 0x00208060, 0x80200000, 0x09220000, 0x00210824, 0x00208010, 0x80200000}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat336,4,8, "A1316",0,-1,2,2,2,3,0xa,685,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00280206, 0x00202080, 0x00a00000, 0x21200000, 0x20200000, 0x02280000, 0x0020210a, 0x00a00040}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat337,3,8, "A1317",-1,-1,1,2,2,3,0xa,685,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00},
    { 0x80a00000, 0x28200000, 0x01290800, 0x0020a014, 0x00202850, 0x00a08000, 0xa0200000, 0x08290100}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat337,3,0.610000},
  {owl_attackpat338,4,8, "A1318",-1,-1,1,2,2,3,0xa,647,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08291900, 0x0060a850, 0x90a08000, 0xa8240000, 0xa8600000, 0x19290800, 0x0024a814, 0x80a09000}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat338,3,0.610000},
  {owl_attackpat339,4,8, "A1319",-1,-2,2,1,3,3,0xa,758,
    { 0x3f3f7fff, 0x40fcfcfc, 0xf4f0f000, 0xffff0700, 0xfcfc4000, 0x7f3f3f00, 0x07ffffff, 0xf0f0f4fc},
    { 0x18202000, 0x00a40800, 0x20209000, 0x80680000, 0x08a40000, 0x20201800, 0x00688000, 0x90202000}
   , 0x10,61.000000,attributes+0,1,NULL,autohelperowl_attackpat339,3,1.000000},
  {owl_attackpat340,3,8, "A1319b",-1,0,2,2,3,2,0xa,685,
    { 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0},
    { 0x09120200, 0x001008a4, 0x00108000, 0x80100000, 0x08100000, 0x02120900, 0x00108068, 0x80100000}
   , 0x10,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat341,5,8, "A1319c",-1,-2,2,1,3,3,0xa,722,
    { 0x3f3f7fff, 0x40fcfcfc, 0xf4f0f000, 0xffff0700, 0xfcfc4000, 0x7f3f3f00, 0x07ffffff, 0xf0f0f4fc},
    { 0x18212200, 0x00a40890, 0x20209000, 0x80680000, 0x08a40000, 0x22211800, 0x00688018, 0x90202000}
   , 0x10,61.000000,attributes+0,1,NULL,autohelperowl_attackpat341,3,1.000000},
  {owl_attackpat342,3,8, "A1320",-1,-1,1,1,2,2,0xa,722,
    { 0x3c3cfc00, 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00, 0xf0f0fc00},
    { 0x20249000, 0x80681000, 0x18602000, 0x10a40800, 0x10688000, 0x90242000, 0x08a41000, 0x20601800}
   , 0x10,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat343,3,8, "A1321",-1,-1,1,1,2,2,0xa,648,
    { 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00},
    { 0x80281000, 0x08602000, 0x10a00800, 0x20248000, 0x20600800, 0x10288000, 0x80242000, 0x08a01000}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat344,3,8, "A1322",-1,-2,1,0,2,2,0xa,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00280008, 0x00202000, 0x00a00000, 0x22200000, 0x20200000, 0x00280000, 0x00202200, 0x00a00080}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat345,4,8, "A1323",0,-1,3,1,3,2,0xa,649,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00a40808, 0x20209000, 0x80680000, 0x1a202000, 0x90202000, 0x08a40000, 0x20201a00, 0x00688080}
   , 0x10,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat346,1,8, "A1324",-3,-2,2,2,5,4,0xa,647,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x40200000, 0x04210000, 0x00200410, 0x00204000, 0x00210400, 0x00204010, 0x40200000, 0x04200000}
   , 0x0,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat347,4,8, "A1325",-1,-1,2,2,3,3,0x6,721,
    { 0xffffff3f, 0xfcfcfcfc, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xffffff00, 0xfcffffff, 0xfcfcfcf0},
    { 0x54208820, 0x84248400, 0x88205400, 0x48624800, 0x84248400, 0x88205400, 0x48624800, 0x54208820}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat348,2,8, "A1326",-2,-2,2,2,4,4,0x9,611,
    { 0xffffffff, 0xfcfcfefe, 0xffffff80, 0xffffffff, 0xfefcfcfc, 0xffffff0a, 0xffffffff, 0xffffffff},
    { 0x50208000, 0x84240000, 0x08211400, 0x00604810, 0x00248410, 0x80205000, 0x48600000, 0x14210800}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat349,3,8, "A1327",-2,-2,3,2,5,4,0x9,646,
    { 0xffffff80, 0xffffffff, 0xffffffff, 0xfcfcfefe, 0xffffffff, 0xffffffff, 0xfefcfcfc, 0xffffff0a},
    { 0x09219400, 0x80604814, 0x58208000, 0x84240800, 0x48608000, 0x94210900, 0x08248450, 0x80205800}
   , 0x90,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat350,7,8, "A1328",-1,-2,2,1,3,3,0xa,722,
    { 0x0d39ef5f, 0xc0b0ecd4, 0xecb0c000, 0xef390d00, 0xecb0c000, 0xef390d00, 0x0d39ef5f, 0xc0b0ecd4},
    { 0x08208000, 0x80200800, 0x08208000, 0x80200800, 0x08208000, 0x80200800, 0x08208000, 0x80200800}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat351,4,8, "A1329",-1,-1,2,1,3,2,0xa,722,
    { 0x0c3c7c6c, 0x40f0fc00, 0xf4f0c000, 0xff3e0500, 0xfcf04000, 0x7c3c0c00, 0x053eff00, 0xc0f0f4e4},
    { 0x08241004, 0x00601800, 0x10608000, 0x91240000, 0x18600000, 0x10240800, 0x00249100, 0x80601040}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat352,6,8, "A1330",-1,-1,2,1,3,2,0xa,647,
    { 0xf0fcfcec, 0xfcfcf000, 0xfcfc3c00, 0x3ffeff00, 0xf0fcfc00, 0xfcfcf000, 0xfffe3f00, 0x3cfcfcec},
    { 0xa0289844, 0x8868a000, 0x98a02800, 0x29a48900, 0xa0688800, 0x9828a000, 0x89a42900, 0x28a09844}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat352,3,0.610000},
  {owl_attackpat353,3,8, "A1331",-1,-1,1,1,2,2,0xa,648,
    { 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00},
    { 0x24902400, 0x20984400, 0x60186000, 0x44982000, 0x44982000, 0x24902400, 0x20984400, 0x60186000}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat353,0,1.000000},
  {owl_attackpat354,6,8, "A1332",0,-1,2,2,2,3,0xa,648,
    { 0x0074fcfc, 0xd0f0d000, 0xff740000, 0x1f3f1f0d, 0xd0f0d0c0, 0xfc740000, 0x1f3f1f00, 0x0074fffd},
    { 0x00200420, 0x00204000, 0x42200000, 0x04220008, 0x40200080, 0x04200000, 0x00220400, 0x00204220}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat354,3,1.000000},
  {owl_attackpat355,7,8, "A1333",-2,-1,1,2,3,3,0xa,683,
    { 0xfcfcfc00, 0xffffff00, 0xfffffffc, 0xfcfcfcfc, 0xfffffffc, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00},
    { 0x00580000, 0x12122200, 0x029602a8, 0x201010a8, 0x221212a8, 0x005800a8, 0x10102000, 0x02960200}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat355,0,0.016000},
  {owl_attackpat356,8,8, "A1334",-1,-1,2,2,3,3,0xa,649,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfffffc00, 0xffffff3f, 0xfcfcfcf0, 0xfcfcfc00, 0xffffff00, 0xfcffffff},
    { 0xa8185800, 0x4858a800, 0x9692a800, 0xa894842a, 0xa85848a0, 0x5818a800, 0x8494a800, 0xa8929602}
   , 0x10,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat357,3,8, "A1335",-1,-2,1,1,2,3,0xa,758,
    { 0x3fffff00, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfc00},
    { 0x20605800, 0x50688000, 0x94242000, 0x08a41400, 0x80685000, 0x58602000, 0x14a40800, 0x20249400}
   , 0x10,41.000000,attributes+0,1,NULL,autohelperowl_attackpat357,3,1.600000},
  {owl_attackpat358,3,8, "A1335b",-1,-1,1,2,2,3,0xa,647,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08192100, 0x00902850, 0x20908000, 0xa0180000, 0x28900000, 0x21190800, 0x0018a014, 0x80902000}
   , 0x10,41.000000,attributes+0,1,NULL,autohelperowl_attackpat358,0,1.600000},
  {owl_attackpat359,5,8, "A1336",0,-1,2,2,2,3,0xa,649,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00a90224, 0x20202090, 0x00a80000, 0x21222000, 0x20202000, 0x02a90000, 0x20222118, 0x00a80060}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat359,3,1.600000},
  {owl_attackpat360,8,8, "A1337",-1,-1,2,2,3,3,0xa,686,
    { 0xf4fdfffb, 0xfcfcf4d0, 0xfcfc7c00, 0x7effff00, 0xf4fcfc00, 0xfffdf400, 0xffff7e1f, 0x7cfcfcbc},
    { 0xa0189602, 0x88586080, 0x58902800, 0x24948800, 0x60588800, 0x9618a000, 0x8894240a, 0x28905800}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat361,6,8, "A1338",-2,0,2,2,4,2,0xa,758,
    { 0x00fffff7, 0xf0f0f0f0, 0xffff0000, 0x3d3f3f3e, 0xf0f0f0f0, 0xffff0000, 0x3f3f3d3f, 0x00ffff7e},
    { 0x00608962, 0x90208040, 0x89250000, 0x08221914, 0x80209050, 0x89600000, 0x19220806, 0x00258924}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat362,6,8, "A1339",-1,0,1,2,2,2,0xa,722,
    { 0x1d3f3d00, 0x00f4fc74, 0xf0f0d000, 0xfc7c0000, 0xfcf40000, 0x3d3f1d00, 0x007cfc74, 0xd0f0f000},
    { 0x08220000, 0x00200820, 0x00208000, 0x80200000, 0x08200000, 0x00220800, 0x00208020, 0x80200000}
   , 0x10,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat363,5,8, "A1340",-1,-1,1,2,2,3,0xa,685,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfffdfc00, 0xfcfcfc1c, 0xfcfcfcd0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfdff00},
    { 0x88900000, 0x28100800, 0x02188800, 0x8010a008, 0x08102880, 0x00908800, 0xa0108000, 0x88180200}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat364,5,8, "A1341",-2,0,2,2,4,2,0x6,759,
    { 0x3f3f3f3f, 0x00fcfffc, 0xf0f0f0c0, 0xffff0000, 0xfffc0000, 0x3f3f3f0c, 0x00ffffff, 0xf0f0f0f0},
    { 0x22202000, 0x00a80208, 0x20202080, 0x00a80000, 0x02a80000, 0x20202208, 0x00a80080, 0x20202000}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat365,5,8, "A1342",-2,-2,2,0,4,2,0x8,686,
    { 0x00fcffff, 0xf0f0f0c0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfffc0000, 0x3f3f3f0f, 0x00ffffff},
    { 0x00a80900, 0x2020a040, 0x82a90000, 0x28202018, 0xa0202090, 0x09a80000, 0x20202804, 0x00a98200}
   , 0x90,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat366,6,8, "A1343",-1,-2,1,1,2,3,0xa,722,
    { 0x347c7c7c, 0x50fcf400, 0xf4f47000, 0x7fff1500, 0xf4fc5000, 0x7c7c3400, 0x15ff7f00, 0x70f4f4f4},
    { 0x20200000, 0x00280000, 0x00202000, 0x00a00000, 0x00280000, 0x00202000, 0x00a00000, 0x20200000}
   , 0x10,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat367,4,8, "A1344",0,-1,1,2,1,3,0x2,722,
    { 0x00fcff00, 0xf0f0f0c0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfffc0000, 0x3c3c3c0c, 0x00fcfc00},
    { 0x00a88100, 0xa0202040, 0x08a80000, 0x20202800, 0x2020a000, 0x81a80000, 0x28202004, 0x00a80800}
   , 0x10,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat368,2,8, "A1345",-1,-2,1,1,2,3,0xa,685,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x54208000, 0x84240400, 0x08205400, 0x40604800, 0x04248400, 0x80205400, 0x48604000, 0x54200800}
   , 0x10,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat369,6,8, "A1346",-1,-1,1,2,2,3,0x6,720,
    { 0xfc3c3400, 0x0dfd7f00, 0x70f0fcd4, 0xf4fcc000, 0x7ffd0d00, 0x343cfc5c, 0xc0fcf400, 0xfcf07000},
    { 0x80202000, 0x08a00000, 0x20200800, 0x00288000, 0x00a00800, 0x20208000, 0x80280000, 0x08202000}
   , 0x10,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat370,5,8, "A1347",-1,-2,2,0,3,2,0xa,759,
    { 0x053f3f0f, 0x00f0f4f4, 0xf0f04000, 0x7f3c0000, 0xf4f00000, 0x3f3f0500, 0x003c7f7f, 0x40f0f0c0},
    { 0x00202009, 0x00a00000, 0x20200000, 0x02280000, 0x00a00000, 0x20200000, 0x00280201, 0x00202080}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat371,8,8, "A1348",-2,-1,1,1,3,2,0xa,685,
    { 0xdcfcfc00, 0xfdf7fc00, 0xfcfcdc34, 0xfc7cfc00, 0xfcf7fd00, 0xfcfcdc70, 0xfc7cfc00, 0xdcfcfc00},
    { 0x48688800, 0x9422a800, 0x88a48420, 0xa8205800, 0xa8229400, 0x88684820, 0x5820a800, 0x84a48800}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat371,3,0.376000},
  {owl_attackpat372,6,8, "A1349a",-2,0,3,2,5,2,0xa,686,
    { 0x3f3f3f3f, 0x00fffffc, 0xf0f0f0f0, 0xffff0000, 0xffff0000, 0x3f3f3f3c, 0x00ffffff, 0xf0f0f0f0},
    { 0x09220202, 0x002009a4, 0x00208040, 0x80200000, 0x09200000, 0x02220904, 0x0020806a, 0x80200000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat372,3,1.000000},
  {owl_attackpat373,7,8, "A1349b",-3,0,3,2,6,2,0xa,686,
    { 0x3f3f3f3f, 0x00ffffff, 0xf0f0f0f0, 0xffff0000, 0xffff0000, 0x3f3f3f3f, 0x00ffffff, 0xf0f0f0f0},
    { 0x09220202, 0x00210aa5, 0x00208090, 0x80200000, 0x0a210000, 0x02220919, 0x0020806a, 0x80200000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat373,3,1.000000},
  {owl_attackpat374,7,8, "A1350",-1,-2,2,1,3,3,0xa,723,
    { 0x3f3fffff, 0xc0fcfcfc, 0xfcf0f000, 0xffff0f00, 0xfcfcc000, 0xff3f3f00, 0x0fffffff, 0xf0f0fcfc},
    { 0x2a21a240, 0x80a80898, 0x2820a000, 0x80a80900, 0x08a88000, 0xa2212a00, 0x09a88098, 0xa0202804}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat374,3,0.010000},
  {owl_attackpat375,6,8, "A1351",-2,-1,2,2,4,3,0xa,648,
    { 0xfcfffcfc, 0xfffffc30, 0xfcfcfc3c, 0xffffff00, 0xfcffff00, 0xfcfffcf0, 0xffffff30, 0xfcfcfcfc},
    { 0x98220808, 0x09258820, 0x80209814, 0x8a608000, 0x88250900, 0x08229850, 0x80608a20, 0x98208080}
   , 0x10,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat376,6,8, "A1352a",-1,-2,2,1,3,3,0xa,648,
    { 0xc0f0fcf4, 0xfcf0c000, 0xff3f0c00, 0x0d3fff3f, 0xc0f0fcf0, 0xfcf0c000, 0xff3f0d00, 0x0c3fff7f},
    { 0x80202800, 0x08a08000, 0xa0220800, 0x08288020, 0x80a00820, 0x28208000, 0x80280800, 0x0822a000}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat376,3,0.010000},
  {owl_attackpat377,6,8, "A1352b",-1,-2,2,1,3,3,0xa,648,
    { 0xc0f0fcf4, 0xfcf0c000, 0xff3f0c00, 0x0d3fff3f, 0xc0f0fcf0, 0xfcf0c000, 0xff3f0d00, 0x0c3fff7f},
    { 0x80202800, 0x08a08000, 0xa0220800, 0x08288020, 0x80a00820, 0x28208000, 0x80280800, 0x0822a000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat377,3,0.610000},
  {owl_attackpat378,1,4, "A1401",0,0,3,3,3,3,0x6,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat379,1,8, "A1403",0,-2,3,1,3,3,0x6,722,
    { 0x00fffffe, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3e, 0x00fcfcfc},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat380,1,8, "A1501",-1,0,0,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat380,3,0.058000},
  {owl_attackpat381,1,4, "A1502",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat381,3,0.058000},
  {owl_attackpat382,4,8, "A1503",-2,-1,1,1,3,2,0x0,685,
    { 0x30fcfcf0, 0xf0fcf000, 0xfcfc3000, 0x3cff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3c00, 0x30fcfc3c},
    { 0x10648860, 0x90249000, 0x88641000, 0x18621900, 0x90249000, 0x88641000, 0x19621800, 0x10648824}
   , 0x90,75.000000,attributes+0,1,NULL,autohelperowl_attackpat382,3,0.016000},
  {owl_attackpat383,4,8, "A1503a",-2,-1,1,1,3,2,0x0,685,
    { 0x30fcfcf0, 0xf0fcf000, 0xfcfc3000, 0x3cff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3c00, 0x30fcfc3c},
    { 0x10648860, 0x90249000, 0x88641000, 0x18621900, 0x90249000, 0x88641000, 0x19621800, 0x10648824}
   , 0x90,75.000000,attributes+0,1,NULL,autohelperowl_attackpat383,3,0.016000},
  {owl_attackpat384,6,8, "A1504",-1,-2,1,2,2,4,0x2,719,
    { 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc},
    { 0x90a08860, 0xa9248000, 0x88281804, 0x0862a900, 0x8024a900, 0x88a09040, 0xa9620800, 0x18288824}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat384,3,1.600000},
  {owl_attackpat385,4,8, "A1601",-1,0,1,2,2,2,0x2,722,
    { 0x003c7c7c, 0x40f0f000, 0xf4f00000, 0x3f3f0500, 0xf0f04000, 0x7c3c0000, 0x053f3f00, 0x00f0f4f4},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat385,3,1.960000},
  {owl_attackpat386,3,8, "A1602",-1,-2,1,1,2,3,0x2,686,
    { 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc},
    { 0x10608800, 0x90248000, 0x88241000, 0x08601800, 0x80249000, 0x88601000, 0x18600800, 0x10248800}
   , 0x90,55.000000,attributes+0,1,NULL,autohelperowl_attackpat386,3,1.000000},
  {owl_attackpat387,3,8, "A1603",-1,-2,1,1,2,3,0x2,758,
    { 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000},
    { 0x18602000, 0x10a40800, 0x20249000, 0x80681000, 0x08a41000, 0x20601800, 0x10688000, 0x90242000}
   , 0x90,55.000000,attributes+0,1,NULL,autohelperowl_attackpat387,3,1.000000},
  {owl_attackpat388,4,8, "A1604",0,-2,2,2,2,4,0x2,648,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0c, 0x00fcffff},
    { 0x00a40920, 0x20209040, 0x81680000, 0x18222004, 0x90202040, 0x09a40000, 0x20221804, 0x00688120}
   , 0x90,55.000000,attributes+0,1,NULL,autohelperowl_attackpat388,3,1.000000},
  {owl_attackpat389,4,8, "A1605",0,-2,2,2,2,4,0x2,648,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0c, 0x00fcffff},
    { 0x00a40908, 0x20209040, 0x81680000, 0x1a202004, 0x90202040, 0x09a40000, 0x20201a04, 0x00688180}
   , 0x90,55.000000,attributes+0,1,NULL,autohelperowl_attackpat389,3,1.000000},
  {owl_attackpat390,4,8, "A1606",-1,-2,1,1,2,3,0x2,686,
    { 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc},
    { 0x10608880, 0x90248000, 0x88241000, 0x08601a00, 0x80249000, 0x88601000, 0x1a600800, 0x10248808}
   , 0x90,35.000000,attributes+0,1,NULL,autohelperowl_attackpat390,3,1.000000},
  {owl_attackpat391,4,8, "A1607",-1,-2,1,1,2,3,0x2,758,
    { 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000},
    { 0x1a602000, 0x10a40808, 0x20249000, 0x80681000, 0x08a41000, 0x20601a00, 0x10688080, 0x90242000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat391,3,1.000000},
  {owl_attackpat392,4,8, "A1608",-1,-2,1,1,2,3,0x2,685,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x14608880, 0x90248400, 0x88245000, 0x48601a00, 0x84249000, 0x88601400, 0x1a604800, 0x50248808}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat392,3,1.000000},
  {owl_attackpat393,5,8, "A1608b",0,-2,2,2,2,4,0x2,723,
    { 0x00fcffff, 0xf0f0f0c0, 0xfffd0000, 0x3f3f3f1f, 0xf0f0f0d0, 0xfffc0000, 0x3f3f3f0f, 0x00fdffff},
    { 0x00a40921, 0x20209040, 0x80680000, 0x18222000, 0x90202000, 0x09a40000, 0x20221805, 0x00688020}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat394,4,8, "A1609",-1,-2,1,2,2,4,0x2,722,
    { 0xfcffff00, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcffff00},
    { 0x58228000, 0x84240820, 0x09219400, 0x80604814, 0x08248450, 0x80225800, 0x48608020, 0x94210900}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat395,5,8, "A1610",0,-2,2,2,2,4,0x2,723,
    { 0x00fcffff, 0xf0f0f0c0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfffc0000, 0x3f3f3f0f, 0x00ffffff},
    { 0x00a80180, 0x20202040, 0x02a90000, 0x20202218, 0x20202090, 0x01a80000, 0x22202004, 0x00a90208}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat395,3,0.970000},
  {owl_attackpat396,6,8, "A1611",0,-2,2,3,2,5,0x2,686,
    { 0x00fdffff, 0xf0f0f0d0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfffd0000, 0x3f3f3f1f, 0x00ffffff},
    { 0x00a80200, 0x20202080, 0x02a90000, 0x20202018, 0x20202090, 0x02a80000, 0x20202008, 0x00a90200}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat396,3,1.600000},
  {owl_attackpat397,4,8, "A1612",-1,-1,1,3,2,4,0x2,683,
    { 0x3c3f3f00, 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c, 0xf0f0f000},
    { 0x08220800, 0x00208820, 0x80208000, 0x88200000, 0x88200000, 0x08220800, 0x00208820, 0x80208000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat397,3,0.610000},
  {owl_attackpat398,6,8, "A1613",-1,-1,1,2,2,3,0x2,722,
    { 0x3cfdff00, 0xf0fcfcd0, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfffd3c00, 0x3cfcfc1c, 0xf0fcfc00},
    { 0x28906200, 0x60980880, 0x2418a000, 0x80982400, 0x08986000, 0x62902800, 0x24988008, 0xa0182400}
   , 0x10,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat399,5,8, "AC01",0,-1,2,1,2,2,0x2,649,
    { 0x007c7cfc, 0x50f0f000, 0xf4f40000, 0x3f3f1700, 0xf0f05000, 0x7c7c0000, 0x173f3f00, 0x00f4f4fc},
    { 0x00240808, 0x00209000, 0x80600000, 0x1a200000, 0x90200000, 0x08240000, 0x00201a00, 0x00608080}
   , 0x110,25.000000,attributes+1,1,NULL,autohelperowl_attackpat399,3,0.034000},
  {owl_attackpat400,6,8, "AE01",-2,-1,1,1,3,2,0xa,685,
    { 0xfcf4fc00, 0xffffdd00, 0xfc7cfc7c, 0xdcfcfc00, 0xddffff00, 0xfcf4fcf4, 0xfcfcdc00, 0xfc7cfc00},
    { 0x88200000, 0x09220800, 0x00208824, 0x80208000, 0x08220900, 0x00208860, 0x80208000, 0x88200000}
   , 0x110,20.000000,attributes+3,1,NULL,autohelperowl_attackpat400,3,0.610000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,NULL,0,NULL,NULL,0,0.0}
};

#include "dfa-mkpat.h"
static const state_rt_t state_owl_attackpat[9906] = {
{{0,0,0,0}, 0},	{{0,1,28,0}, 0},	{{1,95,99,0}, 0},
{{1,112,126,0}, 0},	{{1,139,141,146}, 0},	{{1,150,154,166}, 0},
{{1,169,172,195}, 0},	{{1,0,196,0}, 0},	{{1,219,226,166}, 0},
{{1,234,235,271}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,274,274,277}, 0},
{{1,0,0,0}, 0},	{{1,112,274,0}, 0},	{{1,1,277,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,278,0}, 0},	{{1,278,298,0}, 0},
{{1,309,321,336}, 0},	{{1,338,403,413}, 0},	{{1,463,513,522}, 0},
{{1,542,619,631}, 0},	{{1,638,658,0}, 0},	{{1,676,687,522}, 0},
{{1,692,738,798}, 0},	{{1,837,841,413}, 0},	{{1,842,1,843}, 0},
{{1,403,403,413}, 0},	{{1,856,860,896}, 0},	{{1,922,963,975}, 0},
{{1,0,986,0}, 0},	{{1,986,522,522}, 0},	{{1,987,798,798}, 0},
{{1,1002,896,896}, 0},	{{1,692,738,1002}, 0},	{{1,1,843,843}, 0},
{{1,1,843,843}, 0},	{{1,1,1,1011}, 0},	{{1,1,1,843}, 0},
{{1,338,338,1027}, 0},	{{1,1,860,1042}, 0},	{{1,1043,1,1066}, 0},
{{1,1088,463,0}, 0},	{{1,922,463,0}, 0},	{{1,738,798,798}, 0},
{{1,860,896,896}, 0},	{{1,738,798,798}, 0},	{{1,1,463,463}, 0},
{{1,1,1,1}, 0},	{{1,1,1,692}, 0},	{{1,1,692,692}, 0},
{{1,1,1,1011}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1011}, 0},
{{1,1,1,1077}, 0},	{{1,1,338,338}, 153},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1043,1,1043}, 0},	{{1,1043,1,1066}, 0},
{{1,1072,1072,922}, 0},	{{1,1072,860,463}, 0},	{{1,738,798,798}, 0},
{{1,1,463,463}, 0},	{{1,1,1,1}, 154},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,692}, 0},
{{1,1,1,692}, 0},	{{1,1,1,1}, 155},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,738,738,738}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 157},	{{1,1051,1054,0}, 0},	{{1,1,1051,0}, 0},
{{1,1053,1053,1053}, 0},	{{0,0,1053,0}, 0},	{{1,1055,1059,0}, 0},
{{1,1068,1071,1074}, 0},	{{1,1075,1078,1049}, 0},	{{1,1084,1085,1095}, 0},
{{1,1102,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,1095,0}, 0},	{{1,1,1119,1119}, 0},	{{1,1121,1130,0}, 0},
{{1,1141,1142,1141}, 0},	{{1,0,85,0}, 0},	{{1,1142,1143,0}, 0},
{{1,1,1,1160}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1121}, 0},	{{1,0,0,1161}, 0},
{{1,0,1163,0}, 0},	{{1,1,0,0}, 0},	{{0,0,1172,0}, 0},
{{1,1180,1190,1193}, 0},	{{1,1194,1203,1215}, 0},	{{1,1218,1220,1228}, 0},
{{1,0,71,0}, 0},	{{1,1215,1234,1215}, 0},	{{1,1180,1234,1239}, 0},
{{1,1180,1180,1180}, 0},	{{1,1180,1180,1180}, 0},	{{1,1180,1180,1180}, 0},
{{1,1180,1180,1180}, 0},	{{1,1,1,1242}, 0},	{{1,1,1,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 71},	{{1,12,1245,1246}, 0},
{{-137,1248,34,57}, 0},	{{1,1250,1251,1254}, 0},	{{1,1246,1254,1257}, 0},
{{1,0,1259,0}, 0},	{{1,79,86,26}, 0},	{{-139,94,95,1265}, 0},
{{1,1267,1271,1275}, 0},	{{1,1278,1280,50}, 0},	{{1,0,1254,0}, 0},
{{1,1281,1282,1275}, 0},	{{-144,-144,90,126}, 0},	{{1,1237,1281,46}, 0},
{{1,0,1281,0}, 0},	{{1,70,1287,17}, 0},	{{-148,85,1296,122}, 0},
{{1,1299,1302,1313}, 0},	{{1,1320,1322,1320}, 0},	{{1,1331,73,13}, 0},
{{1,1332,1333,1341}, 41},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1344,1344,1347}, 0},
{{1,0,1322,0}, 0},	{{1,-41,1344,0}, 0},	{{-152,-152,124,-152}, 42},
{{1,1346,1348,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1348}, 0},
{{0,1348,1349,0}, 0},	{{1,0,1353,0}, 0},	{{1,1218,1353,1218}, 0},
{{0,1361,1367,0}, 0},	{{1,0,1372,0}, 0},	{{1,1,1378,1}, 0},
{{1,1342,1386,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1387,0}, 0},
{{1,0,1327,0}, 0},	{{0,0,1389,0}, 0},	{{1,0,1389,0}, 0},
{{1,1,1,1389}, 0},	{{1,1,1,1204}, 0},	{{1,1,1,1}, 0},
{{1,1,1204,1204}, 0},	{{1,1235,1,0}, 0},	{{1,1204,1204,1389}, 0},
{{1,1400,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 15},	{{1,1399,1400,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-106,0,0,0}, 0},
{{1,1412,1413,1430}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1431,0,0}, 0},	{{1,1431,1,0}, 0},	{{0,0,1431,0}, 0},
{{-232,-232,1441,-232}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1442}, 0},	{{1,40,40,1446}, 0},
{{1,0,0,0}, 0},	{{1,1384,1456,0}, 0},	{{1,-233,1456,-233}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-233}, 0},
{{1,0,0,0}, 0},	{{1,1,1473,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{0,1457,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{-269,-269,-269,-269}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{0,0,1447,0}, 0},
{{1,0,0,0}, 0},	{{1,0,-2,0}, 0},	{{0,0,1445,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1445}, 0},
{{1,1380,1380,1380}, 0},	{{1,1,1459,1}, 0},	{{0,1459,0,0}, 0},
{{0,0,0,0}, 1},	{{1,1458,1464,1469}, 0},	{{1,1471,1489,1491}, 0},
{{1,1493,1497,1499}, 0},	{{1,1501,1,1503}, 0},	{{1,1510,1525,0}, 0},
{{1,1542,1544,1493}, 0},	{{1,0,1545,1556}, 0},	{{1,1563,1563,0}, 0},
{{1,1471,1471,1571}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1510,1510,0}, 0},	{{1,1,1,1}, 0},	{{1,1510,1510,1573}, 0},
{{1,0,0,0}, 0},	{{1,1471,1471,0}, 368},	{{0,0,0,1571}, 369},
{{1,1584,1592,0}, 0},	{{1,1596,1603,0}, 0},	{{1,1612,1615,1616}, 0},
{{1,1619,1623,1624}, 0},	{{1,1592,1626,0}, 0},	{{1,1630,1,1616}, 0},
{{1,0,0,1631}, 0},	{{1,1633,1596,0}, 0},	{{1,1,1,1637}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1638}, 0},
{{1,1638,1644,1648}, 0},	{{1,1652,1662,1667}, 0},	{{1,1671,1720,1731}, 0},
{{1,1738,1756,0}, 0},	{{1,1765,1772,1667}, 0},	{{1,1,1,1773}, 0},
{{1,1,1779,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1780,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1779,0}, 0},
{{1,1780,1784,1786}, 0},	{{1,1787,1796,1804}, 0},	{{1,1812,1821,1830}, 0},
{{1,1837,1844,0}, 0},	{{1,1849,1855,1804}, 0},	{{1,1860,1868,1873}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1874}, 0},	{{1,1860,1875,1888}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,1888,0}, 0},	{{0,1899,0,0}, 0},
{{1,1899,1901,1899}, 0},	{{1,1899,1899,1899}, 0},	{{0,1901,0,1903}, 0},
{{1,1905,1909,1913}, 0},	{{1,1916,1925,1932}, 0},	{{1,1939,1940,0}, 0},
{{1,1941,1949,1913}, 0},	{{1,1952,1969,2009}, 0},	{{1,500,76,76}, 0},
{{1,1,1,2023}, 0},	{{1,66,1,76}, 0},	{{1,519,523,559}, 0},
{{1,2023,626,2024}, 0},	{{1,0,649,0}, 0},	{{1,649,185,185}, 0},
{{1,2031,2009,2009}, 0},	{{1,665,559,559}, 0},	{{1,1952,1969,2045}, 0},
{{1,1,76,76}, 0},	{{1,1,76,76}, 0},	{{1,1,1,2054}, 0},
{{1,1,1,76}, 0},	{{1,1,1,690}, 0},	{{1,1,523,705}, 0},
{{1,2068,1,2091}, 0},	{{1,2113,126,0}, 0},	{{1,126,126,0}, 0},
{{1,1969,0,0}, 0},	{{1,523,559,559}, 0},	{{1,1969,0,0}, 0},
{{1,1,126,126}, 0},	{{1,1,1,1}, 0},	{{1,1,1,76}, 0},
{{1,1,76,76}, 0},	{{1,1,1,2054}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2054}, 0},	{{1,1,1,690}, 0},	{{1,1,1,1}, 153},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2068,1,2068}, 0},
{{1,2068,1,2091}, 0},	{{1,523,523,126}, 0},	{{1,523,523,126}, 0},
{{1,1969,0,0}, 0},	{{1,1,126,126}, 0},	{{1,1,1,1}, 154},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,76}, 0},	{{1,1,1,76}, 0},	{{1,1,1,1}, 155},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 156},	{{1,2071,2072,2076}, 0},
{{1,2078,2080,2084}, 0},	{{1,1874,2091,0}, 0},	{{1,2091,2093,120}, 0},
{{1,2093,1904,2094}, 0},	{{1,435,11,11}, 0},	{{1,1,1,11}, 0},
{{1,1,1,11}, 0},	{{1,454,458,494}, 0},	{{-64,1958,561,573}, 0},
{{1,2093,2106,2115}, 0},	{{1,2119,2128,2130}, 0},	{{1,1864,2081,0}, 0},
{{1,2136,2142,2115}, 0},	{{1,2083,1894,1934}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2139,2143,2156}, 0},
{{1,2168,2169,563}, 0},	{{1,0,574,0}, 0},	{{1,110,110,110}, 0},
{{1,1956,1934,1934}, 0},	{{1,2166,2156,2156}, 0},	{{1,1877,1894,1970}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2143,2156}, 0},
{{1,2159,1,2016}, 0},	{{1,2165,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1894,0,0}, 0},	{{1,1894,0,0}, 0},	{{1,1894,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2016,1,2016}, 0},
{{1,2016,1,2016}, 0},	{{1,1894,1894,0}, 0},	{{1,1894,1894,0}, 0},
{{1,1894,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 154},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-74,-74,-74,-74}, 0},
{{1,2137,2138,2148}, 0},	{{1,2154,2155,0}, 0},	{{1,2031,2164,60}, 0},
{{1,2165,2165,2170}, 0},	{{1,2176,2043,2043}, 0},	{{1,1,1,2043}, 0},
{{1,1,1,2043}, 0},	{{1,1,1,2177}, 0},	{{1,1898,1898,2118}, 0},
{{1,0,524,0}, 0},	{{1,524,60,60}, 0},	{{1,0,0,0}, 0},
{{1,2186,2177,2177}, 0},	{{1,0,0,0}, 0},	{{1,1,60,60}, 0},
{{1,1,60,60}, 0},	{{1,1,1,2183}, 0},	{{1,1,1,60}, 0},
{{1,1,1,2177}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2197}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,434,434}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,2183}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2183}, 0},
{{1,1,1,434}, 0},	{{1,1,1,1}, 153},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 155},	{{1,1968,2174,2177}, 0},
{{1,2184,2187,0}, 0},	{{1,1981,175,10}, 0},	{{1,2192,2197,2202}, 0},
{{1,2207,2006,2006}, 0},	{{1,1,1,2006}, 0},	{{1,1,1,2006}, 0},
{{1,1,1,2208}, 0},	{{-49,1848,1848,463}, 0},	{{1,2207,2208,2212}, 0},
{{1,2214,0,0}, 0},	{{1,1,1,2214}, 0},	{{1,2106,2106,2106}, 0},
{{1,2213,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2059,2059,2059}, 0},	{{1,0,465,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2138}, 0},	{{1,2200,1591,1695}, 203},
{{1,2202,2213,1990}, 0},	{{1,2213,2213,2213}, 0},	{{1,1,2213,2213}, 0},
{{1,1712,1712,1990}, 0},	{{1,1712,1712,1990}, 0},	{{1,1712,1712,2215}, 0},
{{1,1,1,2213}, 0},	{{1,1438,2226,1438}, 0},	{{1,1,0,0}, 0},
{{1,1438,1438,1438}, 0},	{{1,422,2215,2215}, 0},	{{1,1438,1438,1438}, 0},
{{1,1,1438,1438}, 0},	{{1,1,1438,1438}, 0},	{{1,422,422,2220}, 0},
{{1,422,422,0}, 0},	{{1,422,422,2215}, 0},	{{1,422,422,422}, 0},
{{1,1,1,1438}, 0},	{{1,1,1,1438}, 0},	{{1,1,1,1438}, 0},
{{1,1438,1438,1438}, 0},	{{1,1,355,355}, 0},	{{1,1438,1438,1438}, 0},
{{1,-78,-78,-78}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1438}, 0},
{{1,1,1438,1438}, 0},	{{1,1,1,2210}, 0},	{{1,1,1,1}, 0},
{{1,-78,-78,2104}, 0},	{{1,-78,-78,355}, 0},	{{1,-78,-78,-78}, 153},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1438}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1438,1438,1438}, 0},	{{1,1,-78,-78}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1438}, 0},	{{1,1,1,1438}, 0},	{{1,1,1,1}, 155},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 204},	{{1,2166,2175,0}, 0},	{{1,2184,2186,2111}, 0},
{{1,1,1,1}, 209},	{{1,1644,2186,1644}, 0},	{{1,1,1,1}, 0},
{{1,1644,1644,1644}, 0},	{{1,1,2189,1342}, 0},	{{1,1,1,1}, 0},
{{1,0,2204,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,2202,0,0}, 0},	{{1,2202,2203,1608}, 0},	{{1,2204,2206,2103}, 0},
{{1,2207,2208,2213}, 0},	{{1,2208,2216,2208}, 0},	{{1,1,1,2208}, 0},
{{1,2059,2059,1912}, 0},	{{1,2059,2059,2059}, 0},	{{0,0,0,2213}, 0},
{{1,2213,2215,0}, 191},	{{1,1,1,2230}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2233,2233,2236}, 0},
{{1,1409,2236,2269}, 0},	{{1,1409,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1709,1709,1709}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2261}, 0},
{{1,1,1,1}, 0},	{{0,1940,0,0}, 0},	{{1,2265,2266,0}, 0},
{{1,1,1507,1507}, 199},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2266,2267,2266}, 0},	{{1,1960,1960,1960}, 0},
{{1,0,0,0}, 0},	{{1,1960,1960,0}, 0},	{{1,1,1,1}, 200},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,2255}, 0},
{{1,2270,2307,2312}, 0},	{{1,2312,1873,1873}, 0},	{{1,1603,1603,1873}, 0},
{{1,1,1,1873}, 0},	{{1,1,1,2324}, 0},	{{1,2329,1685,2330}, 0},
{{1,0,311,0}, 0},	{{1,1,-153,-153}, 0},	{{1,0,0,0}, 0},
{{1,1,2324,2324}, 0},	{{-212,0,0,2337}, 0},	{{1,2339,2344,2028}, 0},
{{1,2344,2348,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-164,1894,1894,2348}, 0},	{{1,1598,2348,1598}, 0},
{{1,1,1,1}, 0},	{{1,1598,1598,1598}, 0},	{{1,2347,2351,2352}, 0},
{{1,2353,1890,2366}, 0},	{{1,0,295,0}, 0},	{{1,0,0,0}, 0},
{{1,296,107,107}, 0},	{{1,1615,1655,1655}, 0},	{{1,1,47,107}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1598,1598,1598}, 0},	{{1,1,1615,-53}, 0},
{{1,2366,1,2366}, 0},	{{1,2372,0,0}, 0},	{{1,107,0,0}, 0},
{{1,47,107,107}, 0},	{{1,1615,0,0}, 0},	{{1,47,107,107}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-278,-278}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,375,1,375}, 0},
{{1,375,1,375}, 0},	{{1,47,47,107}, 0},	{{1,47,1615,0}, 0},
{{1,47,107,107}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 154},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-690,-690,-690,-690}, 0},
{{1,1569,2344,1569}, 0},	{{1,1,1,1}, 0},	{{1,1569,1569,1569}, 0},
{{1,2343,2343,2344}, 0},	{{1,2307,1844,2297}, 0},	{{1,0,249,0}, 0},
{{1,0,0,0}, 0},	{{1,1,61,61}, 0},	{{1,1569,1609,1609}, 0},
{{1,1,1,61}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1569,1569,1569}, 0},
{{1,1,1569,-99}, 0},	{{1,61,1,61}, 0},	{{1,2326,0,0}, 0},
{{1,61,0,0}, 0},	{{1,1,61,61}, 0},	{{1,1569,0,0}, 0},
{{1,1,61,61}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1569,1569}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,61,1,61}, 0},	{{1,61,1,61}, 0},	{{1,1,1,61}, 0},
{{1,1,1569,0}, 0},	{{1,1,61,61}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 154},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 158},
{{1,1549,2288,1549}, 0},	{{1,1,1,1}, 0},	{{1,1549,1549,1549}, 0},
{{1,2287,2287,2287}, 0},	{{1,2287,2289,2290}, 0},	{{1,0,2290,0}, 0},
{{1,2291,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1549,1549,1549}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1549,1549,1549}, 0},
{{1,1,-159,-159}, 0},	{{1,1,1,1}, 0},	{{1,2266,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{-59,-59,-59,-59}, 0},	{{1,1,1,2258}, 0},	{{1,1,1,2258}, 0},
{{1,2259,2260,2261}, 0},	{{-498,1524,127,2261}, 0},	{{1,1,1,1}, 0},
{{-427,2271,-427,-427}, 0},	{{-840,2271,-438,-428}, 0},	{{1,-429,-429,-429}, 0},
{{1,1709,1713,1726}, 0},	{{1,2202,1739,133}, 0},	{{1,0,144,0}, 0},
{{1,-320,-320,-320}, 0},	{{1,145,-44,-44}, 0},	{{1,1736,1726,1726}, 0},
{{1,-150,-104,160}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-429,-429,-429}, 0},
{{1,1,1713,1726}, 0},	{{-150,2215,-150,224}, 0},	{{1,1505,1505,120}, 0},
{{1,0,131,0}, 0},	{{1,131,-333,-333}, 0},	{{-517,1451,1491,1491}, 0},
{{1,1501,1501,116}, 0},	{{1,0,127,0}, 0},	{{1,127,-337,-337}, 0},
{{1,1447,1487,1487}, 0},	{{1,143,37,37}, 0},	{{1,1447,1447,1523}, 0},
{{1,1,1696,1696}, 0},	{{1,1,1696,1696}, 0},	{{1,1,1,2245}, 0},
{{1,1,1,1696}, 0},	{{1,1,1,2261}, 0},	{{1,1,1,183}, 0},
{{1,183,1,2275}, 0},	{{1,1591,-396,0}, 0},	{{1,-396,-396,0}, 0},
{{1,1447,0,0}, 0},	{{1,1,37,37}, 0},	{{1,1447,0,0}, 0},
{{1,1,-396,-396}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1447}, 0},
{{1,1,1447,1447}, 0},	{{1,1,1,2245}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2245}, 0},	{{1,1,1,2261}, 0},	{{1,1,1,1}, 153},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-396,1,-396}, 0},
{{1,-396,1,0}, 0},	{{1,1,1,-396}, 0},	{{1,1,1,-396}, 0},
{{1,1447,0,0}, 0},	{{1,1,-396,-396}, 0},	{{-396,-396,-396,-396}, 154},
{{1,2252,2252,2139}, 0},	{{1,0,91,0}, 0},	{{1,1744,-373,-373}, 0},
{{1,1451,1451,1451}, 0},	{{1,1,1,1}, 0},	{{1,1451,1451,1487}, 0},
{{1,1,1673,1673}, 0},	{{1,1,1673,1673}, 0},	{{1,1,1,1673}, 0},
{{1,1,1,1673}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2239}, 0},	{{1,2240,1,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{-432,-432,-432,-432}, 0},
{{1,0,65,0}, 0},	{{1,42,0,0}, 0},	{{1,2123,2123,2123}, 0},
{{1,42,1835,1835}, 0},	{{1,2123,2123,2123}, 0},	{{1,1,2123,2123}, 0},
{{1,1,2123,2123}, 0},	{{1,1,1,2220}, 0},	{{1,1,1,2123}, 0},
{{1,42,42,1835}, 0},	{{1,1,42,42}, 0},	{{1,1,1,2123}, 0},
{{1,1,-458,0}, 0},	{{1,1,-458,0}, 0},	{{1,-123,-123,-123}, 0},
{{1,-458,-25,-25}, 0},	{{1,-123,-123,-123}, 0},	{{1,1,-458,-458}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-123}, 0},	{{1,1,-123,-123}, 0},
{{1,1,1,2220}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2220}, 0},
{{1,1,1,2221}, 0},	{{1,1,-458,-458}, 153},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-123}, 0},
{{1,1,1,1}, 0},	{{1,1,-458,-458}, 0},	{{1,-123,-123,-123}, 0},
{{1,1,-458,-458}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-183}, 0},
{{1,1,1,-183}, 0},	{{-183,-183,-183,-183}, 155},	{{1,2205,24,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1794,1794}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1799}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1794}, 0},
{{1,1,1,1}, 0},	{{-499,-499,-499,0}, 0},	{{1,0,12,0}, 0},
{{1,0,0,0}, 0},	{{1,2201,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2193}, 0},	{{0,0,0,0}, 168},
{{1,0,0,0}, 0},	{{-522,-522,1654,1654}, 0},	{{1,1382,2190,1360}, 0},
{{1,1,1,2204}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1382,1382,1382}, 0},
{{1,-248,1320,-348}, 0},	{{1,2204,1,2204}, 0},	{{1,2210,2190,2190}, 0},
{{1,-188,0,0}, 0},	{{1,1,-188,-188}, 0},	{{1,1382,2190,0}, 0},
{{1,1,2204,2204}, 0},	{{1,1,2190,0}, 0},	{{-248,-248,-248,-248}, 164},
{{-141,1305,1305,2204}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1381,1381,1381}, 0},
{{1,1,1381,1381}, 0},	{{1,1,1,-203}, 0},	{{1,2062,0,0}, 0},
{{1,-203,0,0}, 0},	{{1,-203,-203,-203}, 0},	{{1,1381,1381,1381}, 0},
{{-203,-203,-203,2204}, 0},	{{1,1,1,-167}, 0},	{{1,1381,1381,-597}, 0},
{{1,1,2094,2203}, 0},	{{1,2204,1,56}, 0},	{{1,2217,1635,0}, 0},
{{1,2131,1635,0}, 0},	{{1,-272,-212,-212}, 0},	{{1,2094,0,0}, 0},
{{1,-272,-212,-212}, 0},	{{1,1,1635,1635}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-318}, 0},	{{1,1,-318,-318}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-318}, 0},
{{-318,-318,-597,-597}, 153},	{{1,1,2094,-130}, 0},	{{1,2203,1,1402}, 0},
{{1,2109,-130,0}, 0},	{{1,-130,-130,0}, 0},	{{1,1280,0,0}, 0},
{{1,2094,-130,-130}, 0},	{{1,1280,0,0}, 0},	{{1,1,-130,-130}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-613}, 0},	{{1,1,-613,-613}, 0},
{{1,1,1,-613}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-613}, 0},
{{1,1,1,1}, 0},	{{-688,-688,-688,-688}, 0},	{{1,1,1,2093}, 0},
{{-578,1409,-578,0}, 0},	{{1,46,-579,0}, 0},	{{1,-120,-579,0}, 0},
{{1,-244,-244,-244}, 0},	{{1,-579,-146,-146}, 0},	{{1,-244,-244,-244}, 0},
{{1,1,-579,-579}, 0},	{{1,1,1,1}, 0},	{{1,1,1,24}, 0},
{{1,1,24,24}, 0},	{{1,1,1,2172}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2172}, 0},	{{1,1,1,2188}, 0},	{{1,1,1363,1363}, 153},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,24}, 0},	{{1,-120,-120,-120}, 0},	{{1,-120,-579,-579}, 0},
{{1,-244,-244,-244}, 0},	{{1,1,-579,-579}, 0},	{{-1041,-1041,-1041,-1041}, 0},
{{1,1998,0,0}, 0},	{{1,2177,1594,1594}, 0},	{{1,-267,-267,-267}, 0},
{{1,1594,1594,1594}, 0},	{{1,-267,-267,-267}, 0},	{{1,1,1594,1594}, 0},
{{1,1,1,2177}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1363,1363}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-267,-267,-267}, 0},	{{1,-267,0,0}, 0},	{{1,-267,-267,-267}, 0},
{{1,1,0,0}, 0},	{{-373,-373,-373,-373}, 0},	{{-165,-165,2169,0}, 0},
{{-1075,-1075,-738,-738}, 0},	{{1,1,-211,-608}, 0},	{{1,-333,-273,-273}, 0},
{{1,1,-608,-608}, 0},	{{-149,-149,-149,-149}, 154},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{0,0,2162,0}, 0},	{{-2,-2,2162,0}, 0},
{{0,0,2164,0}, 0},	{{1,0,2164,0}, 0},	{{1,1,1,1}, 0},
{{-974,0,0,0}, 0},	{{1,2168,2170,2172}, 0},	{{1,2172,2173,0}, 0},
{{1,14,2175,2176}, 0},	{{-1053,2183,-1053,0}, 0},	{{1,2183,2168,2168}, 0},
{{1,2192,2168,0}, 0},	{{1,1,1,2194}, 0},	{{1,2200,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,2200,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,2205,0}, 0},
{{1,8,2209,-18}, 0},	{{1,1,2209,2210}, 0},	{{0,2210,0,0}, 0},
{{1,2211,2212,0}, 0},	{{1,1,2213,2214}, 0},	{{0,2207,2221,0}, 0},
{{1,2153,2223,0}, 0},	{{-5,-5,-5,2223}, 0},	{{1,-6,2226,-6}, 0},
{{1,2203,0,0}, 0},	{{0,0,2225,0}, 0},	{{1,2230,2223,2231}, 0},
{{1,2232,0,0}, 0},	{{1,0,2236,0}, 0},	{{1,2239,2239,2242}, 0},
{{1,2242,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2244,0,0}, 0},
{{0,2245,0,0}, 0},	{{1,2245,-1083,0}, 0},	{{1,-35,-35,-35}, 0},
{{1,-1083,-1083,-1083}, 0},	{{1,1,0,0}, 0},	{{1,-1010,1,-1010}, 0},
{{1,-1010,-1010,-1010}, 0},	{{1,-1010,-1010,-1010}, 0},	{{1,1,1,1}, 0},
{{1,-1083,1,0}, 0},	{{-1010,-1010,2254,-1010}, 0},	{{1,2234,2136,0}, 0},
{{1,0,0,0}, 0},	{{1,2136,2136,2136}, 0},	{{1,1,1,2190}, 0},
{{1,1,1,1}, 0},	{{1,2190,2190,2190}, 0},	{{1,2190,2190,2190}, 0},
{{0,0,0,2259}, 0},	{{1,0,2259,0}, 0},	{{-1100,-1100,-1100,-1100}, 118},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 117},	{{1,3,12,0}, 0},	{{1,23,24,23}, 0},
{{-1117,0,170,0}, 0},	{{1,21,2261,21}, 0},	{{1,0,199,0}, 0},
{{1,22,23,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1012,0,0,41}, 0},	{{1,2253,2254,2262}, 0},	{{1,233,235,233}, 0},
{{1,2261,14,0}, 0},	{{1,1,1,2254}, 41},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,235,235,2256}, 0},	{{1,0,235,0}, 0},	{{1,-1128,235,0}, 0},
{{0,0,43,0}, 42},	{{0,0,270,0}, 0},	{{1,0,291,0}, 0},
{{0,0,2253,0}, 0},	{{-1033,-1033,-1033,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2252,2252,2252}, 0},	{{1,403,0,0}, 0},
{{1,403,403,0}, 0},	{{1,1,2250,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2242}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{0,0,4,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,2249,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2247}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2241}, 0},	{{1,2243,2244,36}, 0},	{{1,39,41,2244}, 0},
{{1,0,-1108,0}, 0},	{{1,36,55,36}, 0},	{{1,1,2244,60}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1178,-1178,-1178,2240}, 0},	{{1,2242,2234,26}, 0},
{{1,29,31,39}, 0},	{{-9,0,85,0}, 0},	{{1,2230,2231,23}, 0},
{{-2,26,28,2231}, 0},	{{1,25,2239,2240}, 0},	{{1,0,112,0}, 0},
{{1,22,41,22}, 0},	{{1,1,2245,46}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1192,-1192,-1192,2245}, 0},	{{1,2247,2249,2257}, 0},	{{1,146,148,146}, 0},
{{1,2259,32,13}, 0},	{{1,1,2259,2264}, 99},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2267}, 0},	{{1,-1201,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 100},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2263}, 0},	{{1,0,179,0}, 0},
{{0,0,2269,0}, 0},	{{1,0,199,0}, 0},	{{1,0,2268,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1218,-1218,-1218,-1218}, 0},
{{1,0,169,0}, 0},	{{1,0,2261,0}, 0},	{{1,2261,1,2262}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2206,2206,0}, 0},	{{0,0,0,2262}, 0},	{{-13,-13,-13,2262}, 88},
{{1,2262,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1232,-1232,-1232,2262}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2269,2269,2269}, 0},	{{1,-1237,-1237,0}, 0},	{{1,2239,1,2239}, 0},
{{0,0,0,2269}, 71},	{{1,-1240,-1240,0}, 0},	{{1,0,-1240,0}, 0},
{{1,0,2268,0}, 71},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,2273,0}, 0},	{{-1228,2277,73,2280}, 0},
{{1,128,130,0}, 0},	{{1,0,0,0}, 0},	{{-1217,-1217,-1217,-1217}, 0},
{{1,0,136,0}, 0},	{{1,1,2281,1}, 0},	{{0,128,0,0}, 0},
{{-1239,-3,2284,-1194}, 0},	{{1,2269,2284,2272}, 0},	{{1,83,85,83}, 0},
{{-1236,2285,-1164,-1224}, 0},	{{-9,118,2285,0}, 0},	{{1,0,150,0}, 0},
{{1,1,2285,1}, 0},	{{0,120,164,2291}, 0},	{{1,0,125,0}, 0},
{{1,0,187,0}, 0},	{{0,0,2296,0}, 0},	{{1,0,186,0}, 0},
{{1,1,1,2295}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,32,1,0}, 0},	{{1,1,1,186}, 0},
{{0,197,0,0}, 0},	{{1,-1133,-1133,-1133}, 0},	{{1,1,1,1}, 0},
{{-1133,-1133,2291,-1133}, 0},	{{1,12,2294,-1216}, 0},	{{1,0,19,0}, 0},
{{1,15,2293,9}, 0},	{{-1410,-1410,34,-1140}, 0},	{{1,2292,2294,2247}, 0},
{{1,58,60,58}, 0},	{{1,2295,12,5}, 0},	{{-1261,-1261,71,79}, 41},
{{1,0,2294,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,95,0}, 0},	{{1,0,99,0}, 0},	{{0,0,2291,0}, 0},
{{1,0,119,0}, 0},	{{1,1,2290,1}, 0},	{{0,0,133,0}, 0},
{{-1206,-1206,193,0}, 0},	{{-1200,-1200,212,229}, 0},	{{-1257,0,92,0}, 0},
{{1,0,155,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,2280}, 0},	{{1,2280,2287,2296}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,221,0,0}, 0},	{{1,221,2296,0}, 0},
{{1,0,2296,0}, 0},	{{0,0,0,0}, 35},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1209,-1209,-1209,-1209}, 0},
{{1,22,2291,22}, 0},	{{1,2291,2215,-65}, 0},	{{0,62,84,0}, 41},
{{1,19,2291,19}, 0},	{{1,2291,95,-1282}, 0},	{{1,2292,2293,2040}, 41},
{{1,1,2040,2040}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,-1282,1,-1282}, 0},	{{-1282,0,0,0}, 42},	{{1,0,2292,0}, 0},
{{1,2292,2293,0}, 0},	{{1,2197,2293,2298}, 0},	{{1,2197,2197,2197}, 0},
{{1,1,2197,2197}, 0},	{{1,1,2296,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2296}, 0},	{{1,2296,0,0}, 0},	{{0,0,0,0}, 41},
{{1,2295,110,0}, 0},	{{1,1,1,2020}, 41},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2020}, 0},
{{1,1,1,2290}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 42},	{{1,2289,2290,0}, 44},	{{-1264,-1264,-1264,-1264}, 45},
{{-1330,-1330,2289,-1330}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,12,12,2289}, 0},
{{1,0,-10,0}, 0},	{{1,133,2290,0}, 0},	{{-1250,-1484,205,-1484}, 42},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-18,-18,-18}, 0},	{{1,0,-18,0}, 0},
{{1,0,-18,0}, 0},	{{-1492,-1492,-1492,-1492}, 42},	{{1,0,-21,0}, 0},
{{1,0,1,0}, 0},	{{0,0,224,0}, 42},	{{1,0,-24,0}, 0},
{{1,0,-2,0}, 0},	{{0,0,222,0}, 42},	{{1,0,0,0}, 0},
{{-124,-124,-124,-124}, 0},	{{1,0,0,0}, 0},	{{-1340,-1340,-1340,-1340}, 0},
{{0,1,2271,0}, 0},	{{0,0,2271,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2271}, 0},	{{0,0,64,0}, 0},	{{1,2272,1,2146}, 0},
{{1,2146,1,2146}, 0},	{{1,1,1,2146}, 0},	{{1,2146,2146,2146}, 0},
{{1,2269,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,2294,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 23},	{{1,0,2255,0}, 0},
{{1,1,1,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,2288,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2307,0,0}, 0},	{{1,0,42,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,2305}, 0},
{{1,2316,2317,0}, 0},	{{1,1,2130,2130}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,108,2319,0}, 0},	{{1,1,1,-1376}, 0},	{{-1376,0,2321,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2302,0,0}, 0},	{{0,0,0,0}, 27},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2298}, 0},	{{0,0,2313,0}, 0},	{{0,0,0,0}, 19},
{{1,1,1,2110}, 0},	{{1,1,1,1}, 0},	{{1,1,2110,2110}, 0},
{{1,0,1,0}, 0},	{{-1387,-184,-184,-184}, 0},	{{1,12,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2300}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 16},
{{-1397,-1397,2284,-1397}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,2167}, 0},
{{1,0,0,0}, 0},	{{1,1,2282,0}, 0},	{{1,0,2282,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{-1382,-1382,-1382,0}, 0},	{{-1410,-1410,2282,-1410}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-1411,-1411,2282}, 0},	{{1,19,0,0}, 0},
{{1,2283,2284,0}, 0},	{{1,0,2284,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-19,-19,-19,2286}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,2297,0}, 0},
{{1,1,1,0}, 0},	{{0,0,2214,0}, 0},	{{1,1,1,1}, 12},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1378,-1378,-1378,-1378}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2281,2281,2282}, 0},	{{-1672,0,2282,0}, 0},
{{1,-1401,-1401,5}, 0},	{{1,0,0,0}, 0},	{{1,-57,15,0}, 0},
{{1,-1674,15,-1674}, 0},	{{-1440,-1440,-1440,2278}, 0},	{{1,0,0,0}, 0},
{{1,2105,2282,2105}, 0},	{{1,0,42,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2273}, 0},	{{-71,0,2273,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,32}, 0},
{{1,-33,-33,-33}, 0},	{{1,1,2271,-1412}, 0},	{{1,46,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{0,2255,0,0}, 0},	{{-1471,0,0,0}, 1},	{{0,0,0,0}, 7},
{{-63,-63,-63,-63}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-64,-64,-64,2244}, 0},	{{1,-64,-64,-64}, 0},	{{1,1,2243,-1443}, 0},
{{1,15,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2230}, 0},	{{0,1,0,0}, 1},
{{0,0,0,0}, 2},	{{1,2228,2232,2234}, 0},	{{1,2236,2236,0}, 0},
{{1,2236,2238,2240}, 0},	{{1,155,2247,0}, 0},	{{1,1188,2248,0}, 0},
{{0,0,0,2249}, 0},	{{1,2249,2253,2256}, 0},	{{1,2258,0,0}, 0},
{{1,2259,2259,2260}, 0},	{{1,149,2265,0}, 0},	{{0,1182,2269,0}, 0},
{{1,0,2272,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,493}, 0},
{{1,2271,2273,2274}, 0},	{{1,2276,1,2277}, 0},	{{1,0,2277,0}, 0},
{{1,1,2277,1}, 0},	{{1,0,0,0}, 0},	{{1,93,93,0}, 0},
{{1,1,1,101}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,2268}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 368},	{{0,0,0,0}, 369},
{{1,2265,2253,2256}, 0},	{{-17,2258,-17,2268}, 0},	{{1,2275,2275,2275}, 0},
{{1,1,1,2276}, 0},	{{0,0,2257,0}, 0},	{{1,2275,1,2276}, 0},
{{1,2276,2278,0}, 0},	{{1,1,2279,1}, 0},	{{-1491,0,0,0}, 0},
{{1,3,1,2278}, 0},	{{-3,2272,2278,0}, 0},	{{1,1,1,2276}, 0},
{{1,2270,2276,0}, 0},	{{-5,-5,-5,-5}, 0},	{{1,10,25,0}, 0},
{{-1499,42,2274,-7}, 0},	{{1,2274,2281,459}, 0},	{{1,2287,2272,-9}, 0},
{{1,260,2288,2293}, 0},	{{1,2297,2297,260}, 0},	{{1,2300,2300,2303}, 0},
{{1,-1501,-1501,-1501}, 0},	{{1,-1501,-1501,-1501}, 0},	{{-1501,-1501,-1501,2303}, 0},
{{1,2303,2305,2259}, 0},	{{1,0,36,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,62}, 0},
{{1,1121,0,0}, 377},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2274}, 0},
{{1,1032,2274,2275}, 0},	{{-1540,2276,22,0}, 0},	{{1,0,2290,0}, 0},
{{-1542,20,2290,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,2283,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2276}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2176}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 368},
{{-62,0,0,0}, 371},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2244}, 0},
{{1,2244,2244,0}, 0},	{{1,2246,0,0}, 0},	{{1,2264,2264,2264}, 0},
{{1,1,2264,0}, 0},	{{1,1042,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,2264,0,0}, 0},	{{1,2236,2236,0}, 0},
{{1,0,0,0}, 0},	{{1,2275,2275,2275}, 0},	{{1,1,2275,0}, 0},
{{0,1034,0,0}, 0},	{{1,2277,2279,2280}, 0},	{{1,2283,2284,2287}, 0},
{{1,0,2289,0}, 0},	{{1,2280,1,2280}, 0},	{{1,2288,0,0}, 0},
{{1,38,2288,0}, 0},	{{-1594,-1594,-1594,-1594}, 0},	{{1,2290,2292,2293}, 0},
{{1,2276,14,2280}, 0},	{{1,0,2282,0}, 0},	{{1,1,2293,1}, 0},
{{1,0,0,0}, 0},	{{1,31,-6,0}, 0},	{{1,1,1,35}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2288}, 0},
{{1,2292,1,2294}, 0},	{{1,0,2299,0}, 0},	{{-1610,-1610,-1610,5}, 0},
{{-2,2301,-2,2302}, 0},	{{1,2260,1,2267}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1614,0,0,0}, 0},	{{1,2299,2300,0}, 0},
{{1,2300,1,2257}, 0},	{{1,0,0,13}, 0},	{{-22,15,-22,0}, 0},
{{-1621,-30,2296,0}, 0},	{{1,-31,2295,0}, 0},	{{1,2297,1,2259}, 0},
{{0,2297,0,8}, 0},	{{1,2297,2285,0}, 0},	{{1,2241,2241,2298}, 0},
{{1,2241,1,0}, 0},	{{1,1,1,2299}, 0},	{{0,0,2304,0}, 0},
{{1,924,924,2304}, 0},	{{-1628,2304,-33,0}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{0,0,2310,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,2310,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2322}, 0},	{{0,2322,0,0}, 0},	{{0,0,2327,0}, 0},
{{1,2330,2333,30}, 0},	{{1,2335,2344,2347}, 0},	{{1,2352,2353,0}, 0},
{{1,2353,135,30}, 0},	{{1,1,2354,136}, 0},	{{-1636,-1636,-1636,-1636}, 0},
{{1,9,19,24}, 0},	{{1,2352,2355,2357}, 0},	{{1,2346,2347,0}, 0},
{{-1642,2363,129,24}, 0},	{{1,2363,2366,20}, 0},	{{1,2348,2367,2369}, 0},
{{1,2342,2343,0}, 0},	{{1,2370,2371,20}, 0},	{{-9,-9,-9,126}, 0},
{{1,2370,2371,2372}, 314},	{{1,657,2372,0}, 0},	{{1,2355,121,16}, 0},
{{1,1,1,16}, 0},	{{1,1,2379,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,2378,0}, 0},	{{1,2378,2379,2382}, 0},	{{1,727,2384,0}, 0},
{{1,2345,111,6}, 0},	{{1,1,1,1}, 0},	{{-9,2391,-9,-9}, 0},
{{1,2394,1,2395}, 0},	{{1,761,2395,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-14,-14,-14,-14}, 0},	{{1,2392,2393,258}, 203},
{{1,2393,2325,2325}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2302,2302,2302}, 0},	{{1,2302,2302,2302}, 0},	{{1,2302,2302,2302}, 0},
{{1,1,1,1}, 0},	{{1,1,2388,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1436,-1436,-1436,-1436}, 0},
{{1,2348,2350,0}, 0},	{{1,2358,2360,-52}, 0},	{{1,1,1,1}, 209},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2354,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 310},	{{1,2352,2354,200}, 0},
{{1,2354,0,0}, 0},	{{1,1,1,2359}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2358}, 0},	{{1,805,0,0}, 191},	{{1,1,1,2357}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2360,2361,2362}, 0},	{{1,1,828,861}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2351}, 0},	{{1,2352,2354,0}, 303},	{{1,1,2359,2359}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2354,2359,2354}, 0},	{{1,2268,2268,2359}, 0},	{{1,2268,2268,0}, 0},
{{1,2268,2268,0}, 0},	{{-1405,-1405,-1405,-1405}, 305},	{{1,1,1,2356}, 0},
{{1,2356,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,2356,2265,0}, 0},
{{1,-104,1,2357}, 0},	{{-119,-119,2364,-119}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2364,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,7,0}, 0},	{{0,1008,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1777}, 0},	{{1,2359,-1777,-1777}, 0},
{{-1777,-1777,-1777,2359}, 0},	{{-1778,-1778,-1778,2361}, 0},	{{1,1,0,0}, 205},
{{0,0,0,0}, 296},	{{1,2370,17,25}, 0},	{{1,2370,2371,2373}, 0},
{{1,597,2380,0}, 0},	{{-1778,2380,76,25}, 0},	{{1,2381,13,21}, 0},
{{-3,2366,2382,2389}, 0},	{{1,2364,11,19}, 0},	{{-5,2364,2380,2395}, 0},
{{1,2401,2402,2405}, 0},	{{1,510,2410,0}, 0},	{{1,2373,2411,18}, 0},
{{1,2416,2416,2373}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2416}, 0},	{{-1785,74,89,0}, 0},
{{1,2354,2415,2424}, 0},	{{1,581,2426,0}, 0},	{{1,2431,60,9}, 0},
{{1,2435,2439,2431}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1794,2439,-1794,2440}, 0},	{{1,2440,2441,2441}, 0},
{{1,612,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2434,0}, 0},	{{1,2435,1,105}, 203},
{{1,791,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-152,-152,-152,-152}, 0},	{{1,2429,2432,0}, 0},
{{1,782,2440,0}, 0},	{{1,1,1,1}, 209},	{{1,1,1,2345}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2345}, 0},	{{1,1,1,2442}, 0},
{{1,1,1,1}, 0},	{{-1521,2442,-1521,0}, 0},	{{1,2445,2448,89}, 0},
{{1,2454,0,0}, 0},	{{1,2454,1,1}, 0},	{{1,1,2458,1}, 0},
{{1,1,1,1}, 0},	{{1,2351,2351,2351}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2455}, 0},	{{1,2455,2457,0}, 191},	{{1,1,1,1}, 0},
{{1,2457,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,2457,0}, 0},	{{1,759,2467,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1505,760,760,760}, 0},	{{1,1,1,1}, 340},
{{1,2461,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2463}, 0},	{{0,0,27,0}, 0},	{{1,2463,1,2372}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2464,2465}, 0},	{{0,0,21,2465}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2464}, 0},
{{1,1,16,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,29,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,7}, 0},	{{-7,-7,8,21}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2452}, 0},	{{0,0,3,2452}, 0},	{{1,1,2454,2455}, 0},
{{-13,2455,0,0}, 0},	{{1,0,0,0}, 0},	{{1,2456,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2446,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{-1232,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,2432,0}, 0},	{{0,0,0,2432}, 0},
{{1,1,1,1}, 0},	{{0,2442,0,0}, 0},	{{1,-1,-1,-1}, 0},
{{0,2440,0,2441}, 0},	{{1,1,1,1}, 203},	{{-103,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{-198,-198,-198,-198}, 0},
{{1,2438,2439,2441}, 0},	{{1,375,2446,0}, 0},	{{1,37,2446,9}, 0},
{{-1778,2446,386,391}, 0},	{{1,8,2446,2447}, 0},	{{1,451,454,0}, 0},
{{1,33,2448,5}, 0},	{{-1732,2448,464,2449}, 0},	{{1,479,2455,2456}, 0},
{{1,486,0,0}, 0},	{{1,1,1,1}, 0},	{{-1727,2438,378,378}, 0},
{{1,2454,0,0}, 203},	{{1,1,502,279}, 0},	{{1,279,279,279}, 0},
{{1,1,279,279}, 0},	{{1,1,1,279}, 0},	{{1,1,1,279}, 0},
{{1,1,1,504}, 0},	{{1,1,1,279}, 0},	{{-1289,0,2447,0}, 0},
{{1,2447,2448,0}, 0},	{{1,-286,2448,-286}, 0},	{{1,1,1,1}, 209},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1642,-1642,-1642,-301}, 0},	{{1,2438,0,0}, 0},	{{1,2442,2443,465}, 0},
{{1,0,274,2448}, 0},	{{1,2451,274,274}, 0},	{{1,1,1,1}, 0},
{{1,1,1,274}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2451}, 0},
{{-1637,2451,0,0}, 191},	{{1,0,647,0}, 0},	{{-1618,-1618,2450,-112}, 199},
{{1,2450,2451,350}, 0},	{{1,2451,271,271}, 0},	{{1,1,1,271}, 0},
{{1,1,1,271}, 0},	{{1,1,1,2452}, 0},	{{1,83,83,728}, 0},
{{1,0,-1291,0}, 0},	{{-1291,-1291,-1755,-1755}, 0},	{{1,2449,745,2450}, 0},
{{1,745,749,-1598}, 0},	{{1,1,1,-1598}, 0},	{{-1598,2448,-1598,-1598}, 0},
{{1,2448,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,750,754,755}, 0},	{{1,292,293,769}, 0},	{{1,0,-1302,0}, 0},
{{1,0,0,0}, 0},	{{1,80,58,58}, 0},	{{1,18,58,58}, 0},
{{1,1,18,58}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,18,-1650}, 0},	{{-1875,283,-1875,283}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,775,775,776}, 0},
{{1,275,276,729}, 0},	{{1,0,-1319,0}, 0},	{{1,0,0,0}, 0},
{{1,1,41,41}, 0},	{{1,1,41,41}, 0},	{{1,1,1,41}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1667}, 0},
{{1,-1667,1,-1667}, 0},	{{1,272,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 154},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,739,739,739}, 0},	{{1,742,741,742}, 0},	{{1,0,742,0}, 0},
{{1,743,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1707,-1707,-1707,-1707}, 0},	{{1,-1946,1,-1946}, 0},	{{1,192,196,209}, 0},
{{-1946,221,222,2}, 0},	{{-1396,0,-1373,0}, 0},	{{1,0,-1374,0}, 0},
{{1,0,0,0}, 0},	{{1,815,0,0}, 0},	{{1,-1385,-1385,-1385}, 0},
{{1,-1385,-1385,0}, 0},	{{1,-1385,-1385,-1385}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1385,-1385,2367,-1385}, 0},
{{1,1,809,-21}, 0},	{{1,1,1,809}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-61,-61,-1729}, 0},	{{1,809,1,809}, 0},
{{1,2359,809,809}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,809,0}, 0},	{{1,1,809,809}, 0},	{{1,1,809,0}, 0},
{{-61,-61,-61,-61}, 164},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1743}, 0},	{{1,196,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2342}, 0},	{{1,1,1,-1977}, 0},	{{1,1,1,-1977}, 0},
{{1,1,714,823}, 0},	{{1,2340,1,38}, 0},	{{1,2353,255,0}, 0},
{{1,255,255,0}, 0},	{{1,-84,0,0}, 0},	{{1,714,0,0}, 0},
{{1,-84,0,0}, 0},	{{1,1,255,255}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1977}, 0},	{{1,1,-1977,-1977}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1977}, 0},
{{-1977,-1977,-1977,-1977}, 153},	{{1,46,-1941,0}, 0},	{{1,-1941,-1941,0}, 0},
{{1,0,0,0}, 0},	{{1,-1941,-1508,-1508}, 0},	{{1,0,0,0}, 0},
{{1,1,-1941,-1941}, 0},	{{1,1,1,1}, 0},	{{1,1,1,24}, 0},
{{1,1,24,24}, 0},	{{1,1,1,2326}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2326}, 0},	{{1,1,1,825}, 0},	{{1,1,1,1}, 153},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,24}, 0},	{{1,-1941,-1941,-1941}, 0},	{{1,-1941,-1941,-1941}, 0},
{{1,0,0,0}, 0},	{{1,1,-1941,-1941}, 0},	{{-2066,-2066,-2066,-2066}, 0},
{{1,150,0,0}, 0},	{{1,232,232,232}, 0},	{{1,0,0,0}, 0},
{{1,232,232,232}, 0},	{{1,0,0,0}, 0},	{{1,1,232,232}, 0},
{{1,1,1,2311}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{-2014,-2014,-2014,-2014}, 0},	{{-1986,-1986,807,0}, 0},
{{-2009,127,2302,2305}, 0},	{{1,7,2312,2313}, 0},	{{1,223,226,0}, 0},
{{1,20,22,-1951}, 0},	{{-1960,231,236,2313}, 0},	{{1,251,2317,256}, 0},
{{1,258,0,0}, 0},	{{-1955,-1955,-1955,-1955}, 0},	{{1,2227,0,0}, 203},
{{-226,2316,275,52}, 0},	{{1,2227,2317,0}, 0},	{{1,2313,2317,2313}, 0},
{{1,1,1,2317}, 209},	{{-219,-219,323,-219}, 0},	{{1,2316,2191,2191}, 0},
{{1,2316,351,248}, 0},	{{1,1823,2316,2321}, 0},	{{1,2316,1,2316}, 0},
{{1,1,1,2316}, 0},	{{1,204,204,57}, 0},	{{1,204,204,204}, 0},
{{0,0,0,2320}, 0},	{{-1834,0,431,0}, 0},	{{1,2319,2236,2320}, 0},
{{-1816,2236,56,56}, 0},	{{-1807,531,536,2319}, 0},	{{-205,-205,-205,-205}, 0},
{{1,-149,1,-149}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-149}, 0},
{{1,2315,2315,2315}, 0},	{{-149,592,591,2315}, 0},	{{1,2317,2318,2320}, 0},
{{1,112,113,0}, 0},	{{1,44,2321,23}, 0},	{{1,123,123,128}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1982}, 0},	{{1,76,76,76}, 0},	{{1,0,-1518,0}, 0},
{{1,-1982,-1982,-1982}, 0},	{{1,0,0,0}, 0},	{{-1982,2312,-1982,-1982}, 0},
{{1,14,2312,2313}, 0},	{{1,179,182,0}, 0},	{{1,31,37,10}, 0},
{{1,187,192,197}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1830}, 0},	{{-12,63,63,-1542}, 0},
{{1,202,2178,2179}, 0},	{{1,209,0,0}, 0},	{{1,1,1,1}, 0},
{{1,101,101,101}, 0},	{{-2004,-2004,-2004,-2004}, 0},	{{1,2176,0,0}, 203},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2169,0}, 0},	{{1,2169,2259,0}, 0},
{{-277,-564,-564,-564}, 0},	{{1,2165,0,0}, 0},	{{1,2169,2290,192}, 0},
{{1,0,1,2175}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2285}, 0},
{{1,2264,2181,80}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2025,33,33,458}, 0},
{{1,472,156,161}, 0},	{{-1866,-1866,-1866,-1866}, 0},	{{1,30,30,-1575}, 0},
{{1,0,-1564,0}, 0},	{{1,-2028,-2028,-2028}, 0},	{{-2137,-244,-204,-204}, 0},
{{1,26,26,-1579}, 0},	{{1,0,-1568,0}, 0},	{{1,-2032,-2032,-2032}, 0},
{{1,-248,-208,-208}, 0},	{{1,24,14,14}, 0},	{{1,-248,-248,-172}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,14}, 0},
{{-248,-1916,-248,580}, 0},	{{1,13,13,467}, 0},	{{1,0,-1581,0}, 0},
{{1,-2045,-2045,-2045}, 0},	{{1,-221,-221,-221}, 0},	{{1,1,1,1}, 0},
{{1,-221,-221,-185}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1929,-1929,-1929,567}, 0},	{{0,0,-1593,0}, 0},
{{0,587,-1594,0}, 0},	{{-22,-271,-271,628}, 0},	{{1,7,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{-142,-142,-142,-142}, 0},
{{0,0,2237,0}, 0},	{{-118,18,0,0}, 203},	{{1,2236,2242,0}, 0},
{{1,2251,2254,130}, 0},	{{1,1,1,1}, 209},	{{1,-639,2254,-639}, 0},
{{1,-639,-639,-639}, 0},	{{1,-639,-639,-639}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,2255,0}, 0},	{{0,0,0,0}, 244},
{{1,7,2254,0}, 0},	{{1,2255,2259,124}, 0},	{{1,1902,2261,2266}, 249},
{{1,0,2266,0}, 0},	{{1,1,1,2267}, 0},	{{1,2267,2269,0}, 0},
{{0,0,0,0}, 250},	{{0,2111,2276,0}, 191},	{{1,0,307,0}, 0},
{{1,1,1,1}, 199},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2270,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 200},
{{1,2,2267,89}, 0},	{{-2103,109,2267,-2103}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-46,-46,-46,-46}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,456,0}, 0},	{{0,0,2259,0}, 0},	{{1,1,1,2259}, 0},
{{1,1,1,2259}, 0},	{{1,1,1,2260}, 0},	{{-2174,-277,-277,2260}, 0},
{{1,509,509,-58}, 0},	{{1,0,-1652,0}, 0},	{{1,1,-2116,-2116}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,-2116,-2116}, 0},	{{1,1,-2116,-2116}, 0},	{{1,1,1,-2116}, 0},
{{1,1,1,-2116}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,21}, 0},	{{-1742,-1742,-1742,0}, 0},	{{-2184,0,0,2003}, 0},
{{1,1,1,-2122}, 0},	{{1,1,1,-2122}, 0},	{{1,1,1,1}, 0},
{{1,1,1,15}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 153},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2232}, 0},	{{1,2240,2242,0}, 0},	{{1,44,119,44}, 0},
{{-203,-203,-203,-203}, 209},	{{1,2018,2175,0}, 0},	{{1,2022,148,45}, 0},
{{1,2246,2251,2252}, 0},	{{1,-146,1,-146}, 0},	{{1,1,1,-146}, 0},
{{1,1,1,-146}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2250}, 0},
{{1,2031,0,0}, 191},	{{1,1,1,1}, 0},	{{-538,-538,-538,-538}, 0},
{{1,0,225,0}, 0},	{{1,1,1,225}, 199},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,225}, 0},
{{-81,-81,-81,2241}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2239,2240,2241}, 0},	{{-123,-123,-123,354}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-128,-128,-128,326}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,374,0}, 0},	{{1,1,1,2229}, 0},
{{1,1,1,2229}, 0},	{{1,1,1,2230}, 0},	{{-2255,-358,-358,379}, 0},
{{-80,428,428,315}, 0},	{{-196,8,0,0}, 203},	{{1,7,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-768,-768,2125,-768}, 0},
{{1,3,0,0}, 0},	{{1,1,1,2222}, 0},	{{0,0,0,2222}, 0},
{{0,0,0,0}, 191},	{{-2212,-107,2221,-107}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2211,-153,-153,2164}, 0},
{{1,110,112,0}, 191},	{{1,1,1,1}, 0},	{{-608,-608,2215,-608}, 0},
{{1,2215,2215,2215}, 0},	{{1,2215,-211,-211}, 0},	{{1,-489,-489,-211}, 0},
{{1,1,1,-211}, 0},	{{1,1,1,2227}, 0},	{{1,1,-489,-211}, 0},
{{1,0,1957,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,2227,2227}, 0},	{{-1779,0,0,270}, 0},	{{-222,-222,2226,-222}, 0},
{{1,1,1,1}, 0},	{{1,-222,-222,-222}, 0},	{{1,-222,-222,-222}, 0},
{{1,-222,-222,-222}, 0},	{{1,1,1,1}, 0},	{{-774,-774,14,-774}, 0},
{{1,1,1,-224}, 0},	{{1,0,1944,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-116,-116,-116,0}, 0},	{{-787,-787,0,0}, 207},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{-115,-115,-115,0}, 0},
{{1,1,1,1}, 0},	{{1,-105,-105,-105}, 0},	{{1,-105,-105,0}, 0},
{{-771,0,0,0}, 153},	{{1,2198,2200,0}, 191},	{{1,1,1,2207}, 214},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2208}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,2210,0,0}, 0},	{{1,2210,2218,0}, 0},	{{1,1,1,1}, 199},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2214}, 0},	{{1,1,1,1}, 0},	{{1,2216,2217,2216}, 0},
{{1,0,2217,0}, 218},	{{-2173,-2173,-2173,-2173}, 219},	{{1,1,1,1}, 0},
{{-841,2215,2052,-841}, 0},	{{1,-74,2219,-74}, 0},	{{-843,-843,2219,-843}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2050}, 0},
{{1,1,1,1}, 0},	{{1,2050,19,0}, 0},	{{-2184,0,-2184,0}, 212},
{{1,1,1,1}, 0},	{{1,2215,16,0}, 0},	{{1,0,-2187,0}, 0},
{{1,1,1,1}, 0},	{{1,14,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2203,0,0}, 0},	{{-2202,0,-2202,0}, 205},
{{0,0,0,0}, 210},	{{-593,2201,21,0}, 191},	{{1,2201,2031,0}, 0},
{{-793,-793,2201,-793}, 0},	{{1,2201,1,2205}, 0},	{{-794,2208,-794,-794}, 0},
{{1,2211,2216,2119}, 0},	{{0,2216,0,0}, 0},	{{-797,-797,2219,-797}, 0},
{{1,1,2219,1}, 0},	{{1,1,1,1}, 0},	{{1,-295,-295,-295}, 0},
{{1,-295,-295,-295}, 0},	{{0,0,0,2216}, 0},	{{1,1,2216,1}, 230},
{{1,1,1,1}, 0},	{{1,1874,1874,1874}, 0},	{{-803,2214,2215,0}, 0},
{{-2214,-2214,2215,-7}, 0},	{{0,0,0,2215}, 0},	{{1,1,1,1}, 196},
{{0,2214,0,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 197},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2198,2198,2200}, 0},
{{1,1536,2200,2202}, 0},	{{1,-820,0,0}, 0},	{{-2228,222,0,0}, 0},
{{1,0,1744,2201}, 0},	{{1,0,0,0}, 0},	{{-523,0,0,0}, 0},
{{-2,0,0,2198}, 0},	{{1,1,1741,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1741,1741,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2190}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 193},	{{1,-859,0,0}, 0},	{{1,0,0,0}, 0},
{{-859,-859,-859,-859}, 194},	{{1,1,1,1}, 0},	{{1,2170,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2166}, 0},	{{-71,-71,-71,-71}, 0},
{{1,1,1,1}, 199},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-305,-305,-305,-305}, 0},
{{-306,-306,-306,2166}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2162}, 0},	{{1,2162,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-364,1,-364}, 0},	{{1,0,-1958,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 187},
{{1,2140,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-401,-401,-401,24}, 0},	{{-359,2140,2144,-359}, 0},
{{1,1742,1742,2150}, 0},	{{1,1742,1742,2150}, 0},	{{1,1742,1742,2151}, 0},
{{1,2151,2151,2152}, 0},	{{1,1244,2163,1244}, 0},	{{1,1,2163,2163}, 0},
{{1,1244,1244,1244}, 0},	{{1,-2523,-347,-347}, 0},	{{1,1108,1108,1108}, 0},
{{1,1,2163,2163}, 0},	{{1,1,2163,-2464}, 0},	{{1,1,1,2166}, 0},
{{1,-2523,-2523,-2464}, 0},	{{1,-2523,-2523,-347}, 0},	{{-2523,-2523,-2523,-2523}, 184},
{{1,2165,149,7}, 0},	{{1,0,-2012,0}, 0},	{{1,1,-2476,-2476}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-359,0,0,14}, 0},
{{-260,0,-2017,0}, 0},	{{1,0,-2018,0}, 0},	{{1,0,0,0}, 0},
{{1,0,2157,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2157}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2155}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1920,1,1920}, 0},	{{-444,-444,-444,2159}, 0},
{{-320,-320,2161,-320}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2507,-449,-449,2161}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2346}, 0},	{{1,1,1,1}, 0},	{{-2511,-453,-453,2160}, 0},
{{-825,0,-2047,0}, 0},	{{1,1,1,1}, 0},	{{-749,2162,-749,-749}, 0},
{{1,-457,-457,2162}, 0},	{{1,0,-2051,0}, 0},	{{1,0,0,0}, 0},
{{-748,-731,-691,-691}, 0},	{{-735,-461,-461,2170}, 0},	{{1,-462,-462,2172}, 0},
{{-172,0,-2056,0}, 0},	{{1,0,-2057,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{-2245,-2245,0,0}, 0},	{{1,0,-2070,0}, 0},
{{1,2127,2127,0}, 0},	{{1,2158,0,0}, 0},	{{1,2143,1,2143}, 0},
{{1,1,1,2143}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2157}, 0},	{{1,7,0,0}, 0},
{{1,-2258,0,0}, 0},	{{1,-2258,-2258,-2258}, 0},	{{1,0,0,0}, 0},
{{1,-2258,-2258,-2258}, 0},	{{1,1,0,0}, 0},	{{-1990,-1990,-1990,-1990}, 0},
{{-2264,-2264,1751,0}, 0},	{{1,1,1,1}, 0},	{{-774,2148,-774,-774}, 0},
{{-773,-499,-499,-45}, 0},	{{-37,-500,-500,-46}, 0},	{{1,1,1,1}, 0},
{{-738,2145,-738,-738}, 0},	{{-737,4,4,4}, 0},	{{1,0,4,0}, 0},
{{-39,5,0,0}, 0},	{{-1004,82,2,0}, 0},	{{-1005,0,1,0}, 0},
{{1,0,1,0}, 168},	{{0,0,0,2139}, 0},	{{0,0,0,2140}, 0},
{{1,1,1,1}, 0},	{{1,2140,2141,2142}, 0},	{{-2680,-513,-512,4}, 0},
{{-2238,-734,-734,3}, 0},	{{-2235,-735,-735,2}, 0},	{{-2200,51,51,2094}, 0},
{{1,0,-2110,0}, 0},	{{1,1801,1801,1801}, 0},	{{1,79,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1801}, 0},	{{1,-2121,-2121,-2121}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2127}, 0},
{{-2697,2127,-555,-542}, 0},	{{1,-2255,-2251,-2215}, 0},	{{-2773,-751,-2148,2136}, 0},
{{1,1,1,-548}, 0},	{{1,1,1,-548}, 0},	{{1,1,1,110}, 0},
{{1,110,1,31}, 0},	{{1,1640,-458,0}, 0},	{{1,-458,-458,0}, 0},
{{1,-797,0,0}, 0},	{{1,1,0,0}, 0},	{{1,-797,0,0}, 0},
{{1,1,-458,-458}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-797}, 0},
{{1,1,-797,-797}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-797}, 0},	{{-797,-797,-797,-797}, 153},
{{1,1,1,-2223}, 0},	{{1,-2223,1,15}, 0},	{{1,16,-2223,0}, 0},
{{1,-2223,-2223,0}, 0},	{{1,-813,0,0}, 0},	{{1,1,-2223,-2223}, 0},
{{1,-813,0,0}, 0},	{{1,1,-2223,-2223}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-813}, 0},	{{1,1,-813,-813}, 0},	{{1,1,1,-813}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-813}, 0},	{{1,1,1,1}, 0},
{{-2259,-2259,-2259,-2259}, 0},	{{-474,-556,0,0}, 0},	{{-390,0,-2160,0}, 0},
{{-2238,-2238,2104,0}, 0},	{{1,1,1,-96}, 0},	{{1,-379,-379,0}, 0},
{{1,1,-379,-379}, 0},	{{1,1,1,-96}, 0},	{{1,1,-495,0}, 0},
{{1,1,-495,0}, 0},	{{1,-2342,-2342,-2342}, 0},	{{1,-495,0,0}, 0},
{{1,-2342,-2342,-2342}, 0},	{{1,1,-495,-495}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2342}, 0},	{{1,1,-2342,-2342}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2342}, 0},
{{-2342,-2342,0,0}, 153},	{{-2219,-2219,-2678,-2678}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2076}, 0},
{{0,0,2082,0}, 0},	{{0,0,0,2089}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2537,-2537,-2537}, 0},
{{1,1,1,1}, 0},	{{1,1551,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 164},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-13,-13,-13}, 0},	{{1,-2391,-2551,-2551}, 0},	{{1,1,1,1}, 0},
{{1,7,-13,-13}, 0},	{{1,-2391,0,0}, 0},	{{1,1,-2391,-2391}, 0},
{{1,-13,-13,0}, 0},	{{1,1,1,1}, 0},	{{1,1,-13,0}, 0},
{{-2391,-2391,-2391,-2391}, 164},	{{-5,-2397,1618,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2053}, 0},
{{1,-627,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,-822,-822}, 0},	{{0,0,0,2049}, 0},	{{1,1,1519,1519}, 0},
{{-2406,-2406,-2406,2049}, 0},	{{1,1,1,-78}, 0},	{{-567,1531,-567,0}, 0},
{{1,14,-568,0}, 0},	{{1,-72,-568,0}, 0},	{{1,-2415,-2415,-2415}, 0},
{{1,-568,0,0}, 0},	{{1,-2415,-2415,-2415}, 0},	{{1,1,-568,-568}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2147}, 0},	{{1,1,-2147,-2147}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2147}, 0},	{{-2147,-2147,-785,-785}, 153},	{{-85,-85,2033,0}, 0},
{{1,-93,-2332,0}, 0},	{{1,-2332,-2332,0}, 0},	{{1,0,0,0}, 0},
{{1,-2332,-2332,-2332}, 0},	{{1,0,0,0}, 0},	{{1,1,-2332,-2332}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-800}, 0},	{{1,1,-800,-800}, 0},
{{1,1,1,-800}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-800}, 0},
{{1,1,1,1}, 0},	{{-823,-823,-823,-823}, 0},	{{-2186,-2186,-824,-824}, 0},
{{1,-2443,-2443,-2443}, 0},	{{1,-582,-582,-582}, 0},	{{1,-2443,-2443,-2443}, 0},
{{1,1,-582,-582}, 0},	{{-2443,-2443,-2443,2014}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1497,1497}, 0},
{{1,1,1,1}, 0},	{{-2175,-2175,-2175,2014}, 0},	{{-2792,0,0,0}, 159},
{{0,0,5,0}, 0},	{{1,0,0,0}, 0},	{{1,0,-2,0}, 0},
{{0,2010,2011,0}, 0},	{{-2162,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{0,0,0,2004}, 0},
{{1,5,6,0}, 0},	{{-2153,-2153,2014,9}, 0},	{{1,3,3,0}, 0},
{{-2155,-2155,2012,-2155}, 0},	{{1,1,1,0}, 0},	{{-2157,-2157,-2157,-2157}, 0},
{{1,-2158,-2158,-2158}, 0},	{{1,51,0,0}, 0},	{{0,0,2008,0}, 0},
{{-3227,2011,-3227,0}, 0},	{{1,48,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2004}, 0},
{{-2134,0,0,0}, 0},	{{1,2003,2004,0}, 0},	{{1,-2172,-2172,-10}, 0},
{{1,37,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1997}, 0},	{{1,1999,1999,-2181}, 0},
{{1,28,0,0}, 0},	{{0,0,1999,0}, 0},	{{1,7,1999,0}, 0},
{{1,0,0,0}, 0},	{{1,1999,1,1}, 0},	{{1,1999,1,0}, 0},
{{1,1,1,1}, 0},	{{1,-2192,-2192,0}, 0},	{{-21,0,12,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 118},	{{-2198,1997,-2198,0}, 0},
{{1,1,1,1}, 0},	{{1,-2198,-2198,0}, 0},	{{1,0,6,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,1992,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,1994,0}, 0},	{{-2207,-2207,25,1994}, 0},	{{-2226,2001,0,0}, 0},
{{-2181,1,-46,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 118},
{{-2205,-2212,-2212,-2212}, 0},	{{1,1,2005,2006}, 0},	{{0,2007,2010,0}, 0},
{{0,1994,9,0}, 0},	{{1,-6,8,0}, 0},	{{1,0,0,0}, 0},
{{1,2007,2007,2007}, 0},	{{1,1,2007,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2005}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2003,2004,0}, 0},
{{-2227,-2227,-2227,13}, 0},	{{1,-18,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{-11,-11,-11,-11}, 0},	{{-2250,-22,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1994}, 0},
{{0,2005,0,0}, 0},	{{1,-30,0,0}, 0},	{{-11,2004,0,0}, 0},
{{1,0,2004,0}, 0},	{{1,1,1,1}, 118},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,2004,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2002,0,0}, 0},
{{1,4,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2001,0,0}, 0},
{{0,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1998}, 0},	{{1,1,2000,1}, 0},
{{0,0,0,2000}, 0},	{{-50,0,33,0}, 0},	{{1,0,32,0}, 0},
{{1,1,1,1}, 118},	{{1,1,1948,0}, 0},	{{1,1948,1,1948}, 0},
{{1,0,1948,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-3327,1,0}, 0},	{{1,0,-2233,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1993}, 0},	{{1,-2242,-2242,-2242}, 0},
{{1,-3263,-3263,-3263}, 0},	{{1,-2242,-2242,-2242}, 0},	{{1,-2242,-2242,-2242}, 0},
{{1,1,1,-3263}, 0},	{{1,1,1,1}, 0},	{{1,-3263,1,-3263}, 0},
{{1,-3263,-3263,-3263}, 0},	{{1,-3263,-3263,-3263}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2242,-2242,1987,-2242}, 0},
{{0,0,0,1990}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 119},
{{-2238,0,-1970,0}, 0},	{{-2019,-2019,250,-2019}, 0},	{{1,-2020,252,-2020}, 0},
{{1,275,12,0}, 0},	{{1,1,1,1}, 41},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2018,-2018,-2018,-2018}, 0},	{{0,0,256,0}, 0},	{{-3281,-3281,-3281,0}, 46},
{{1,0,-2020,0}, 0},	{{1,0,-2020,0}, 0},	{{0,0,25,0}, 42},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1848,-1848,0,0}, 0},	{{-2248,-2248,-2248,-2248}, 12},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1920}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1912}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 69},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{-1801,0,0,0}, 0},
{{-2227,-2203,11,1906}, 0},	{{-2219,27,29,1908}, 0},	{{1,0,-2026,0}, 0},
{{1,0,66,0}, 0},	{{-2194,-2194,-2194,67}, 0},	{{-2188,-2188,-2188,-2188}, 0},
{{1,-3417,-3417,0}, 0},	{{1,0,-3417,0}, 0},	{{0,0,91,0}, 71},
{{1,-2212,2,1903}, 0},	{{-2236,0,1905,0}, 0},	{{-2211,0,-2035,0}, 0},
{{1,0,-2036,0}, 0},	{{1,0,56,0}, 0},	{{1,1904,1,1905}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,1902}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3436,-3436,-3436,1898}, 0},	{{1,-3436,-3436,0}, 0},	{{1,0,-3436,0}, 0},
{{0,0,1907,0}, 71},	{{1,-2100,169,-2100}, 0},	{{-2100,195,38,0}, 0},
{{1,-2102,170,-2102}, 0},	{{1,193,37,0}, 0},	{{1,1,1,1}, 41},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2247,-2247,-2247,-2247}, 0},	{{1,1905,1907,0}, 0},
{{1,0,1908,0}, 0},	{{1,1,0,0}, 102},	{{0,0,1907,0}, 0},
{{0,0,0,17}, 46},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2257,-2257,-2257,1904}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1902,1902,1902}, 0},	{{1,-3464,-2262,0}, 0},
{{1,12,1,12}, 0},	{{0,0,0,42}, 100},	{{1,-3467,-2265,0}, 0},
{{1,0,-2265,0}, 0},	{{0,0,1876,0}, 100},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1891}, 0},	{{0,0,0,1892}, 88},	{{-2266,-2266,-2266,1892}, 88},
{{0,0,283,1890}, 88},	{{-2259,-2259,1896,-2259}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1895}, 0},	{{0,0,0,1895}, 0},	{{-2255,-2255,-2255,-2255}, 89},
{{1,1,1,1}, 0},	{{1,-2260,-2260,-2260}, 0},	{{1,1892,1892,1892}, 0},
{{-3493,-3493,-3493,1892}, 0},	{{1,-3493,-3493,0}, 0},	{{1,0,-3493,0}, 0},
{{1,0,15,0}, 71},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1892}, 0},	{{1,-3505,-3505,0}, 0},	{{1,-29,1,-29}, 0},
{{0,0,0,1890}, 71},	{{1,1,1,1}, 0},	{{0,0,0,1890}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1882}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1878}, 0},	{{1,-2185,84,-2185}, 0},
{{1,84,8,-2272}, 0},	{{0,-2145,0,0}, 41},	{{1,0,96,0}, 0},
{{1,96,97,0}, 0},	{{1,1,1873,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2195,-2195,-2195,-2195}, 0},	{{1,1872,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2144,-2144,-2144,-2144}, 0},	{{-2278,0,-2151,0}, 0},	{{1,-2200,72,-2200}, 0},
{{1,1866,1867,-2279}, 0},	{{-179,73,74,1867}, 41},	{{-2190,98,99,1874}, 44},
{{1,0,0,0}, 0},	{{-2283,-2283,-2283,-2283}, 0},	{{1,187,188,7}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2021,-2021,1873,0}, 0},
{{1,1876,1876,0}, 0},	{{1,1,1,1}, 60},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1870}, 0},	{{0,0,1871,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{-2293,-2293,-2293,-2293}, 0},	{{1,1,1,1}, 0},
{{1,1867,1867,1867}, 0},	{{1,0,0,0}, 0},	{{-3423,1867,0,0}, 0},
{{-2279,0,-2183,0}, 0},	{{-2267,1866,19,28}, 0},	{{1,-2233,36,-2233}, 0},
{{-2233,1865,7,0}, 0},	{{1,-2235,37,-2235}, 0},	{{1,1864,6,-2283}, 0},
{{-214,-214,39,-214}, 41},	{{-2225,-2225,64,0}, 44},	{{1,0,0,0}, 0},
{{-2287,-2287,-2287,-2287}, 0},	{{-46,-46,-46,-46}, 0},	{{-35,-208,152,0}, 0},
{{-2124,0,0,0}, 0},	{{1,1,1857,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2058,0,0}, 0},	{{-3488,-2058,17,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2285,-2285,1851}, 0},	{{1,-2065,0,0}, 0},	{{1,199,1853,0}, 0},
{{1,0,1853,0}, 0},	{{-2083,-2083,-2083,-2083}, 35},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,1846,0}, 0},
{{0,0,-2074,0}, 39},	{{-2074,-2074,-2074,-2074}, 37},	{{-2268,28,-2157,0}, 0},
{{1,1843,1,0}, 44},	{{0,0,0,0}, 45},	{{-250,25,-2160,0}, 0},
{{1,1840,1841,0}, 44},	{{-3572,-3572,0,0}, 45},	{{-251,-251,1840,-251}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,-2271,0}, 0},
{{1,-2189,1,-2189}, 0},	{{-2189,0,0,0}, 42},	{{0,1836,-2172,0}, 0},
{{-14,-14,-14,0}, 43},	{{-95,-95,1835,0}, 0},	{{1,1777,1777,1777}, 0},
{{1,1,1777,1777}, 0},	{{1,1,1837,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1837}, 0},	{{0,0,1837,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1837}, 0},	{{0,0,0,1837}, 0},	{{0,0,0,0}, 46},
{{0,0,0,0}, 49},	{{1,0,-2288,0}, 0},	{{1,0,-2288,0}, 0},
{{-2179,-2179,-2179,0}, 42},	{{-3552,-3552,129,-3552}, 45},	{{-2154,-2154,-2154,-2154}, 45},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1827,1827,1828}, 0},	{{-3618,0,1828,0}, 0},	{{1,0,-2298,0}, 0},
{{1,11,1827,11}, 0},	{{-2093,0,-2052,0}, 42},	{{-2156,0,188,0}, 42},
{{-2268,-2268,1825,-2268}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,173,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-2103,0,0,0}, 0},
{{-2270,-125,1818,-125}, 0},	{{1,1,1,1}, 0},	{{1,0,26,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 23},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 25},	{{1,1,1,0}, 0},	{{0,0,0,0}, 24},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 20},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1764,0}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1756}, 0},
{{-358,-358,1756,-358}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2208,0,0}, 0},	{{1,1,1,-2307}, 0},	{{-2307,0,5,0}, 0},
{{1,-3694,1,-3694}, 0},	{{1,1684,0,0}, 0},	{{1,1,1,1}, 0},
{{-3694,0,0,1749}, 0},	{{0,0,0,0}, 12},	{{0,0,0,0}, 28},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1743}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1740}, 0},
{{0,0,0,1740}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-116,-116,-116}, 0},	{{-3787,0,56,0}, 0},
{{-2280,0,1735,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-375}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{-2208,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3691,-2261,38,0}, 0},
{{1,-2262,0,0}, 0},	{{1,1725,1,-134}, 0},	{{-2238,0,-2262,0}, 0},
{{-2301,0,1724,0}, 0},	{{-2302,0,1724,0}, 0},	{{1,1,1,1}, 12},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1716}, 0},	{{1,-2264,-2264,-2264}, 0},
{{-2230,-2230,-2230,-3643}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1699}, 0},	{{0,0,0,1700}, 0},	{{-3679,0,2,0}, 0},
{{-3677,0,1,0}, 0},	{{0,0,0,0}, 5},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3717,-3717,-3717,1693}, 0},	{{-2280,0,-2240,0}, 0},
{{0,0,0,1692}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-40,-40,-40,-2305}, 0},	{{-2269,-2224,0,0}, 1},	{{0,0,0,0}, 6},
{{-2307,-2307,-2307,1681}, 0},	{{-2241,-2227,0,0}, 1},	{{0,0,0,1680}, 0},
{{1,9,9,0}, 0},	{{1,1679,1681,1683}, 0},	{{1,0,1690,0}, 0},
{{-2226,0,21,0}, 0},	{{1,1689,1694,0}, 0},	{{-3,1675,1694,1695}, 0},
{{1,1702,1702,0}, 0},	{{1,1,1,1677}, 0},	{{0,0,1684,0}, 0},
{{-7,1671,1690,1700}, 0},	{{1,-2080,12,0}, 0},	{{-2234,-1047,-2234,0}, 0},
{{1,-2082,10,0}, 0},	{{0,-1049,1698,0}, 0},	{{1,1698,1700,-1735}, 0},
{{1,1701,1702,0}, 0},	{{1,1,1,-1934}, 393},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1671,1671,1671}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1697}, 0},	{{1,-1058,0,0}, 0},	{{0,0,0,0}, 392},
{{1,0,1,2}, 0},	{{0,0,1694,0}, 0},	{{0,0,1697,0}, 0},
{{1,1700,0,0}, 0},	{{1,8,8,1701}, 0},	{{1,0,1706,0}, 0},
{{0,0,21,0}, 0},	{{1,6,0,0}, 0},	{{1,1704,4,1705}, 0},
{{-3,0,1710,0}, 0},	{{1,1710,0,0}, 0},	{{1,1,1,1710}, 0},
{{0,0,1710,0}, 0},	{{1,0,0,1710}, 0},	{{0,0,1717,0}, 0},
{{-2109,-2109,1721,0}, 0},	{{1,1721,1723,-1761}, 0},	{{1,1675,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1960}, 0},	{{1,1,1,1}, 0},
{{-1960,0,1720,0}, 0},	{{1,-1082,0,0}, 0},	{{1,1,1,-2202}, 0},
{{1,1,1,-2202}, 0},	{{1,1,1,1}, 0},	{{-2202,-2202,1716,-2202}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,1713,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,660}, 0},
{{1,4,1,1711}, 0},	{{-2269,0,34,0}, 0},	{{-1,2,-1,1710}, 0},
{{1,1,1,1708}, 0},	{{1,0,31,0}, 0},	{{-2272,-2272,-2272,-2272}, 0},
{{-1,0,2,0}, 0},	{{-2,1710,1712,0}, 0},	{{-2221,0,0,0}, 377},
{{1,0,-41,0}, 0},	{{-2275,-2183,87,0}, 0},	{{0,0,0,0}, 371},
{{1,-8,1,1708}, 0},	{{1,0,22,0}, 0},	{{1,-2281,-5,-2281}, 0},
{{-2281,1710,0,0}, 0},	{{1,1730,1732,644}, 0},	{{1,1738,-2284,-2284}, 0},
{{1,276,1738,276}, 0},	{{1,1738,1738,276}, 0},	{{1,1,1,1741}, 0},
{{1,-2284,-2284,-2284}, 0},	{{1,-2284,-2284,-2284}, 0},	{{-2284,-2284,-2284,1741}, 0},
{{1,1,1,1741}, 0},	{{0,0,10,0}, 0},	{{0,1691,1693,0}, 0},
{{-2267,2,4,0}, 0},	{{-2268,1,1738,0}, 0},	{{1,1,1,1}, 0},
{{-2257,0,0,0}, 0},	{{1,1,0,0}, 377},	{{0,1735,0,0}, 0},
{{-2226,0,-65,0}, 0},	{{-2274,-5,1736,0}, 0},	{{0,0,0,0}, 377},
{{-3772,0,-2228,0}, 0},	{{1,1734,-2265,-7}, 0},	{{1,-2013,1735,-2013}, 0},
{{1,-2013,-2013,-2013}, 0},	{{1,-2013,-2013,-2013}, 0},	{{1,-2265,-2265,-2265}, 0},
{{1,-2265,-2265,-2265}, 0},	{{-2265,-2265,-2265,1734}, 0},	{{1,1615,0,0}, 385},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2257,-2257,-2257}, 0},	{{1,0,0,0}, 0},	{{-2257,-2257,-2257,1728}, 0},
{{1,-1231,1728,1729}, 0},	{{-2285,1729,11,-2026}, 0},	{{1,-2027,1732,-2027}, 0},
{{1,1,1,1}, 0},	{{1,-2244,-2244,0}, 0},	{{1,0,0,0}, 0},
{{-2244,-2244,-2244,1730}, 0},	{{1,-2032,-2032,-2032}, 0},	{{1,-2032,-2032,-2032}, 0},
{{1,0,0,0}, 0},	{{1,-2238,0,0}, 0},	{{-2238,-2238,-2238,1726}, 0},
{{1,1,1,-2036}, 0},	{{1,-2235,-2235,-2235}, 0},	{{1,-2235,-2235,-2235}, 0},
{{-2235,-2235,-2235,1723}, 0},	{{1,-2330,-2330,-2330}, 0},	{{1,-2330,-2330,-2330}, 0},
{{-2330,-2330,-2330,1721}, 0},	{{1,-2233,-2233,-2233}, 0},	{{1,-2233,-2233,-2233}, 0},
{{-2233,-2233,-2233,1719}, 0},	{{-3803,-3803,-3803,1719}, 0},	{{1,-1238,4,-1238}, 0},
{{-2301,975,0,0}, 0},	{{-2303,1717,-2268,0}, 0},	{{0,0,0,0}, 378},
{{-2269,972,0,0}, 0},	{{1,971,0,0}, 0},	{{-2259,1714,0,0}, 0},
{{1,-2253,-2253,0}, 0},	{{1,-2253,-2253,-2253}, 0},	{{1,-2253,-2253,-2253}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,137,137,137}, 0},	{{1,-2253,-2253,-2253}, 0},	{{1,1,1,1706}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 184},
{{-2287,0,1566,0}, 0},	{{1,1,1,1566}, 0},	{{1,1,1,-2269}, 0},
{{1,1,1,1}, 0},	{{-2269,-2269,-2269,1696}, 0},	{{0,0,0,0}, 372},
{{1,1,0,0}, 0},	{{0,0,0,1698}, 0},	{{0,0,0,1698}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,58,0}, 0},
{{1,1,1,1695}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 436},	{{-2262,-2262,-2262,0}, 0},	{{1,-1221,0,0}, 0},
{{1,1,1,1}, 0},	{{1,20,20,0}, 0},	{{-2220,1678,-2220,-2220}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1665}, 0},	{{-2273,-2273,-2273,0}, 0},
{{1,-1240,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{-2239,-2239,-2239,-2239}, 0},	{{1,4,8,1666}, 0},	{{-2275,0,0,0}, 0},
{{-1,5,6,9}, 0},	{{1,1,5,8}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2255,0,0,0}, 0},	{{-2,1663,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-2259,0,1661,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,39,0,0}, 0},
{{-17,0,0,0}, 0},	{{0,0,1657,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-3881}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1657}, 0},
{{1,-16,-2275,1661}, 0},	{{-2288,0,0,0}, 0},	{{-1,-15,-2277,-11}, 0},
{{1,-19,-2278,-12}, 0},	{{1,0,0,0}, 0},	{{-2291,-2291,-2291,-2291}, 0},
{{-2291,1656,0,0}, 0},	{{1,0,75,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1652}, 0},
{{1,0,8,0}, 0},	{{-2283,-2283,-2283,-27}, 0},	{{1,1650,6,0}, 0},
{{1,1,1,-22}, 0},	{{1,1653,1,1654}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1654,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,-2278}, 0},	{{1,0,1,0}, 0},	{{0,0,0,1651}, 0},
{{-11,1626,-4,0}, 0},	{{1,0,-5,0}, 0},	{{-2291,-2291,-2291,-33}, 0},
{{0,1648,0,0}, 0},	{{-7,5,-7,0}, 0},	{{1,-1364,-1364,16}, 0},
{{-2321,16,-2321,0}, 0},	{{-1366,1646,-1366,14}, 0},	{{0,0,1646,0}, 0},
{{1,-1368,-1368,12}, 0},	{{-11,845,-11,0}, 0},	{{1,-56,-56,0}, 0},
{{1,-2296,1,-2296}, 0},	{{0,0,1645,0}, 0},	{{1,0,6,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,1640,0,0}, 0},	{{0,0,1643,0}, 0},
{{-2301,834,0,0}, 0},	{{1,-2299,-2299,-2299}, 0},	{{1,-2299,-2299,-2299}, 0},
{{1,-2299,-2299,-2299}, 0},	{{1,1,1,1}, 0},	{{1,1,1638,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{-135,-135,-135,-135}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1639}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1637,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 415},
{{0,1,7,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1620}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1617}, 0},	{{1,55,1623,57}, 314},
{{1,-1658,57,0}, 0},	{{-2299,51,-2194,-2299}, 0},	{{1,70,71,74}, 0},
{{1,-1581,76,0}, 0},	{{-2307,48,-2197,-2302}, 0},	{{1,427,1618,0}, 203},
{{1,1,24,24}, 0},	{{1,1,1617,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1612,0}, 0},	{{1,1612,1613,0}, 0},
{{1,1622,99,-2313}, 0},	{{-2260,-2260,1622,-2260}, 209},	{{1,1622,1606,0}, 0},
{{1,1623,0,0}, 0},	{{1,1,1,1628}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1629,0}, 0},	{{-2250,430,0,0}, 191},
{{-2233,34,120,0}, 303},	{{1,1,1628,1}, 0},	{{-2224,-2224,-2224,-2224}, 0},
{{-3989,-3989,1627,-3989}, 0},	{{1,404,1595,0}, 203},	{{1,1,1,1}, 0},
{{-22,-22,-22,-22}, 0},	{{1,1595,1628,0}, 0},	{{-2277,1628,82,-2330}, 0},
{{1,1628,1630,369}, 0},	{{1,1630,0,0}, 0},	{{1,1,1,1635}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1634}, 0},	{{-15,-15,-15,1634}, 0},
{{1,12,1634,14}, 314},	{{1,-1701,14,0}, 0},	{{-2342,8,9,-2342}, 0},
{{1,27,1632,31}, 0},	{{-2,-1624,33,0}, 0},	{{1,1579,1612,0}, 0},
{{-2293,1612,-2346,-2346}, 0},	{{1,1590,1574,0}, 0},	{{1,1591,0,0}, 0},
{{0,0,0,1627}, 0},	{{-26,-26,-26,-26}, 0},	{{-2350,-2350,-2350,111}, 0},
{{-25,-1712,41,0}, 203},	{{-23,506,1626,0}, 0},	{{0,-1714,39,0}, 0},
{{1,1,1,0}, 303},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 305},	{{1,1,1,1}, 0},	{{1,1,1,-2377}, 0},
{{1,1,-2377,-2377}, 0},	{{-2377,-2377,-2377,1612}, 0},	{{0,0,0,0}, 205},
{{-43,360,23,0}, 203},	{{1,1610,1611,0}, 0},	{{1,-2372,40,-2372}, 0},
{{-2372,-2372,-2372,-2372}, 209},	{{1,1615,19,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 324},	{{1,-21,1613,0}, 303},	{{1,1,1,1617}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1618}, 0},	{{1,1,1,1619}, 0},	{{1,-21,-21,0}, 0},
{{1,-21,-21,0}, 0},	{{0,0,0,0}, 317},	{{1,1,1,1}, 0},
{{1,1,1,-2399}, 0},	{{1,1,1,1}, 0},	{{-2399,-2399,-2399,1615}, 0},
{{-64,-1632,2,0}, 203},	{{0,-1633,1,0}, 0},	{{0,0,0,0}, 303},
{{-2237,-1519,0,0}, 191},	{{-2238,-1448,1613,0}, 303},	{{1,1,1,1}, 0},
{{-90,1616,-90,-90}, 0},	{{-2386,-2386,0,0}, 309},	{{1,607,1619,0}, 191},
{{-1590,-1590,-1590,-1590}, 214},	{{1,-1454,1607,0}, 303},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 218},	{{1,1,1,1}, 0},	{{-2356,1608,-2356,-2356}, 0},
{{-2306,-2411,-2306,-2411}, 0},	{{-2352,-2352,0,0}, 205},	{{1,1612,0,0}, 191},
{{-2350,-2350,-2350,-2350}, 312},	{{-2153,1283,1592,0}, 303},	{{1,1,1,-1557}, 0},
{{1,1609,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1523,1523,1523}, 0},
{{1,1523,1523,1523}, 0},	{{0,0,0,1609}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1523,1523,1523}, 0},	{{-2357,0,661,0}, 0},
{{0,0,0,1605}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1602,1604,1605}, 0},	{{1,1,665,667}, 0},
{{1,-2355,0,0}, 0},	{{-2355,-1313,0,0}, 0},	{{0,0,209,1602}, 0},
{{0,0,208,665}, 0},	{{0,0,0,664}, 0},	{{1,1,1,1}, 0},
{{-1497,-1497,-1497,-1497}, 0},	{{1,1,1,1}, 0},	{{-83,1599,-83,-83}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1601,1}, 0},	{{-85,-85,-85,6}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2357,-4,-4,-4}, 0},	{{-90,-90,-90,1601}, 0},	{{0,0,1603,0}, 0},
{{-2354,1,1604,-2354}, 0},	{{1,-2354,-2354,-2354}, 0},	{{1,-2354,-2354,-2354}, 0},
{{1,-2354,-2354,-2354}, 0},	{{1,1,1,1}, 0},	{{-197,1604,1606,-197}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 300},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2475}, 0},	{{1,0,-98,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,1597}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2482}, 0},
{{1,1,1,1}, 0},	{{-2482,-2482,-2482,1595}, 0},	{{-2362,-2362,-2362,1599}, 0},
{{-4135,-4135,-4135,1600}, 0},	{{1,0,-2357,0}, 0},	{{1,0,0,0}, 0},
{{0,1600,0,0}, 0},	{{1,0,-2360,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1597}, 0},	{{-2361,39,40,1597}, 0},	{{0,238,0,0}, 203},
{{1,239,1598,0}, 0},	{{-2328,0,111,0}, 0},	{{1,235,0,0}, 0},
{{1,1596,0,0}, 0},	{{1,1596,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,29,29}, 0},	{{1,0,0,0}, 365},
{{0,0,0,1596}, 0},	{{-2314,0,152,0}, 0},	{{1,1,1,1}, 340},
{{-2309,-2309,-2309,-2309}, 0},	{{1,24,25,1593}, 0},	{{-2376,-1867,1593,0}, 0},
{{1,224,1583,0}, 0},	{{1,0,96,0}, 0},	{{1,1,1,1}, 209},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2343,-2343,-2343,1592}, 0},	{{1,310,1592,185}, 0},	{{1,1598,0,0}, 0},
{{1,1598,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,9,9,9}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1598}, 0},
{{1,207,0,0}, 0},	{{1,1568,0,0}, 0},	{{1,1596,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-27,0,0,0}, 0},	{{0,-1890,0,0}, 203},	{{1,328,1594,0}, 0},
{{1,1595,73,0}, 0},	{{0,0,0,0}, 209},	{{1,-1894,1600,0}, 0},
{{1,1557,0,0}, 0},	{{1,1599,1,1}, 354},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{-1900,0,0,0}, 0},	{{1,0,115,0}, 0},
{{-1898,-1898,-1898,-1898}, 0},	{{1,121,1,30}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1594,-2347}, 0},
{{0,0,-2321,1594}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2341,-2341,-2341,1}, 0},	{{-2327,-2327,126,110}, 0},
{{1,396,1591,0}, 0},	{{1,0,51,0}, 0},	{{1,1591,1,1}, 209},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1547}, 0},	{{1,1,1,1}, 0},	{{-3910,0,-3910,0}, 0},
{{1,168,0,0}, 0},	{{1,1529,1587,0}, 0},	{{0,1592,0,1596}, 0},
{{1,0,90,0}, 0},	{{1,1,1,-1617}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1841,1591,-1841,-1617}, 0},
{{1,1,1,1}, 340},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2376,-2376,-2376,-2376}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2369,1583,-2369,1584}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2365,1581,-2365,2}, 0},	{{-4232,-2373,-2358,1581}, 0},	{{-2374,-2374,-2359,1583}, 0},
{{0,-1827,0,0}, 203},	{{0,-1828,0,0}, 0},	{{1,0,0,0}, 0},
{{-2361,-2361,-2361,-2361}, 0},	{{1,46,48,0}, 191},	{{1,1,1,1}, 0},
{{-2433,1579,-2433,-2433}, 0},	{{1,1582,1584,0}, 191},	{{1,1,1,1585}, 214},
{{-1784,1585,-1784,-1784}, 0},	{{1,-1649,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1583}, 0},	{{1,1,1,1}, 0},	{{1,11,1584,0}, 0},
{{-1778,0,-3952,0}, 218},	{{1,1583,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1583,0}, 0},	{{1,1,1,1597}, 0},
{{0,1600,0,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 345},	{{1,1598,20,0}, 191},
{{1,1,1,1}, 0},	{{-2554,1598,-2554,-2554}, 0},	{{1,1078,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2557}, 0},	{{1,1,1,1}, 0},
{{1,0,1597,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1597}, 0},
{{-1768,1597,-1768,-1768}, 0},	{{1,1,1601,1}, 0},	{{1,1,1,1}, 0},
{{1,1493,1493,1493}, 0},	{{1,1507,1507,1507}, 0},	{{0,0,0,1598}, 0},
{{-2456,-2456,1598,-2456}, 0},	{{0,0,0,1598}, 0},	{{1,1,1,1}, 196},
{{0,1597,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1599,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2455}, 0},	{{1,-2455,-2455,0}, 0},
{{0,0,1,0}, 344},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1739,-1739,-1739,-1739}, 0},
{{-1706,-1706,-1706,-1706}, 0},	{{1,-2459,-2459,-2459}, 0},	{{1,-2459,-2459,-2459}, 0},
{{1,-2459,-2459,3}, 0},	{{1,1,1583,1}, 0},	{{-398,-398,-398,-398}, 0},
{{1,1,17,1}, 0},	{{0,18,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1587,-2467}, 0},
{{0,0,-2441,1587}, 0},	{{0,0,-2442,1587}, 0},	{{0,0,-2443,-2430}, 0},
{{1,1586,0,0}, 0},	{{1,0,0,0}, 0},	{{-3663,0,1586,0}, 0},
{{-2448,-2448,5,1586}, 0},	{{-12,-12,4,1586}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1584}, 0},	{{-2451,2,0,0}, 0},
{{-2439,1583,1585,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1585}, 0},	{{-2454,-2454,-2454,-2454}, 335},	{{0,0,0,0}, 333},
{{0,0,0,0}, 331},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,1576}, 0},	{{0,0,0,0}, 203},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{-367,-367,-367,-367}, 0},	{{-2425,-2062,0,0}, 203},
{{1,156,162,0}, 0},	{{-331,-2704,30,-2704}, 0},	{{1,-2065,1570,0}, 0},
{{1,1572,187,-1948}, 0},	{{1,1,1572,1576}, 249},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1574,0}, 0},	{{-2069,0,1574,0}, 0},
{{-2060,1,206,1574}, 0},	{{-2059,1579,-2059,-2059}, 0},	{{-2428,235,1583,0}, 0},
{{1,15,0,0}, 0},	{{1,1582,1583,-1958}, 0},	{{-2422,243,248,263}, 0},
{{-4005,42,-1662,-1978}, 0},	{{-1988,1581,-1988,-1988}, 0},	{{1,-1979,-1979,-1979}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1979}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1580}, 0},	{{1,0,-1606,0}, 0},	{{0,0,1581,0}, 0},
{{-2728,-1968,0,0}, 0},	{{1,-1969,0,0}, 0},	{{-1971,-1971,-1971,-1971}, 0},
{{0,21,0,0}, 191},	{{0,0,0,0}, 207},	{{-1923,1576,1286,0}, 191},
{{-1915,1576,1578,0}, 0},	{{-2628,-2733,1579,-2733}, 0},	{{0,1579,0,1583}, 0},
{{1,336,1586,244}, 0},	{{1,1586,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1586}, 0},
{{1,1,1,1}, 230},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,341,342,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2176}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1579}, 0},	{{0,0,0,1579}, 0},
{{0,0,0,0}, 196},	{{-2561,-2561,1578,-2561}, 0},	{{-1781,1578,-1781,-1781}, 0},
{{-1745,-1745,-1745,-1745}, 0},	{{1,1,1,409}, 0},	{{1,1,1,409}, 0},
{{1,1,1,410}, 0},	{{-2449,-2367,-2367,1578}, 0},	{{-2089,-1581,-1581,-1723}, 0},
{{-1708,1587,-1708,-1708}, 0},	{{-2020,1590,-2020,-2020}, 0},	{{-4045,1591,-4045,-4045}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1589,1591,1593}, 0},
{{1,1530,1594,1595}, 0},	{{-2446,0,1595,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1596}, 0},	{{-1549,0,88,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1594}, 0},	{{1,14,-2084,0}, 0},	{{1,-2084,-2084,0}, 0},
{{1,0,0,0}, 0},	{{1,-2084,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,-2084,-2084}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2301}, 0},
{{1,1,-2301,-2301}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2301}, 0},	{{-2301,-2301,-2301,-2301}, 153},
{{-2097,-2097,517,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2309,-2309,-2309,1571}, 0},	{{1,62,68,0}, 0},	{{1,21,25,21}, 0},
{{-2044,-2044,-2044,1569}, 209},	{{1,-2160,0,0}, 0},	{{1,1568,1569,-2043}, 0},
{{1,0,1569,1572}, 249},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1568}, 0},
{{-2302,141,143,0}, 0},	{{1,-79,0,0}, 0},	{{1,-75,-1949,-2052}, 0},
{{-2096,149,154,1565}, 0},	{{1,1565,1,-2071}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2071}, 0},	{{1,1,1,1}, 0},	{{-2071,-2071,-2071,1565}, 0},
{{1,-2058,0,0}, 0},	{{1,1,1,1}, 0},	{{-2064,-2064,-2064,1549}, 0},
{{1,-2263,-2263,-2263}, 0},	{{-2051,-2541,-2263,-2263}, 0},	{{-2004,1487,213,0}, 0},
{{-1993,-2068,225,1545}, 0},	{{-2535,-2535,1559,-2535}, 0},	{{-124,1565,0,0}, 191},
{{-492,1565,-492,1569}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2258,-2258,-2258}, 0},	{{1,-2258,-2258,-2258}, 0},	{{0,0,0,1568}, 0},
{{1,1,1,1}, 230},	{{1,1,1,1}, 0},	{{1,-89,-89,-89}, 0},
{{-497,251,252,0}, 0},	{{0,0,0,1564}, 0},	{{-1865,-1865,-1865,-1865}, 0},
{{-2184,-2184,319,-2184}, 0},	{{-26,-2098,-26,-2098}, 0},	{{-2463,-1722,-1722,1}, 0},
{{1,0,-1722,0}, 0},	{{1,-1721,1,0}, 0},	{{0,0,0,1558}, 0},
{{-2289,-2204,0,0}, 203},	{{1,14,1558,0}, 0},	{{-473,-2846,-2846,-2846}, 0},
{{1,-2207,0,0}, 0},	{{1,1430,1522,-2090}, 0},	{{0,0,1522,1525}, 249},
{{-2297,-2197,-2197,-2110}, 0},	{{-4293,0,0,-165}, 0},	{{-2288,97,99,0}, 0},
{{1,-123,0,0}, 0},	{{1,-119,2,-2096}, 0},	{{-2287,105,-2287,125}, 0},
{{0,1548,0,124}, 0},	{{0,0,0,1548}, 0},	{{0,0,0,0}, 159},
{{1,1449,1547,0}, 191},	{{1,1,1,1}, 214},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2050,-2050,-2050,-2050}, 0},
{{1,1444,170,0}, 0},	{{1,1,1,1}, 199},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1535,0}, 0},	{{1,0,1,0}, 218},
{{0,0,0,0}, 247},	{{1,1,1,1}, 0},	{{1,-2889,4,-2889}, 0},
{{-2249,-2889,-2889,1531}, 0},	{{1,-2252,1540,-2252}, 0},	{{-2252,-2892,170,-2892}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-515,0}, 0},	{{0,0,0,0}, 212},
{{0,0,0,0}, 245},	{{1,1,1,0}, 0},	{{0,0,1531,0}, 0},
{{1,0,1482,1485}, 0},	{{1,0,1,0}, 0},	{{1,1,1,0}, 0},
{{0,0,15,0}, 0},	{{1,0,1478,1527}, 0},	{{1,1,0,0}, 0},
{{0,1526,0,0}, 0},	{{1,1476,1526,1476}, 0},	{{1,1,1,1526}, 0},
{{1,1526,1384,1384}, 0},	{{1,1,1,1}, 250},	{{0,0,0,1526}, 0},
{{-363,0,-363,0}, 255},	{{1,1,1,-363}, 0},	{{-2264,0,4,0}, 0},
{{-2265,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1521}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 252},
{{0,0,0,0}, 242},	{{-2268,0,1511,0}, 0},	{{-2264,-2264,1523,-2264}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-4369}, 0},	{{1,1,1,1}, 0},
{{-4369,-2311,-2311,1523}, 0},	{{0,0,0,1523}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2161}, 0},	{{-2390,-2315,-2315,2}, 0},	{{-2257,-1749,-1749,1}, 0},
{{1,0,-3910,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1509}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1501}, 0},
{{1,1359,1069,0}, 191},	{{-89,-89,-89,1500}, 214},	{{1,1358,84,0}, 0},
{{1,1,1,1}, 199},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-549}, 0},	{{1,1,1,1}, 0},
{{1,0,-4307,0}, 0},	{{-4307,0,-4307,0}, 218},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,1490}, 0},	{{-2396,-2396,1490,-2396}, 0},	{{1,0,1493,0}, 230},
{{1,1,1,1}, 0},	{{0,0,1495,0}, 0},	{{0,0,0,1495}, 0},
{{1,0,0,0}, 0},	{{-2321,1494,-2321,0}, 0},	{{-2361,-2361,-2361,258}, 0},
{{-2362,-2362,-2362,269}, 0},	{{-2363,-2363,-2363,271}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1916}, 0},	{{-2441,-2366,-2366,-1849}, 0},	{{-2308,-1800,-1800,243}, 0},
{{0,0,1488,1}, 0},	{{0,0,0,0}, 230},	{{-2327,-2327,1487,-2327}, 0},
{{-2822,1488,0,0}, 0},	{{-2425,1488,-2425,-2425}, 0},	{{1,-2703,-2703,-2425}, 0},
{{1,-2703,-2703,-2425}, 0},	{{1,-2703,-2703,-2200}, 0},	{{1,1,1,1488}, 0},
{{1,-726,1488,-726}, 0},	{{1,1,-726,-726}, 0},	{{1,-726,-726,-726}, 0},
{{1,-3993,-2200,-2200}, 0},	{{1,-862,-862,-862}, 0},	{{1,1,-862,-862}, 0},
{{1,1,-862,0}, 0},	{{1,1,1,1482}, 0},	{{1,-3993,-3993,0}, 0},
{{1,-3993,-3993,-2200}, 0},	{{-3993,-3993,-3993,-3993}, 184},	{{1,1,-2212,-2437}, 0},
{{1,0,-269,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2212,0,0,-1956}, 0},	{{-2447,-2447,1475,-2447}, 0},
{{1,1,1,1}, 196},	{{-145,1476,-145,-145}, 0},	{{1,1,1,-147}, 0},
{{1,-147,-147,-147}, 0},	{{1,-147,-147,-147}, 0},	{{1,-147,-147,-147}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2130,-2130,-2130}, 0},
{{-2130,1474,-2130,-2130}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2}, 0},	{{-2205,-2205,-2205,1470}, 0},
{{1,1,1,1}, 0},	{{1,1471,1471,1471}, 0},	{{1,3,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1469}, 0},	{{0,0,0,0}, 215},
{{1,1,1,1}, 0},	{{1,1472,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 222},	{{0,0,0,0}, 199},
{{1,1,1,1}, 0},	{{1,3,1469,3}, 0},	{{1,1469,1471,0}, 218},
{{0,0,0,0}, 219},	{{0,0,1469,0}, 0},	{{-2215,0,1,0}, 0},
{{-4389,-4389,-4389,-4389}, 220},	{{1,-3055,-3055,-3055}, 0},	{{1,-3055,-3055,-3055}, 0},
{{1,-3055,-3055,-3055}, 0},	{{1,1,1,1}, 0},	{{-785,-785,1018,-785}, 0},
{{-3061,-3061,1462,-3061}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-168}, 0},
{{1,1,1,1}, 0},	{{-168,-168,-168,1461}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2213,0,0,0}, 0},	{{0,0,0,0}, 211},
{{-2197,-2197,-2197,-2197}, 196},	{{-2198,-2198,1457,-2198}, 0},	{{-2993,-2993,1457,-2993}, 0},
{{1,1460,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1255,1255,1255}, 0},
{{-2994,0,1460,0}, 0},	{{1,1460,1,1}, 230},	{{1,1,1,1}, 0},
{{1,1255,1255,1255}, 0},	{{-2998,0,1460,0}, 0},	{{1,-3001,-3001,-3001}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{-411,-411,-411,1457}, 0},
{{1,1457,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1457}, 0},	{{0,1,1457,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1457}, 0},	{{-3015,-3015,1457,-3015}, 0},	{{-2217,-2217,1458,-2217}, 0},
{{0,0,0,1458}, 0},	{{-2214,-2214,1458,-2214}, 0},	{{0,0,0,1458}, 0},
{{0,0,0,1458}, 0},	{{-4428,-2370,1458,-2517}, 0},	{{0,0,0,1458}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{-433,-433,-433,-433}, 0},	{{1,940,1461,1463}, 0},	{{-2717,0,0,0}, 0},
{{-1,938,938,1461}, 0},	{{1,-2192,-452,0}, 0},	{{-2192,-1977,0,0}, 0},
{{1,-3021,0,0}, 0},	{{-2161,-1979,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 194},	{{1,1,1,1}, 0},
{{1,-2163,1,-2163}, 0},	{{1,-2163,1,-2163}, 0},	{{1,1,1,1}, 0},
{{1,-2188,-2188,0}, 0},	{{1,1,1,1}, 0},	{{-2188,-2188,-2188,1449}, 0},
{{-2168,-2168,1456,-2168}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1449}, 0},
{{1,0,0,0}, 0},	{{1,-2471,-2471,0}, 0},	{{1,1,0,0}, 200},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1438}, 0},
{{0,0,0,1438}, 0},	{{1,-2160,-2160,-2160}, 0},	{{1,-2160,-2160,-2160}, 0},
{{1,-2160,-2160,-2160}, 0},	{{1,16,1,16}, 0},	{{1,-875,44,-875}, 0},
{{1,1,-875,-875}, 0},	{{1,-875,-875,-875}, 0},	{{1,-2160,-2160,-2160}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2160}, 0},
{{1,1,1,1}, 0},	{{1,-2160,-2160,-2160}, 0},	{{1,-2160,-2160,-2160}, 0},
{{-2160,-2160,-2160,-2160}, 184},	{{1,-2138,-2138,-2138}, 0},	{{1,-2138,-2138,-2138}, 0},
{{1,-2138,-2138,-2138}, 0},	{{1,1,1,1420}, 0},	{{-890,-890,29,-890}, 0},
{{1,-2498,-2498,-2498}, 0},	{{1,-2498,-2498,-2498}, 0},	{{1,-2498,-2498,-2498}, 0},
{{-4,-4,-4,-4}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2502}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,-4143,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1419}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4613,-2555,-2555,1170}, 0},	{{-2497,-1989,-1989,1169}, 0},
{{-179,-906,13,-906}, 0},	{{1,-907,12,-907}, 0},	{{1,1414,1414,1414}, 0},
{{1,-907,1422,-907}, 0},	{{1,1168,1168,1168}, 0},	{{1,1,1,1}, 0},
{{1,1403,1403,1403}, 0},	{{1,1,1,1168}, 0},	{{1,1,1,1}, 0},
{{1,1168,1168,1168}, 0},	{{1,1168,1168,1168}, 0},	{{1,1,1,1}, 184},
{{0,0,0,1421}, 0},	{{-918,-918,-918,-918}, 168},	{{1,-918,-918,-918}, 0},
{{1,-4626,-4626,-4626}, 0},	{{1,-1054,-1054,-1054}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-4626}, 0},	{{1,1,1,1}, 0},	{{1,-4626,-4626,-4626}, 0},
{{1,-4626,-4626,-4626}, 0},	{{-4626,-4626,-4626,-4626}, 184},	{{1,-2506,-2506,-4629}, 0},
{{1,-2506,-2506,-4629}, 0},	{{-2506,-2506,-2506,-2506}, 184},	{{-193,0,-4176,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1399}, 0},
{{0,0,0,1399}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1391}, 0},	{{1,0,-4196,0}, 0},	{{1,1,1,0}, 0},
{{-2125,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2480}, 0},
{{1,1,1,1}, 190},	{{-2609,-2609,-2609,4}, 0},	{{1,0,-4203,0}, 0},
{{1,-292,-292,-292}, 0},	{{-2092,0,0,0}, 0},	{{1,0,-4206,0}, 0},
{{1,0,845,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-4217,-4217,-4217,1378}, 0},	{{-2910,1384,-2157,-2156}, 0},	{{1,0,-4212,0}, 0},
{{1,16,16,0}, 0},	{{1,-2023,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1383}, 0},	{{1,0,-4224,0}, 0},
{{1,-27,-27,0}, 0},	{{-2153,-2035,0,0}, 0},	{{1,0,-4227,0}, 0},
{{1,1,1,0}, 0},	{{-14,0,0,0}, 0},	{{1,0,43,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1370}, 0},	{{0,0,0,1370}, 0},	{{-2921,1370,-2147,-2146}, 0},
{{-2882,1380,-2144,-2144}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1389}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1388}, 0},	{{-2681,-2652,-2652,-2135}, 0},
{{-2678,-2653,-2653,-2136}, 0},	{{-2666,-2654,-2654,-44}, 0},	{{0,0,0,1385}, 0},
{{1,1385,1385,1395}, 0},	{{1,0,-4250,0}, 0},	{{1,-4714,-4714,-4714}, 0},
{{1,1361,1372,1372}, 0},	{{1,1401,-2668,-2668}, 0},	{{1,1347,1361,1406}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4823,1406,-4823,-4823}, 0},	{{1,0,-4260,0}, 0},
{{1,0,0,0}, 0},	{{1,-2071,0,0}, 0},	{{1,-4271,-4271,-4271}, 0},
{{-4271,-4271,-4271,1402}, 0},	{{-4341,0,0,0}, 159},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1401}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1401}, 0},	{{0,0,0,1401}, 0},
{{-606,-2679,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1401}, 0},
{{-4454,-4454,-4454,1401}, 0},	{{-2613,0,0,0}, 159},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-364,-364}, 0},
{{1,1,1,1}, 0},	{{-4456,-4456,-4456,1404}, 0},	{{-4188,-4188,-4188,1404}, 0},
{{0,0,1404,0}, 0},	{{0,1407,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,1396}, 0},	{{0,42,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{0,1392,0,0}, 0},	{{-1909,0,0,0}, 0},	{{0,0,0,1403}, 0},
{{-2001,-4174,-4174,-4174}, 0},	{{1,-4175,1,-4175}, 0},	{{0,1401,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 151},
{{1,-1970,0,0}, 0},	{{0,0,1401,0}, 0},	{{0,0,1401,1402}, 0},
{{1,0,0,0}, 0},	{{-1997,-1997,-1997,-1997}, 0},	{{-1997,1,1405,0}, 0},
{{1,1,1,1}, 0},	{{1,-4190,-4190,0}, 0},	{{1,0,-1986,0}, 0},
{{-1991,-1991,-1991,1404}, 0},	{{1,1,1,1}, 0},	{{1,-4194,-4194,0}, 0},
{{0,0,-1990,0}, 147},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 146},	{{0,0,0,0}, 145},
{{1,-1991,0,0}, 0},	{{1,43,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-1984,-1984,-1984}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1984}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1386}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 118},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{-1946,0,0,0}, 0},	{{0,-2008,6,0}, 0},
{{1,1376,5,0}, 0},	{{-1990,1377,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 118},	{{0,1376,0,0}, 0},	{{0,0,1386,0}, 0},
{{0,0,1386,0}, 0},	{{1,1,1,1}, 0},	{{-2005,-2005,1386,-2005}, 0},
{{0,0,0,1386}, 0},	{{0,0,0,1386}, 0},	{{1,1,1,1}, 0},
{{0,1386,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1381}, 0},	{{-2033,0,1381,0}, 0},	{{0,0,1381,1386}, 0},
{{1,-2002,-2002,-2002}, 0},	{{1,0,0,0}, 0},	{{1,-2002,-2002,-2002}, 0},
{{0,1386,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1386}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1387}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1397}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 127},	{{0,0,0,1397}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 124},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1395}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1389}, 0},
{{1,1,1,-3863}, 0},	{{1,-4228,-4228,-4228}, 0},	{{1,1,-3863,-3863}, 0},
{{-4228,-4228,-4228,1393}, 0},	{{0,0,0,1400}, 0},	{{0,0,0,1409}, 0},
{{0,0,0,1409}, 0},	{{1,0,-3930,0}, 0},	{{1,0,-1838,0}, 0},
{{-1893,-1893,-1893,0}, 0},	{{1,34,36,0}, 0},	{{1,0,37,0}, 0},
{{0,0,0,0}, 102},	{{1,0,-3936,0}, 0},	{{1,0,-1844,0}, 0},
{{-1899,4,-1899,0}, 0},	{{1,0,-3875,0}, 0},	{{1,1,-4029,0}, 0},
{{-4029,1398,-4029,-4029}, 0},	{{-1902,-1902,1434,-1902}, 0},	{{1,0,0,0}, 0},
{{0,0,1436,0}, 0},	{{0,0,0,1437}, 0},	{{1,-5333,-5333,0}, 0},
{{1,0,-5333,0}, 0},	{{1,0,10,0}, 71},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1426}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1418}, 0},	{{1,1418,0,0}, 0},
{{0,0,0,0}, 108},	{{1,103,1417,0}, 0},	{{0,0,0,0}, 111},
{{0,0,-1595,12}, 104},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1413}, 0},	{{1,-5362,-4160,0}, 0},	{{1,0,-4160,0}, 0},
{{-28,0,-19,0}, 100},	{{1,-5365,-4163,0}, 0},	{{1,-1889,1,-1889}, 0},
{{0,0,0,30}, 100},	{{1,1,1,1}, 0},	{{0,0,0,1406}, 0},
{{0,0,0,0}, 89},	{{1,1,1,1}, 89},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-5376,-5376,1400,0}, 0},	{{1,1,1,1}, 0},	{{1,-4154,1,-4154}, 0},
{{1,1399,1399,1400}, 0},	{{0,0,0,1400}, 0},	{{0,0,0,1400}, 0},
{{0,0,0,1400}, 0},	{{-5384,-5384,-5384,1401}, 0},	{{1,-5384,-5384,0}, 0},
{{1,0,-5384,0}, 0},	{{1,0,-1876,0}, 71},	{{1,1401,1401,1401}, 0},
{{1,1,1,1}, 0},	{{1,1401,1,-1890}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1890}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1401}, 0},	{{0,0,0,1401}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1400}, 0},	{{0,0,0,1400}, 0},
{{0,0,0,1408}, 0},	{{0,0,0,1408}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1775,-1775,-1775,-1775}, 0},	{{-1870,-1870,1405,-1870}, 0},
{{-1796,46,47,-1854}, 44},	{{-1861,-1675,-1674,1406}, 0},	{{1,1407,1407,-2045}, 0},
{{1,1,1,1}, 60},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,-4064,0}, 0},	{{1,-1855,1,-1855}, 0},
{{0,0,0,14}, 42},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 65},
{{1,0,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,66}, 0},	{{0,0,0,0}, 60},	{{1,1,1,1}, 0},
{{0,0,0,1386}, 0},	{{1,1,1,1}, 0},	{{1,1385,1,0}, 0},
{{0,0,0,1386}, 0},	{{1,0,0,0}, 0},	{{0,1,0,0}, 0},
{{0,0,0,1384}, 0},	{{-1853,-1853,-1853,-1853}, 0},	{{-1828,-1828,-1828,0}, 44},
{{-1829,-1829,14,0}, 44},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1855,-3914,-1615,0}, 0},
{{1,-3915,0,0}, 0},	{{1,72,1376,-1787}, 0},	{{1,0,-1840,0}, 0},
{{-3891,-3891,-3891,-3891}, 35},	{{-3955,0,71,0}, 39},	{{-1652,-1652,-1652,-1652}, 37},
{{0,0,0,75}, 40},	{{0,0,-1800,0}, 45},	{{-4027,-4027,-4027,-4027}, 45},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4109,0,16,0}, 0},	{{0,0,0,0}, 48},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1359}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1358}, 0},	{{0,0,0,1358}, 0},	{{1,1,1,1}, 0},
{{0,0,1357,0}, 0},	{{0,0,0,1358}, 0},	{{0,0,0,1358}, 0},
{{-4101,0,2,0}, 0},	{{-4099,0,1,0}, 0},	{{-4124,0,-4124,0}, 5},
{{-3919,0,-3879,0}, 42},	{{1,1,1,1}, 0},	{{-4092,-4092,-4092,1353}, 0},
{{1,1,1,1333}, 0},	{{1,1333,1333,1333}, 0},	{{1,1351,1,1}, 0},
{{1,1,1,1}, 0},	{{-4087,0,1351,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 21},
{{0,0,0,1347}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3962,-3962,-1663,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1331}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1331}, 0},	{{0,0,0,1331}, 0},
{{0,0,0,1331}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1733,-1733,-1733,0}, 0},	{{-3962,0,-1773,0}, 0},	{{-9,-9,-9,-9}, 12},
{{-1681,-1681,-1681,-1681}, 12},	{{1,-3979,-3979,-3979}, 0},	{{1,-5358,-5358,-5358}, 0},
{{-1712,-3900,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 13},
{{1,1,1,1}, 0},	{{0,0,0,1315}, 0},	{{-5409,-5409,-5409,1315}, 0},
{{0,0,0,1315}, 0},	{{-5366,-5366,-5366,1316}, 0},	{{0,0,0,1317}, 0},
{{1,0,12,0}, 0},	{{-3904,0,-3904,0}, 0},	{{1,0,1316,0}, 0},
{{0,0,28,0}, 0},	{{1,1320,1322,0}, 0},	{{1,0,32,0}, 0},
{{1,1,1,0}, 393},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1317}, 0},
{{-1669,0,0,0}, 0},	{{1,-13,1316,1317}, 0},	{{1,0,1318,0}, 0},
{{1,0,-1671,0}, 0},	{{1,0,0,-1670}, 0},	{{0,0,1325,0}, 0},
{{-1696,1334,1,1312}, 0},	{{-16,0,-7,0}, 0},	{{1,1333,1335,-983}, 0},
{{1,-983,1336,0}, 0},	{{1,1,1,-1351}, 393},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-15,-15,-15}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1331}, 0},	{{-1700,-1700,-1700,1}, 0},	{{1,0,-17,0}, 0},
{{0,0,7,0}, 0},	{{-1686,0,-1686,0}, 0},	{{1,4,0,0}, 0},
{{-1696,-1696,-1696,-3631}, 0},	{{1,2,0,0}, 0},	{{-3633,-3633,-3633,-3633}, 397},
{{-2839,-2839,-2839,-2839}, 0},	{{0,0,1322,0}, 0},	{{0,0,0,1326}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1323}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1320}, 0},	{{1,0,0,20}, 0},
{{0,0,1319,0}, 0},	{{1,1324,17,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,31,0}, 0},	{{-1688,0,0,0}, 0},	{{0,0,1319,0}, 0},
{{1,1319,1321,-1020}, 0},	{{1,-1020,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1388}, 0},	{{1,1,1,1}, 0},	{{-1388,0,23,0}, 0},
{{-1696,0,1316,0}, 0},	{{0,0,0,3}, 0},	{{0,1308,1,0}, 0},
{{-3902,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1309}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1305,0}, 0},	{{-3916,-2796,0,0}, 0},
{{1,-45,0,0}, 0},	{{-3680,-3680,1303,-3680}, 0},	{{1,-47,0,0}, 0},
{{-1661,1305,-1661,-1661}, 0},	{{0,0,0,1305}, 0},	{{-3917,0,0,1305}, 0},
{{0,0,0,1305}, 0},	{{-1706,0,59,0}, 0},	{{1,0,58,0}, 0},
{{1,-3980,-3980,-3980}, 0},	{{1,1302,1302,1302}, 0},	{{1,1303,-3888,0}, 0},
{{-3980,-3980,-3980,-3880}, 387},	{{1,0,0,0}, 0},	{{0,0,1301,0}, 0},
{{-3932,0,0,0}, 385},	{{1,0,1303,0}, 0},	{{1,-3988,-3988,-3988}, 0},
{{1,1302,1302,1302}, 0},	{{1,-3896,-3896,0}, 0},	{{-3988,-3988,-3988,-3888}, 389},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 388},
{{1,-1085,0,0}, 0},	{{-1453,-1453,1279,-1453}, 0},	{{1,-1087,0,0}, 385},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-3961,-3961,-3961}, 0},	{{1,0,0,0}, 0},	{{-3961,-3961,-3961,1276}, 0},
{{-1736,-1461,-1461,-1461}, 0},	{{-1461,-1461,1275,-1461}, 0},	{{1,1,1,-1461}, 0},
{{1,-3929,-3929,-3929}, 0},	{{1,-3929,-3929,-3929}, 0},	{{-3929,-3929,-3929,1273}, 0},
{{1,-3924,-3924,-3924}, 0},	{{1,-3924,-3924,-3924}, 0},	{{-3924,-3924,-3924,1271}, 0},
{{-4024,-4024,-4024,1271}, 0},	{{0,0,5,0}, 0},	{{-1734,-1734,0,0}, 385},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,1267,0}, 0},
{{0,0,0,0}, 385},	{{1,-2951,8,-2951}, 0},	{{-1732,-744,-3746,-3746}, 0},
{{1,1264,1267,1264}, 0},	{{1,1,1,1}, 0},	{{1,1267,1267,1247}, 0},
{{-1719,0,0,1267}, 0},	{{-3998,-3998,-3998,1267}, 0},	{{-3984,-3984,-3984,1267}, 0},
{{-1725,-751,-3753,-3753}, 0},	{{-1721,-752,-3754,-3754}, 0},	{{1,-1717,-1717,-3754}, 0},
{{1,-3953,-3953,-3953}, 0},	{{1,-3953,-3953,-3953}, 0},	{{-1699,-1699,-1699,1262}, 0},
{{1,1,1,1}, 0},	{{-3758,0,1261,0}, 0},	{{-3973,-3973,-3973,1261}, 0},
{{-3963,-3963,-3963,1261}, 0},	{{-3957,-3957,-3957,1261}, 0},	{{-4050,-4050,-4050,1261}, 0},
{{-3951,-3951,-3951,1261}, 0},	{{-5521,-5521,-5521,1261}, 0},	{{0,0,1266,0}, 0},
{{0,0,1275,0}, 0},	{{-1704,-1704,-1704,-1704}, 371},	{{1,-3964,-3964,-3964}, 0},
{{1,-3964,1,-3964}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1274}, 0},	{{0,0,0,1274}, 0},	{{0,0,0,1276}, 0},
{{1,-1693,-1693,0}, 0},	{{1,-1693,-1693,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1272,1,1272}, 0},	{{-1693,0,1272,0}, 0},
{{-1676,0,-1594,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1265}, 0},	{{1,0,0,0}, 0},
{{1,1271,1271,-1654}, 0},	{{1,-1616,1271,0}, 0},	{{0,0,1271,0}, 0},
{{0,1274,0,0}, 0},	{{0,0,1275,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1275}, 0},
{{1,0,-1574,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1273}, 0},	{{-1669,1279,0,0}, 0},
{{0,0,1280,0}, 0},	{{0,0,1283,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,1279,0}, 0},	{{-1651,0,9,0}, 0},	{{1,0,0,0}, 0},
{{1,-1652,1,-1652}, 0},	{{0,0,1284,0}, 0},	{{0,0,0,0}, 423},
{{-1635,0,0,0}, 0},	{{1,-3010,-3010,-3010}, 0},	{{0,1281,0,0}, 0},
{{0,-798,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1296}, 0},	{{-1626,-1626,1296,-1626}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1293}, 0},	{{0,0,0,1293}, 0},	{{1,1,1,1}, 0},
{{1,-1636,-1636,-1636}, 0},	{{1,-1627,-1627,-1627}, 0},	{{1,1,1300,1}, 0},
{{1,1,1,-1772}, 0},	{{1,1,1,-1627}, 0},	{{1,1,1,1}, 0},
{{1,-1627,-1627,-1627}, 0},	{{1,-1627,-1627,-1627}, 0},	{{-1627,-1627,-1627,-1627}, 184},
{{1,1,1,1}, 0},	{{0,0,0,1293}, 0},	{{-1635,-1635,1293,0}, 0},
{{0,0,0,1306}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1300}, 0},	{{-1590,-1061,1300,0}, 0},
{{0,0,87,0}, 303},	{{-1615,-1615,1299,-1615}, 0},	{{0,0,0,0}, 309},
{{-1524,384,94,0}, 191},	{{1,0,83,0}, 303},	{{1,1,1,1}, 0},
{{1,1,-1523,-1523}, 0},	{{1,1,1,1}, 0},	{{1,1297,-1523,-1523}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1307,1307,1307}, 0},
{{1,0,1,0}, 218},	{{0,0,0,0}, 326},	{{-3881,-3881,1,-3881}, 0},
{{-3881,-3881,1304,-3881}, 0},	{{1,1308,0,0}, 191},	{{0,0,0,0}, 312},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1302}, 0},
{{1,1,1,32}, 0},	{{1,1,1,1}, 0},	{{1,1,1300,1}, 0},
{{0,0,-861,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,1298}, 0},
{{-3851,-3851,1298,-3851}, 0},	{{1,1,1,1}, 0},	{{1,-5615,-5615,-5615}, 0},
{{1,1300,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1299,-3837,0}, 0},
{{-1555,0,51,0}, 303},	{{-3904,-3904,-3904,-3904}, 0},	{{1,1298,0,0}, 191},
{{-1626,-1626,-1626,-1626}, 312},	{{-1260,-1260,47,0}, 303},	{{1,1,1,-1628}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-22,-22,-22}, 0},
{{1,-22,-22,-22}, 0},	{{0,0,0,1291}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-22,-22,-22}, 0},	{{-1633,0,-884,0}, 0},
{{0,0,0,1287}, 0},	{{-3873,-3873,85,-3873}, 0},	{{-1628,-1115,5,0}, 0},
{{-1129,6,7,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-30,-30,-30,-30}, 0},	{{-1577,0,0,0}, 303},	{{-1503,0,-1611,0}, 0},
{{-1121,327,37,0}, 191},	{{1,0,0,0}, 303},	{{1,1,1,1277}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1277,1,1278}, 0},	{{-1580,-1580,-1580,1280}, 0},	{{-51,-1238,0,0}, 191},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1547,-1547,-1547,-1547}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2}, 0},
{{-1615,-1615,-1615,1272}, 0},	{{1,-1616,-1616,1271}, 0},	{{-1616,-1638,1272,0}, 0},
{{1,0,1274,0}, 0},	{{1,1275,0,0}, 0},	{{0,0,0,0}, 318},
{{1,0,-1636,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 316},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1267,0}, 0},	{{1,-1705,-1705,-1705}, 0},
{{1,-1705,-1705,-1705}, 0},	{{1,-1705,-1705,-1705}, 0},	{{1,1,1,1}, 0},
{{-1755,-1755,1266,-1755}, 0},	{{-1157,-1157,-1157,-1157}, 0},	{{1,-3963,-3963,-3963}, 0},
{{1,-3963,-3963,-3963}, 0},	{{1,-3963,-3963,-3963}, 0},	{{1,1,1,1}, 0},
{{1,1,1261,-1761}, 0},	{{1,1,-1761,-1761}, 0},	{{-1761,-1761,-1761,-1761}, 310},
{{-1608,-1608,-1608,-3166}, 196},	{{1,-1607,-1607,-1607}, 0},	{{1,-85,-85,-85}, 0},
{{1,-85,-85,-85}, 0},	{{-1370,-1370,-1370,1255}, 0},	{{0,0,0,1255}, 0},
{{0,0,0,1255}, 0},	{{1,1,522,1259}, 0},	{{-3921,0,0,0}, 0},
{{-1,-1,520,522}, 0},	{{-2,-2,-2,521}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{-1557,-1557,-1557,-1557}, 194},	{{1,-1681,-1681,-1681}, 0},
{{1,-1681,-1681,-1681}, 0},	{{1,-1681,-1681,-1681}, 0},	{{1,1,1,-1383}, 0},
{{1,1,1,-1782}, 0},	{{1,1,1,-1782}, 0},	{{-1782,-1782,-1782,-1782}, 305},
{{1,1,1,1247}, 0},	{{1,1,1,1233}, 0},	{{1,1,1,1233}, 0},
{{1,1,1,1}, 305},	{{1,0,0,0}, 0},	{{0,0,0,0}, 307},
{{1,0,3,0}, 0},	{{1,0,0,0}, 0},	{{-932,-932,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 306},	{{1,1,1,1}, 0},
{{1,1,1,-3957}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-900,-1602,-1693,0}, 0},	{{1,1,1,-1800}, 0},	{{-1800,-1800,-1800,-1800}, 300},
{{-1802,-1802,-1802,-1802}, 205},	{{1,1,1,1}, 0},	{{0,0,0,1228}, 0},
{{1,0,-1699,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,534}, 0},	{{1,0,-3954,0}, 0},
{{-1593,-2953,0,0}, 0},	{{1,0,-3956,0}, 0},	{{1,0,0,0}, 0},
{{-1595,1219,-1595,-1595}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1219}, 0},	{{0,0,0,1219}, 0},	{{1,-3448,0,0}, 0},
{{1,3,0,0}, 0},	{{0,66,0,0}, 354},	{{-1494,0,0,0}, 0},
{{0,64,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,29,29}, 0},	{{1,43,43,43}, 365},	{{0,0,0,1210}, 0},
{{0,0,0,1210}, 0},	{{-10,-3459,35,0}, 0},	{{1,0,-1445,0}, 0},
{{1,1,1,-3458}, 0},	{{1,1,1,-3458}, 0},	{{1,1,1,1}, 0},
{{1,-3458,-3458,-3458}, 0},	{{-3458,-3458,-3458,1204}, 0},	{{-1493,-1493,-1493,-1493}, 0},
{{1,-1406,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1774}, 0},
{{1,1,1,1}, 0},	{{1,0,111,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1197}, 0},	{{-1780,1197,-1780,-1780}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,7,7,7}, 0},	{{1,21,21,21}, 0},
{{0,0,0,1197}, 0},	{{0,0,0,1197}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-27,15,15,15}, 0},
{{1,0,0,0}, 0},	{{-1259,-1259,-1259,-1259}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1185,0}, 0},
{{0,0,1199,0}, 0},	{{1,22,1,22}, 0},	{{1,1,1,1}, 0},
{{1,22,22,22}, 0},	{{1,1,1,1}, 250},	{{0,0,0,1196}, 0},
{{0,0,-3914,1196}, 0},	{{1,115,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,115,0}, 0},	{{1,0,0,0}, 0},	{{-1192,-1192,-1192,-1192}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1589,-1589,-1589,1188}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1183}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-20,-20,-20,-20}, 0},	{{0,0,0,0}, 363},
{{-3513,-3513,-3513,1178}, 0},	{{-3951,-3951,-3936,1180}, 0},	{{-3952,-3952,-3937,1182}, 0},
{{-3953,-3953,-3938,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1182,0}, 0},
{{-5158,0,1182,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{-5161,0,1180,0}, 0},	{{1,68,68,68}, 0},	{{1,68,68,0}, 0},
{{1,0,0,0}, 0},	{{-4011,-4011,-4011,-4011}, 344},	{{1,1,1,1}, 196},
{{-1314,1175,-1314,-1314}, 0},	{{1,1,1,1}, 0},	{{-1316,1177,-1316,-1316}, 0},
{{-1162,1179,-1162,-1162}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-3368}, 0},
{{1,-3368,-3368,-1161}, 0},	{{-3368,-3368,-3368,-3368}, 344},	{{1,1,1,1}, 0},
{{1,0,1177,0}, 0},	{{-1147,321,0,0}, 218},	{{-3361,0,-5535,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1170,0}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 348},
{{1,4,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1153}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1156}, 0},	{{1,1,1,1}, 196},	{{-4151,1160,-4151,-4151}, 0},
{{1,1,1,1}, 0},	{{1,21,21,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,-1794}, 344},	{{1,0,0,0}, 0},	{{0,0,0,1158}, 0},
{{0,0,0,1158}, 0},	{{1,1158,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-68,-68,-68}, 0},	{{1,-89,-89,-89}, 0},	{{0,0,0,1158}, 0},
{{-1599,-1599,1158,-1599}, 0},	{{0,0,0,1158}, 0},	{{-4053,-1703,1158,-1703}, 0},
{{0,0,0,1158}, 0},	{{1,5,5,5}, 0},	{{1,5,5,0}, 0},
{{1,0,0,0}, 0},	{{-1577,-1577,-1577,-1577}, 344},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 344},
{{1,-1980,-1980,-1980}, 0},	{{1,1157,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-4015,-4015,-4015}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-4015}, 0},	{{1,1,1,1}, 0},	{{1,-4015,-4015,-4015}, 0},
{{1,-4015,-4015,-4015}, 0},	{{-4015,-4015,-4015,-4015}, 184},	{{0,0,-4027,1148}, 0},
{{-112,2,1148,0}, 0},	{{-4015,1,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,1147,0}, 0},	{{0,1155,0,0}, 0},	{{0,3,5,0}, 0},
{{0,-1580,4,0}, 0},	{{0,0,1160,0}, 0},	{{1,0,0,0}, 0},
{{-1581,-1581,1159,-1581}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1157}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1157}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1156}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{0,0,1154,0}, 0},
{{0,0,93,96}, 0},	{{1,1,1156,93}, 0},	{{1,1,1,1}, 0},
{{1,1,1158,1}, 0},	{{-1382,-1382,-1382,-1382}, 0},	{{-1574,-1574,-1574,0}, 255},
{{0,0,0,0}, 282},	{{-3336,-3336,-3336,1155}, 199},	{{1,-3545,-3545,-3545}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3545}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1157,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,66,0}, 0},	{{-1345,12,1152,0}, 0},	{{0,16,1152,20}, 0},
{{-1562,-1227,-3437,-1319}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1153,1154,1155}, 0},	{{-7,-7,-7,58}, 0},	{{1,0,-3185,0}, 0},
{{1,0,2,0}, 0},	{{0,0,0,1152}, 0},	{{0,0,0,1153}, 0},
{{-1447,-1447,-1447,-1447}, 196},	{{1,1,1,1}, 0},	{{-1281,-1281,-1281,-1281}, 0},
{{1,0,0,0}, 199},	{{0,1150,0,0}, 0},	{{-4326,-4326,1151,-4326}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,206,0}, 0},	{{1,1,1,1}, 230},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,206,0}, 0},	{{0,-1244,1145,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1143}, 0},	{{0,0,0,1143}, 0},	{{0,0,0,1143}, 0},
{{0,0,0,1143}, 0},	{{-4138,1147,-4138,-4138}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-38,1,-38}, 0},
{{-3358,0,27,0}, 0},	{{1,0,-5318,0}, 0},	{{1,-1407,-1407,-1407}, 0},
{{1,0,-1143,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-3299,-3299,-3299}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1166,-1166,-1166,-1166}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1108,1,1108}, 0},
{{-54,-54,-54,1128}, 0},	{{1,1,1,1}, 0},	{{-3609,1127,-3609,-3609}, 0},
{{-5800,-3742,-3742,1128}, 0},	{{1,-58,-58,1132}, 0},	{{-3285,0,7,0}, 0},
{{1,-60,-60,1131}, 0},	{{-4019,0,5,0}, 0},	{{1,-62,-62,1130}, 0},
{{-3457,0,3,0}, 0},	{{0,-3161,2,0}, 0},	{{-3272,0,1,0}, 0},
{{1,1,1,1}, 168},	{{1,1,0,0}, 0},	{{0,0,0,0}, 268},
{{0,0,0,1124}, 0},	{{0,0,0,1124}, 0},	{{-3879,-3879,-3879,1136}, 0},
{{-4381,-4381,1136,-4381}, 0},	{{-1566,0,2,5}, 0},	{{0,0,1,50}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-91,-91,-91,-91}, 0},
{{0,0,0,0}, 255},	{{0,0,0,1136}, 0},	{{0,0,83,0}, 230},
{{1,1,1,1}, 0},	{{1,1,1,-3635}, 0},	{{1,1,1,-3635}, 0},
{{-3635,-3635,-3635,1132}, 0},	{{1,0,-3262,0}, 0},	{{-1539,0,-1539,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1122}, 0},
{{1,1,1,1}, 0},	{{1,-1502,-3533,0}, 0},	{{1,1122,1,1122}, 212},
{{-5736,-5736,-5736,1126}, 0},	{{-2056,-2056,-2056,-2056}, 196},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-76,-76,-76}, 0},	{{-2056,0,129,0}, 0},
{{1,1,1,1}, 230},	{{1,1,1,1}, 0},	{{1,-76,-76,-76}, 0},
{{-2060,0,129,0}, 0},	{{0,0,0,1118}, 0},	{{0,0,0,1118}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1124}, 0},	{{-1537,-94,1124,0}, 0},
{{-1331,-1331,-1331,-1331}, 0},	{{0,0,0,1124}, 0},	{{-1545,-1545,-1545,-1545}, 242},
{{-1533,0,-1533,0}, 0},	{{1,1,-4419,-4419}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,-2042,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1113}, 0},	{{-3791,-4431,92,-4431}, 0},
{{0,0,1112,0}, 0},	{{0,0,0,0}, 257},	{{0,1114,0,0}, 0},
{{1,1,1,1}, 0},	{{-1524,-141,-141,-141}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1111}, 0},	{{0,0,0,1111}, 0},	{{0,0,0,1111}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,1099,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-3786}, 0},
{{1,1,1,1}, 190},	{{-3833,-3833,-3833,1}, 0},	{{-376,0,-5427,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1093}, 0},	{{0,0,0,1093}, 0},
{{0,0,0,1093}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1433,-1433,-1433,-3639}, 0},	{{0,0,0,1089}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3885}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1086}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,1083}, 0},	{{0,1083,0,0}, 0},
{{0,0,0,1083}, 0},	{{1,1,1,0}, 200},	{{0,0,1086,0}, 0},
{{0,0,1093,0}, 0},	{{1,1094,-3813,-3813}, 0},	{{-3813,-3813,-3813,1094}, 0},
{{0,1094,0,0}, 0},	{{1,-3912,-3912,-3912}, 0},	{{1,-3912,-3912,-3912}, 0},
{{1,-3912,-3912,-3912}, 0},	{{1,1,1,1}, 0},	{{-2213,-2213,1,-2213}, 0},
{{-2213,-2213,-2213,-2213}, 207},	{{1,-3676,-3676,0}, 0},	{{1,-3676,-3676,0}, 0},
{{-3676,-3676,-3676,-3676}, 184},	{{1,1,1,1}, 0},	{{1,1,1,-3921}, 0},
{{-3921,-3921,-3921,-3921}, 190},	{{1,-1620,-1620,-1620}, 0},	{{1,-1620,-1620,-1620}, 0},
{{1,-3671,-3671,-3671}, 0},	{{1,1,1,1}, 0},	{{1,-2225,-2225,-2225}, 0},
{{-2225,1095,-2225,-2225}, 0},	{{-3603,-3603,-3603,-3603}, 215},	{{1,0,0,0}, 0},
{{1,-1465,0,0}, 0},	{{0,0,0,1092}, 0},	{{-1469,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1086}, 0},
{{1,-1470,-1470,-1470}, 0},	{{1,-1470,-1470,-1470}, 0},	{{1,-1470,-1470,-1470}, 0},
{{1,1,1,1}, 0},	{{1,-2242,-2242,-2242}, 0},	{{-2242,-2242,-2242,-2242}, 222},
{{-1467,1,3,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1078}, 0},
{{0,0,0,0}, 220},	{{1,1,1,1}, 0},	{{1,1,1,-1629}, 0},
{{-1460,-1460,-1460,-1460}, 213},	{{1,-1628,-2144,0}, 0},	{{-444,0,-444,0}, 212},
{{-4449,-1447,1,-4449}, 0},	{{1,1,1,1}, 0},	{{1,1016,1016,0}, 0},
{{1,1016,1016,1016}, 0},	{{0,0,0,1073}, 0},	{{1,-1458,-1458,-1458}, 0},
{{1,-204,-204,-204}, 0},	{{-1451,0,1,0}, 0},	{{0,0,0,1070}, 0},
{{1,-1458,-1458,-1458}, 0},	{{1,-204,-204,-204}, 0},	{{-1455,0,1,0}, 0},
{{0,0,0,1067}, 0},	{{-2266,-2266,-2266,1067}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1455}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1064}, 0},
{{0,0,0,1064}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1061}, 0},	{{0,0,0,1061}, 0},
{{1,0,1061,0}, 0},	{{-4471,0,0,1061}, 0},	{{-3674,-3970,1061,-3970}, 0},
{{0,0,0,1061}, 0},	{{-3671,-1798,1061,-1798}, 0},	{{0,0,0,1061}, 0},
{{0,0,0,1061}, 0},	{{-3827,-3827,-3827,1061}, 0},	{{1,1061,741,741}, 0},
{{1,1001,1001,1001}, 0},	{{1,1,1,1060}, 0},	{{1,741,741,741}, 0},
{{1,1,1,1}, 224},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,1057,0,0}, 0},	{{1,-1910,-1910,0}, 0},	{{-1910,-3435,0,0}, 0},
{{1,0,0,0}, 0},	{{-1455,-3437,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3636,-3636,-3636,1046}, 0},	{{-3623,-3623,-3623,-3623}, 159},	{{0,0,0,1045}, 0},
{{0,0,0,1045}, 0},	{{0,0,0,1045}, 0},	{{1,-2309,-1390,-2309}, 0},
{{1,-2309,-2309,-2309}, 0},	{{1,-2309,20,-2309}, 0},	{{1,-3534,-3534,-3534}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-3534}, 0},
{{1,1,1,1}, 0},	{{1,-3534,-3534,-3534}, 0},	{{1,-3534,-3534,-3534}, 0},
{{-3534,-3534,-3534,-3534}, 184},	{{1,1,1,1}, 0},	{{0,0,0,1050}, 0},
{{1,-2320,-2320,-2320}, 0},	{{1,-1653,-1653,-1653}, 0},	{{1,1,1,1}, 0},
{{1,-2456,-2456,-2456}, 0},	{{1,1,1,-1653}, 0},	{{1,1,1,1}, 0},
{{1,-1653,-1653,-1653}, 0},	{{1,-1653,-1653,-1653}, 0},	{{-1653,-1653,-1653,-1653}, 184},
{{1,-1397,-1397,-1397}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1397}, 0},	{{1,1,1,1}, 0},	{{1,-1397,-1397,-1397}, 0},
{{1,-1397,-1397,-1397}, 0},	{{-1397,-1397,-1397,-1397}, 184},	{{0,0,0,1033}, 0},
{{0,0,0,1033}, 0},	{{0,0,0,1033}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1033}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1027}, 0},	{{1,39,39,1027}, 0},
{{1,0,-5596,0}, 0},	{{1,0,0,0}, 0},	{{1,15,26,26}, 0},
{{1,15,-4236,-4236}, 0},	{{1,1,15,26}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4293,1027,-4293,-4293}, 0},	{{0,0,0,1027}, 0},	{{0,0,0,1027}, 0},
{{0,0,0,1027}, 0},	{{1,25,25,1029}, 0},	{{1,0,-5610,0}, 0},
{{1,0,0,0}, 0},	{{1,1,12,12}, 0},	{{1,1,-4250,-4250}, 0},
{{1,1,1,12}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-4290,1022,-4290,-4290}, 0},
{{1,1022,1022,1022}, 0},	{{1,0,-3520,0}, 0},	{{1,-3519,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,-4261,-4261}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4261,1014,-4261,-4261}, 0},	{{0,0,0,1014}, 0},
{{0,0,0,1014}, 0},	{{0,0,0,1014}, 0},	{{1,0,-5634,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1006,0,0}, 0},
{{1,0,-5644,0}, 0},	{{1,0,0,0}, 0},	{{1,1004,-9,-9}, 0},
{{1,1,-5655,-5655}, 0},	{{1,1,1,-9}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-5655,998,-5655,-5655}, 0},	{{1,-39,-39,998}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4081,998,-4081,-4081}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-4259,994,-4259,-4259}, 0},
{{-6228,-6228,-4086,-4073}, 174},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,987}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,980}, 0},	{{0,0,0,980}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,978,0,0}, 0},	{{0,0,0,988}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,787,787}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-5854,-5854,-5854}, 0},	{{1,1,787,787}, 0},
{{-5854,-5854,-5854,988}, 0},	{{-5859,-5859,-5859,989}, 0},	{{-5591,-5591,-5591,989}, 0},
{{1,0,1,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,990,0}, 0},	{{0,0,0,990}, 0},	{{0,0,0,990}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,978}, 0},	{{0,0,0,978}, 0},	{{1,0,987,0}, 0},
{{1,0,0,0}, 118},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,984,0,0}, 0},	{{0,0,0,2}, 0},	{{0,984,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,982,0}, 0},
{{1,1,1,1}, 0},	{{1,-5594,-5594,0}, 0},	{{-3423,0,-3390,981}, 0},
{{-3394,-3394,-3394,981}, 0},	{{0,0,0,981}, 0},	{{1,0,0,0}, 0},
{{0,0,0,980}, 118},	{{1,0,980,981}, 0},	{{0,0,984,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 138},	{{0,0,0,976}, 0},
{{1,1,1,1}, 0},	{{0,0,977,0}, 0},	{{-3390,-3390,977,-3390}, 0},
{{0,0,0,977}, 0},	{{1,0,0,0}, 0},	{{0,0,0,985}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 136},	{{0,0,0,978}, 0},	{{0,0,0,978}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,981}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,978,0,0}, 0},
{{1,-1384,1,-1384}, 0},	{{0,0,0,977}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 129},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,974}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 124},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-1395,-1395,-1395}, 124},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1395,961,-1395,-1395}, 0},	{{0,0,0,962}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,955}, 0},	{{1,-5620,-5620,-5620}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2958,1,-2958}, 0},	{{1,1,-2958,-2958}, 0},	{{-2958,-2958,-2958,-2958}, 117},
{{1,872,872,872}, 0},	{{1,909,909,909}, 0},	{{1,872,1,872}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,909,909,909}, 0},	{{1,909,909,909}, 0},
{{0,0,0,938}, 0},	{{0,0,0,938}, 0},	{{0,0,0,939}, 0},
{{1,1,1,1}, 0},	{{1,-5426,1,-5426}, 0},	{{1,1,-5426,0}, 0},
{{1,0,0,-3147}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 113},	{{1,1,1,1}, 0},	{{1,-3335,1,-3335}, 0},
{{1,13,13,14}, 0},	{{0,0,0,899}, 0},	{{1,0,0,0}, 0},
{{0,0,898,0}, 0},	{{0,0,0,898}, 0},	{{0,0,0,898}, 0},
{{0,0,0,898}, 0},	{{0,0,0,0}, 110},	{{0,0,0,0}, 112},
{{0,0,0,0}, 103},	{{0,0,0,895}, 0},	{{1,895,-6775,0}, 0},
{{0,0,0,895}, 71},	{{0,0,0,896}, 0},	{{0,0,0,896}, 0},
{{0,0,0,896}, 0},	{{0,0,0,896}, 0},	{{1,1,896,1}, 0},
{{0,0,897,0}, 0},	{{1,-6784,-6784,0}, 0},	{{1,0,-6784,0}, 0},
{{1,0,-3276,0}, 71},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3290,1,-3290,-3290}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,886}, 0},	{{0,0,0,886}, 0},	{{0,0,0,886}, 0},
{{0,0,0,887}, 0},	{{1,1,1,1}, 84},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,879}, 0},	{{0,0,0,880}, 0},	{{0,0,0,881}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1331,-1331,-1331,-1331}, 0},
{{1,-1385,-1385,0}, 0},	{{-3260,-3260,-3260,884}, 60},	{{-3451,-3451,-3451,-3451}, 60},
{{0,0,0,888}, 0},	{{1,0,0,0}, 0},	{{0,0,0,887}, 0},
{{0,0,0,887}, 0},	{{1,1,1,1}, 0},	{{0,0,0,886}, 0},
{{-5266,0,-5290,0}, 39},	{{0,0,0,885}, 0},	{{0,0,0,885}, 0},
{{0,0,0,885}, 0},	{{1,0,1,0}, 0},	{{0,0,0,884}, 0},
{{0,0,0,884}, 0},	{{0,0,888,0}, 0},	{{-5444,-5444,-5444,888}, 0},
{{1,1,1,1}, 0},	{{-3169,0,1,0}, 0},	{{-3144,-3144,-3144,0}, 5},
{{0,0,0,885}, 0},	{{1,1,1,1}, 0},	{{0,0,0,886}, 0},
{{0,0,0,886}, 0},	{{0,0,0,886}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 17},	{{0,0,0,884}, 0},
{{-6723,-6723,-6723,884}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 9},
{{1,-5223,0,0}, 0},	{{0,0,0,0}, 4},	{{1,0,0,0}, 0},
{{0,0,0,0}, 3},	{{1,0,0,0}, 0},	{{1,1,1,1}, 392},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 398},	{{1,0,0,0}, 0},	{{-1318,-1318,-1318,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 397},	{{0,0,0,871}, 0},
{{-1326,0,3,0}, 0},	{{1,0,-1318,0}, 0},	{{0,0,26,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 392},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 402},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,849,0,0}, 0},	{{-1351,0,849,0}, 0},
{{1,-2315,0,0}, 0},	{{-1331,-1331,-1331,-2683}, 0},	{{1,-2317,0,0}, 0},
{{-2685,-2685,-2685,-2685}, 397},	{{0,0,2,845}, 0},	{{0,0,0,848}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,844}, 0},	{{0,0,0,844}, 0},
{{-959,0,0,0}, 0},	{{0,852,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,13,0}, 0},	{{0,0,0,848}, 0},	{{1,0,0,0}, 0},
{{0,0,847,0}, 0},	{{-5211,0,4,0}, 0},	{{1,-2338,0,0}, 0},
{{-2706,-2706,848,-2706}, 0},	{{-1252,-2340,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,847,0}, 0},
{{0,0,0,847}, 0},	{{0,0,0,847}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,837,837,837}, 0},	{{-4982,844,0,0}, 0},
{{-2965,-2965,844,-2965}, 0},	{{0,0,0,0}, 406},	{{0,0,0,845}, 0},
{{0,0,0,845}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 387},
{{-5190,-5190,-5190,0}, 387},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,21}, 0},	{{0,838,0,0}, 385},
{{1,0,0,0}, 0},	{{0,0,0,0}, 389},	{{1,1,841,1}, 0},
{{1,1,1,1}, 0},	{{1,-6,-6,-6}, 0},	{{-2731,0,0,14}, 0},
{{-5236,-5236,-5236,839}, 0},	{{1,1,1,1}, 0},	{{-2735,0,15,0}, 0},
{{-5201,-5201,-5201,837}, 0},	{{-5194,-5194,-5194,837}, 0},	{{-5294,-5294,-5294,837}, 0},
{{0,0,0,0}, 386},	{{1,1,1,1}, 0},	{{1,-16,-16,-16}, 0},
{{-5010,0,0,4}, 0},	{{1,1,1,1}, 0},	{{-2,-19,837,-19}, 0},
{{-5230,0,0,1}, 0},	{{0,0,0,836}, 0},	{{-5264,-5264,-5264,836}, 0},
{{-5250,-5250,-5250,841}, 0},	{{-2960,-2960,-2960,848}, 0},	{{0,0,0,848}, 0},
{{-5233,-5233,-5233,848}, 0},	{{-5223,-5223,-5223,851}, 0},	{{-5217,-5217,-5217,851}, 0},
{{-5310,-5310,-5310,853}, 0},	{{-5211,-5211,-5211,858}, 0},	{{1,828,828,195}, 0},
{{1,-6781,-6781,-6781}, 0},	{{1,828,828,860}, 0},	{{1,195,195,195}, 0},
{{1,852,852,-545}, 368},	{{-545,-545,-545,858}, 369},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,850,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,847}, 0},	{{-507,0,-507,0}, 371},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,845,0}, 0},
{{0,0,0,0}, 370},	{{0,0,1,0}, 0},	{{0,0,0,0}, 437},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,835}, 0},	{{-1269,-2886,0,0}, 0},
{{0,0,834,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,834}, 0},	{{1,0,0,0}, 0},
{{0,833,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,844}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,844,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,839}, 0},
{{1,1,1,0}, 0},	{{0,0,838,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,839}, 0},
{{0,0,840,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 424},	{{-2900,-2900,-2900,-2900}, 423},	{{1,802,802,802}, 0},
{{1,0,802,0}, 0},	{{1,802,802,802}, 0},	{{1,1,1,1}, 0},
{{1,-2910,-2910,-2910}, 0},	{{1,-2910,-2910,-2910}, 0},	{{1,-2910,-2910,-2910}, 0},
{{1,802,802,802}, 0},	{{1,1,1,1}, 0},	{{1,-3046,-3046,-3046}, 0},
{{1,1,1,802}, 0},	{{1,1,1,1}, 0},	{{1,802,802,802}, 0},
{{1,802,802,802}, 0},	{{1,1,1,1}, 184},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 421},	{{0,0,0,814}, 0},	{{-2921,-2921,-2921,814}, 0},
{{0,0,0,816}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,806}, 0},
{{-1298,-1298,806,-3071}, 0},	{{0,0,0,810}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 415},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,798,0,0}, 0},	{{0,0,0,811}, 0},	{{0,0,0,817}, 0},
{{-2818,0,817,0}, 303},	{{1,1,1,1}, 0},	{{1,-2913,-2913,-2913}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,30,-1302,0}, 0},
{{1,-2819,1,-2819}, 0},	{{1,1,1,1}, 0},	{{1,817,817,817}, 0},
{{1,0,0,0}, 218},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 327},	{{-1305,0,-1305,0}, 0},	{{1,1,1,1}, 0},
{{1,-5184,-5184,-5184}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-5184,802,-2831,0}, 0},	{{-1305,-1305,-1305,0}, 196},	{{0,0,0,802}, 0},
{{-1297,-1297,-2160,0}, 0},	{{0,0,0,801}, 0},	{{1,1,1,1}, 0},
{{1,-5148,-5148,-5148}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,797,-2884,0}, 0},	{{-1298,-1298,-1298,798}, 0},	{{1,1,1,0}, 0},
{{0,797,0,0}, 0},	{{-1294,-1294,-1294,-2923}, 196},	{{0,0,0,799}, 0},
{{0,0,0,799}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2856,-2856,-2856,2}, 0},	{{-2856,-2856,-2856,799}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,799,0}, 218},
{{1,0,0,0}, 0},	{{1,0,0,0}, 218},	{{0,797,0,0}, 0},
{{1,0,-1215,0}, 0},	{{-1268,0,0,0}, 0},	{{1,-2909,-2909,0}, 0},
{{1,1,1,1}, 305},	{{0,0,0,801}, 0},	{{1,0,0,0}, 0},
{{0,805,0,0}, 306},	{{-812,-812,-812,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1231,-1231,-1231,-1231}, 0},
{{-3020,-3020,-3020,-3020}, 309},	{{-1259,-1259,-3021,-3021}, 205},	{{-3023,-3023,-3023,798}, 0},
{{0,0,0,798}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-739,-739,-739,-739}, 0},
{{1,0,0,0}, 0},	{{-1254,-4172,0,0}, 0},	{{-13,-13,792,-13}, 0},
{{0,0,0,793}, 0},	{{1,-2813,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2813}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2813}, 0},	{{1,1,1,1}, 0},
{{0,0,0,793}, 0},	{{0,0,0,793}, 0},	{{0,0,0,793}, 0},
{{0,0,0,795}, 0},	{{0,0,0,795}, 0},	{{-4661,-4661,-2392,802}, 0},
{{0,0,0,805}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-1154,-1154,-1154}, 0},	{{1,-1175,-1175,-1175}, 0},	{{0,0,0,801}, 0},
{{0,0,0,801}, 0},	{{0,0,0,801}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 353},	{{1,1,1,1}, 0},
{{0,0,792,0}, 0},	{{0,0,0,792}, 0},	{{0,-1080,0,0}, 0},
{{-2724,-2724,-2724,791}, 0},	{{0,0,0,791}, 0},	{{1,0,0,0}, 0},
{{1,-875,-4690,0}, 0},	{{0,789,0,0}, 200},	{{1,0,0,0}, 0},
{{1,0,5,0}, 0},	{{0,0,0,0}, 360},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,3,0}, 0},	{{0,783,0,0}, 0},
{{0,0,783,0}, 0},	{{0,0,0,790}, 0},	{{1,5,5,5}, 0},
{{1,5,5,-2488}, 0},	{{1,-4539,-4539,-4539}, 0},	{{-867,-867,-867,-867}, 344},
{{1,1,1,1}, 0},	{{1,1,1,-2492}, 0},	{{-1174,-4543,-4543,-4543}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2340}, 0},	{{1,-2340,-2340,-2339}, 0},
{{-4546,-4546,-4546,-871}, 344},	{{-2323,-855,0,0}, 0},	{{1,1,1,0}, 0},
{{0,0,782,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,789}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,784}, 0},	{{1,-1158,-1158,-1158}, 0},	{{1,-1138,-1138,0}, 0},
{{1,0,0,0}, 0},	{{-2720,-2720,-2720,-852}, 344},	{{0,0,0,780}, 0},
{{0,0,0,780}, 0},	{{1,-1156,-1156,-1156}, 0},	{{1,-1225,-1225,-1225}, 0},
{{1,-1246,-1246,-1246}, 0},	{{-2726,-2726,-2726,786}, 0},	{{0,0,0,786}, 0},
{{-2756,-1264,786,-1264}, 0},	{{0,0,0,786}, 0},	{{-2888,0,0,787}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,780,1,1}, 0},	{{0,780,0,0}, 0},
{{-1155,-1155,-1155,-1155}, 335},	{{0,-1145,1,0}, 0},	{{1,0,0,0}, 0},
{{0,0,777,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,769}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,762}, 0},
{{0,0,0,762}, 0},	{{0,0,0,762}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,762}, 0},	{{0,0,0,762}, 0},
{{0,0,0,762}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,771}, 0},	{{1,1,1,1}, 0},
{{1,1,3,-1154}, 0},	{{1,1,1,1}, 0},	{{0,0,0,768}, 0},
{{-2539,-2539,-2539,-2539}, 282},	{{1,767,1,-4490}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-4490}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,-4796,767,0}, 0},	{{0,0,0,767}, 200},
{{-4328,0,768,0}, 168},	{{0,0,0,768}, 199},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,766}, 0},	{{-1159,-1159,-1159,31}, 0},	{{-1160,-1160,-1160,31}, 0},
{{-1161,-1161,-1161,31}, 0},	{{1,1,1,1}, 0},	{{0,0,0,762}, 0},
{{1,1,1,1}, 0},	{{0,0,0,761}, 0},	{{1,1,1,1}, 0},
{{0,760,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-5476}, 0},
{{-2993,-2993,-2993,-2993}, 213},	{{1,1,1,1}, 0},	{{0,757,0,0}, 0},
{{0,0,0,757}, 0},	{{0,0,0,757}, 0},	{{0,0,0,757}, 0},
{{1,766,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 273},	{{-5284,-5284,762,-5284}, 0},
{{-2263,0,-1116,0}, 0},	{{1,1,1,1}, 0},	{{-4735,-4735,-4735,760}, 0},
{{1,0,-6463,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-6474,-6474,-6474}, 0},	{{-6474,-6474,-6474,758}, 0},	{{-2255,0,-1124,0}, 0},
{{-2244,0,-1125,0}, 0},	{{-2242,0,-1126,0}, 0},	{{0,0,0,761}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,762}, 0},	{{-5014,-5014,-5014,763}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2623,-3139,0}, 0},	{{1,1,1,1}, 212},	{{0,0,0,761}, 0},
{{0,0,0,761}, 0},	{{1,0,-4393,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,761}, 0},	{{1,761,1,1}, 0},	{{0,0,0,761}, 0},
{{0,0,0,761}, 0},	{{1,761,541,541}, 0},	{{1,30,30,30}, 0},
{{1,1,1,760}, 0},	{{1,541,541,541}, 0},	{{1,1,1,1}, 224},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,757,0,0}, 0},
{{0,0,0,757}, 0},	{{1,0,0,0}, 199},	{{0,0,0,756}, 0},
{{0,709,0,0}, 0},	{{0,0,0,755}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,752}, 0},
{{0,0,752,0}, 0},	{{0,0,0,752}, 0},	{{0,0,0,752}, 0},
{{0,0,0,753}, 0},	{{0,0,0,0}, 243},	{{0,0,0,755}, 0},
{{0,0,0,755}, 0},	{{0,0,0,756}, 0},	{{0,0,0,760}, 0},
{{0,0,0,762}, 0},	{{0,0,0,762}, 0},	{{0,0,0,762}, 0},
{{1,691,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,760}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 224},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,752}, 0},	{{1,1,1,1}, 0},	{{0,0,0,751}, 0},
{{-4906,-4906,-4906,751}, 0},	{{-4906,-4906,-4906,751}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 208},
{{-3319,-3319,-3319,-3319}, 215},	{{0,0,733,0}, 0},	{{0,0,0,733}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,728}, 0},
{{0,0,0,728}, 0},	{{0,0,0,728}, 0},	{{0,0,0,728}, 0},
{{-3332,-3332,-3332,728}, 0},	{{0,0,0,735}, 0},	{{0,0,0,735}, 0},
{{0,0,0,736}, 0},	{{0,0,0,736}, 0},	{{0,0,0,577}, 0},
{{0,0,0,736}, 0},	{{-5030,-5030,-5030,736}, 0},	{{-315,5,-315,-315}, 0},
{{0,-2518,-2517,573}, 0},	{{0,0,0,734}, 0},	{{0,0,0,736}, 0},
{{0,0,0,736}, 0},	{{-319,0,0,0}, 227},	{{1,-318,-318,-318}, 0},
{{-1058,-1058,-1058,-1058}, 226},	{{0,0,0,0}, 225},	{{-4681,-4681,-4681,732}, 0},
{{0,0,0,0}, 192},	{{0,0,0,731}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,716}, 0},	{{0,0,0,716}, 0},
{{0,0,0,716}, 0},	{{0,0,0,717}, 0},	{{1,0,717,0}, 0},
{{0,0,0,0}, 183},	{{0,0,0,716}, 0},	{{0,0,0,717}, 0},
{{1,0,-6622,0}, 0},	{{1,-2394,-2394,0}, 0},	{{1,26,-987,-987}, 0},
{{1,1,-2409,-2409}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2409,708,-2409,-2409}, 0},	{{-5319,-5319,-5302,-6970}, 174},	{{0,0,0,707}, 0},
{{0,0,0,708}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 175},
{{0,0,706,0}, 176},	{{1,0,-6638,0}, 0},	{{1,0,0,0}, 0},
{{-993,-1003,-1003,-1003}, 0},	{{-5311,-5311,-5311,-6979}, 174},	{{1,0,-4541,0}, 0},
{{-1007,-4540,0,0}, 0},	{{-6982,-6982,-6982,-6982}, 174},	{{0,0,0,0}, 180},
{{0,0,0,0}, 179},	{{1,0,0,0}, 0},	{{-964,-964,-964,-964}, 173},
{{0,0,0,0}, 174},	{{-1012,-1012,-2377,0}, 0},	{{-6652,-6652,-6652,-6652}, 174},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4428,688,-4428,-4428}, 0},	{{-5078,-5078,-5078,-5065}, 174},
{{-5252,-5252,-5252,-5252}, 174},	{{0,0,0,686}, 0},	{{0,0,0,686}, 0},
{{0,0,0,691}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,683}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,-200,-200}, 0},
{{0,0,0,671}, 0},	{{1,1,561,561}, 0},	{{-6901,-6901,-6901,671}, 0},
{{-6847,-6847,-6847,672}, 0},	{{1,-6847,-6847,-6847}, 0},	{{1,672,592,592}, 0},
{{1,-6847,-6847,-6847}, 0},	{{1,1,592,592}, 0},	{{-6953,-6953,-6953,672}, 0},
{{0,0,0,673}, 0},	{{0,0,673,0}, 0},	{{0,0,0,674}, 0},
{{0,0,0,687}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,682}, 0},	{{-985,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,680}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,688}, 0},
{{1,1,1,1}, 0},	{{0,0,0,692}, 0},	{{0,0,0,693}, 0},
{{-4374,-4374,-4374,693}, 0},	{{0,0,0,694}, 0},	{{0,703,0,0}, 0},
{{-950,-950,705,-950}, 0},	{{1,-946,1,-946}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-946}, 0},	{{0,31,0,0}, 142},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,701}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,699,0,0}, 0},
{{0,0,699,0}, 0},	{{0,0,0,699}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,690}, 0},
{{0,0,0,0}, 135},	{{0,0,0,689}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,683}, 0},	{{0,0,0,684}, 0},	{{0,0,0,684}, 0},
{{1,0,0,0}, 0},	{{1,0,-975,0}, 0},	{{1,0,0,0}, 129},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,673}, 0},
{{0,0,0,673}, 0},	{{1,1,1,1}, 0},	{{0,0,0,672}, 0},
{{0,0,0,672}, 0},	{{0,0,0,673}, 0},	{{0,0,0,673}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 70},	{{-817,0,0,0}, 0},
{{0,0,0,670}, 0},	{{0,0,0,670}, 0},	{{0,0,670,0}, 0},
{{0,0,0,670}, 0},	{{0,0,0,671}, 0},	{{0,0,0,0}, 86},
{{0,0,0,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,669}, 0},
{{0,0,0,669}, 0},	{{0,0,0,669}, 0},	{{0,0,0,669}, 0},
{{-894,-894,-894,-894}, 0},	{{1,0,2,0}, 0},	{{0,0,0,0}, 92},
{{0,0,0,0}, 91},	{{0,0,0,672}, 0},	{{0,0,0,672}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 78},	{{0,0,0,0}, 84},
{{1,1,1,1}, 0},	{{0,0,0,670}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 74},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 72},
{{1,-4143,-4143,-4143}, 0},	{{1,1,1,1}, 0},	{{1,659,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,659}, 0},
{{0,0,0,0}, 61},	{{0,0,0,659}, 0},	{{0,0,0,659}, 0},
{{0,0,0,659}, 0},	{{0,0,0,659}, 0},	{{0,0,0,660}, 0},
{{0,0,660,0}, 0},	{{0,0,0,660}, 0},	{{1,1,660,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,657,0,0}, 0},	{{0,0,0,0}, 51},	{{0,0,0,658}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 30},
{{0,0,0,656}, 0},	{{0,0,0,0}, 26},	{{1,1,0,0}, 0},
{{0,0,0,0}, 34},	{{0,0,0,0}, 14},	{{1,0,0,0}, 0},
{{1,0,-7563,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,649}, 0},
{{0,0,0,650}, 0},	{{0,0,0,0}, 401},	{{-3858,0,656,0}, 0},
{{1,0,0,0}, 0},	{{1,1,655,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 399},	{{0,0,0,658}, 0},	{{0,0,0,665}, 0},
{{1,1,-583,-583}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,658,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,657}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 391},
{{0,0,0,655}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,8,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-3,-3,-3}, 0},	{{-3553,4,0,0}, 0},
{{0,0,0,647}, 0},	{{0,0,0,647}, 0},	{{0,0,0,648}, 0},
{{0,0,0,649}, 0},	{{1,1,1,1}, 0},	{{1,-6066,-6066,-6066}, 0},
{{-3808,0,0,647}, 0},	{{0,647,0,0}, 0},	{{0,648,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,644}, 0},
{{1,1,1,1}, 0},	{{-839,-846,10,-846}, 0},	{{-6074,-6074,-6074,642}, 0},
{{-6037,-6037,-6037,649}, 0},	{{-6030,-6030,-6030,651}, 0},	{{1,147,147,147}, 0},
{{1,-6130,-6130,-6130}, 0},	{{1,147,147,653}, 0},	{{1,147,147,147}, 0},
{{1,1,1,-393}, 368},	{{-393,-393,-393,-393}, 369},	{{0,0,0,650}, 0},
{{0,0,0,650}, 0},	{{1,1,1,-632}, 0},	{{1,-6099,-6099,-6099}, 0},
{{1,1,1,1}, 0},	{{1,-632,-632,-632}, 0},	{{1,-1372,-1372,-1372}, 0},
{{-1372,-1372,-1372,31}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6090,637,-6090,-6090}, 0},
{{-3807,-3807,-3807,637}, 0},	{{0,0,0,639}, 0},	{{1,1,1,-648}, 0},
{{1,-6080,-6080,0}, 0},	{{1,1,1,1}, 0},	{{-648,-648,636,-648}, 0},
{{-652,-652,-652,636}, 0},	{{1,-653,-653,-653}, 0},	{{1,-6067,-6067,-6067}, 0},
{{-653,-653,-653,635}, 0},	{{1,-656,-656,-656}, 0},	{{1,-6162,-6162,-6162}, 0},
{{1,-656,-656,632}, 0},	{{1,-656,-656,-656}, 0},	{{1,1,1,-1396}, 368},
{{-1396,-1396,-1396,-1396}, 369},	{{1,-662,-662,-662}, 0},	{{1,-6068,-6068,-6068}, 0},
{{1,-662,-662,-662}, 0},	{{1,-662,-662,-662}, 0},	{{-1402,-1402,-1402,-1402}, 368},
{{-31,-664,-664,-664}, 371},	{{1,1,1,1}, 0},	{{-6068,622,-6068,-6068}, 0},
{{1,0,0,0}, 0},	{{0,0,0,621}, 0},	{{1,1,1,1}, 0},
{{0,0,0,622}, 0},	{{0,622,0,0}, 0},	{{0,0,0,622}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,619}, 0},	{{0,0,0,619}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-800,-800,-800,-800}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,602,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,609}, 0},	{{0,0,0,615}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,611}, 0},	{{1,0,0,0}, 0},	{{0,610,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,606}, 0},	{{0,0,0,606}, 0},
{{1,-3734,1,-3734}, 0},	{{1,-3734,-3734,-3734}, 0},	{{-811,-811,-811,604}, 0},
{{0,0,0,605}, 0},	{{0,0,0,616}, 0},	{{1,1,1,-803}, 0},
{{1,1,1,1}, 0},	{{1,-803,-803,-803}, 0},	{{1,-803,-803,-803}, 0},
{{-803,-803,-803,-803}, 184},	{{1,0,0,0}, 0},	{{0,0,0,610}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 416},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 414},
{{0,0,0,590}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,583,0,0}, 0},
{{-815,0,0,0}, 0},	{{1,1,-790,0}, 0},	{{0,6,0,0}, 310},
{{0,0,0,580}, 0},	{{0,0,0,581}, 0},	{{1,1,1,0}, 0},
{{0,2,0,0}, 300},	{{-3572,-797,-5933,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 325},
{{0,0,0,576}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-539,-539,-539,-539}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 218},	{{0,570,0,0}, 0},
{{0,0,0,0}, 323},	{{1,569,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,569}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,564}, 0},	{{0,564,0,0}, 0},	{{-3820,-3820,-3820,571}, 0},
{{1,1,-796,-796}, 0},	{{-796,0,0,0}, 311},	{{1,-804,-804,-804}, 0},
{{-2036,-2036,-2036,-2036}, 306},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 301},	{{0,0,0,559}, 0},	{{0,0,0,559}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 297},
{{0,0,0,558}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-711,-711,-711,-711}, 0},
{{1,0,0,0}, 0},	{{1,-5462,-5462,0}, 0},	{{1,0,1,0}, 200},
{{0,0,0,548}, 0},	{{0,0,0,553}, 0},	{{0,0,0,560}, 0},
{{0,0,0,560}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-726,554,-726,-726}, 0},
{{0,0,554,0}, 0},	{{0,0,0,554}, 0},	{{0,555,0,0}, 0},
{{0,0,0,556}, 0},	{{0,0,556,0}, 0},	{{0,0,564,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,564}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,559}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 349},
{{0,0,0,546}, 0},	{{0,0,0,546}, 0},	{{0,0,0,546}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-558,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,544}, 0},	{{-3910,-3910,-3910,544}, 0},	{{0,0,0,544}, 0},
{{-2077,-2035,-2035,545}, 0},	{{1,-783,-783,-783}, 0},	{{-783,0,0,0}, 351},
{{0,0,0,543}, 0},	{{0,1,0,0}, 225},	{{0,0,0,542}, 0},
{{0,0,542,0}, 0},	{{0,0,0,549}, 0},	{{0,0,0,549}, 0},
{{0,0,0,549}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,549}, 0},	{{0,0,0,549}, 0},	{{0,0,0,0}, 336},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,536}, 0},	{{0,0,0,537}, 0},	{{0,0,0,537}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-5256}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-765,-5562,532,0}, 0},
{{0,0,0,532}, 200},	{{1,1,1,1}, 0},	{{0,0,0,532}, 0},
{{0,0,0,532}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,531,0}, 0},	{{0,0,0,534}, 0},	{{0,0,0,534}, 0},
{{0,0,0,534}, 0},	{{1,1,1,1}, 0},	{{0,0,0,533}, 0},
{{0,537,0,0}, 0},	{{0,0,0,537}, 0},	{{-754,0,0,0}, 0},
{{1,10,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-755,1,-755}, 0},
{{1,1,534,0}, 0},	{{1,1,1,1}, 273},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,529}, 0},	{{0,0,0,0}, 227},	{{-7551,-5286,-5286,528}, 0},
{{1,0,-5121,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,526}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,521}, 0},	{{1,0,0,0}, 0},	{{1,-1549,-1549,-1549}, 0},
{{1,-572,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,508}, 0},
{{1,1,1,1}, 0},	{{0,0,0,507}, 0},	{{1,0,0,0}, 0},
{{1,33,33,33}, 0},	{{1,0,0,0}, 0},	{{1,1,33,33}, 0},
{{-7791,-7791,-7791,504}, 0},	{{-755,-755,-755,-755}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,502}, 0},	{{0,0,503,0}, 0},
{{0,0,0,1}, 210},	{{0,0,0,502}, 0},	{{-219,1,-219,-219}, 0},
{{-219,0,0,0}, 227},	{{1,-218,-218,-218}, 0},	{{-758,-758,-758,-758}, 226},
{{0,0,0,0}, 292},	{{0,0,0,0}, 289},	{{0,0,0,496}, 0},
{{0,0,0,496}, 0},	{{0,0,0,496}, 0},	{{0,0,0,496}, 0},
{{0,0,0,496}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 253},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,495,0}, 0},	{{0,0,0,0}, 240},	{{1,0,0,0}, 0},
{{0,0,0,0}, 173},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,488}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 259},
{{0,0,0,486}, 0},	{{0,0,0,490}, 0},	{{0,0,0,491}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 226},	{{0,0,0,489}, 0},
{{0,0,0,489}, 0},	{{-5656,-5656,-5656,489}, 0},	{{1,-5703,-5703,-5703}, 0},
{{1,0,-7297,0}, 0},	{{0,0,0,489}, 0},	{{0,0,0,489}, 0},
{{0,0,0,0}, 216},	{{0,0,0,488}, 0},	{{0,0,0,488}, 0},
{{0,0,0,497}, 0},	{{0,0,0,499}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1775}, 0},	{{1,1,1,1}, 0},	{{1,-1775,-1775,-1775}, 0},
{{-4195,-719,0,0}, 0},	{{0,0,0,493}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 236},	{{0,0,0,495}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 235},	{{0,0,0,493}, 0},	{{0,0,0,493}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 231},
{{0,0,0,490}, 0},	{{0,0,0,490}, 0},	{{-5412,-5412,-5412,-5412}, 192},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 202},
{{0,0,0,486}, 0},	{{0,0,0,0}, 188},	{{1,0,3,0}, 0},
{{0,0,0,0}, 186},	{{1,0,1,0}, 0},	{{0,0,0,0}, 182},
{{1,0,0,0}, 0},	{{0,0,0,480}, 0},	{{0,0,0,480}, 0},
{{-3116,-3116,-3116,-3116}, 174},	{{1,0,0,0}, 0},	{{0,0,0,0}, 175},
{{0,0,0,478}, 0},	{{0,0,0,0}, 177},	{{-5115,-5115,-5115,-5115}, 174},
{{0,0,0,478}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 169},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 171},	{{0,0,0,471}, 0},	{{1,1,1,1}, 0},
{{0,0,0,470}, 0},	{{1,1,1,1}, 0},	{{-7571,-7571,-7571,470}, 0},
{{1,-7518,-7518,-7518}, 0},	{{1,1,-79,-79}, 0},	{{1,-7518,-7518,-7518}, 0},
{{1,1,-79,-79}, 0},	{{-7578,-7578,-7578,466}, 0},	{{1,1,1,1}, 0},
{{-7624,-7624,-7624,466}, 0},	{{0,0,0,466}, 0},	{{1,1,1,1}, 0},
{{0,0,467,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,454}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,450,0,0}, 0},	{{0,0,0,450}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,439}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,434,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,438}, 0},	{{0,0,0,438}, 0},
{{1,1,1,1}, 0},	{{-712,-3075,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,-677,1,-677}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,427}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 143},
{{1,1,1,1}, 0},	{{1,1,1,-1654}, 0},	{{1,1,1,1}, 0},
{{0,0,0,421}, 0},	{{0,0,0,421}, 0},	{{0,0,0,0}, 139},
{{0,0,0,420}, 0},	{{0,0,0,420}, 0},	{{0,0,0,420}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 123},	{{1,1,1,1}, 0},
{{0,0,0,417}, 0},	{{0,0,0,417}, 0},	{{0,0,0,418}, 0},
{{0,0,0,418}, 0},	{{0,0,0,418}, 0},	{{0,0,0,419}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 125},	{{0,0,0,0}, 120},
{{0,0,0,416}, 0},	{{0,0,0,416}, 0},	{{0,0,0,417}, 0},
{{-658,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 96},
{{1,0,1,0}, 0},	{{0,0,0,0}, 73},	{{0,0,0,412}, 0},
{{0,0,0,412}, 0},	{{0,0,0,413}, 0},	{{1,-1562,-667,-1562}, 0},
{{1,0,-666,0}, 93},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,406,0}, 0},	{{0,0,0,406}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 78},	{{0,0,0,0}, 79},	{{1,1,1,1}, 0},
{{0,0,0,403}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,401}, 0},	{{1,1,1,1}, 0},	{{0,0,0,401}, 0},
{{0,0,0,401}, 0},	{{0,0,0,410}, 0},	{{0,0,0,0}, 59},
{{1,-642,3,0}, 0},	{{0,0,0,0}, 57},	{{-656,-656,408,0}, 0},
{{0,0,0,0}, 53},	{{0,0,0,407}, 0},	{{-658,-658,-658,-658}, 51},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 52},
{{1,0,0,0}, 0},	{{-4718,-4718,-4718,403}, 0},	{{0,0,0,0}, 29},
{{1,1,1,1}, 0},	{{0,0,0,401}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-640,-640,-640,-640}, 0},	{{0,0,0,399}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 399},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,398}, 0},	{{1,1,-468,-468}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-655,392,-655,-655}, 0},	{{0,0,0,392}, 0},	{{-656,-656,0,0}, 225},
{{0,0,0,392}, 0},	{{0,392,0,0}, 0},	{{0,0,0,393}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 410},	{{1,0,0,0}, 0},
{{0,390,0,0}, 0},	{{0,0,0,391}, 0},	{{0,0,0,391}, 0},
{{1,0,0,0}, 0},	{{0,0,390,0}, 0},	{{1,0,0,0}, 0},
{{0,0,389,0}, 0},	{{0,0,0,389}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-6715,382,-6715,-6715}, 0},	{{1,-500,-500,-500}, 0},	{{1,-6685,-6685,-6685}, 0},
{{-500,-500,-500,6}, 0},	{{1,-503,-503,-503}, 0},	{{1,-6680,-6680,-6680}, 0},
{{1,-503,-503,-503}, 0},	{{1,-503,-503,-503}, 0},	{{-1043,-1043,-1043,-1043}, 368},
{{-505,-505,-505,-505}, 371},	{{0,0,0,373}, 0},	{{0,0,0,373}, 0},
{{0,0,0,-4453}, 225},	{{1,-247,-247,-247}, 0},	{{1,-6697,-6697,-6697}, 0},
{{-247,-247,-247,371}, 0},	{{0,0,0,371}, 0},	{{-2023,-2023,-2023,-2023}, 372},
{{1,-4433,0,0}, 0},	{{-1287,-1287,-1287,369}, 0},	{{-1287,-1287,-1287,-1287}, 371},
{{-6689,-6689,-6689,-6689}, 225},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,365}, 0},	{{0,0,0,371}, 0},	{{0,0,0,0}, 373},
{{0,0,0,0}, 435},	{{0,0,0,369}, 0},	{{0,0,0,369}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,365}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,359}, 0},	{{0,0,0,359}, 0},	{{0,0,0,360}, 0},
{{0,0,360,0}, 0},	{{0,0,0,361}, 0},	{{0,0,361,0}, 0},
{{1,-2699,-2699,-2699}, 0},	{{-1414,-1414,-1414,362}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,351}, 0},	{{0,0,0,351}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 417},	{{0,349,0,0}, 0},
{{0,0,0,0}, 330},	{{1,1,0,0}, 0},	{{0,0,0,0}, 311},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 328},
{{1,1,-574,-574}, 0},	{{-574,0,0,0}, 311},	{{0,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,333}, 0},	{{0,0,0,333}, 0},
{{0,0,0,333}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,326}, 0},
{{1,1,-330,-330}, 0},	{{-330,0,0,0}, 311},	{{0,0,0,324}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 298},
{{1,-556,-556,-556}, 0},	{{-556,0,0,0}, 351},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,316}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-505,-393,0,0}, 0},	{{0,0,0,308}, 0},	{{1,-558,-558,-558}, 0},
{{-558,0,0,0}, 351},	{{0,-500,0,0}, 292},	{{0,306,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 351},	{{1,0,-2469,0}, 0},
{{-2469,-2469,303,-2469}, 0},	{{0,303,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,295}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,291}, 0},	{{0,0,0,291}, 0},	{{0,0,0,291}, 0},
{{0,0,0,0}, 347},	{{0,0,0,0}, 346},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-544,0,0,0}, 0},	{{0,0,0,281}, 0},	{{-4453,-4453,-4453,281}, 0},
{{1,-1429,-1429,-1429}, 0},	{{-1429,0,0,0}, 351},	{{0,0,0,280}, 0},
{{0,0,0,280}, 0},	{{0,0,0,280}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,273}, 0},	{{0,0,0,273}, 0},	{{0,0,0,275}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,283}, 0},
{{0,0,0,283}, 0},	{{0,0,0,0}, 338},	{{1,1,1,1}, 0},
{{0,0,0,281}, 0},	{{0,0,0,282}, 0},	{{0,0,0,284}, 0},
{{0,0,0,287}, 200},	{{1,1,1,1}, 0},	{{0,0,0,287}, 0},
{{0,0,0,287}, 0},	{{1,1,1,1}, 0},	{{0,0,0,286}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,283,0,0}, 0},	{{0,0,0,283}, 0},	{{0,0,0,0}, 286},
{{0,0,0,0}, 285},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,278}, 0},
{{0,0,0,284}, 0},	{{1,0,0,0}, 0},	{{-534,-534,-534,-534}, 235},
{{-532,-532,-532,-532}, 0},	{{0,0,0,281}, 0},	{{-6119,-6119,-6119,281}, 0},
{{1,1,1,1}, 0},	{{0,0,0,280}, 0},	{{0,0,0,280}, 0},
{{0,0,0,280}, 0},	{{1,1,1,1}, 0},	{{0,0,0,279}, 0},
{{1,1,1,1}, 0},	{{-8294,-8294,-8294,278}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 293},	{{0,0,0,276}, 0},	{{0,0,0,0}, 291},
{{0,0,0,275}, 0},	{{0,0,0,0}, 246},	{{0,0,0,274}, 0},
{{0,0,0,281}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 253},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,277,0}, 0},
{{0,0,0,0}, 251},	{{1,1,1,1}, 0},	{{0,0,0,277}, 0},
{{1,-554,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 260},	{{1,1,1,1}, 0},
{{0,0,271,0}, 0},	{{0,0,0,271}, 0},	{{0,0,0,272}, 0},
{{0,0,0,274}, 0},	{{1,-6191,-6191,-6191}, 0},	{{1,0,-7785,0}, 0},
{{0,0,0,272}, 0},	{{0,0,272,0}, 0},	{{0,0,0,272}, 0},
{{0,0,0,0}, 221},	{{1,-1520,-1520,-1520}, 0},	{{1,249,249,249}, 0},
{{1,-1520,-1520,-1520}, 0},	{{1,1,1,-1520}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,269,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,268}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 233},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 234},	{{1,1,0,0}, 0},
{{1,1,1,1}, 236},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 237},	{{0,257,0,0}, 0},	{{0,0,0,260}, 0},
{{0,0,0,261}, 0},	{{0,0,261,0}, 0},	{{0,0,0,261}, 0},
{{0,0,0,262}, 0},	{{0,0,0,262}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 189},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 178},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,255}, 0},	{{0,0,0,256}, 0},	{{1,1,1,1}, 0},
{{0,0,0,255}, 0},	{{-8040,-8040,-8040,255}, 0},	{{1,1,1,1}, 0},
{{-8043,-8043,-8043,254}, 0},	{{-8089,-8089,-8089,254}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,261,0}, 0},	{{0,0,261,0}, 0},
{{0,0,0,261}, 0},	{{0,0,0,261}, 0},	{{0,0,0,268}, 0},
{{0,0,0,268}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,263}, 0},	{{0,0,0,263}, 0},	{{0,0,0,266}, 0},
{{0,0,0,266}, 0},	{{0,0,0,266}, 0},	{{0,0,0,266}, 0},
{{0,0,0,266}, 0},	{{0,0,0,266}, 0},	{{0,0,0,267}, 0},
{{0,0,0,267}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 132},
{{0,0,0,267}, 0},	{{0,0,0,269}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 128},	{{0,0,0,274}, 0},	{{0,0,0,276}, 0},
{{1,0,-414,0}, 0},	{{-405,0,0,0}, 93},	{{0,0,0,274}, 0},
{{0,0,0,0}, 90},	{{1,0,-418,0}, 0},	{{0,0,0,0}, 93},
{{-1,0,0,0}, 0},	{{0,0,0,0}, 94},	{{1,0,0,0}, 0},
{{0,0,0,0}, 82},	{{0,0,0,267}, 0},	{{1,1,1,1}, 0},
{{0,0,0,266}, 0},	{{0,0,0,266}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,264,264,264}, 0},	{{1,0,269,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,269,0}, 0},	{{1,1,1,1}, 63},	{{0,0,0,268}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 62},	{{-1063,-1063,-1063,-1063}, 53},
{{1,1,1,1}, 0},	{{0,0,264,0}, 0},	{{-7224,0,264,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,258}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,254}, 0},
{{1,1,1,1}, 0},	{{0,0,0,255}, 0},	{{-1046,-1046,0,0}, 292},
{{1,1,0,0}, 0},	{{0,0,0,0}, 396},	{{0,0,0,252}, 0},
{{1,0,0,0}, 0},	{{0,0,251,0}, 0},	{{0,251,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,250}, 0},	{{0,0,0,255}, 0},
{{0,0,0,255}, 0},	{{0,0,0,255}, 0},	{{0,0,0,260}, 0},
{{0,0,0,265}, 0},	{{0,0,0,-4823}, 292},	{{0,0,0,266}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 381},	{{-617,-617,-617,-617}, 371},
{{0,0,0,263}, 0},	{{-1655,-1655,-1655,263}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,259}, 0},
{{0,262,0,0}, 0},	{{0,0,0,263}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,260,0}, 0},
{{0,0,0,0}, 428},	{{0,0,0,259}, 0},	{{0,0,0,259}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 425},	{{0,0,0,257}, 0},
{{1,1,1,1}, 0},	{{0,0,0,258}, 0},	{{0,0,0,258}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,257,0}, 0},
{{-1775,-1775,-1775,257}, 0},	{{0,0,0,258}, 0},	{{0,0,0,258}, 0},
{{0,0,0,0}, 413},	{{0,0,0,259}, 0},	{{0,0,0,259}, 0},
{{0,0,0,259}, 0},	{{0,0,0,261}, 0},	{{1,-880,-880,-880}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 299},	{{0,0,0,258}, 0},
{{1,-925,-925,-925}, 0},	{{-925,0,0,0}, 351},	{{0,0,0,256}, 0},
{{0,0,0,256}, 0},	{{0,0,0,0}, 364},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 361},
{{0,0,0,256}, 0},	{{0,0,0,256}, 0},	{{0,0,0,258}, 0},
{{0,0,0,258}, 0},	{{1,-673,-673,-673}, 0},	{{-673,0,0,0}, 351},
{{0,0,0,256}, 0},	{{0,0,0,256}, 0},	{{0,0,0,257}, 0},
{{0,0,0,257}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 342},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,241}, 0},
{{0,0,0,241}, 0},	{{0,0,0,241}, 336},	{{1,1,1,1}, 0},
{{0,0,0,240}, 0},	{{1,1,0,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 284},	{{1,0,0,0}, 0},	{{1,1,1,1}, 253},
{{1,1,1,1}, 0},	{{0,234,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,233}, 0},	{{0,0,0,233}, 0},	{{0,0,0,0}, 278},
{{0,0,0,232}, 0},	{{0,0,0,232}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 288},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,225}, 0},	{{0,0,0,225}, 0},
{{0,0,0,225}, 0},	{{-6399,0,225,0}, 0},	{{0,0,0,227}, 0},
{{0,0,0,227}, 0},	{{0,0,0,232}, 0},	{{0,0,0,232}, 0},
{{-8571,-8571,-8571,232}, 0},	{{0,0,0,241}, 0},	{{0,246,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-247,-247,-247,-247}, 0},	{{0,0,0,240}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 254},
{{0,0,0,246}, 0},	{{0,0,0,0}, 262},	{{1,1,1,1}, 0},
{{0,253,0,0}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 258},	{{0,0,0,250}, 0},	{{0,0,250,0}, 0},
{{0,0,0,250}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,246}, 0},	{{-267,-267,-267,-267}, 225},	{{0,0,0,245}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 238},	{{1,0,0,0}, 0},	{{0,0,0,240}, 0},
{{0,0,0,242}, 0},	{{0,0,0,0}, 232},	{{1,241,163,163}, 0},
{{-1546,-1546,-1546,241}, 0},	{{0,0,0,245}, 0},	{{0,0,0,245}, 0},
{{1,1,1,1}, 0},	{{0,0,0,252}, 0},	{{0,0,0,252}, 0},
{{0,0,0,252}, 0},	{{-8294,-8294,-8294,252}, 0},	{{-8296,-8296,-8296,252}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-9033,-9033,-9033,252}, 0},	{{0,0,0,252}, 0},	{{0,0,0,257}, 0},
{{0,0,0,259}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,252}, 0},
{{0,0,0,252}, 0},	{{0,0,0,252}, 0},	{{0,0,0,253}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 150},	{{0,249,0,0}, 0},	{{0,0,0,249}, 0},
{{0,0,0,249}, 0},	{{0,0,249,0}, 0},	{{0,0,0,249}, 0},
{{1,249,249,249}, 0},	{{-1383,-1383,249,-1383}, 0},	{{0,0,0,249}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,247,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 133},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 130},	{{1,0,0,0}, 0},
{{1,0,0,0}, 125},	{{0,0,0,0}, 126},	{{0,0,0,233}, 0},
{{0,0,0,244}, 0},	{{0,0,0,244}, 0},	{{0,0,0,244}, 0},
{{0,0,0,0}, 67},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 63},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{-267,-267,-267,-267}, 0},
{{0,0,0,232}, 0},	{{0,0,0,0}, 54},	{{0,0,0,231}, 0},
{{0,0,0,232}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 403},	{{0,0,0,229}, 0},	{{0,0,0,229}, 0},
{{0,0,0,229}, 0},	{{0,234,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,229}, 0},	{{0,0,229,0}, 0},
{{0,0,0,230}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,225}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,220}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,218}, 0},	{{0,0,0,219}, 0},	{{0,0,219,0}, 0},
{{1,-2657,-2657,-2657}, 0},	{{1,1,1,1}, 0},	{{-2657,-2657,217,-2657}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,214}, 0},	{{1,1,1,1}, 0},	{{0,0,213,0}, 0},
{{0,213,0,0}, 0},	{{0,0,0,0}, 429},	{{0,0,0,212}, 0},
{{0,0,0,213}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,212}, 0},	{{0,0,213,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 431},	{{0,0,0,0}, 422},	{{1,-2031,-2031,-2031}, 0},
{{-2031,-2031,-2031,214}, 0},	{{0,0,0,215}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 419},	{{0,0,0,212}, 0},
{{0,214,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 320},	{{0,0,0,212}, 0},	{{0,0,0,214}, 0},
{{0,0,0,214}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,209}, 0},	{{0,0,0,209}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,209,0,0}, 0},	{{0,0,0,219}, 0},
{{0,0,0,219}, 0},	{{0,0,0,219}, 0},	{{1,1,1,1}, 0},
{{0,0,0,219}, 0},	{{0,0,0,221}, 0},	{{0,0,0,221}, 0},
{{0,0,0,223}, 0},	{{0,0,0,223}, 0},	{{0,0,0,224}, 0},
{{0,0,0,224}, 0},	{{0,0,0,0}, 283},	{{0,0,0,223}, 0},
{{0,0,0,0}, 279},	{{0,0,0,0}, 277},	{{1,1,1,1}, 0},
{{0,0,0,220}, 0},	{{0,0,0,220}, 0},	{{0,0,0,220}, 0},
{{0,0,0,221}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,219}, 0},	{{0,0,0,0}, 270},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,217}, 0},	{{0,0,0,222}, 0},
{{0,0,0,222}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-8877,-8877,-8877,213}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,208}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,206,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,197}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,188}, 0},	{{0,0,0,0}, 261},	{{0,0,0,187}, 0},
{{0,0,0,188}, 0},	{{1,1,1,1}, 0},	{{0,188,0,0}, 0},
{{0,0,0,188}, 0},	{{0,0,0,188}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,186,0,0}, 0},	{{-77,1,-77,-77}, 0},
{{0,0,0,141}, 227},	{{1,1,1,186}, 0},	{{1,141,141,141}, 0},
{{1,0,1,0}, 224},	{{1,1,1,1}, 0},	{{0,184,0,0}, 0},
{{0,0,0,184}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,178}, 0},	{{0,0,0,179}, 0},	{{0,0,0,186}, 0},
{{0,0,0,187}, 0},	{{-8545,-8545,-8545,-8545}, 161},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-8547,-8547,-8547,177}, 0},
{{-9284,-9284,-9284,177}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,172}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,170}, 0},	{{0,0,0,170}, 0},	{{0,0,0,170}, 0},
{{0,0,0,170}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 152},
{{0,0,0,178}, 0},	{{0,0,0,0}, 148},	{{0,0,0,179}, 0},
{{-508,0,179,0}, 0},	{{0,0,0,0}, 140},	{{1,1,1,1}, 0},
{{0,0,177,0}, 0},	{{-1631,0,-1631,0}, 137},	{{0,0,0,176}, 0},
{{0,0,0,0}, 131},	{{1,158,158,158}, 0},	{{1,175,175,175}, 0},
{{1,158,1,158}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,175,175,175}, 0},	{{1,1,1,1}, 121},
{{0,0,0,174}, 0},	{{0,0,174,0}, 0},	{{0,0,0,0}, 85},
{{0,0,0,175}, 67},	{{0,0,0,175}, 0},	{{1,1,1,1}, 0},
{{0,174,0,0}, 0},	{{0,0,0,176}, 0},	{{0,0,176,0}, 0},
{{0,0,0,176}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,172}, 0},	{{0,0,0,0}, 412},	{{0,0,0,171}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 407},	{{0,169,0,0}, 0},
{{0,0,0,169}, 0},	{{0,0,0,169}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 390},	{{-483,0,167,0}, 0},	{{0,0,0,0}, 379},
{{0,166,0,0}, 0},	{{0,0,0,166}, 0},	{{0,0,0,0}, 374},
{{0,0,0,0}, 430},	{{1,0,0,0}, 0},	{{0,0,0,0}, 427},
{{1,0,0,0}, 0},	{{0,0,0,0}, 426},	{{1,0,0,0}, 0},
{{0,0,0,0}, 433},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,153}, 0},	{{1,-2244,1,-2244}, 0},	{{-2244,-2244,-2244,0}, 417},
{{0,0,0,151}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 322},	{{1,0,0,0}, 0},	{{0,0,0,0}, 321},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 319},
{{0,0,0,143}, 0},	{{0,0,0,143}, 0},	{{0,0,0,143}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 357},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,130}, 0},	{{0,0,0,130}, 0},
{{0,0,0,130}, 0},	{{1,-217,-217,-217}, 0},	{{0,0,0,1}, 351},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-139,0,-139,0}, 0},
{{0,0,0,134}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,134,0,0}, 0},	{{0,0,0,144}, 0},	{{1,1,1,1}, 0},
{{0,0,143,0}, 0},	{{0,0,0,143}, 0},	{{0,0,0,143}, 0},
{{0,0,0,0}, 281},	{{0,0,0,142}, 0},	{{0,0,0,144}, 0},
{{1,0,0,0}, 0},	{{0,144,0,0}, 0},	{{0,0,0,144}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,144,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 269},	{{0,0,0,138}, 0},
{{0,0,0,0}, 161},	{{-9089,-9089,-9089,138}, 0},	{{0,0,0,138}, 0},
{{0,138,0,0}, 0},	{{0,0,0,138}, 0},	{{0,0,0,138}, 0},
{{1,0,1,0}, 0},	{{0,0,0,137}, 0},	{{1,1,1,1}, 0},
{{0,138,0,0}, 0},	{{0,138,0,0}, 0},	{{0,0,0,139}, 0},
{{0,0,0,141}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 229},	{{1,-44,-44,-44}, 0},	{{-184,0,-184,0}, 226},
{{0,0,0,0}, 228},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 201},	{{1,1,1,1}, 0},	{{0,0,0,131}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,125}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 170},	{{0,0,0,0}, 162},	{{-8723,-8723,-8723,122}, 0},
{{-9460,-9460,-9460,122}, 0},	{{0,0,0,122}, 0},	{{0,0,122,0}, 0},
{{0,0,0,122}, 0},	{{0,0,0,124}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 121},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 149},	{{0,0,0,110}, 0},	{{0,0,0,0}, 141},
{{0,0,0,0}, 137},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-173,-173,-173,-173}, 0},
{{0,0,0,101}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,99,0}, 0},	{{0,0,0,0}, 68},	{{0,0,0,99}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,97}, 0},
{{0,0,0,97}, 0},	{{0,0,0,0}, 400},	{{1,1,1,1}, 0},
{{0,95,0,0}, 0},	{{0,0,0,95}, 0},	{{0,0,0,95}, 0},
{{0,0,0,0}, 408},	{{0,0,0,94}, 0},	{{0,0,0,94}, 0},
{{0,0,0,0}, 383},	{{0,0,0,0}, 380},	{{0,0,0,92}, 0},
{{0,0,0,93}, 0},	{{0,0,0,93}, 0},	{{0,0,0,93}, 0},
{{0,0,0,94}, 0},	{{0,0,0,95}, 346},	{{0,0,0,95}, 0},
{{0,0,95,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,86,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 350},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,73}, 0},	{{0,0,0,73}, 0},	{{0,0,0,0}, 339},
{{0,0,72,0}, 0},	{{0,0,0,0}, 163},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,69,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 272},	{{0,0,0,0}, 275},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 274},	{{0,0,0,0}, 271},	{{1,0,0,0}, 0},
{{0,0,0,0}, 266},	{{-9226,-9226,-9226,58}, 0},	{{0,0,0,58}, 0},
{{0,60,0,0}, 0},	{{0,0,0,60}, 0},	{{0,0,0,60}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 265},
{{0,0,57,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,57}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 217},
{{0,0,0,54}, 0},	{{1,1,1,1}, 0},	{{0,0,0,53}, 0},
{{0,0,0,53}, 0},	{{-8844,-8844,-8844,53}, 0},	{{-9581,-9581,-9581,53}, 0},
{{0,0,0,53}, 0},	{{0,0,0,53}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 114},	{{0,0,0,50}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,48,1,48}, 0},
{{1,-106,1,-106}, 0},	{{-106,-106,-106,-106}, 134},	{{0,0,0,47}, 0},
{{1,1,1,1}, 0},	{{0,0,46,0}, 0},	{{0,0,0,46}, 0},
{{0,0,0,46}, 0},	{{0,0,0,46}, 0},	{{0,0,0,0}, 394},
{{0,0,0,45}, 0},	{{0,0,0,45}, 0},	{{0,0,0,45}, 0},
{{0,0,0,45}, 0},	{{1,0,0,0}, 0},	{{0,0,0,44}, 0},
{{0,0,0,44}, 0},	{{0,0,0,0}, 420},	{{1,0,0,0}, 0},
{{0,0,0,0}, 366},	{{1,1,1,1}, 0},	{{0,0,0,41}, 0},
{{0,0,0,46}, 0},	{{0,0,0,46}, 0},	{{0,0,0,0}, 359},
{{0,0,0,0}, 352},	{{0,0,0,44}, 0},	{{0,0,0,44}, 0},
{{0,0,0,0}, 337},	{{0,0,0,0}, 287},	{{-9283,-9283,-9283,43}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 294},
{{0,0,0,40}, 0},	{{0,0,0,40}, 0},	{{0,0,0,40}, 0},
{{1,1,0,0}, 0},	{{0,0,0,39}, 0},	{{0,0,0,39}, 0},
{{0,39,0,0}, 0},	{{0,0,0,39}, 0},	{{0,0,0,39}, 0},
{{-8896,-8896,-8896,39}, 0},	{{-9633,-9633,-9633,39}, 0},	{{0,0,0,40}, 0},
{{0,0,0,40}, 0},	{{0,0,0,45}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 134},	{{0,0,0,46}, 0},	{{0,0,46,0}, 0},
{{0,0,46,0}, 0},	{{0,0,0,49}, 0},	{{0,0,0,49}, 0},
{{0,0,0,50}, 0},	{{0,0,0,50}, 0},	{{0,0,0,50}, 0},
{{0,0,0,51}, 0},	{{0,0,0,52}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 432},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 355},	{{0,0,0,49}, 0},	{{0,0,0,50}, 0},
{{0,0,0,50}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 341},
{{-9325,-9325,-9325,48}, 0},	{{0,0,0,49}, 0},	{{0,0,0,49}, 0},
{{0,0,0,50}, 0},	{{0,0,0,51}, 0},	{{0,0,0,51}, 0},
{{0,0,0,0}, 239},	{{0,0,0,50}, 0},	{{0,0,0,50}, 0},
{{-8934,-8934,-8934,50}, 0},	{{1,-8934,-8934,-8934}, 0},	{{-9671,-9671,0,0}, 160},
{{0,0,0,49}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,44}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,41}, 0},	{{0,0,0,42}, 0},
{{0,0,0,0}, 97},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 64},	{{0,0,0,37}, 0},
{{1,0,0,0}, 0},	{{0,0,0,36}, 0},	{{0,0,0,36}, 0},
{{0,0,36,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 405},
{{1,0,0,0}, 0},	{{0,0,0,0}, 404},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 375},	{{1,0,0,0}, 0},
{{0,0,0,0}, 362},	{{0,0,0,24}, 0},	{{0,0,0,25}, 0},
{{1,0,0,0}, 0},	{{-9372,-9372,0,0}, 160},	{{0,0,0,23}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 256},	{{1,0,0,0}, 0},
{{0,0,0,0}, 160},	{{0,0,0,19}, 0},	{{0,0,0,19}, 0},
{{0,0,0,0}, 181},	{{0,0,0,18}, 0},	{{1,-8983,-8983,-8983}, 0},
{{-8983,-8983,0,0}, 160},	{{0,0,16,0}, 0},	{{0,0,0,16}, 0},
{{1,1,1,1}, 0},	{{0,0,0,15}, 0},	{{0,0,0,23}, 0},
{{0,0,0,23}, 0},	{{0,0,0,0}, 10},	{{0,0,22,0}, 0},
{{0,0,0,0}, 409},	{{1,0,0,0}, 0},	{{0,0,0,0}, 356},
{{0,0,0,19}, 0},	{{0,0,0,19}, 0},	{{0,0,0,19}, 0},
{{0,0,19,0}, 0},	{{0,0,0,19}, 0},	{{0,0,0,0}, 115},
{{0,0,0,19}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,12}, 0},	{{0,0,0,12}, 0},	{{0,0,0,13}, 0},
{{0,0,0,0}, 411},	{{0,13,0,0}, 0},	{{0,0,0,13}, 0},
{{0,0,13,0}, 0},	{{0,0,0,13}, 0},	{{1,1,1,1}, 0},
{{0,0,0,12}, 0},	{{1,1,1,1}, 0},	{{0,0,20,0}, 0},
{{0,0,0,20}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 122},
{{1,0,0,0}, 0},	{{0,0,0,0}, 58},	{{0,0,0,0}, 343},
{{0,0,0,15}, 0},	{{0,0,0,19}, 0},	{{0,0,19,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 172},	{{0,0,0,0}, 116},	{{0,0,0,8}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,4,0}, 0},	{{0,0,5,0}, 0},
{{0,0,0,0}, 263},	{{0,0,0,4}, 0},	{{1,1,0,0}, 0},
{{0,0,0,3}, 0},	{{0,0,0,4}, 0},	{{0,0,0,5}, 0},
{{1,1,1,1}, 0},	{{0,0,0,4}, 0},	{{1,1,1,1}, 0},
{{0,0,0,3}, 0},	{{0,0,0,5}, 0},	{{0,0,0,5}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,3,0,0}, 0},
{{0,0,0,3}, 0},	{{0,0,0,3}, 0},	{{0,3,0,0}, 0},
{{0,0,0,3}, 0},	{{0,0,0,4}, 0},	{{0,0,0,0}, 264},
{{1,0,0,0}, 0},	{{0,0,0,0}, 144},	{{0,0,0,0}, 295},
};

static const attrib_rt_t idx_owl_attackpat[438] = {
{-1,0},	{61,0},	{104,0},	{36,0},
{60,0},	{299,0},	{292,0},	{293,6},
{25,0},	{49,8},	{379,0},	{105,0},
{106,11},	{15,0},	{119,0},	{84,0},
{83,0},	{20,0},	{315,0},	{227,18},
{266,0},	{180,0},	{251,0},	{252,22},
{254,0},	{267,0},	{69,0},	{240,0},
{110,27},	{31,0},	{54,0},	{279,0},
{278,31},	{237,32},	{238,33},	{85,0},
{105,35},	{106,36},	{81,0},	{80,38},
{80,0},	{280,0},	{281,0},	{260,0},
{258,43},	{259,0},	{258,0},	{271,0},
{270,47},	{258,48},	{247,0},	{246,50},
{5,0},	{246,0},	{363,0},	{74,32},
{237,55},	{238,56},	{340,0},	{265,0},
{290,0},	{229,0},	{199,0},	{129,0},
{130,0},	{37,0},	{330,0},	{229,66},
{331,0},	{64,0},	{62,0},	{282,0},
{1,0},	{51,0},	{52,73},	{118,0},
{43,75},	{41,76},	{42,77},	{0,0},
{44,76},	{41,80},	{42,81},	{58,0},
{55,83},	{57,0},	{55,0},	{223,0},
{224,87},	{59,0},	{114,0},	{298,0},
{156,0},	{184,0},	{186,0},	{41,75},
{42,95},	{355,0},	{225,41},	{226,98},
{282,42},	{144,0},	{231,101},	{320,0},
{231,88},	{297,0},	{295,105},	{296,106},
{294,107},	{197,0},	{198,109},	{231,0},
{231,19},	{289,0},	{301,0},	{360,0},
{356,0},	{86,0},	{307,0},	{300,0},
{38,0},	{73,0},	{234,0},	{50,0},
{45,0},	{6,0},	{4,0},	{24,0},
{12,0},	{256,0},	{264,0},	{123,0},
{248,0},	{189,0},	{56,0},	{201,0},
{109,0},	{116,0},	{283,0},	{153,0},
{398,0},	{398,132},	{200,0},	{353,0},
{316,0},	{176,0},	{100,0},	{255,0},
{358,0},	{18,0},	{53,0},	{23,0},
{257,0},	{93,0},	{95,0},	{92,0},
{96,0},	{242,156},	{242,0},	{241,0},
{378,0},	{9,0},	{13,161},	{13,0},
{89,0},	{275,0},	{276,165},	{273,166},
{277,167},	{16,0},	{76,0},	{121,0},
{346,0},	{63,0},	{88,0},	{26,0},
{27,0},	{28,0},	{158,0},	{30,0},
{385,0},	{333,0},	{124,0},	{113,182},
{111,0},	{63,182},	{113,185},	{99,0},
{125,0},	{350,0},	{215,0},	{380,0},
{11,0},	{245,0},	{70,0},	{284,0},
{253,195},	{87,0},	{169,0},	{167,198},
{168,0},	{17,0},	{212,0},	{381,0},
{94,0},	{273,0},	{101,205},	{102,206},
{90,0},	{164,0},	{177,0},	{244,0},
{239,0},	{214,190},	{191,0},	{243,0},
{120,0},	{354,0},	{165,0},	{82,0},
{192,0},	{183,0},	{166,0},	{47,0},
{46,223},	{33,0},	{46,0},	{135,0},
{400,0},	{335,0},	{154,0},	{137,0},
{208,0},	{138,0},	{327,0},	{19,0},
{157,0},	{68,0},	{182,0},	{397,0},
{230,0},	{285,0},	{286,241},	{170,0},
{98,0},	{98,205},	{193,0},	{175,0},
{140,0},	{143,248},	{10,0},	{187,0},
{151,0},	{145,0},	{8,0},	{133,230},
{48,0},	{321,230},	{218,0},	{134,0},
{213,0},	{337,0},	{326,0},	{372,0},
{373,0},	{362,0},	{7,0},	{305,0},
{306,267},	{348,0},	{368,0},	{375,0},
{347,0},	{34,0},	{35,0},	{394,0},
{149,0},	{385,276},	{386,0},	{390,0},
{392,0},	{390,280},	{272,0},	{209,0},
{75,0},	{148,0},	{317,0},	{384,0},
{146,0},	{366,0},	{211,0},	{210,290},
{32,0},	{334,0},	{332,0},	{361,0},
{97,0},	{72,0},	{262,0},	{262,297},
{274,0},	{132,0},	{219,0},	{220,302},
{221,0},	{222,304},	{399,0},	{287,0},
{250,0},	{273,308},	{228,0},	{185,0},
{141,0},	{308,0},	{309,313},	{39,0},
{40,315},	{312,305},	{312,0},	{389,0},
{345,0},	{393,0},	{388,0},	{179,0},
{139,0},	{302,0},	{160,0},	{161,0},
{71,0},	{383,0},	{382,329},	{171,0},
{235,0},	{236,332},	{107,0},	{108,334},
{29,0},	{336,0},	{344,0},	{323,0},
{233,0},	{216,0},	{217,0},	{159,0},
{112,0},	{174,0},	{122,0},	{318,0},
{181,0},	{178,0},	{136,0},	{142,0},
{131,0},	{172,0},	{143,0},	{371,0},
{396,0},	{395,0},	{324,0},	{322,358},
{150,0},	{365,0},	{359,0},	{207,0},
{367,0},	{21,0},	{204,0},	{77,0},
{78,367},	{79,0},	{3,0},	{126,0},
{249,0},	{313,0},	{190,0},	{349,0},
{311,0},	{310,376},	{65,0},	{325,0},
{33,373},	{328,0},	{329,0},	{328,382},
{117,376},	{310,384},	{232,0},	{22,0},
{103,0},	{188,0},	{357,0},	{351,0},
{261,0},	{155,0},	{263,0},	{303,0},
{304,395},	{261,393},	{163,0},	{342,0},
{196,0},	{288,0},	{269,0},	{206,0},
{202,0},	{203,0},	{343,0},	{128,0},
{338,0},	{205,0},	{314,0},	{291,0},
{352,0},	{370,0},	{67,0},	{162,0},
{173,0},	{369,0},	{377,0},	{376,418},
{66,0},	{268,0},	{115,0},	{195,0},
{127,0},	{339,0},	{341,0},	{152,0},
{387,0},	{391,0},	{147,0},	{364,0},
{374,0},	{319,0},	{14,0},	{2,434},
{91,0},	{194,0},	};

static dfa_rt_t dfa_owl_attackpat = {
 "owl_attackpat",
state_owl_attackpat,
idx_owl_attackpat};

struct pattern_db owl_attackpat_db = {
  -1,
  0,
  owl_attackpat
 ,& dfa_owl_attackpat
};
