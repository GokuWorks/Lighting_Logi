#include "bitmap.h"

void Bitmap::clear() {
    for (int i = 0; i < LOGI_LED_BITMAP_SIZE; i++) {
        bitmap[i] = 0x00;
    }
}

void Bitmap::set(unsigned char loc, unsigned char bit) {
    bitmap[loc] = bit;
}

void Bitmap::set(unsigned char loc[], unsigned char bit) {
    int size = *(&loc + 1) - loc;
    for (int i = 0; i < size; i++) {
        bitmap[loc[i]] = bit; //TODO: FIX
    }
}

unsigned char* Bitmap::get() {
    return bitmap;
}