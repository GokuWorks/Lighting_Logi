#include "bitmap.h"

unsigned char bitmap[LOGI_LED_BITMAP_SIZE];

void BuildBitmap() {
    for (int i = 0; i < LOGI_LED_BITMAP_SIZE; i++)
    {
        bitmap[i] = 0x00;
    }
    bitmap[3] = 0xff;
    bitmap[1] = 0xff;
}