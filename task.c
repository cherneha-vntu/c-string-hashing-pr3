#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    long long hash;
    char text[256];
} LineData;

long long computeHash(const char *s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        hash_value = (hash_value + (s[i] - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

int compare(const void *a, const void *b) {
    LineData *l1 = (LineData *)a;
    LineData *l2 = (LineData *)b;
    if (l1->hash < l2->hash) return -1;
    if (l1->hash > l2->hash) return 1;
    return 0;
}

int main() {
    FILE *f = fopen("input.txt", "r");
    if (!f) return 1;

    LineData lines[100];
    int count = 0;
    char buf[256];

    while (fgets(buf, 256, f) && count < 100) {
        lines[count].hash = computeHash(buf);
        strcpy(lines[count].text, buf);
        count++;
    }
    fclose(f);

    qsort(lines, count, sizeof(LineData), compare);

    printf("Знайдені дублікати:\n");
    for (int i = 1; i < count; i++) {
        if (lines[i].hash == lines[i-1].hash) {
            printf("Дублікат: %s", lines[i].text);
            while (i + 1 < count && lines[i].hash == lines[i+1].hash) i++;
        }
    }
    return 0;
}
