/* 	Implementation from http://thread.gmane.org/gmane.comp.misc.openmodelica/501/focus=507  */

#include <math.h>
#include <limits.h>
double ext_RandomNormal(double timein)

{
    unsigned int seed = 0;
    double v1, v2, r;


    do
    {
        v1 = 2 * ((double) rand()) /((double) RAND_MAX) - 1;
        v2 = 2 * ((double) rand()) /((double) RAND_MAX) - 1;
        r = v1 * v1 + v2 * v2;
    } while((r >= 1.0) || (r == 0.0));

    return v1 * sqrt( - 2.0 * log(r) / r );
}


