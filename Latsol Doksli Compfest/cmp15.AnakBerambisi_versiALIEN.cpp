#include <cstdio>

char inbuf[1 << 20]; 
char outbuf[1 << 20]; 
int inpos = 0, inlen = 0, outpos = 0;

inline char nextChar() {
    if (inpos == inlen) {
        inlen = fread(inbuf, 1, sizeof(inbuf), stdin);
        inpos = 0;
        if (inlen == 0) return EOF;
    }
    return inbuf[inpos++];
}

inline int readInt() {
    int x = 0, c;
    do { c = nextChar(); } while (c < '0' || c > '9');
    do {
        x = x * 10 + (c - '0');
        c = nextChar();
    } while (c >= '0' && c <= '9');
    return x;
}

inline void writeInt(int x) {
    if (x == 0) {
        outbuf[outpos++] = '0';
        return;
    }

    char tmp[12];
    int len = 0;
    while (x > 0) {
        tmp[len++] = (x % 10) + '0';
        x /= 10;
    }
    while (len--) outbuf[outpos++] = tmp[len];
}

inline void flush() {
    fwrite(outbuf, 1, outpos, stdout);
}

int main() {
    int N = readInt();
    int x = 2147483647;
    while (N--) {
        int a = readInt();
        if (a < x) x = a;
    }
    writeInt(x);
    outbuf[outpos++] = '\n';
    flush();
    return 0;
}
