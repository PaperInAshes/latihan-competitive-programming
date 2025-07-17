#include <cstdio>
#define gc getchar
#define pc putchar

void fastRead(int &x) {
    x = 0;
    char ch = gc();
    while (ch < '0' || ch > '9') ch = gc();
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = gc();
    }
}

void fastWrite(int x) {
    if (x == 0) {
        pc('0');
        return;
    }
    char buff[10];
    int i = 0;
    while (x > 0) {
        buff[i++] = (x % 10) + '0';
        x /= 10;
    }
    for (int j = i - 1; j >= 0; j--) pc(buff[j]);
}

int main() {
    int x;
    fastRead(x);         
    pc('1'); pc(' ');    
    fastWrite(x);      
    pc('\n');          
}
