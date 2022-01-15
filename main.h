#include <stdio.h>

#ifndef _MAIN_H
#define _MAIN_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern int numberOfMajorColors;
extern int numberOfMinorColors;

#endif
