#include <stdio.h>
int main() {
    int h, m, s, n;
    scanf("%d:%d:%d", &h, &m, &s);
    printf("Hour:%d\nMinute:%d\nSecond:%d\n", h, m, s);
    scanf("%d", &n);
    m = m + n;
    if (m >= 60) {
        h = h + (m / 60);
        m = m % 60;
    }
    if (h >= 24) {
        h = h % 24;
    }
    printf("Hour:%d\nMinute:%d\nSecond:%d\n", h, m, s);
}

