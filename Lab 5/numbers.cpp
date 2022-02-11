/*
Author: Martin Czarnecki
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5 A, B, C, D, E, F, G
*/

#include <iostream>

// Task A
bool isDivisibleBy(int a, int b){
    return a % b == 0 ? true : false;
}

// Task B
bool isPrime(int n){
    for(int i = 2; i < n-1; i++)
        if(n % i == 0) return false;
    return true;
}

// Task C
int nextPrime(int n){
    while(true){
        if(isPrime(n + 1)) return n += 1; 
        else n += 1; 
    }
}

// Task D
int countPrimes(int a, int b){
    int sumOfPrimes = 0;
    for(int i = a; i <= b; i++)
        if(isPrime(i)) sumOfPrimes += i; 
    return sumOfPrimes;
}

// Task E
bool isTwinPrime(int n){
    return (isPrime(n - 2) || isPrime(n + 2)) ? true : false;
}

// Task F
int nextTwinPrime(int n){
    while(true){
        if(isPrime(n + 1) && isTwinPrime(n + 1)) return n += 1;
        else n += 1;
    }
}

// Task G
int largestTwinPrime(int a, int b){

    for(int i = a; i <= b; i = nextTwinPrime(a)){
        if(nextTwinPrime(a) > b) return -1;
        a = nextTwinPrime(a);
    }
    return a;
}