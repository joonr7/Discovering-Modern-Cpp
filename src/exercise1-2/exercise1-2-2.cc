#include <iostream>
#include <fstream>
#include <array>
#include <vector>

using namespace std;
int main()
{
  // 스택 및 힙에 배열 만들기
  // 스택영역: 컴파일 타임에 크기가 결정됨. 함수 호출과 함께 할당되며, 호출 완료되면 소멸. 지역변수, 매개변수 등
  // 힙영역: 사용자의 동적할당, 사용자가 직접 관리해야하는 영역. 런타임에 크기가 결정됨. 전역적으로 접근 가능. 해제도 해줘야 함.
  스택, array 는 스택영역을 사용한다.
  std::array<int, 10> s = {1};

  // vector는 동적할당하므로 힙 영역을 사용한다. vector 는 자동으로 해제 하므로 일단 생략.
  // std::vector<int> h(10,1);

  int* h2 = new int[10];
  for (auto it = 0; it<10; ++it)
    h2[it] = 100;
  

  // vargrind 사용해서 delete 사용하지 않으면 어떻게 되는지 보기
  /*
  ==40780== Memcheck, a memory error detector
  ==40780== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
  ==40780== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
  ==40780== Command: ./build/exercise1-2/exercise1-2-2
  ==40780== 
  ==40780== 
  ==40780== HEAP SUMMARY:
  ==40780==     in use at exit: 40 bytes in 1 blocks
  ==40780==   total heap usage: 2 allocs, 1 frees, 72,744 bytes allocated
  ==40780== 
  ==40780== LEAK SUMMARY:
  ==40780==    definitely lost: 40 bytes in 1 blocks
  ==40780==    indirectly lost: 0 bytes in 0 blocks
  ==40780==      possibly lost: 0 bytes in 0 blocks
  ==40780==    still reachable: 0 bytes in 0 blocks
  ==40780==         suppressed: 0 bytes in 0 blocks
  ==40780== Rerun with --leak-check=full to see details of leaked memory
  ==40780== 
  ==40780== For lists of detected and suppressed errors, rerun with: -s
  ==40780== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
  */

}