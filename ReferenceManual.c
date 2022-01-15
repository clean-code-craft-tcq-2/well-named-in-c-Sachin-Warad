#include "ReferenceManual.h"
#include "main.h"
#include "GetColorByNumber.h"

void PrintManual()
{
    printf("Reference Manual for Color Coding\n\n");
    int PairNumber;
    for(PairNumber=1; PairNumber <= 25; PairNumber++)
    {
        ColorPair colors = GetColorFromPairNumber(PairNumber);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colors, colorPairNames);
        printf("Color Pair:%d\t\t Major Minor Color Pair:%s\n",PairNumber,colorPairNames );
    }
}
