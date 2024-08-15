#include <iostream>
#include <boost/version.hpp>
#include <jsoncpp/json/json.h>



int main(int argc, char** argv)
{
    std::cout << "Boost库版本： " << BOOST_VERSION << std::endl;

    Json::Value root;

    Json::FastWriter fast;

    root["ModuleType"] = Json::Value("你好~");
    root["ModuleCode"] = Json::Value("22");
    root["ModuleDesc"] = Json::Value("33");
    root["DateTime"] = Json::Value("44");
    root["LogType"] = Json::Value("55");

    std::cout << fast.write(root) << std::endl;

    return 0;
}