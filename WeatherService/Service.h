#pragma once
#include "Weather.h"
class Service: public Weather{
private:
	
public:
	virtual Weather getWeather(string s) = 0;
	virtual ~Service();
};

