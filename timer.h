#ifndef _TIMER_H_
#define _TIMER_H_

class Timer
{
public:
    Timer();
    void pause();
    void reset();
    int elapsed() const;

private:
    typedef std::chrono::high_resolution_clock mClock;
    typedef std::chrono::duration<int, std::ratio<1> > mSecond;
    std::chrono::time_point<mClock> mBegin;
};

#endif