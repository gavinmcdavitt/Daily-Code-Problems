//
// Created by 12393 on 7/6/2023.
//

#ifndef DCP_7_6_2023_HELPFUL_H
#define DCP_7_6_2023_HELPFUL_H
#include <vector>
using namespace std;
class helpful
 {
 public:
     helpful();
     helpful(int one);
    void RemoveAllNegatives();
    void mergeSort(int const begin, int const end);
    void printArray();
    int getSize();
    void merge( int const left, int const mid, int const right);
    int findLowestNum();
     vector<int> array;
     int size;
};


#endif //DCP_7_6_2023_HELPFUL_H
