#include "Data.hpp"

/*
 * constructors
 */

 Data::Data(): _val(1) {
 }

Data::Data(int n): _val(n) {
}

Data::~Data() {
}

/*
 * utils funcs.
 */

 int Data::get_val() {
    return (this->_val);
 }
