// Garland Lau
// 11/8/2023
// CPSC 4100
// huffmanNode.cpp
// HuffmanCode length problem

#include "huffmanNode.h"

huffmanNode::huffmanNode(char c, int f): data(c), freq(f), left(nullptr), right(nullptr){};

bool huffmanNode:: operator < (const huffmanNode& other) const{
    return freq > other.freq;
}

huffmanNode* huffmanNode::buildHuffmanTree(const string& data){
    unordered_map<char, int> freq_counter;

    for(char ch: data){
        freq_counter[ch]++;
    }

    priority_queue<huffmanNode> min_heap;
    for(const auto& entry : freq_counter){
        min_heap.push(huffmanNode(entry.first, entry.second));
    }

    while(min_heap.size() > 1){
        huffmanNode* left = new huffmanNode(min_heap.top());
        min_heap.pop();

        huffmanNode* right = new huffmanNode(min_heap.top());
        min_heap.pop();

        huffmanNode* merged = new huffmanNode('$', left->freq + right->freq);
        merged->left = left;
        merged->right = right;
        min_heap.push(*merged);

    }

    return new huffmanNode(min_heap.top());
}

void huffmanNode::createHuffmanCodes(huffmanNode* root, const string& code,unordered_map<char, string>& hm_codes){
    if(root){
        if(root->data != '$'){
            hm_codes[root->data] = code;
        }
        createHuffmanCodes(root->left, code + '0', hm_codes);
        createHuffmanCodes(root->right, code + '1', hm_codes);
    }
}

unordered_map<char, string> huffmanNode::huffmanCode(const string& data){
    huffmanNode* root = buildHuffmanTree(data);
    unordered_map<char, string> hm_codes;
    createHuffmanCodes(root, "", hm_codes);
    return hm_codes;
}

