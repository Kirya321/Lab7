#include "XmlService.h"
#include "pugixml-1.15/src/pugixml.hpp"
using namespace pugi;
Weather XmlService::getWeather(string s){
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw exception("error");
    xml_node node = doc.child("current");
    string city = node.child("city").
        attribute("name").
        as_string(); //  Киров
    double lon = node.child("city").child("coord").
        attribute("lon").
        as_int(); // 49.6601
    double lat = node.child("city").child("coord").// 58.5966
        attribute("lat").
        as_int(); // 49.6601
    double temperature = node.child("temperature").
        attribute("value").
        as_double(); // 5.69
    string weather = node.child("weather").attribute("value").as_string(); // дождь
    double windSpeed = node.child("speed").attribute("value").as_float(); // 4.27
    int clouds = node.child("clouds").attribute("value").as_int(); // 100
    return Weather(city, lon,temperature,lat,weather,windSpeed,clouds);
}
