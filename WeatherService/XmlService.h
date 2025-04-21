#pragma once
#include "Service.h"
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};
