#ifndef COMPRESS_H
#define COMPRESS_H

uint32_t compressRLE(u16 **dst, u16 *srcD, uint32_t srcS);
uint32_t decompressRLE(u16 *dst, u16 *src, uint32_t dstS);

#endif
