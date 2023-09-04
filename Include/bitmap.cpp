#include "bitmap.h"

Bitmap::Bitmap() {
    for (int i = 0; i < LOGI_LED_BITMAP_SIZE; i++) {
        bitmap[i] = 0x00;
    }
}

void Bitmap::clear() {
    for (int i = 0; i < LOGI_LED_BITMAP_SIZE; i++) {
        bitmap[i] = 0x00;
    }
}

void Bitmap::set(unsigned char loc, unsigned char bit) {
    bitmap[loc] = bit;
}

void Bitmap::set(unsigned char loc[], unsigned char bit) {
    int size = sizeof(loc);
    for (int i = 0; i < size; i++) {
        bitmap[loc[i]] = bit;
    }
}

unsigned char* Bitmap::get() {
    return bitmap;
}