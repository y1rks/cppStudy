#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <string>

using namespace std;

class AirPlane {
public:
  string getType();
  virtual void fly()=0;
protected:
  string m_type;
};

#endif // _AIRPLANE_H_
