#include<stdio.h>
#include<math.h>
int main()
{
    float u, a, t, s, v;
    float b, c, p, h, T;
    printf("Enter values of u, a and t: ");
    scanf("%f%f%f", &u, &a, &t);
    v = u + a * t;
    s = (u * t) + (0.5 * a * t * t);
    printf("\nV = %.2f\n", v);
    printf("S = %.2f\n", s);
    printf("\nEnter values of a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);
    T = (2 * a) + sqrt(b) + (9 * c);
    printf("T = %.2f\n", T);
    printf("\nEnter values of b and p: ");
    scanf("%f%f", &b, &p);

    h = sqrt((b * b) + (p * p));
    printf("H = %.2f\n", h);
    return 0;
}
