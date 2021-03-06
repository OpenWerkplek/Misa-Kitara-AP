#ifndef __LCDFRAMEBUFFER_H__
#define __LCDFRAMEBUFFER_H__

#ifdef __cplusplus
extern "C"
{
#endif

void SetLcdFrameBuffer(unsigned long* pFrame);
void SetLcdFlip(unsigned char flip);
unsigned char GetLcdFlip();

#ifdef __cplusplus
}
#endif

#endif // __LCDFRAMEBUFFER_H__

