/*
 * Contains content and surface constants that are used for a description of
 * brush material.
 *
 * Contents flags are separate bits so a brush can contribute multiple content
 * bits.
 *
 * The file is shared between ET and q3map2 so be very careful with any
 * changes here.
 */

#ifndef __SURFACEFLAGS_H__
#define __SURFACEFLAGS_H__

#define	CONTENTS_SOLID				0x00000001	// solid content
#define	CONTENTS_LIGHTGRID			0x00000004
#define	CONTENTS_LAVA				0x00000008
#define	CONTENTS_SLIME				0x00000010
#define	CONTENTS_WATER				0x00000020
#define	CONTENTS_FOG				0x00000040
#define	CONTENTS_MISSILECLIP		0x00000080
#define CONTENTS_ITEM				0x00000100
#define CONTENTS_MOVER				0x00004000
#define	CONTENTS_AREAPORTAL			0x00008000
#define	CONTENTS_PLAYERCLIP			0x00010000
#define	CONTENTS_MONSTERCLIP		0x00020000
#define	CONTENTS_TELEPORTER			0x00040000
#define	CONTENTS_JUMPPAD			0x00080000
#define CONTENTS_NOSAVE				0x00100000	// CONTENTS_CLUSTERPORTAL
#define CONTENTS_NOSAVERESET		0x00200000	// TJMod special content, position saves done in this area aren't reseted by starttimer entity, this was originally CONTENTS_DONOTENTER (AI help content) so this contents flag can be set with surfaceparm donotenter...
#define CONTENTS_DONOTENTER_LARGE	0x00400000	// AI help content // CONTENTS_DONOTENTER_LARGE
#define	CONTENTS_ORIGIN				0x01000000	// removed before bsping an entity
#define	CONTENTS_BODY				0x02000000	// should never be on a brush, only in game
#define	CONTENTS_CORPSE				0x04000000	// player's corpse
#define	CONTENTS_DETAIL				0x08000000	// brushes not used for the bsp
#define	CONTENTS_STRUCTURAL			0x10000000	// brushes used for the bsp
#define	CONTENTS_TRANSLUCENT		0x20000000	// don't consume surface fragments inside
#define	CONTENTS_TRIGGER			0x40000000
#define	CONTENTS_NODROP				0x80000000	// don't leave bodies or items (death fog, lava)

#define	SURF_NODAMAGE				0x00000001	// never give falling damage
#define	SURF_SLICK					0x00000002	// effects game physics
#define	SURF_SKY					0x00000004	// lighting from environment map
#define	SURF_LADDER					0x00000008
#define	SURF_NOIMPACT				0x00000010	// don't make missile explosions
#define	SURF_NOMARKS				0x00000020	// don't leave missile marks
#define SURF_SPLASH					0x00000040
#define	SURF_NODRAW					0x00000080	// don't generate a drawsurface at all
#define	SURF_HINT					0x00000100	// make a primary bsp splitter
#define	SURF_SKIP					0x00000200	// completely ignore, allowing non-closed brushes
#define	SURF_NOLIGHTMAP				0x00000400	// surface doesn't need a lightmap
#define	SURF_POINTLIGHT				0x00000800	// generate lighting info at vertexes
#define	SURF_METAL  				0x00001000	// clanking footsteps
#define	SURF_NOSTEPS				0x00002000	// no footstep sounds
#define	SURF_NONSOLID				0x00004000	// don't collide against curves with this set
#define SURF_LIGHTFILTER			0x00008000	// act as a light filter during q3map -light
#define	SURF_ALPHASHADOW			0x00010000	// do per-pixel light shadow casting in q3map
#define	SURF_NODLIGHT				0x00020000	// don't dlight even if solid (solid lava, skies)
#define	SURF_WOOD					0x00040000
#define	SURF_GRASS					0x00080000
#define SURF_GRAVEL					0x00100000
#define SURF_GLASS					0x00200000
#define SURF_SNOW					0x00400000
#define SURF_ROOF					0x00800000
#define	SURF_RUBBLE					0x01000000
#define	SURF_CARPET					0x02000000
#define SURF_MONSTERSLICK			0x04000000	// slick surf that only affects ai's
#define SURF_MONSLICK_W				0x08000000
#define SURF_MONSLICK_N				0x10000000
#define SURF_MONSLICK_E				0x20000000
#define SURF_MONSLICK_S				0x40000000
#define SURF_LANDMINE				0x80000000	// allow placing landmines

#endif // __SURFACEFLAGS_H__

