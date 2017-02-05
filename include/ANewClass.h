#ifndef _C6056_ANEWCLASS_H_
#define _C6056_ANEWCLASS_H_

#include "ABaseClass.h"

/*
 * Implement a version which can accept new 64-bit type values,
 * but remains backward compatible!
 */

class ANewClass : public ABaseClass {
  public:
    ANewClass(unsigned long long input);
};

#endif /* _C6056_ANEWCLASS_H_ */
