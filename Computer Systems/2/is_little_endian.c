#include <stdio.h>
#include <assert.h> 

typedef unsigned char *byte_pointer;

int is_little_endian(){
    int test_v = 0xff;
    byte_pointer byte_start = (byte_pointer) &test_v;
    if (byte_start[0] == 0xff)
        return 1;
    return 0;
}

int main(){
    assert(is_little_endian());
    size_t x = 0x89ABCDEF;
    size_t y = 0x76543210;
    size_t mask = 0xFF;
    size_t res = (x & mask) | (y & ~mask);
    printf("%lx\n", res);
    assert(res == 0x765432EF);
}