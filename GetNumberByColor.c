#include "main.h"
#include "GetNumberByColor.h"
#include "GetColorByNumber.h"

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
