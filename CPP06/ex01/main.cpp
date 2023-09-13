#include <iostream>
#include <stdint.h>
#include "Data.hpp"

Data   *deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

uintptr_t  serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

int main(void){
    Data *data;
    uintptr_t serialized_data;
    Data *deserialized_data;

    data = new Data(5);
    std::cout << "val set to: " << data->get_val() << std::endl;
    std::cout << "data ptr: " << data << std::endl;
    serialized_data = serialize(data);

    std::cout << "________" << std::endl;

    std::cout << "serialized ptr: " << serialized_data << std::endl;

    std::cout << "________" << std::endl;

    deserialized_data = deserialize(serialized_data);

    std::cout << "deserialized ptr: " << deserialized_data << std::endl;
    std::cout << "deserialized val: " << deserialized_data->get_val() << std::endl;
}
