// For beginners!
// You are given a 32-bit float (single precision).
// Return the number a signed 32-bit integer would hold with the same bit pattern.
// 10.0 (float) == 01000001001000000000000000000000 (binary)
// convert_to_int(10.0) returns 1092616192

#include <inttypes.h>

int32_t convert_to_int(float f) {
    return *(int32_t*) &f;
}