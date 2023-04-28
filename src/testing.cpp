#include "testing.h"
#include <iostream>
#include <fstream>
using namespace std;

testing::testing()
{


}


void testing::show_array(model test) {



       std::cout <<  "SHOW START" << std::endl;
       std::cout << "Size:" << test.size_col << " : " << test.size_rows << std::endl;
    int count = 1;
    auto it =  test.first.begin();
    for(;it != test.first.end(); it++) {
        std::cout << *it << " ";
        if (count == test.size_col) {
            std::cout << std::endl;
            count = 1;
            continue;
        }
        count ++;
    }
  std::cout <<  "NEXT SHOW" << std::endl;
    count = 1;
    it =  test.second.begin();
    for(;it != test.second.end(); it++) {
        std::cout << *it << " ";
        if (count == test.size_rows) {
            std::cout << std::endl;
            count = 0;
        }
        count ++;
    }

}


std::string testing::show_vector(std::string msg, std::vector<int> vec_tor, int cols, int rows) {
    std::string str;
    str += (msg+"\n");

    std::cout << "Start_show_vector: " << msg << std::endl;
    auto it = vec_tor.begin();
    int count = 0;
    for (;it != vec_tor.end(); it++) {
        std::cout << *it;
        str += std::to_string(*it);
        if (count < cols-1) {
            count++;
            str+=" ";
            std::cout << " ";
        } else {
            str+="\n";
            std::cout << std::endl;
            count = 0;
        }
    }
    str+="\n";
    std::cout << std::endl;
    return str;
}


std::string testing::show_vector(std::string msg, std::vector<bool> vec_tor, int cols, int rows) {
    std::string str;
    str += (msg+"\n");

    std::cout << "Start_show_vector: " << msg << std::endl;
    auto it = vec_tor.begin();
    int count = 0;
    for (;it != vec_tor.end(); it++) {
        std::cout << *it;
        str += std::to_string(*it);
        if (count < cols-1) {
            count++;
            str+=" ";
            std::cout << " ";
        } else {
            str+="\n";
            std::cout << std::endl;
            count = 0;
        }
    }
    str+="\n";
    std::cout << std::endl;
    return str;
}

void testing::write_string_to_file(std::string str) {
    time_t now = time(0);
        // convert now to string form
    char* dt = ctime(&now);
    str += dt;

//       std::ofstream out;          // поток для записи
//       out.open("/Users/svetislavdobromirov/Documents/test_file.txt");      // открываем файл для записи
//       if (out.is_open())
//           out << str << std::endl;
//       out.close();

//    std::cout << "INFO________________INFO" << std::endl;
//    std::cout << str << std::endl;
//                 std::cout << "END________________END" << std::endl;

}


