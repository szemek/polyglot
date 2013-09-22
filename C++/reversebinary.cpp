// Tasks from https://www.spotify.com/pl/jobs/tech/reversed-binary/
//
// Task
// Your task will be to write a program for reversing numbers in binary. For
// instance, the binary representation of 13 is 1101, and reversing it gives
// 1011, which corresponds to number 11.
//
// Input
// The input contains a single line with an integer N, 1 ≤ N ≤ 1000000000.
//
// Output
// Output one line with one integer, the number we get by reversing the binary representation of N.
//
// Sample input 1: 13
// Sample output 1: 11
//
// Sample input 2: 47
// Sample output 2: 61
//

#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> convert_to_binary(int number) {
  vector<int> result;
  while(number > 0) {
    result.push_back(number % 2);
    number /= 2;
  }
  return result;
}

int convert_to_decimal(vector<int> input) {
  int length = input.size();
  int multiplier = 1;
  int decimal = 0;
  for(int i = length-1; i >= 0; i--) {
    decimal += input.at(i) * multiplier;
    multiplier *= 2;
  }
  return decimal;
}

int main(){
  int number;

  cin >> number;

  cout << convert_to_decimal(convert_to_binary(number)) << endl;

  return 0;
}
