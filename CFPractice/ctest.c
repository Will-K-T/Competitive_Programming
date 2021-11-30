#include <stdio.h>

struct {
        int     a;
        char    b;
        double  c;
        char    *d;
        char    e;
} X;

int main () {
        printf ("%d\n", sizeof (X));
        printf ("%p\n", & X);
        X.a = 0x7F;
        X.b = 2;
        X.c = 3;
        X.d = (char *) & X;
        X.e = 4;
        printf ("%d\n", * X.d);
        printf ("%d\n", * (X.d + 4));
        printf ("%d\n", * (X.d + 24));
	return 0;
}
