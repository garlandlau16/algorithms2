# algorithms2
Algorithms class homework 8

Problem 1: Huffman Code Length
  You are given a sequence of symbols as the input. What is the total code length if we use Huffman coding?
  As an example, the input is AAAABBCCDE. Then, if we use Huffman coding algorithm, we may get a "0" for A, "100" for B, "101" for C, "110" for D, and "111" for E. This results in   
  0000100100101101110111 which has the length of 22 bits. Note that these codes are just one possible outcome of the Huffman coding for this example. However, the final total code length 
  will be the same.

  Sample Input:
    AAAABBCCDE

  Sample Output:
    22

Problem 2: Knapsack with Profit
  In this problem, we are given a knapsack of fixed capacity C. We are also given a list of N objects, each having a weight W(I) and profit P(I). We can put any subset of the objects into 
  the knapsack, as long as the total weight of our selection does not exceed C. The goal is to maximize the total profit, which is the sum of the profits of each object we put into the 
  knapsack.

  Example:
  Input:
    C = 3
    W: 1 2 3  
    P: 100 5 50

  Selected Items:
    1
    2
  Explanation: Possible selections that can be put in the knapsack are: 1 with profit 100 2 with profit 5 3 with profit 50 1 and 2 with profit 105 Note that in this problem, there is no   
  need that the some of weights be exactly C. Hence, in this example, 1 is a valid solution but since the profit is lower than the maximum, is not the final answer.

  Input Format
    First line is C. Second line is the number of objects, N. The next N lines, each line contains two numbers: the first number is the weight of an object and the second number is the   
    profit   of that object.
  Example:
    3
    3
    1 100
    2 5
    3 50
    
  Output Format
    Print out the maximum profit.
  Example: 
    105
    
