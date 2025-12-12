#include <iostream>
using namespace std;

#define SIZE 10

int hashTable[SIZE];

void init(){
    for(int i=0;i<SIZE;i++)
        hashTable[i] = -1;
}

int hashFunc(int key){
    return key % SIZE;
}

void insertKey(int key){
    int idx = hashFunc(key);

    while(hashTable[idx] != -1)
        idx = (idx + 1) % SIZE;

    hashTable[idx] = key;
}

bool searchKey(int key){
    int idx = hashFunc(key);
    int start = idx;

    while(hashTable[idx] != -1){
        if(hashTable[idx] == key) return true;
        idx = (idx + 1) % SIZE;

        if(idx == start) break;
    }
    return false;
}
