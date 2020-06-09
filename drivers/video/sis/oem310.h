UCHAR SiS310_CRT2DelayCompensation1 = 0x4;	/* 301A */

UCHAR SiS310_LCDDelayCompensation1[] = { 
	0x0, 0x0, 0x0, 0xb, 0xb, 0xb, 0x8, 0x8, 
	0x8, 0x8, 0x8, 0x8, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0 
};
	
UCHAR SiS310_TVDelayCompensation1[] = { 0x2, 0x2, 0x2, 0x2, 0x8, 0xb };
UCHAR SiS310_CRT2DelayCompensation2 = 0xC;	/* 301B */
UCHAR SiS310_LCDDelayCompensation2[] = {
	0x0, 0x0, 0x0, 0x0C, 0x0C, 0x0C, 0x0C, 
	0x0C, 0x0C, 0x8, 0x8, 0x8, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
};

UCHAR SiS310_TVDelayCompensation2[] = { 0x3, 0x3, 0x3, 0x3, 0x8, 0xb };

UCHAR SiS310_TVAntiFlick1[3][2] = {
	{0x4, 0x0},
	{0x4, 0x8},
	{0x0, 0x0}
};

UCHAR SiS310_TVEdge1[3][2] = {
	{0x0, 0x4},
	{0x0, 0x4},
	{0x0, 0x0}
};

UCHAR SiS310_TVYFilter1[3][8][4] = {
	{
	 {0x0, 0xf4, 0x10, 0x38},
	 {0x0, 0xf4, 0x10, 0x38},
	 {0xeb, 0x4, 0x25, 0x18},
	 {0xf7, 0x6, 0x19, 0x14},
	 {0x0, 0xf4, 0x10, 0x38},
	 {0xeb, 0x4, 0x25, 0x18},
	 {0xee, 0xc, 0x22, 0x8},
	 {0xeb, 0x15, 0x25, 0xf6}
	 }
	,
	{
	 {0x0, 0xf4, 0x10, 0x38},
	 {0x0, 0xf4, 0x10, 0x38},
	 {0xf1, 0xf7, 0x1f, 0x32},
	 {0xf3, 0x0, 0x1d, 0x20},
	 {0x0, 0xf4, 0x10, 0x38},
	 {0xf1, 0xf7, 0x1f, 0x32},
	 {0xf3, 0x0, 0x1d, 0x20},
	 {0xfc, 0xfb, 0x14, 0x2a}
	}
	,
	{
	 {0x0, 0x0, 0x0, 0x0},
	 {0x0, 0xf4, 0x10, 0x38},
	 {0x0, 0xf4, 0x10, 0x38},
	 {0xeb, 0x4, 0x25, 0x18},
	 {0xf7, 0x6, 0x19, 0x14},
	 {0x0, 0xf4, 0x10, 0x38},
	 {0xeb, 0x4, 0x25, 0x18},
	 {0xee, 0xc, 0x22, 0x8}
	}
};

/*301b*/
UCHAR SiS310_TVYFilter2[3][9][7] = {
	{
	 {0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	 {0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	 {0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	 {0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	 {0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	 {0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	 {0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	 {0x01, 0x01, 0xFC, 0xF8, 0x08, 0x26, 0x38},
	 {0xFF, 0xFF, 0xFC, 0x00, 0x0F, 0x22, 0x28}
	 }
	,
	{
	 {0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	 {0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	 {0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	 {0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	 {0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	 {0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	 {0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	 {0x01, 0x01, 0xFC, 0xF8, 0x08, 0x26, 0x38},
	 {0xFF, 0xFF, 0xFC, 0x00, 0x0F, 0x22, 0x28}
	}
	,
	{

	 {0x0, 0x0, 0x0, 0xF4, 0xFF, 0x1C, 0x22},
	 {0x0, 0x0, 0x0, 0xF4, 0xFF, 0x1C, 0x22},
	 {0x0, 0x0, 0x0, 0xF4, 0xFF, 0x1C, 0x22},
	 {0x0, 0x0, 0x0, 0xF4, 0xFF, 0x1C, 0x22},
	 {0x0, 0x0, 0x0, 0xF4, 0xFF, 0x1C, 0x22},
	 {0x0, 0x0, 0x0, 0xF4, 0xFF, 0x1C, 0x22},
	 {0x0, 0x0, 0x0, 0xF4, 0xFF, 0x1C, 0x22},
	 {0x0, 0x0, 0x0, 0xF4, 0xFF, 0x1C, 0x22}
	}
};
/*end 301b*/
/*add PALMN*/

UCHAR SiS310_PALMFilter[17][4] = {
	{0x00, 0xf4, 0x10, 0x38},
	{0x00, 0xf4, 0x10, 0x38},
	{0xeb, 0x04, 0x10, 0x18},
	{0xf7, 0x06, 0x19, 0x14},
	{0x00, 0xf4, 0x10, 0x38},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x15, 0x25, 0xf6},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xff, 0xff, 0xff, 0xff}
};

UCHAR SiS310_PALNFilter[17][4] = {
	{0x00, 0xf4, 0x10, 0x38},
	{0x00, 0xf4, 0x10, 0x38},
	{0xeb, 0x04, 0x10, 0x18},
	{0xf7, 0x06, 0x19, 0x14},
	{0x00, 0xf4, 0x10, 0x38},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x15, 0x25, 0xf6},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xeb, 0x04, 0x25, 0x18},
	{0xff, 0xff, 0xff, 0xff}
};

UCHAR SiS310_PALMFilter2[9][7] = {
	{0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	{0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	{0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	{0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	{0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	{0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	{0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	{0x01, 0x01, 0xFC, 0xF8, 0x08, 0x26, 0x38},
	{0xFF, 0xFF, 0xFC, 0x00, 0x0F, 0x22, 0x28}
};

UCHAR SiS310_PALNFilter2[9][7] = {
	{0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	{0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	{0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	{0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	{0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	{0xFF, 0x03, 0x02, 0xF6, 0xFC, 0x27, 0x46},
	{0x01, 0x02, 0xFE, 0xF7, 0x03, 0x27, 0x3C},
	{0x01, 0x01, 0xFC, 0xF8, 0x08, 0x26, 0x38},
	{0xFF, 0xFF, 0xFC, 0x00, 0x0F, 0x22, 0x28}
};

/*end PALMN*/
UCHAR SiS310_TVPhaseIncr1[3][2][4] = {
	{
	 {0x21, 0xed, 0x8a, 0x8},
	 {0x21, 0xed, 0x8a, 0x8}
	 }
	,
	{
	 {0x2a, 0x5, 0xd3, 0x0},
	 {0x2a, 0x5, 0xd3, 0x0}
	 }
	,
	{
	 {0x2a, 0x5, 0xd3, 0x0},
	 {0x2a, 0x5, 0xd3, 0x0}
	 }
};

UCHAR SiS310_TVPhaseIncr2[3][2][4] = {
	{
	 {0x21, 0xF0, 0x7b, 0xd6},
	 {0x21, 0xF0, 0x7b, 0xd6}
	 }
	,
	{
	 {0x2a, 0x09, 0x86, 0xe9},
	 {0x2a, 0x09, 0x86, 0xe9}
	 }
	,
	{
	 {0x2a, 0x5, 0xd3, 0x0},
	 {0x2a, 0x5, 0xd3, 0x0}
	 }
};
