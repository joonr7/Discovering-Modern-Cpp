#include <iostream>
#include <fstream>

using namespace std;
int main()
{
  cout << "How old are you?" << endl;
  cout << "Enter >" << endl;
  unsigned int age;
  cin >> age;
  cout << "Your age: " << age << endl;

  string filename = "age.txt";
  cout << "Write age to the file[" << filename << "]. " << endl;
  ofstream age_file;
  age_file.open(filename);
  age_file << age << endl;
  age_file.close();
  cout << "File[" << filename << "] is saved." << endl;
}