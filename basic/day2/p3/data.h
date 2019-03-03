#ifndef _CDATA_H_
#define _CDATA_H_

//#include <iostream>
#include <string>

using namespace std;

class CData {
private:
  int number;
  string comment;
public:
  void init();
  int getNumber();
  void setNumber(int number);
  string getComment();
  void setComment(string comment);
};

#endif // _CDATA_H_
