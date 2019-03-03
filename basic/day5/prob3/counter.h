#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter{
private:
    //  回数
    int m_count;
    static int totalCount;
public:
    //  コンストラクタ
    Counter();
    //  リセット
    void reset();
    //  カウント
    void count();
    //  カウントの数
    int getCount();
    static int getTotalCount();
};

#endif // _COUNTER_H_
