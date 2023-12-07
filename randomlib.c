#include <stdlib.h>
#include "randomlib.h"

int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}
