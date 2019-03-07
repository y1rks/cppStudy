#include "newString.h"

NewString::NewString() {
    m_value = "";
}

NewString::NewString(string value) {
    m_value = value;
}

NewString::NewString(NewString& value) {
    m_value = value.getValue();
}

NewString& NewString::operator= (NewString& n) {
    m_value = n.getValue();
    return *this;
}

string NewString::getValue() {
    return m_value;
}

bool operator==(NewString& value1, NewString& value2) {
    string str1 = value1.getValue();
    string str2 = value2.getValue();
    string strtmp1 = str1;
    string strtmp2 = str2;
    transform(str1.begin(), str1.end(), strtmp1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), strtmp2.begin(), ::toupper);
    return strtmp1 == strtmp2;
}
