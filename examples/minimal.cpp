#include "../matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {
    plt::detail::_interpreter::get();
    plt::plot({1,3,2,4});
    plt::show();
}
