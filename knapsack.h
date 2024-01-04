// Garland Lau
// 11/8/2023
// CPSC 4100
// knapsack.h
// Knapsack maximum profit problem

#ifndef KNAPSACK_H
#define KNAPSACK_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

struct Item {
    int profit, weight;

    Item(int weight, int profit) : weight(weight), profit(profit) {}
};

bool compare(Item A, Item B);

class Knapsack {
public:
    Knapsack(int capacity, const vector<Item>& items);
    int solve();

private:
    int capacity;
    vector<Item> items;
    vector<vector<int>> memory;

    int dynamicProgramming(int currCap, int currItem);
};


#endif