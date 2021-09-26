#include <iostream>
#include <fstream>
#include <vector>
#include <cassert>

using namespace std;

class Polynomial
{
  friend ostream& operator<<(ostream&, const Polynomial&);

public:
  explicit Polynomial(const int& n)
    : order_(n), coefficient_(vector<double>(order_ + 1, 0)) {}

  // // 복사 생성자
  // explicit Polynomial (const Polynomial& other)
  // {
  //   std::cout << "Copy constructor" << std::endl;
  //   order_ = other.order_;
  //   coefficient_ = other.coefficient_;
  // }

  ~Polynomial() {}

  // 이동 할당 연산자
  Polynomial&  operator=(const Polynomial& other)
  {
    cout << "Copy assignment operator" << endl;
    // 자기 자신에게 할당하는 경우 건너뛸 수 있음
    if (this != &other)
    {
      assert(order_ == other.order_); // 같은 차수를 가지는 지 확인
      order_ = other.order_;
      for (auto it = 0; it < coefficient_.size(); ++it)
        coefficient_[it] = other.coefficient_[it];
    }
    return *this;
  }

  void SetCoefficient()
  {
    cout << "Set coefficient using cin" << endl;
    for (auto it = 0; it < coefficient_.size(); ++it)
    {
      cout << "Coefficient of " << order_ - it << "th degree term ";
      cin >> coefficient_[it];
    }
  }

  void SetCoefficient(const vector<double>& co)
  {
    cout << "Set coefficient using vector" << endl;
    assert(coefficient_.size() == co.size());
    for (auto it = 0; it < coefficient_.size(); ++it)
    {
      coefficient_[it] = co[it];
    }
  }

  void FileOut()
  {
    string filename = "Polynomial.txt";
    ofstream txtfile(filename);
    for (auto it = 0; it < coefficient_.size(); ++it)
      txtfile << order_ - it << "th degree term: " << coefficient_[it] << endl;
    cout << "File[" << filename << "] is saved." << endl;
  }

private:
  int order_;
  vector<double> coefficient_;
};

// ostream에 대한 출력 함수
ostream &operator <<(ostream &o, const Polynomial &P)
{
  for (auto it = 0; it < P.coefficient_.size(); ++it)
    o << P.order_ - it << "th degree term: " << P.coefficient_[it] << endl;
  return o;
}

// ostream &operator <<(ostream &o, const Polynomial *Pp)
// {
//   o << *Pp;
//   return o;
// }

Polynomial f(double c2, double c1, double c0)
{
  cout << "Function Polynomial f" << endl;
  Polynomial output(2);
  vector<double> vec = {c2, c1, c0};
  output.SetCoefficient(vec);
  return output;
};

int main()
{
  Polynomial p2(2);
  vector<double> coefficient = {3.0, 6.0, 9.0};
  p2.SetCoefficient(coefficient);
  cout << p2;
  cout << &(p2) << endl;
  cout << " ---------------------------" << endl;

  // 이동 할당 연산자
  Polynomial cap2(2);
  cap2 = p2;
  cout << cap2;
  cout << "p2 address: " << &(p2) << endl;
  cout << "cap2 address: " << &(cap2) << endl;
  cout << " ---------------------------" << endl;

  // 복사 생성자(defalut)
  cout << "Copy constructor (default)" << endl;
  Polynomial ccp2(p2);
  cout << ccp2;
  cout << "p2 address: " << &(p2) << endl;
  cout << "ccp2 address: " << &(ccp2) << endl;
  cout << " ---------------------------" << endl;

  // 함수 f test
  Polynomial fp2(2);
  fp2 = f(1.0, 2.0, 3.0);
  cout << fp2;
  cout << "fp2 address: " << &(fp2) << endl;
  cout << " ---------------------------" << endl;

  return 0;
}
