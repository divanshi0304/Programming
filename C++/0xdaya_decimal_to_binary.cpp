#include <bits/stdc++.h> 
using namespace std; 
#define ll unsigned long long
int main() {
  string bin_str;
  cout << "Enter the binary number: ";
  cin >> bin_str;
  cout << "The decimal representation of <<bin_str<<is ;
  cout << bitset<64>(bin_str).to_ullong();
  return 0;  
}

