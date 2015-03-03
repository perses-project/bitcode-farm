/* openssl dhparam -C -2 1024 */
#ifndef HEADER_DH_H
#include <openssl/dh.h>
#endif
static DH *get_dh1024()
	{
	static unsigned char dh1024_p[]={
		0x85,0x08,0xFF,0x6C,0xC1,0x0C,0x23,0x55,0xC5,0xF8,0x3D,0x47,
		0x6F,0x23,0x36,0xDA,0x98,0xF3,0xE4,0x56,0xCD,0xA0,0xF3,0x02,
		0x18,0xB0,0xCB,0xD2,0x92,0x4B,0xDC,0x76,0x2B,0x24,0x2B,0x20,
		0xD9,0x6D,0x5B,0x59,0xC8,0x04,0xD1,0x67,0xFA,0x53,0x5D,0x46,
		0xA9,0x3A,0x62,0x72,0x1D,0xE6,0x58,0x20,0xD7,0x60,0xF0,0xAD,
		0xCE,0x52,0xD5,0x7B,0x21,0x80,0x5A,0x18,0x78,0x86,0x17,0xD5,
		0xE7,0xEE,0x7D,0xC7,0x35,0xEB,0x4D,0xC1,0x4D,0x47,0x2A,0x89,
		0x3D,0xB1,0x70,0x41,0xCE,0x04,0x27,0xDB,0x34,0x6D,0xA3,0x0E,
		0x76,0xE6,0x56,0xF3,0x79,0x0B,0x95,0x59,0x97,0x4F,0x24,0x06,
		0xF4,0xB8,0xB7,0x5B,0xEF,0x7E,0x06,0x43,0x2A,0x8E,0x33,0x69,
		0x71,0x65,0x35,0xBF,0xCB,0xCD,0xB0,0x5B,
		};
	static unsigned char dh1024_g[]={
		0x02,
		};
	DH *dh;

	if ((dh=DH_new()) == NULL) return(NULL);
	dh->p=BN_bin2bn(dh1024_p,sizeof(dh1024_p),NULL);
	dh->g=BN_bin2bn(dh1024_g,sizeof(dh1024_g),NULL);
	if ((dh->p == NULL) || (dh->g == NULL))
		{ DH_free(dh); return(NULL); }
	return(dh);
	}
/*
-----BEGIN DH PARAMETERS-----
MIGHAoGBAIUI/2zBDCNVxfg9R28jNtqY8+RWzaDzAhiwy9KSS9x2KyQrINltW1nI
BNFn+lNdRqk6YnId5lgg12Dwrc5S1XshgFoYeIYX1efufcc1603BTUcqiT2xcEHO
BCfbNG2jDnbmVvN5C5VZl08kBvS4t1vvfgZDKo4zaXFlNb/LzbBbAgEC
-----END DH PARAMETERS-----
*/
