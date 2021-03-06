#include "gfx/legato/generated/le_gen_assets.h"

/*********************************
 * Legato Font Asset
 * Name:         Arial_22
 * Height:       22
 * Baseline:     16
 * Style:        Antialias
 * Glyph Count:  16
 * Range Count:  12
 * Glyph Ranges: 0x20
                 0x2E
                 0x47
                 0x4D
                 0x52
                 0x61
                 0x64-0x66
                 0x69
                 0x6E-0x6F
                 0x72
                 0x74-0x75
                 0x79
 *********************************/
/*********************************
 * font glyph kerning table description
 *
 * unsigned int - number of glyphs
 * for each glyph:
 *     unsigned short - codepoint         * the glyph's codepoint
 *     short          - width             * the glyph's width in pixels
 *     short          - height            * the glyph's height in pixels
 *     short          - advance           * the glyph's advance value in pixels
 *     short          - bearingX          * the glyph's bearing value in pixels on the X axis
 *     short          - bearingY          * the glyph's bearing value in pixels on the Y axis
 *     unsigned short - flags             * status flags for this glyph
 *     unsigned short - data row width    * the size of a row of glyph data in bytes
 *     unsigned int   - data table offset * the offset into the corresponding font data table
 ********************************/
const uint8_t Arial_22_glyphs[324] =
{
    0x10,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2E,0x00,0x04,0x00,0x03,0x00,0x06,0x00,
    0x01,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x47,0x00,0x0E,0x00,
    0x10,0x00,0x10,0x00,0x01,0x00,0x10,0x00,0x00,0x00,0x0E,0x00,0x0C,0x00,0x00,0x00,
    0x4D,0x00,0x10,0x00,0x10,0x00,0x14,0x00,0x02,0x00,0x10,0x00,0x00,0x00,0x10,0x00,
    0xEC,0x00,0x00,0x00,0x52,0x00,0x0C,0x00,0x10,0x00,0x0E,0x00,0x02,0x00,0x10,0x00,
    0x00,0x00,0x0C,0x00,0xEC,0x01,0x00,0x00,0x61,0x00,0x0A,0x00,0x0C,0x00,0x0C,0x00,
    0x01,0x00,0x0C,0x00,0x00,0x00,0x0A,0x00,0xAC,0x02,0x00,0x00,0x64,0x00,0x0B,0x00,
    0x10,0x00,0x0E,0x00,0x01,0x00,0x10,0x00,0x00,0x00,0x0B,0x00,0x24,0x03,0x00,0x00,
    0x65,0x00,0x0B,0x00,0x0C,0x00,0x0C,0x00,0x01,0x00,0x0C,0x00,0x00,0x00,0x0B,0x00,
    0xD4,0x03,0x00,0x00,0x66,0x00,0x09,0x00,0x10,0x00,0x08,0x00,0x00,0x00,0x10,0x00,
    0x00,0x00,0x09,0x00,0x58,0x04,0x00,0x00,0x69,0x00,0x03,0x00,0x10,0x00,0x06,0x00,
    0x01,0x00,0x10,0x00,0x00,0x00,0x03,0x00,0xE8,0x04,0x00,0x00,0x6E,0x00,0x0B,0x00,
    0x0C,0x00,0x0E,0x00,0x01,0x00,0x0C,0x00,0x00,0x00,0x0B,0x00,0x18,0x05,0x00,0x00,
    0x6F,0x00,0x0C,0x00,0x0C,0x00,0x0D,0x00,0x01,0x00,0x0C,0x00,0x00,0x00,0x0C,0x00,
    0x9C,0x05,0x00,0x00,0x72,0x00,0x08,0x00,0x0C,0x00,0x09,0x00,0x01,0x00,0x0C,0x00,
    0x00,0x00,0x08,0x00,0x2C,0x06,0x00,0x00,0x74,0x00,0x08,0x00,0x0F,0x00,0x08,0x00,
    0x00,0x00,0x0F,0x00,0x00,0x00,0x08,0x00,0x8C,0x06,0x00,0x00,0x75,0x00,0x0B,0x00,
    0x0C,0x00,0x0E,0x00,0x01,0x00,0x0C,0x00,0x00,0x00,0x0B,0x00,0x04,0x07,0x00,0x00,
    0x79,0x00,0x0C,0x00,0x11,0x00,0x0B,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x0C,0x00,
    0x88,0x07,0x00,0x00,
};

