class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>b(n);
        bitset<32>c;
        for(int i=0;i<32;i++) c[i]=b[31-i];
        return c.to_ulong();
    }
};
