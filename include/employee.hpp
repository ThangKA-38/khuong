#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class nhanvien {
private:
  string ho[100];
  string ten[100];
  int tuoi[100];
  int gioitinh[100];
  int chucvu[100];
  bool checkchu(string a);
  void ktkc(string &s);
  void ktch(string &s);

public:
  void nhap();
  void timkiem();
  void xoa();
  int dodaif();
  void in();
};

class system_management_employee {
private:
  nhanvien a;
  int luaChon;

public:
  void input();
};
