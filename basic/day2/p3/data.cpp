#include "data.h"

void CData::init() {
  number = 0;
  comment = "";
}

int CData::getNumber() {
  return number;
}

void CData::setNumber(int number) {
  this->number = number;
}

string CData::getComment() {
  return comment;
}

void CData::setComment(string comment) {
  this->comment = comment;
}
