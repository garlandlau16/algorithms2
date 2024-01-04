// Garland Lau
// 11/8/2023
// CPSC 4100
// huffmanNode.h
// HuffmanCode length problem

#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H

#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

class huffmanNode{
public:
    char data;
    int freq;
    huffmanNode* left;
    huffmanNode* right;

    huffmanNode();
    huffmanNode(char c, int f);
    bool operator < (const huffmanNode& other) const;
    
    huffmanNode* buildHuffmanTree(const string& data);
    void createHuffmanCodes(huffmanNode* root, const string& code,unordered_map<char, string>& hm_codes);
    unordered_map<char, string> huffmanCode(const string& data);

};


#endif