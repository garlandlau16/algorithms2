// Garland Lau
// 11/8/2023
// CPSC 4100
// hw8.cpp

// Homework 8
// 1) HuffmanCode Length
// 2) Knapsack Problem Weight and Profit 
#include "huffmanNode.h"
#include "knapsack.h"

int main(){
    //HuffmanCode test cases
    string hm_code_t1 = "AAAABBCCDE"; // 22
    string hm_code_t2 = "ABCD"; // 8
    string hm_code_t3 = "ABBCCCDDDDEF"; // 30

    //HuffmanCode answers
    huffmanNode huffman1;
    unordered_map<char, string> hm_codes_t1 = huffman1.huffmanCode(hm_code_t1);
    huffmanNode huffman2;
    unordered_map<char, string> hm_codes_t2 = huffman2.huffmanCode(hm_code_t2);
    huffmanNode huffman3;
    unordered_map<char, string> hm_codes_t3 = huffman3.huffmanCode(hm_code_t3);

    //Knapsack problem test cases
    // Capacity
    // Number of Items
    // Weights
    // Profits
    // Test 1 -> Answer: 105
    int ks_t1_cap = 3;
    int ks_t1_num = 3;
    int ks_t1_weight[3] = {1, 2, 3};
    int ks_t1_profit[3] = {100, 5, 50};
    //Test 2 -> Answer: 19
    int ks_t2_cap = 10;
    int ks_t2_num = 4;
    int ks_t2_weight[4] = {2, 3, 5, 7};
    int ks_t2_profit[4] = {6, 5, 8, 9};
    // Test 3 -> Answer: 35
    int ks_t3_cap = 20;
    int ks_t3_num = 5;
    int ks_t3_weight[5] = {4, 7, 2, 6, 9};
    int ks_t3_profit[5] = {8, 10, 12, 5, 7};

    // Knapsack Answers
    vector<Item> items_t1, items_t2, items_t3;

    for (int i = 0; i < ks_t1_num; ++i) {
        items_t1.emplace_back(ks_t1_weight[i], ks_t1_profit[i]);
    }
    for (int i = 0; i < ks_t2_num; ++i) {
        items_t2.emplace_back(ks_t2_weight[i], ks_t2_profit[i]);
    }
    for (int i = 0; i < ks_t3_num; ++i) {
        items_t3.emplace_back(ks_t3_weight[i], ks_t3_profit[i]);
    }

    Knapsack knapsack_t1(ks_t1_cap, items_t1);
    int ks_a1 = knapsack_t1.solve();

    Knapsack knapsack_t2(ks_t2_cap, items_t2);
    int ks_a2 = knapsack_t2.solve();

    Knapsack knapsack_t3(ks_t3_cap, items_t3);
    int ks_a3 = knapsack_t3.solve();

    // Print out Tests and ANswers
    cout << "Huffman Code Test Cases: " << endl;
    cout << hm_code_t1 << ": " << hm_code_t1.size() << endl;
    cout << hm_code_t2 << ": " << hm_code_t2.size() << endl;
    cout << hm_code_t3 << ": " << hm_code_t3.size() << endl << endl;

    cout << "Knapsack Test Cases: " << endl;
    cout << ks_a1 << endl;
    cout << ks_a2 << endl;
    cout << ks_a3 << endl << endl;

    return 0;
}
