#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float rezyl;
    rezyl = (a + b + c) / 3;

    if (rezyl >= 4.5)
        printf("Oтличник\n");
    if ((4.5 > rezyl) && (rezyl >= 3.5))
        printf("Хорошист\n");
    if ((3.5 > rezyl) && (rezyl >= 2.5))
        printf("Троечник\n");
    if ((2.5 > rezyl) && (rezyl >= 1.5))
        printf("Двоечник\n");

    return 0;


}