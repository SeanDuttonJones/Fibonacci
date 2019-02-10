#include <math.h>

unsigned long long FibonacciRecurrence(int n) 
{
    // Fibbonacci Formula
    int fn = (1.0 / sqrt(5)) * (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n));
    return fn;
}
