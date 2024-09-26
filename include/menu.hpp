#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class menu {
public:
  virtual void input() = 0;
  virtual void display() = 0;
};

class cafe : public menu {
private:
  string name;
  int price;

public:
  void input();
  // kiem tra chu co nhap dung khong
  bool checkchu(string a);
  // kiem tra khoang cach
  void ktkc(string &s);
  // kiem tra chu
  void ktch(string &s);
  // hamtimkiem
  void timkiembangtencafe();
  // hamxoa
  void xoacafe();
  // docfile
  int dodaifcafe();
  void display();
};

class nuoctraicay : public menu {
private:
  string name;
  int price;

public:
  void input();
  // kiem tra chu co nhap dung khong
  bool checkchu(string a);
  // kiem tra khoang cach
  void ktkc(string &s);
  // kiem tra chu hoa
  void ktch(string &s);
  // hamtimkiem
  void timkiembangtennuoctraicay();
  // hamxoa
  void xoanuoctraicay();
  // docfile
  int dodaifnuoctraicay();
  void display();
};

class menus {
  menu **ma;
  int size;

public:
  menus();
  void input();
  ~menus();
};

class system_managing_menu {
private:
  cafe a;
  nuoctraicay b;
  menus c;
  int luaChon;

public:
  void input();
};
