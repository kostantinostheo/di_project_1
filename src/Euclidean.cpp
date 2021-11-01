#include <cmath>
#include "Euclidean.h"

using namespace std;

double euclidean_distance( const vector<unsigned long> &p, const vector<unsigned long> &q )
{
    double sum = 0.0;
    
    for(int i=0; i<p.size(); i++)
    {
        sum = sum + pow(abs( (long) p[i] - (long)q[i]), 2.0);
    }
    
    return sqrt(sum);
}