/*********************************
 * raw font glyph data
 ********************************/
const uint8_t Arial_22_data[2132] =
{
    0x23,0xD9,0xCB,0x11,0x63,0xFF,0xFF,0x45,0x25,0xE4,0xD5,0x12,0x00,0x00,0x00,0x00,
    0x28,0x87,0xCA,0xE5,0xF9,0xE7,0xCF,0x9D,0x54,0x06,0x00,0x00,0x07,0x92,0xFF,0xFF,
    0xDD,0xAE,0xA0,0xB4,0xE8,0xFF,0xE0,0x03,0x00,0x02,0xBC,0xFF,0xD3,0x3C,0x00,0x00,
    0x00,0x00,0x01,0x40,0x48,0x00,0x00,0x7C,0xFF,0xD2,0x0E,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x08,0xEF,0xFF,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x53,0xFF,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x80,0xFF,0x8A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9B,0xFF,
    0x70,0x00,0x00,0x00,0x00,0x07,0x9C,0x9C,0x9C,0x9C,0x9C,0x3C,0x9C,0xFF,0x73,0x00,
    0x00,0x00,0x00,0x0C,0xFF,0xFF,0xFF,0xFF,0xFF,0x64,0x85,0xFF,0x8A,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x98,0xFF,0x64,0x5D,0xFF,0xC5,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x98,0xFF,0x64,0x12,0xFB,0xFD,0x25,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x98,0xFF,0x64,0x00,0xA0,0xFF,0xBC,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x98,
    0xFF,0x64,0x00,0x11,0xE3,0xFF,0xBF,0x2D,0x00,0x00,0x00,0x00,0x00,0x98,0xFF,0x64,
    0x00,0x00,0x1E,0xCD,0xFF,0xFF,0xD3,0xB1,0x9E,0xA9,0xCF,0xFC,0xFF,0x64,0x00,0x00,
    0x00,0x05,0x53,0xB1,0xDB,0xF6,0xFC,0xF1,0xDB,0xAD,0x73,0x1D,0xDC,0xFF,0xFF,0x3F,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0xFF,0xFF,0xD0,0xDC,0xFF,0xFF,0x9D,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA5,0xFF,0xFF,0xD0,0xDC,0xDD,0xEA,0xF2,
    0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0xF6,0xC4,0xFF,0xD0,0xDC,0xE3,0x91,0xFF,
    0x5A,0x00,0x00,0x00,0x00,0x00,0x00,0x66,0xFF,0x72,0xFF,0xD0,0xDC,0xEA,0x32,0xFF,
    0xB9,0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0xF4,0x27,0xFF,0xD0,0xDC,0xEF,0x00,0xD3,
    0xFC,0x1A,0x00,0x00,0x00,0x00,0x27,0xFF,0xA0,0x20,0xFF,0xD0,0xDC,0xF3,0x00,0x75,
    0xFF,0x76,0x00,0x00,0x00,0x00,0x87,0xFF,0x40,0x23,0xFF,0xD0,0xDC,0xF4,0x00,0x19,
    0xFC,0xD4,0x00,0x00,0x00,0x02,0xE4,0xDE,0x01,0x24,0xFF,0xD0,0xDC,0xF4,0x00,0x00,
    0xB7,0xFF,0x33,0x00,0x00,0x48,0xFF,0x80,0x00,0x24,0xFF,0xD0,0xDC,0xF4,0x00,0x00,
    0x58,0xFF,0x92,0x00,0x00,0xA8,0xFE,0x21,0x00,0x24,0xFF,0xD0,0xDC,0xF4,0x00,0x00,
    0x08,0xF0,0xEB,0x05,0x10,0xF8,0xC0,0x00,0x00,0x24,0xFF,0xD0,0xDC,0xF4,0x00,0x00,
    0x00,0x9B,0xFF,0x4F,0x69,0xFF,0x60,0x00,0x00,0x24,0xFF,0xD0,0xDC,0xF4,0x00,0x00,
    0x00,0x3C,0xFF,0xAE,0xCA,0xF4,0x0C,0x00,0x00,0x24,0xFF,0xD0,0xDC,0xF4,0x00,0x00,
    0x00,0x00,0xDC,0xFC,0xFF,0xA0,0x00,0x00,0x00,0x24,0xFF,0xD0,0xDC,0xF4,0x00,0x00,
    0x00,0x00,0x7E,0xFF,0xFF,0x40,0x00,0x00,0x00,0x24,0xFF,0xD0,0xDC,0xF4,0x00,0x00,
    0x00,0x00,0x20,0xFE,0xDE,0x01,0x00,0x00,0x00,0x24,0xFF,0xD0,0xDC,0xFF,0xFF,0xFF,
    0xFD,0xF0,0xCD,0x85,0x15,0x00,0x00,0x00,0xDC,0xFF,0xA6,0x9C,0x9E,0xB3,0xED,0xFF,
    0xE9,0x28,0x00,0x00,0xDC,0xFF,0x1C,0x00,0x00,0x00,0x08,0xAC,0xFF,0xBF,0x00,0x00,
    0xDC,0xFF,0x1C,0x00,0x00,0x00,0x00,0x14,0xFF,0xFE,0x10,0x00,0xDC,0xFF,0x1C,0x00,
    0x00,0x00,0x00,0x00,0xE8,0xFF,0x29,0x00,0xDC,0xFF,0x1C,0x00,0x00,0x00,0x00,0x03,
    0xF8,0xFF,0x1A,0x00,0xDC,0xFF,0x1C,0x00,0x00,0x00,0x00,0x51,0xFF,0xD7,0x00,0x00,
    0xDC,0xFF,0x1C,0x00,0x01,0x16,0x5F,0xEC,0xFC,0x49,0x00,0x00,0xDC,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xD2,0x43,0x00,0x00,0x00,0xDC,0xFF,0xA6,0x9C,0x9C,0xDD,0xFF,0x51,
    0x00,0x00,0x00,0x00,0xDC,0xFF,0x1C,0x00,0x00,0x3D,0xFF,0xE2,0x0B,0x00,0x00,0x00,
    0xDC,0xFF,0x1C,0x00,0x00,0x00,0xA3,0xFF,0x8E,0x00,0x00,0x00,0xDC,0xFF,0x1C,0x00,
    0x00,0x00,0x18,0xF2,0xFC,0x31,0x00,0x00,0xDC,0xFF,0x1C,0x00,0x00,0x00,0x00,0x72,
    0xFF,0xCA,0x02,0x00,0xDC,0xFF,0x1C,0x00,0x00,0x00,0x00,0x04,0xD4,0xFF,0x6C,0x00,
    0xDC,0xFF,0x1C,0x00,0x00,0x00,0x00,0x00,0x40,0xFF,0xF1,0x1A,0x00,0x16,0x79,0xC4,
    0xEF,0xFB,0xE5,0xA2,0x1E,0x00,0x00,0x7F,0xFF,0xE3,0xAC,0xA7,0xE1,0xFF,0xE1,0x0C,
    0x00,0x18,0x44,0x01,0x00,0x00,0x07,0xC9,0xFF,0x5F,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x6D,0xFF,0x87,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xFF,0x90,0x00,0x23,
    0x90,0xD0,0xF1,0xFD,0xFF,0xFF,0xFF,0x90,0x3D,0xF4,0xFF,0xE3,0xB1,0x9F,0x9C,0xBF,
    0xFF,0x90,0xCA,0xFF,0x8B,0x02,0x00,0x00,0x00,0x62,0xFF,0x90,0xF5,0xFF,0x14,0x00,
    0x00,0x00,0x00,0x91,0xFF,0x90,0xE0,0xFF,0x44,0x00,0x00,0x00,0x4A,0xF8,0xFF,0x90,
    0x7C,0xFF,0xF8,0xB3,0xA7,0xD2,0xFD,0x7A,0xFF,0x90,0x01,0x66,0xD0,0xF5,0xF0,0xBC,
    0x3E,0x01,0xF0,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0xFF,0xA8,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0xFF,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x48,0xFF,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0xFF,0xA8,
    0x00,0x00,0x45,0xBD,0xF2,0xF4,0xC8,0x52,0x43,0xFF,0xA8,0x00,0x65,0xFE,0xFE,0xBF,
    0xA2,0xC3,0xFE,0xA6,0xFF,0xA8,0x1C,0xF7,0xFE,0x4E,0x00,0x00,0x00,0x44,0xFC,0xFF,
    0xA8,0x77,0xFF,0xB8,0x00,0x00,0x00,0x00,0x00,0xB2,0xFF,0xA8,0xAE,0xFF,0x64,0x00,
    0x00,0x00,0x00,0x00,0x67,0xFF,0xA8,0xC4,0xFF,0x47,0x00,0x00,0x00,0x00,0x00,0x4E,
    0xFF,0xA8,0xC5,0xFF,0x43,0x00,0x00,0x00,0x00,0x00,0x42,0xFF,0xA8,0xAF,0xFF,0x5F,
    0x00,0x00,0x00,0x00,0x00,0x56,0xFF,0xA8,0x7B,0xFF,0xAB,0x00,0x00,0x00,0x00,0x00,
    0x91,0xFF,0xA8,0x21,0xFA,0xFC,0x42,0x00,0x00,0x00,0x33,0xF5,0xFF,0xA8,0x00,0x6F,
    0xFF,0xFD,0xBC,0xA0,0xBE,0xFC,0x98,0xFF,0xA8,0x00,0x00,0x4C,0xC1,0xF3,0xF4,0xC8,
    0x54,0x03,0xF9,0xA8,0x00,0x00,0x25,0x9D,0xE2,0xF7,0xDD,0x8B,0x11,0x00,0x00,0x00,
    0x3B,0xF0,0xFF,0xC7,0xA8,0xD7,0xFF,0xDB,0x15,0x00,0x0B,0xE0,0xFE,0x53,0x00,0x00,
    0x02,0x97,0xFF,0xA1,0x00,0x5D,0xFF,0xA5,0x00,0x00,0x00,0x00,0x0F,0xF5,0xF6,0x0B,
    0xA3,0xFF,0x5C,0x00,0x00,0x00,0x00,0x00,0xCE,0xFF,0x31,0xBE,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0x45,0xC1,0xFF,0xB5,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,
    0x2B,0xA7,0xFF,0x5D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x64,0xFF,0xAA,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0xE3,0xFF,0x70,0x02,0x00,0x00,0x00,0x06,
    0x2F,0x00,0x00,0x38,0xEC,0xFF,0xDD,0xAE,0xA1,0xBA,0xF1,0xC4,0x00,0x00,0x00,0x1B,
    0x8B,0xD8,0xF5,0xFA,0xE4,0xAA,0x4B,0x00,0x00,0x00,0x00,0x3B,0xB8,0xE9,0xF7,0xDA,
    0x47,0x00,0x00,0x2D,0xFA,0xFF,0xBE,0xA4,0xC3,0x23,0x00,0x00,0x83,0xFF,0x8F,0x00,
    0x00,0x00,0x00,0x00,0x00,0x9B,0xFF,0x57,0x00,0x00,0x00,0x00,0x50,0xBF,0xFD,0xFF,
    0xFF,0xFF,0xFF,0x4C,0x00,0x68,0x9C,0xD8,0xFF,0xBC,0x9C,0x9C,0x2E,0x00,0x00,0x00,
    0x9C,0xFF,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x9C,0xFF,0x54,0x00,0x00,0x00,0x00,
    0x00,0x00,0x9C,0xFF,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x9C,0xFF,0x54,0x00,0x00,
    0x00,0x00,0x00,0x00,0x9C,0xFF,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x9C,0xFF,0x54,
    0x00,0x00,0x00,0x00,0x00,0x00,0x9C,0xFF,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x9C,
    0xFF,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x9C,0xFF,0x54,0x00,0x00,0x00,0x00,0x00,
    0x00,0x9C,0xFF,0x54,0x00,0x00,0x00,0x00,0x1F,0xE8,0xBA,0x2A,0xFA,0xD8,0x00,0x0F,
    0x05,0x00,0x00,0x00,0x20,0xFF,0xD0,0x20,0xFF,0xD0,0x20,0xFF,0xD0,0x20,0xFF,0xD0,
    0x20,0xFF,0xD0,0x20,0xFF,0xD0,0x20,0xFF,0xD0,0x20,0xFF,0xD0,0x20,0xFF,0xD0,0x20,
    0xFF,0xD0,0x20,0xFF,0xD0,0x20,0xFF,0xD0,0x20,0xFF,0x83,0x11,0x8D,0xDE,0xFA,0xEB,
    0xAD,0x2C,0x00,0x20,0xFF,0xBC,0xD7,0xEB,0xAE,0xA7,0xDD,0xFF,0xF2,0x22,0x20,0xFF,
    0xFF,0xBE,0x0C,0x00,0x00,0x05,0xAF,0xFF,0x8D,0x20,0xFF,0xFF,0x39,0x00,0x00,0x00,
    0x00,0x3B,0xFF,0xC0,0x20,0xFF,0xF3,0x00,0x00,0x00,0x00,0x00,0x1B,0xFF,0xCF,0x20,
    0xFF,0xD9,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xD0,0x20,0xFF,0xD0,0x00,0x00,0x00,
    0x00,0x00,0x18,0xFF,0xD0,0x20,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xD0,
    0x20,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xD0,0x20,0xFF,0xD0,0x00,0x00,
    0x00,0x00,0x00,0x18,0xFF,0xD0,0x20,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,
    0xD0,0x20,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xD0,0x00,0x00,0x25,0x9C,
    0xE1,0xF9,0xE7,0xB0,0x41,0x00,0x00,0x00,0x00,0x42,0xF4,0xFF,0xC7,0xA2,0xB6,0xF6,
    0xFE,0x77,0x00,0x00,0x0F,0xEB,0xFE,0x51,0x00,0x00,0x00,0x20,0xE1,0xFE,0x3F,0x00,
    0x6C,0xFF,0xB4,0x00,0x00,0x00,0x00,0x00,0x62,0xFF,0xB1,0x00,0xAA,0xFF,0x62,0x00,
    0x00,0x00,0x00,0x00,0x0C,0xFF,0xF7,0x00,0xC4,0xFF,0x45,0x00,0x00,0x00,0x00,0x00,
    0x00,0xEE,0xFF,0x13,0xBF,0xFF,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x16,
    0xA4,0xFF,0x65,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF7,0x04,0x5C,0xFF,0xB9,0x00,
    0x00,0x00,0x00,0x00,0x67,0xFF,0xBC,0x00,0x0A,0xDD,0xFF,0x57,0x00,0x00,0x00,0x22,
    0xE3,0xFF,0x49,0x00,0x00,0x33,0xEA,0xFF,0xC9,0xA2,0xB5,0xF7,0xFF,0x82,0x00,0x00,
    0x00,0x00,0x1B,0x90,0xDC,0xF8,0xED,0xB6,0x48,0x00,0x00,0x00,0x20,0xFF,0x7F,0x01,
    0x6F,0xDB,0xFA,0xA3,0x20,0xFF,0x97,0x96,0xFD,0xBC,0xA8,0x7A,0x20,0xFF,0xEA,0xE9,
    0x32,0x00,0x00,0x00,0x20,0xFF,0xFF,0x54,0x00,0x00,0x00,0x00,0x20,0xFF,0xF1,0x04,
    0x00,0x00,0x00,0x00,0x20,0xFF,0xD5,0x00,0x00,0x00,0x00,0x00,0x20,0xFF,0xD0,0x00,
    0x00,0x00,0x00,0x00,0x20,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x20,0xFF,0xD0,0x00,
    0x00,0x00,0x00,0x00,0x20,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x20,0xFF,0xD0,0x00,
    0x00,0x00,0x00,0x00,0x20,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x7A,
    0x00,0x00,0x00,0x00,0x00,0x00,0x82,0xF4,0x00,0x00,0x00,0x00,0x00,0x02,0xD4,0xF4,
    0x00,0x00,0x00,0x00,0x54,0xDC,0xFF,0xFF,0xFF,0xFF,0xFF,0x60,0x63,0x9C,0xFC,0xFB,
    0x9C,0x9C,0x9C,0x3A,0x00,0x00,0xF8,0xF4,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF4,
    0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF4,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF4,
    0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF4,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF4,
    0x00,0x00,0x00,0x00,0x00,0x00,0xF3,0xFA,0x02,0x00,0x00,0x00,0x00,0x00,0xD9,0xFF,
    0x41,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xF5,0xAA,0xAA,0x5D,0x00,0x00,0x03,0x84,
    0xE1,0xFA,0xE7,0x57,0x44,0xFF,0xB4,0x00,0x00,0x00,0x00,0x00,0x34,0xFF,0xB8,0x44,
    0xFF,0xB4,0x00,0x00,0x00,0x00,0x00,0x34,0xFF,0xB8,0x44,0xFF,0xB4,0x00,0x00,0x00,
    0x00,0x00,0x34,0xFF,0xB8,0x44,0xFF,0xB4,0x00,0x00,0x00,0x00,0x00,0x34,0xFF,0xB8,
    0x44,0xFF,0xB4,0x00,0x00,0x00,0x00,0x00,0x34,0xFF,0xB8,0x44,0xFF,0xB4,0x00,0x00,
    0x00,0x00,0x00,0x34,0xFF,0xB8,0x44,0xFF,0xB4,0x00,0x00,0x00,0x00,0x00,0x3E,0xFF,
    0xB8,0x43,0xFF,0xB6,0x00,0x00,0x00,0x00,0x00,0x59,0xFF,0xB8,0x36,0xFF,0xD4,0x00,
    0x00,0x00,0x00,0x00,0xA1,0xFF,0xB8,0x0C,0xF8,0xFF,0x4C,0x00,0x00,0x00,0x3B,0xF8,
    0xFF,0xB8,0x00,0x8C,0xFF,0xFD,0xBD,0xA2,0xC2,0xFD,0x9F,0xFF,0xB8,0x00,0x02,0x70,
    0xD1,0xF7,0xF4,0xC8,0x61,0x01,0xF0,0xB8,0xC8,0xFF,0x48,0x00,0x00,0x00,0x00,0x00,
    0x13,0xFA,0xF7,0x10,0x61,0xFF,0xA9,0x00,0x00,0x00,0x00,0x00,0x6A,0xFF,0xA5,0x00,
    0x0A,0xF0,0xF8,0x11,0x00,0x00,0x00,0x00,0xC5,0xFF,0x44,0x00,0x00,0x93,0xFF,0x6C,
    0x00,0x00,0x00,0x21,0xFF,0xE1,0x02,0x00,0x00,0x2B,0xFF,0xCD,0x00,0x00,0x00,0x7C,
    0xFF,0x81,0x00,0x00,0x00,0x00,0xC4,0xFF,0x2E,0x00,0x00,0xD7,0xFE,0x21,0x00,0x00,
    0x00,0x00,0x5D,0xFF,0x8F,0x00,0x32,0xFF,0xBF,0x00,0x00,0x00,0x00,0x00,0x08,0xED,
    0xE7,0x02,0x89,0xFF,0x5D,0x00,0x00,0x00,0x00,0x00,0x00,0x8E,0xFF,0x40,0xDC,0xF2,
    0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0xFF,0xAF,0xFF,0x9B,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xC0,0xFF,0xFF,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x5C,0xFF,0xD8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0x77,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0xE6,0xF8,0x18,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x01,0x92,0xFF,0x96,0x00,0x00,0x00,0x00,0x00,0x00,0x84,0xA1,0xD1,0xFF,
    0xDD,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0xB1,0xFB,0xE5,0xA4,0x19,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
};

leRasterFont Arial_22 =
{
    {
        {
            LE_STREAM_LOCATION_ID_INTERNAL, // data location id
            (void*)Arial_22_data, // data address pointer
            2132, // data size
        },
        LE_RASTER_FONT,
    },
    22,
    16,
    LE_FONT_BPP_8, // bits per pixel
    Arial_22_glyphs, // glyph table
};
