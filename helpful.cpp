//
// Created by 12393 on 7/6/2023.
//

#include "helpful.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

helpful::helpful()
{
    srand(time(NULL));
    size = rand()%1000;
    int maximum_number=1000;
    int minimum_number=-1000;
    for(int i=0; i<size; i++)
    {
        array.push_back((rand() % (maximum_number + 1 - minimum_number)) + minimum_number);
    }
}
helpful::helpful(int one)
{
    size =one;
    for(int i=1;i<size; i++)
    {
        array.push_back(i);
        cout<<i<<" ";
    }
}
void helpful::RemoveAllNegatives()
{
    int i, negcount=0;
    for(auto x: array)
    {
        if((x<=0))
        {
            array.pop_back();
        }
    }
}
void helpful:: mergeSort(int const begin, int const end)
{
    if (begin >= end)
        return;

    int mid = begin + (end - begin) / 2;
    mergeSort(begin, mid);
    mergeSort( mid + 1, end);
    merge(begin, mid, end);
}
void helpful::printArray()
{
    for (auto it = array.begin(); it != array.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout << endl;
}
void helpful:: merge( int const left, int const mid, int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;

    // Create temp arrays
    auto *leftArray = new int[subArrayOne];
    auto *rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] >= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        } else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    // Copy the remaining elements of left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    // Copy the remaining elements of right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

int helpful::getSize()
{
    return array.size();
}
int helpful::findLowestNum()
{
    int i =array.size()-1;
    int inter=1;//this number will increase by one every loop.
    if(array[i]==inter)
    {
        cout<<"**TEST CASE 1:"<<endl;
        while (array[i] == inter) {
            i--;
            inter++;
        }
        return inter;
    }
    if(array[i]!=inter)
    {
        cout<<"**TEST CASE 2:"<<endl;
        return 1;
    }
}