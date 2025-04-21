#include <iostream>
#include "XmlService.h"
#include "JsonService.h"
int main(){
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	return 0;
}
