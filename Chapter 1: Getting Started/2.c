#include <stdio.h>

int main() {
    int l,b,r;
    float area_rec = l * b;
    float permi = 2*(l+b);
    float area_cir = 22.0/7.0 * (r * r);
    float circu = 2 * (22.0/7.0) * r;
    printf("%f" "%f" "%f" "%f", area_rec, area_cir, permi, circu);
    return 0;
}