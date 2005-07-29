/* $Id: */

#include "stdafx.h"
#include "openttd.h"
#include "rail.h"
#include "table/sprites.h"

/** @file railtypes.c
 * All the railtype-specific information is stored here.
 */

/** Global Railtype definition
 */
RailtypeInfo railtypes[RAILTYPE_END] = {
	{
		{
			SPR_RAIL_TRACK_Y,
			SPR_RAIL_TRACK_N_S,
			SPR_RAIL_TRACK_BASE,
			SPR_RAIL_SINGLE_Y,
			SPR_RAIL_SINGLE_X,
			SPR_RAIL_SINGLE_NORTH,
			SPR_RAIL_SINGLE_SOUTH,
			SPR_RAIL_SINGLE_EAST,
			SPR_RAIL_SINGLE_WEST
		},
		SPR_RAIL_SNOW_OFFSET,
		(1 << RAILTYPE_RAIL),
	},
	{
		{
			SPR_MONO_TRACK_Y,
			SPR_MONO_TRACK_N_S,
			SPR_MONO_TRACK_BASE,
			SPR_MONO_SINGLE_Y,
			SPR_MONO_SINGLE_X,
			SPR_MONO_SINGLE_NORTH,
			SPR_MONO_SINGLE_SOUTH,
			SPR_MONO_SINGLE_EAST,
			SPR_MONO_SINGLE_WEST
		},
		SPR_MONO_SNOW_OFFSET,
		(1 << RAILTYPE_MONO),
	},
	{
		{
			SPR_MGLV_TRACK_Y,
			SPR_MGLV_TRACK_N_S,
			SPR_MGLV_TRACK_BASE,
			SPR_MGLV_SINGLE_Y,
			SPR_MGLV_SINGLE_X,
			SPR_MGLV_SINGLE_NORTH,
			SPR_MGLV_SINGLE_SOUTH,
			SPR_MGLV_SINGLE_EAST,
			SPR_MGLV_SINGLE_WEST
		},
		SPR_MGLV_SNOW_OFFSET,
		(1 << RAILTYPE_MAGLEV),
	},
};

