#pragma once
#include "LogitechLEDLib.h"

#ifndef BITMAP_H
#define BITMAP_H

class Bitmap {
private:
    unsigned char bitmap[LOGI_LED_BITMAP_SIZE];

public:
    void clear();
    void set(unsigned char loc, unsigned char bit);
    void set(unsigned char loc[], unsigned char bit);
    unsigned char* get();
};
#endif // !BITMAP_H