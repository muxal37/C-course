#include <stdint.h>

struct pack_array {
    uint32_t array;
    uint32_t count0 : 8;
    uint32_t count1 : 8;
};

void array2struct(int arr[], struct pack_array *result) {
    result -> count0 = 0;
    result -> count1 = 0;
    result -> array = 0;

    for (int i = 0; i < 32; i++) {
        if (arr[i] == 0) {
            result -> array <<= 1;
            result -> count0++;
        } else {
            result -> array = (result -> array << 1) | 1;
            result -> count1++;
        }
    }
}
