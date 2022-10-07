#include <bits/stdc++.h>

using namespace std;

void swap(string & a, int i, int j) {
  char temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void reverseStr(string & a) {
  int i = 0;
  int j = a.length() - 1;

  while (i < j) {
    swap(a, i, j);
    i++;
    j--;
  }
}

int main() {

  string str = "HELLO";
  reverseStr(str);
  cout << "The reversed string is- " << str;

  return 0;
}
