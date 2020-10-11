#include "functions.h"

// All functions implementations should be in this file.


vector<string> readFile(string filename) {
  vector<string> count;

  ifstream inputFile(filename);

  if (inputFile.is_open()) {
    string nextLine;

    while(getline(inputFile, nextLine)) {
      count.push_back(nextLine);

    }
  }

 return count;
}

string toupper(string input) {
  string count(input);

  for (char& c : count) {
    c = toupper(c);
  }

 return count;
}


string tolower(string input) {
  string count(input); 

  for (char& c : count) {
    c = tolower(c);
  }

  return count;
}

unsigned int digits(string input) {
  unsigned int count(0);

  for (char c : input) {
  
    if(isdigit(c)) {
      count++;
    }
  }

  return count;
}

unsigned int punctuation(string input){
  unsigned int count(0);

  for (char c : input) {

    if (ispunct(c)) {
      count ++;
    }
  }

  return count;
}

unsigned int vowels(string input) {
  unsigned int count(0);

  string vowels ("AEIOUaeiou");

  for (char c : input) {

    for (char v : vowels) {

      if (c == v) {

        count ++;
        break;
      }
    }
  }

  return count;
}

unsigned int allCharacters(const vector<string>& v) {
  unsigned int count(0);

  for (string s : v) {
    count += s.size();
  }

  return count;
}

unsigned int allDigits(const vector<string>& v) {
  unsigned int count(0);

  for ( string s : v) {
    count += digits(s);
  }

  return count;
}

unsigned int allPunctuation(const vector<string>& v) {
  unsigned int count(0);

  for (string s : v) {
    count += punctuation(s);
  }

  return count;
}

unsigned int allVowels(const vector<string>& v) {
  unsigned int count(0);

  for (string s : v) {
    count += vowels(s);
  }

  return count;
}