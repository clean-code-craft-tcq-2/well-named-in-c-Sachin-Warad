#include <assert.h>

void ColorPairToString(const ColorPair* colorPair, char* buffer);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
