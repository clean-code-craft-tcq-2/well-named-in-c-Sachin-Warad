#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS  16

void ColorPairToString(const ColorPair* colorPair, char* buffer);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
