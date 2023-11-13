#include <b/nested/namespace.h>

namespace b {
namespace nested {

void classb::sf() {
    a::nested::nf();
    classb b;
    b.m_a.fa();
}

} // namespace nested
} // namespace b
