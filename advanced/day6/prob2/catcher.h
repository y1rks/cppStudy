#ifndef _CATCHER_H_
#define _CATCHER_H_

#include "baseballplayer.h"

class Catcher : public BaseballPlayer {
public:
    Catcher(string name, int number);
    ~Catcher();
    void play();
};

#endif // _CATCHER_H_
