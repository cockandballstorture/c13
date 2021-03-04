#include <stdio.h>
#include <math.h>
#include <limits.h>

double f(double x) {
    return exp(x)-2+0.3*sin(2*x);
}

double iter(double x_n, double x_n_1, double f_x_n, double f_x_n_1) {
    return x_n - f_x_n * (x_n - x_n_1) / (f_x_n - f_x_n_1);
}

void main() {
    double eps = .0001;

    double x_n = 0, x_n_1 = 1, f_x_n, f_x_n_1, x_np1 = 1.;
    int k=1;
    unsigned i = 0;
    int w;
    for(w=0;w<k;w++){
    while (fabs(f(x_np1)) >= eps) {
        f_x_n = f(x_n);
        f_x_n_1 = f(x_n_1);
        x_np1 = iter(x_n, x_n_1, f_x_n, f_x_n_1);
        x_n_1 = x_n;
        x_n = x_np1;
        i++;
    }
    x_n=x_n_1;
    scanf("%lf",&x_n_1);
    }
    printf("x_np1=%lf\ti=%d\n", x_np1, i);
}
