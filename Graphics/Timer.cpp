#include "Timer.h"

Timer::Timer()
{
	start = std::chrono::high_resolution_clock::now();
	stop = std::chrono::high_resolution_clock::now();
}

double Timer::GetMilisecondsElapsed()
{
	if (isrunning)
	{
		auto elaped = std::chrono::duration<double, std::milli>(std::chrono::high_resolution_clock::now() - start);
		return elaped.count();
	}
	else
	{
		auto elaped = std::chrono::duration<double, std::milli>(stop - start);
		return elaped.count();
	}
}

void Timer::Restart()
{
	isrunning = true;
	start = std::chrono::high_resolution_clock::now();
}

bool Timer::Stop()
{
	if (!isrunning)
		return false;
	else
	{
		stop = std::chrono::high_resolution_clock::now();
		isrunning = false;
		return true;
	}
}

bool Timer::Start()
{
	if (isrunning)
	{
		return false;
	}
	else
	{
		start = std::chrono::high_resolution_clock::now();
		isrunning = true;
		return true;
	}
}
