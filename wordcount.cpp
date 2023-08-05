    #TASK 3 WORD COUNT 

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string& text) {
    int wordCount = 0;
    stringstream ss(text);
    string word;

    while (ss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    // Write a story into a text file
    string fileName = "story.txt";
    ofstream outputFile(fileName);

    if (!outputFile) {
        cout << "Error creating the file.\n";
        return 1;
    }

    string story =
        "Once upon a time, in a land far, far away,\n"
        "there lived a brave knight named Sir Lancelot.\n"
        "He embarked on a quest to rescue the princess\n"
        "who was held captive by a wicked dragon.\n"
        "Through forests and mountains, Sir Lancelot\n"
        "fought many battles to reach the dragon's lair.\n"
        "In the end, he defeated the dragon and saved\n"
        "the princess, restoring peace to the kingdom.\n"
        "And they all lived happily ever after.";

    outputFile << story;
    outputFile.close();

    // Read the story from the file and count words
    ifstream inputFile(fileName);

    if (!inputFile) {
        cout << "Error opening the file. Please check the file name and try again.\n";
        return 1;
    }

    string content;
    string line;
    while (getline(inputFile, line)) {
        content += line + "\n";
    }

    inputFile.close();

    int wordCount = countWords(content);

    cout << "Story:\n" << content << endl;
    cout << "Total word count in the story: " << wordCount << endl;

    return 0;
}

