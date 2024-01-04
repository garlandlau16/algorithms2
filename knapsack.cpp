// Garland Lau
// 11/8/2023
// CPSC 4100
// knapsack.cpp
// Knapsack maximum profit problem

#include "knapsack.h"

bool compare(Item A, Item B){
    double rA = static_cast<double>(A.profit) / A.weight; 
    double rB = static_cast<double>(B.profit) / B.weight;
    return rA > rB;
}

Knapsack::Knapsack(int capacity, const vector<Item>& items) : capacity(capacity), items(items) {
    sort(this->items.begin(), this->items.end(), compare);
    memory.resize(items.size() + 1, vector<int>(capacity + 1, -1));
}

int Knapsack::solve(){
    return dynamicProgramming(capacity, items.size());
}

int Knapsack::dynamicProgramming(int currCap, int currItem){
    if(currCap == 0 || currItem == 0){
        return 0;
    }

    if(memory[currItem][currCap] != -1){
        return memory[currItem][currCap];
    }

    if(items[currItem - 1].weight > currCap){
        memory[currItem][currCap] = dynamicProgramming(currCap, currItem - 1);
    }else{
        int include = items[currItem - 1].profit + dynamicProgramming(currCap - items[currItem - 1].weight, currItem - 1); 
        int exclude = dynamicProgramming(currCap, currItem -1);
        memory[currItem][currCap] = max(include, exclude);
    }
    return memory[currItem][currCap];
}