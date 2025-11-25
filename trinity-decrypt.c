// trinity-decrypt.c
// https://github.com/t81dev/trinity-decrypt
// gcc trinity-decrypt.c -O3 -lcrypto -o trinity-decrypt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/sha.h>

typedef int8_t t;
typedef struct { t d[1024]; int n; } buf;

void derive_key(buf k, buf* out, int len) {
    unsigned char h[32];
    SHA256((unsigned char*)k.d, k.n, h);
    out->n = len;
    for(int i=0; i<len; i++) out->d[i] = (h[i%32] % 3) - 1;
}

void trtsc_decrypt(buf c, buf k, buf* p) {
    p->n = c.n;
    for(int i=0; i<c.n; i++)
        p->d[i] = (c.d[i] + k.d[(c.n-1-i) % 64] + 3) % 3 - 1;
}

// ... other ciphers ...

int main(int argc, char** argv) {
    // ... parse args, load .t81z, decompress, decrypt, validate ...
    printf("The dead have spoken.\n");
    return 0;
}
