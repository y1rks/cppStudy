#include "twostrings.h"

void TwoStrings::setString1(string s) {
    this->m_string1 = s;
}

void TwoStrings::setString2(string s) {
    this->m_string2 = s;
}

string TwoStrings::getString1() {
    return this->m_string1;
}

string TwoStrings::getString2() {
    return this->m_string2;
}

string TwoStrings::getConnectedString() {
    return getString1() + getString2();
}

int TwoStrings::getConnectedLength() {
    return getConnectedString().length();
}
