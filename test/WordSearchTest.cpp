#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../src/WordSearch.h"

using testing::Eq;

namespace {
    class WordSearchTest : public testing::Test {
    public:
        WordSearch *wordSearch = new WordSearch();
        WordSearchTest(){

        }
    };
}

TEST_F(WordSearchTest, wordSearchCanReadFirstSearchWord){
    wordSearch->replicateSearch("../trek_search.txt");
    vector<string> wordList = wordSearch->getWordsToFind();
    ASSERT_EQ("BONES", wordList[0]);
}

TEST_F(WordSearchTest, wordSearchCanReadThirdSearchWord){
    wordSearch->replicateSearch("../trek_search.txt");
    vector<string> wordList = wordSearch->getWordsToFind();
    ASSERT_EQ("KIRK", wordList[2]);
}

TEST_F(WordSearchTest, wordSearchCanReadLastSearchWord){
    wordSearch->replicateSearch("../trek_search.txt");
    vector<string> wordList = wordSearch->getWordsToFind();
    ASSERT_EQ("UHURA", wordList[6]);
}

TEST_F(WordSearchTest, wordSearchCanReadInFirstLineOfWordSearch){
    wordSearch->replicateSearch("../trek_search.txt");
    vector<string> wordSearchSpace = wordSearch->getSearchSpace();
    ASSERT_EQ("UMKHULKINVJOCWE", wordSearchSpace[0]);
}

TEST_F(WordSearchTest, wordSearchCanReadInLastLineOfWordSearch){
    wordSearch->replicateSearch("../trek_search.txt");
    vector<string> wordSearchSpace = wordSearch->getSearchSpace();
    ASSERT_EQ("KYLBQQPMDFCKEAB", wordSearchSpace[14]);
}
