#include "WordSearch.h"//
// Created by Kojo Appiah on 2/6/18.
//

#include "WordSearch.h"
#include <fstream>
#include <iostream>
#include <vector>


using namespace std;

WordSearch::WordSearch() {

}

void WordSearch::replicateSearch(const char *wordSearchFileName) {
    int numberOfWords = 0;

    ifstream fileReader;
    fileReader.open(wordSearchFileName);

    readInSearchWordList(fileReader);
    initSearchSpace(fileReader);

}

void WordSearch::readInSearchWordList(ifstream &fileReader){

    string wordToAdd = "";
    int wordLength = 0;

    char currentChar = fileReader.get();
    wordLength++;

    while(currentChar != EOF){

        if(currentChar == ',' || currentChar == '\n'){

            wordsToFind.push_back(wordToAdd);
            wordLength = 0;
            wordToAdd = "";
            if(currentChar == '\n'){
                break;
            }
        }

        else {
            wordToAdd += currentChar;
        }

        wordLength++;
        currentChar = fileReader.get();
    }

}

void WordSearch::initSearchSpace(ifstream &fileReader){

    string currentRow = "";
    char currentChar;

    while((currentChar = fileReader.get()) != EOF) {
        if (currentChar == ',') {
            continue;
        } else if(currentChar == '\n'){
            searchSpace.push_back(currentRow);
            currentRow = "";
        }else{
            currentRow += currentChar;
            rowLength++;
        }
    }
    searchSpace.push_back(currentRow);

}

vector<string> WordSearch::getWordsToFind() {

    return wordsToFind;
}

vector<string> WordSearch::getSearchSpace() {

    return searchSpace;
}

