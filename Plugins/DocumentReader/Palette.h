//
// Palette.h
//
// This file is part of PeerProject (peerproject.org) � 2008
// Portions Copyright Shareaza Development Team, 2002-2005.
// Originally Created by:	Rolandas Rudomanskis
//
// PeerProject is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 3
// of the License, or later version (at your option).
//
// PeerProject is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License 3.0
// along with PeerProject; if not, write to Free Software Foundation, Inc.
// 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA  (www.fsf.org)
//

#pragma once

void SetStdPalette(LPVOID pDestinationPalette, WORD wBitsPerSample)
{
	if ( pDestinationPalette == 0 ) return;
	switch ( wBitsPerSample )
	{
	case 8:
		{
			const BYTE pal256[1024] = {0,0,0,0,0,0,128,0,0,128,0,0,0,128,128,0,128,0,0,0,128,0,128,0,128,128,0,0,192,192,192,0,
			192,220,192,0,240,202,166,0,212,240,255,0,177,226,255,0,142,212,255,0,107,198,255,0,
			72,184,255,0,37,170,255,0,0,170,255,0,0,146,220,0,0,122,185,0,0,98,150,0,0,74,115,0,0,
			50,80,0,212,227,255,0,177,199,255,0,142,171,255,0,107,143,255,0,72,115,255,0,37,87,255,0,0,
			85,255,0,0,73,220,0,0,61,185,0,0,49,150,0,0,37,115,0,0,25,80,0,212,212,255,0,177,177,255,0,
			142,142,255,0,107,107,255,0,72,72,255,0,37,37,255,0,0,0,254,0,0,0,220,0,0,0,185,0,0,0,150,0,
			0,0,115,0,0,0,80,0,227,212,255,0,199,177,255,0,171,142,255,0,143,107,255,0,115,72,255,0,
			87,37,255,0,85,0,255,0,73,0,220,0,61,0,185,0,49,0,150,0,37,0,115,0,25,0,80,0,240,212,255,0,
			226,177,255,0,212,142,255,0,198,107,255,0,184,72,255,0,170,37,255,0,170,0,255,0,146,0,220,0,
			122,0,185,0,98,0,150,0,74,0,115,0,50,0,80,0,255,212,255,0,255,177,255,0,255,142,255,0,255,107,255,0,
			255,72,255,0,255,37,255,0,254,0,254,0,220,0,220,0,185,0,185,0,150,0,150,0,115,0,115,0,80,0,80,0,
			255,212,240,0,255,177,226,0,255,142,212,0,255,107,198,0,255,72,184,0,255,37,170,0,255,0,170,0,
			220,0,146,0,185,0,122,0,150,0,98,0,115,0,74,0,80,0,50,0,255,212,227,0,255,177,199,0,255,142,171,0,
			255,107,143,0,255,72,115,0,255,37,87,0,255,0,85,0,220,0,73,0,185,0,61,0,150,0,49,0,115,0,37,0,
			80,0,25,0,255,212,212,0,255,177,177,0,255,142,142,0,255,107,107,0,255,72,72,0,255,37,37,0,254,0,
			0,0,220,0,0,0,185,0,0,0,150,0,0,0,115,0,0,0,80,0,0,0,255,227,212,0,255,199,177,0,255,171,142,0,
			255,143,107,0,255,115,72,0,255,87,37,0,255,85,0,0,220,73,0,0,185,61,0,0,150,49,0,0,115,37,0,
			0,80,25,0,0,255,240,212,0,255,226,177,0,255,212,142,0,255,198,107,0,255,184,72,0,255,170,37,0,
			255,170,0,0,220,146,0,0,185,122,0,0,150,98,0,0,115,74,0,0,80,50,0,0,255,255,212,0,255,255,177,0,
			255,255,142,0,255,255,107,0,255,255,72,0,255,255,37,0,254,254,0,0,220,220,0,0,185,185,0,0,150,150,0,
			0,115,115,0,0,80,80,0,0,240,255,212,0,226,255,177,0,212,255,142,0,198,255,107,0,184,255,72,0,
			170,255,37,0,170,255,0,0,146,220,0,0,122,185,0,0,98,150,0,0,74,115,0,0,50,80,0,0,227,255,212,0,
			199,255,177,0,171,255,142,0,143,255,107,0,115,255,72,0,87,255,37,0,85,255,0,0,73,220,0,0,61,185,0,
			0,49,150,0,0,37,115,0,0,25,80,0,0,212,255,212,0,177,255,177,0,142,255,142,0,107,255,107,0,72,255,72,0,
			37,255,37,0,0,254,0,0,0,220,0,0,0,185,0,0,0,150,0,0,0,115,0,0,0,80,0,0,212,255,227,0,177,255,199,0,
			142,255,171,0,107,255,143,0,72,255,115,0,37,255,87,0,0,255,85,0,0,220,73,0,0,185,61,0,0,150,49,0,0,
			115,37,0,0,80,25,0,212,255,240,0,177,255,226,0,142,255,212,0,107,255,198,0,72,255,184,0,37,255,170,0,
			0,255,170,0,0,220,146,0,0,185,122,0,0,150,98,0,0,115,74,0,0,80,50,0,212,255,255,0,177,255,255,0,
			142,255,255,0,107,255,255,0,72,255,255,0,37,255,255,0,0,254,254,0,0,220,220,0,0,185,185,0,0,
			150,150,0,0,115,115,0,0,80,80,0,242,242,242,0,230,230,230,0,218,218,218,0,206,206,206,0,194,194,194,0,
			182,182,182,0,170,170,170,0,158,158,158,0,146,146,146,0,134,134,134,0,122,122,122,0,110,110,110,0,
			98,98,98,0,86,86,86,0,74,74,74,0,62,62,62,0,50,50,50,0,38,38,38,0,26,26,26,0,14,14,14,0,240,251,255,0,
			164,160,160,0,128,128,128,0,0,0,255,0,0,255,0,0,0,255,255,0,255,0,0,0,255,0,255,0,255,255,0,0,255,255,255,0};
			memcpy( pDestinationPalette, pal256, 1024 );
			break;
		}
	case 4:
		{
			const BYTE pal16[64]={0,0,0,0,0,0,128,0,0,128,0,0,0,128,128,0,128,0,0,0,128,0,128,0,128,128,0,0,192,192,192,0,
								128,128,128,0,0,0,255,0,0,255,0,0,0,255,255,0,255,0,0,0,255,0,255,0,255,255,0,0,255,255,255,0};

			memcpy( pDestinationPalette, pal16, 64 );
			break;
		}
	case 2:
		{
			const BYTE pal2[]={0,0,0,0,255,255,255,0};
			memcpy( pDestinationPalette, pal2, 8 );
			break;
		}
	}
	return;
}

void SetGrayPalette(RGBQUAD* pal, WORD wBitsPerSample)
{
	if ( wBitsPerSample == NULL ) return;

	DWORD biClrUsed = ( 1 << wBitsPerSample );
	for ( ULONG i = 0 ; i < biClrUsed ; i++ )
		pal[ i ].rgbBlue = pal[ i ].rgbGreen = pal[ i ].rgbRed = 
		(BYTE)( i * ( 255 / ( biClrUsed - 1 ) ) );
}