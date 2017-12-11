#include <webassembly.h>

export char* hello() 
{
      return "Hello World !";
}

export int add(int x, int y)
{
    return x + y;
}
