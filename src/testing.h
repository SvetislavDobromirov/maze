#ifndef TESTING_H
#define TESTING_H
#include <vector>
#include "models.h"

class testing
{
public:
    testing();
    void show_array(model test);


    std::string show_vector(std::string msg, std::vector<int> vec_tor, int cols, int rows);
    std::string show_vector(std::string msg, std::vector<bool> vec_tor, int cols, int rows);
    void write_string_to_file(std::string str);
};

#endif // TESTING_H
