#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Polynomial
{
  friend ostream& operator<<(ostream&, const Polynomial&);

public:
  Polynomial(const int& n)
    : order_(n), coefficient_(vector<double>(order_ + 1, 0)) {}

  ~Polynomial() {}

  void SetCoefficient()
  {
    for (auto it = 0; it < coefficient_.size(); ++it)
    {
      cout << "Coefficient of " << order_ - it << "th degree term ";
      cin >> coefficient_[it];
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

ostream &operator <<(ostream &o, const Polynomial &P)
{
  for (auto it = 0; it < P.coefficient_.size(); ++it)
      o << P.order_ - it << "th degree term: " << P.coefficient_[it] << endl;
  return o;
}

ostream &operator <<(ostream &o, const Polynomial *Pp)
{
  o << *Pp;
  return o;
}

int main()
{
  Polynomial p5(3);
  p5.SetCoefficient();
  cout << p5 << endl;
  // p5.FileOut();

  return 0;
}
