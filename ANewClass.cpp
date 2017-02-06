#include "include/ANewClass.h"
#include <cstdio>
#include <stdint.h>

ANewClass::ANewClass(unsigned long long input) : ABaseClass((unsigned short)input) {
  sprintf(this->get_buf(), "%hu", input % 1000000);
}
