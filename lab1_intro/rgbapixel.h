/**
 * @file rgbapixel.h
 * Definition of the RGBAPixel class for the EasyPNG library.
 *
 * @author Chase Geigle
 * @author Anna LaValle
 * @date Created: Spring 2012
 * @date Modified: Spring 2025
 */

#ifndef RGPAPIXEL_H
#define RGPAPIXEL_H

#include <stdint.h>

// Your code here
class RGBAPixel
{
    public:
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t alpha;
    
    //Constructor
    RGBAPixel();
    RGBAPixel(uint8_t _r, uint8_t _g, uint8_t _b);
};

#endif
