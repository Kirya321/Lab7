#include <iostream>
#include "XmlService.h"
#include "JsonService.h"
int main(){
	JsonService js;
	Weather W = js.getWeather("weather.json");
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	return 0;
}
