#include <cstdio>
#include <cstring>

#include "include/ANewClass.h"

int
main(int argc, char **argv) {

   ABaseClass a = ANewClass(100000000123456);

   // Look at some noteworthy addresses
   printf("%p\n", (void *)&ANewClass::get_buf);
   printf("%p\n", (void *)main);
   printf("%p\n", &a);
   printf("%p\n", a.get_buf());

   a.show_data();

   // If you replace ANewClass.cpp with the provided lab code, 
   // we will still get here, but will return with a segfault
   printf("Still got here\n");
}
