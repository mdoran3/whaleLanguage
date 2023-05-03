#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

  string input;
  cout << "Enter a word, phrase, or sentence that you would like to convert into whale language: \n\n";
  getline(cin, input);
  vector<char> vowels = {'a','e','i','o','u'};
  vector<char> result;

  for(int i = 0; i < input.size(); i++) {
    for(int j = 0; j < vowels.size(); j++) {
      if(input[i] == vowels[j]) {
        if(input[i] == 'e' || input[i] == 'u') {
          result.push_back(input[i]);
        }
        result.push_back(input[i]);
      }
    }
  }

  cout << "Whale language translation: ";
  for(int i = 0; i < result.size(); i++) {
    cout << result[i];
  }
}