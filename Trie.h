#ifndef TRIE_H
#define TRIE_H

#include <string>
#include <vector>

using namespace std;

const int ALPHABET_SIZE = 26;

// Структура узела дерева 
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];
    // isEndOfWord - true, если ключ является концом слова
    bool isEndOfWord;
};

TrieNode *getNewNode();
void insert(TrieNode *, string);
bool search(TrieNode *, string);
bool isEmpty(TrieNode *);
TrieNode *remove(TrieNode *, string, int depth = 0);
void suggest(TrieNode *, const string &);
void showSuggestions(TrieNode *, string &);

#endif