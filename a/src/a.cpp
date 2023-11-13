#include <iostream>

#include <a/nested/namespace.h>
#include "internal.h"

namespace a {
namespace nested {

void classa::sf() {
    std::cout << "a::nested::classa::sf" << std::endl;
}
classa::classa() {
    sf();
}
void classa::fa() {
    std::cout << "a::nested::classa::fa" << std::endl;
}
void nf() {
    classa a;
    a.fa();
    aloc();
}
void aloc () {
    Eigen::RowVector3d r = {0,0,0};
    std::cout << "a:nested:aloc(" << r << ")" << std::endl;
}

} // namespace nested
} // namespace a
