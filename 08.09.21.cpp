#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>



int main(int argc, char* argv[])
{
 
    int c0 = 0;
    int c1 = 0;
    int count = 0;
    char symb;
    bool flag;
    std::ifstream filein;
    filein.open(argv[1]);
    std::vector<char> sym;
    if (argc == 3) {
        std::ifstream file;
        file.open(argv[1]);
        if (!file.is_open()) {
            std::cout << "ERROR: не удалось открыть файл!" << std::endl;
        }
        else {
            while (file >> symb)
            {
                file >> symb;
                sym.push_back(symb);
                count++;
            }
        }
        filein.close();
        std::ofstream fileout;
        fileout.open(argv[2]);
        sym.pop_back();
        unique(sym.begin(), sym.end());
        int с1 = std::count(sym.begin(), sym.end(), 1);
        int с0 = std::count(sym.begin(), sym.end(), 0);
        fileout << c1 << std::endl << c0;
        fileout.close();
    }
    else {
        std::cout << "НЕ ОТКРЫВАЕТСЯ ФАЙЛ" << std::endl;
    }
    return 0;
}


