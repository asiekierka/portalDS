#ifndef COMPRESS_H
#define COMPRESS_H

u32 compressRLE(u16 **dst, u16 *srcD, u32 srcS);
u32 decompressRLE(u16 *dst, u16 *src, u32 dstS);

#endif
