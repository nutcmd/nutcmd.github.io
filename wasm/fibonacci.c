#include <webassembly.h>

export int fibonacci(int n)
{
    return n<2?n:fibonacci(n-1)+fibonacci(n-2);
}
