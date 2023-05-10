#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::string buf;
    std::string to_find;
    std::string replace_with;
    std::string new_string;
    std::ifstream in_file;
    std::size_t pos;
    std::size_t pos_old;

    if (argc != 4)
        return (1);
    in_file.open(argv[1]);
    to_find = argv[2];
    replace_with = argv[3];
    buf = argv[1];
    buf.append(".replace");
    std::ofstream out_file(buf);
    if (in_file.is_open()) {
        while (getline(in_file, buf)) {
            pos = 0;
            pos_old = 0;
            new_string.reserve(buf.size() + replace_with.length());
            while (buf.find(to_find, pos) >= 0 && buf.find(to_find, pos) < buf.length()) {
                pos = buf.find(to_find, pos);
                new_string.append(buf, pos_old, pos - pos_old);
                new_string += replace_with;
                pos += to_find.length();
                pos_old = pos;
            }
            new_string.append(buf, pos_old, buf.length() - pos_old);
            out_file << new_string << std::endl;
            new_string.erase();
        }
        in_file.close();
        out_file.close();
    }
}
