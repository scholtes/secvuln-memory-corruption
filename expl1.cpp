#include <cstdio>
#include <cstring>

#include "include/ANewClass.h"

int
main(int argc, char **argv) {

   ABaseClass a = ANewClass(18446744073709551615);

   // Look at some noteworthy addresses
   printf("%p\n", (void *)&ANewClass::get_buf);
   printf("%p\n", (void *)main);
   printf("%p\n", &a);
   printf("%p\n", a.get_buf());

   a.show_data();
   printf("Still got here\n");
}
