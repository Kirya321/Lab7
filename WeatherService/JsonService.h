#pragma once
#include "Service.h"
class JsonService :public Service{
private:

public:
	virtual Weather getWeather(string s) override;
	virtual ~JsonService() {};
};
