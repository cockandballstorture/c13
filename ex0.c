#include <stdio.h>
#include <math.h>
#include <limits.h>
double f(double x) {
    return exp(x)-2+0.3*sin(2*x);
}
void main() {
    double eps = .0001;

    double x, a=-2, b=2;
    while (fabs(b-a) >= eps) {
        x=(a+b)/2;
        if((f(a)*f(x))>0){
        	a=x;
        }
        else{
        	b=x;
        }
    x=(a+b)/2;

}
    printf("%lf",x);
}
