#include "src/stack.hpp"

using namespace std;
using namespace datastructure;
using namespace stack;

bool verifyBalancedSequence(const string &input){
  Stack<char> s1;
  for(int i = 0; i < input.size(); i++){
    if (input[i] == '{' ||
        input[i] == '[' ||
        input[i] == '('){
        s1.push(input[i]);
        continue;
    }

    char top = s1.getTop();
    if (input[i] == '}' && top == '{'||
        input[i] == ']' && top == '['||
        input[i] == ')' && top == '('){
        s1.pop();
        continue;
    }
    else
      return false;
  }

  if(s1.isEmpty())
    return true;
 
  return false;
}

int main(int argc, char **argv){
  if (argc < 2){
    cout << "usage: "<< argv[0] << " [()]()]" << endl;
    return -1;
  }

  string sequence = argv[1];

  if(verifyBalancedSequence(sequence))
    cout << "Balanced" << endl;
  else
    cout << "Unbalanced" << endl;

  return 0;
}
