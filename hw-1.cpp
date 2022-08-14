/*
 * Homework 1: Stack, Queue, Table/Hash/Dictionary C++ implementation
 * David Alejandro Martinez Tristan
 * A01610267
 * Compilers design
 * 13/08/2022
 */

#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    /*
     * Stack
     * Operates in a last in first out (LIFO) sequence
     * Elements are inserted and accessed at the top
     *
     * Access time: O(1)
     * Insertion time: O(1)
     * Deletion time: O(1)
     */
    cout << "Stack" << endl;

    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // 1 2 3
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    cout << endl;

    /*
     * Queue
     * Operates in a first in first out (FIFO) sequence
     * Elements are inserted at the back and are accessed from the front
     *
     * Access time: O(1)
     * Insertion time: O(1)
     * Deletion time: O(1)
     */
    cout << "Queue" << endl;

    queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);

    // 3 2 1
    while (!queue.empty())
    {
        cout << queue.front() << endl;
        queue.pop();
    }

    cout << endl;

    /*
     * Map
     * Sequence of key-value pairs, where a single value is associated with a unique key
     *
     * Elements are stored in *increasing order*
     * Implemented with a self-balancing Binary Search Tree (BST)
     *
     * Search time: O(log(n))
     * Insertion time: O(log(n)) + rebalance
     * Deletion time: O(log(n)) + rebalance
     *
     * Benefits:
     *  Memory efficiency
     *  Keys are ordered
     *  Faster access for range iteration
     */
    cout << "Map" << endl;

    map<int, string> map;
    map[1] = "One";
    map[2] = "Two";
    map[3] = "Three";

    // One
    cout << map[1] << endl;
    // Two
    cout << map[2] << endl;
    // Three
    cout << map[3] << endl;

    for (auto it = map.begin(); it != map.end(); it++)
    {
        cout << it->first << '\t' << it->second << endl;
    }

    cout << endl;

    /*
     * Unordered Map
     * Sequence of key-value pairs, where a single value is associated with a unique key
     *
     * Elements are stored in *arbitrary order*
     * Implemented with a Hash Table
     *
     * Search time: O(1) average, O(n) worst
     * Insertion time: same as search
     * Deletion time: same as search
     *
     * Benefits:
     *  Faster access for individual elements by their key
     */
    cout << "Unordered Map" << endl;

    unordered_map<string, string> u_map;
    u_map["ITC"] = "Computer Science";
    u_map["INT"] = "Business Informatics";
    u_map["IRS"] = "Robotics";

    // Computer Science
    cout << "ITC" << '\t' << u_map["ITC"] << endl;
    // Business Informatics
    cout << "INT" << '\t' << u_map["INT"] << endl;
    // Robotics
    cout << "IRS" << '\t' << u_map["IRS"] << endl;

    cout << endl;

    /*
     * Unordered Set
     *
     * Stores unique elements in no particular order
     *
     * Elements are stored in arbitrary order
     * Implemented with a Hash Table
     *
     * Search time: O(1) average, O(n) worst
     * Insertion time: same as search
     * Deletion time: same as search
     *
     * Benefits:
     *  Used to track presence/abscence of value
     *
     */
    unordered_set<string> u_set;
    u_set.insert("Computer Science");
    u_set.insert("Robotics");
    u_set.insert("Data Science and Mathematics");

    // Not found
    string key = "Business Informatics";
    if (u_set.find(key) == u_set.end())
        cout << key << " not found" << endl;
    else
        cout << key << " found" << endl;

    // Found
    key = "Computer Science";
    if (u_set.find(key) == u_set.end())
        cout << key << " not found" << endl;
    else
        cout << key << " found" << endl;

    cout << endl;

    return 0;
}