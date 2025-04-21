#pragma once
#include "Weather.h"
class Service{
private:
	
public:
	virtual Weather getWeather(string s) = 0;
	virtual ~Service();
};

