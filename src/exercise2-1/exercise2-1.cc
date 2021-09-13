#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class polynomial{
public:
  polynomial(const int& n)
    : order{n}, coefficient{new vector<double>(order)}
  {
    // vector<double> v(order);
    // coefficient.resize(order);
    cout << coefficient.size() << endl;
    // for (auto it = 0; it < order; ++it)
    //   coefficient(it) = 3.0;
    
    
  }

  ~polynomial() 
  {
    delete[] coefficient;
  }

  void print_file()
  {
    string filename = "polynomial.txt";
    ofstream txtfile;
    txtfile.open(filename);
    txtfile << coefficient << endl;
    txtfile.close();
    cout << "File[" << filename << "] is saved." << endl;
  }

private:
  int order;
  vector<double> *coefficient;
};
int main()
{

}