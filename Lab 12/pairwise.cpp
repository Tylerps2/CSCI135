/*
Author: Martin Czarnecki
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12 D
*/

#include <iostream>
#include <vector>
using std::vector;

vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2){
    vector<int> myList,
                largerList = v1,
                smallerList = v2;
    if(largerList.size() < smallerList.size()){
        largerList = v2,
        smallerList = v1;
    }
    for(int i = 0; i < largerList.size(); i++){
        if(smallerList.size() != largerList.size())
            smallerList.push_back(0);
        myList.push_back(smallerList[i] + largerList[i]);
    }
    return myList;
}