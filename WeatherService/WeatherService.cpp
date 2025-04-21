#include <iostream>
#include "JsonService.h"
int main(){
	JsonService js;
	Weather w = js.getWeather("weather.json");
	return 0;
}
