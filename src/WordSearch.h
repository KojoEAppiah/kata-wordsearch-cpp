//
// Created by Kojo Appiah on 2/6/18.
//

#ifndef KATA_WORDSEARCH_CPP_WORDSEARCH_H
#define KATA_WORDSEARCH_CPP_WORDSEARCH_H


#include <string>
#include <vector>
#include <fstream>

using namespace std;

class WordSearch {

private:

    int numberOfSearchWords;
    string wholeSearch;
    int rowLength;
    vector<string> wordsToFind;
    vector<string> searchSpace;

    void readInSearchWordList(ifstream &fileReader);

public:
    WordSearch();
    WordSearch(const char *wordSearchFileName);

    vector<string> getWordsToFind();

    void replicateSearch(const char *wordSearchFileName);

    vector<string> getSearchSpace();

    void initSearchSpace(ifstream &fileReader);

};


#endif //KATA_WORDSEARCH_CPP_WORDSEARCH_H
