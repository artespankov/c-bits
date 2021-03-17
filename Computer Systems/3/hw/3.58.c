long decode2(long x, long y, long z){
    y -= z;
    x *= y;
    long res = y;
    res <<= 63;
    res >>= 63;
    res ^= x;
    return res; 
}