/**
 * @file timer.cpp
 * @author Joshua Jerred
 * @brief Dead simple timer library. Constructor starts timer, elapsed returns 
 * seconds since start.
 * @version 0.1
 * @date 2022-09-15
 * @copyright Copyright (c) 2022
 */

#include "timer.h"
#include <chrono>

Timer::Timer():mBegin(mClock::now()) {
}

void Timer::reset() {
    mBegin = mClock::now();
}

int Timer::elapsed() const { 
    return std::chrono::duration_cast<mSecond> (mClock::now() - mBegin).count();
}