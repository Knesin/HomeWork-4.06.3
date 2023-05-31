#include <iostream>
#include "My_vector.h"

int main()
{
    My_vector<int> mvi1;
    My_vector<int> mvi2;
    std::cout << "mvi1.size(): " << mvi1.size() << std::endl;
    std::cout << "mvi1.capacity(): " << mvi1.capacity() << std::endl;
    mvi1.push_back(1);
    mvi1.push_back(2);
    mvi1.push_back(3);
    mvi1.push_back(4);
    std::cout << "Add 4 element to mvi1" << std::endl;
    std::cout << "mvi1.size(): " << mvi1.size() << std::endl;
    std::cout << "mvi1.capacity(): " << mvi1.capacity() << std::endl;
    mvi2 = mvi1;
    mvi1.push_back(5);
    mvi1.push_back(6);
    mvi1.push_back(7);
    mvi1.push_back(8);
    std::cout << "Add 8 elemen to mvi1" << std::endl;
    std::cout << "mvi1.size(): " << mvi1.size() << std::endl;
    std::cout << "mvi1.capacity(): " << mvi1.capacity() << std::endl;
    mvi2.push_back(8);
    std::cout << "Add 1 elemen to mvi2" << std::endl;
    std::cout << "mvi2.size(): " << mvi2.size() << std::endl;
    std::cout << "mvi2.capacity(): " << mvi2.capacity() << std::endl;
    My_vector<int> mvi3(mvi2);
    std::cout << "mvi3.at(4): " << mvi3.at(4) << std::endl;
    std::cout << "mvi3.pop_back(): " << mvi3.pop_back() << std::endl;
    std::cout << "mvi3.pop_back(): " << mvi3.pop_back() << std::endl;
    std::cout << "mvi3.pop_back(): " << mvi3.pop_back() << std::endl;
    std::cout << "mvi3.size(): " << mvi3.size() << std::endl;
    std::cout << "mvi3.capacity(): " << mvi3.capacity() << std::endl;
}