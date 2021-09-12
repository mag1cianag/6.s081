#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main(int argc, char const* argv[])
{
  if(argc!=2) {
    fprintf(2,"Usage: sleep ticks\n");
    exit(1);
  }
  
  int nTick = atoi(argv[1]);

  sleep(nTick);

  exit(0);
}
