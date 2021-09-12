#include  <iostream>
#include  <bits/stdc++.h>

using namespace std;


#define MAX_NAME_LEN 60
int main () {
  char y_name[MAX_NAME_LEN];

  cout << "Enter your name: ";
  cin.getline (y_name, MAX_NAME_LEN);

  cout << "\nEntered details are:\n"<<'\n';
  cout << "Name: " << y_name << endl;
}
