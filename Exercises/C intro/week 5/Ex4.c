#include <stdio.h>

int main() {
    unsigned char a = 10;
    unsigned char b = 15;

    printf("--- KET QUA CAC PHEOP TOAN BIT ---\n\n");

    // 10 & 15
    printf("10 & 15  = (He 10: %d) \t| (He 16: 0x%X)\n", a & b, a & b);

    // 10 | 15
    printf("10 | 15  = (He 10: %d) \t| (He 16: 0x%X)\n", a | b, a | b);

    // 10 ^ 15
    printf("10 ^ 15  = (He 10: %d) \t| (He 16: 0x%X)\n", a ^ b, a ^ b);

    printf("~10      = (He 10: %d) \t| (He 16: 0x%X)\n", (unsigned char)~a, (unsigned char)~a);

    // 10 << 2
    printf("10 << 2  = (He 10: %d) \t| (He 16: 0x%X)\n", a << 2, a << 2);

    // 10 >> 2
    printf("10 >> 2  = (He 10: %d) \t| (He 16: 0x%X)\n", a >> 2, a >> 2);

    return 0;
}
