int Fibonacci(int k)
{
    int fm1 = 0; // fib minus 1 (Fn-1).
    int fm2 = 1; // fib minus 2 (Fn-2).
    int fib = 0; // current fib term.

    if(k > 0) {
        for (int i = 0; i <= k; i++)
        {
            fib = fm1 + fm2; // equivalent to F = Fn-1 + Fn-2
            fm2 = fm1;
            fm1 = fib;
        }
    }

    return fib;
}
