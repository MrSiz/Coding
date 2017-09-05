#include <math.h>
#include <stdio.h>

#define PI acos(-1)


int main()
{
    double x0, y0, z0, x1, y1, z1;
    while (scanf("%lf%lf%lf%lf%lf%lf", &x0, &y0, &z0, &x1, &y1, &z1) != EOF){
        double R = sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1) + (z0 - z1) * (z0 - z1));
        double S = 4.0 / 3 * PI * R * R * R;
        printf("%.3f %.3f\n", R, S);
    }
    return 0;
}
