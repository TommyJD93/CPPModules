#include "replace.hpp"

int main(void)
{
    std::string buf;
    std::string to_find = "come";
    std::string to_replace = "procodoi";
    std::string new_string;
    std::string tmp;
    size_t        pos;
    size_t       pos_old;

    std::ifstream myfile; myfile.open("test");
    if (!(myfile.is_open()))
        return (1);
    myfile >> tmp;
    cout << tmp << endl;
    new_string.reserve(buf.size());
    pos = 0;
    while (true) {
        pos_old = pos;
        pos = buf.find(to_find, pos);
        if (pos == buf.size() - 1)
            break ;
        new_string.append(buf, pos_old, pos - pos_old);
        new_string += to_replace;
        pos += to_replace.size();
    }
    new_string.append(buf, pos_old, buf.size() - pos_old);
    buf.swap(new_string);
    cout << new_string << endl;
}
