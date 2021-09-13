#include <iostream>
#include <fstream>

using namespace std;
int main()
{
  // 하나의 문자를 가리키는 포인터
  char sample_char = 'x';
  char* cp = &(sample_char);
  // char* cp = new char(&sample_char);
  cout << "sample_char: " << sample_char << ", &sample_char: " << &sample_char << ", cp: " << cp << ", &cp: " << &cp << ", *(cp): " << *(cp) << endl;
  
  // 10개의 정수 요소를 갖는 배열
  int ia[10] = {0};
  for (auto it : ia)
    cout << it;
  cout << endl;

  // 10개의 정수 요소를 갖는 배열을 가리키는 포인터
  int* iap = new int[10];

  // 문자로 이루어진 배열을 가리키는 포인터
  char* sap = new char[5];

  // "문자를 가리키는 포인터" 를 가리키는 포인터
  char** cpp = &(cp);
  cout << "cpp: " << cpp << endl;

  // 정숫값을 갖는 상수
  const int ci = 3;

  // 정숫값을 갖는 상수를 가리키는 포인터;
  const int* cip = &ci;
  cout << "ci: " << ci << ", &ci: " << &ci << ", cip: " << cip << ", *(cip): " << *(cip) << endl;

  // 정수를 가리키는 상수 포인터
  int i = 10;
  const int* ip = &i;
  cout << "i: " << i << ", &i: " << &i << ", ip: " << ip << ", *(ip): " << *(ip) << endl;

  
  // delete cpp;
  // delete cp;
  // delete iap;
}