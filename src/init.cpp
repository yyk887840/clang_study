#include "main.h"

#include "system/tsl/ordered_map.h"
#include "testconfig.hpp"
#include "userConfig/chicken.hpp"
#include <iostream>

void init()
{
    json j1 = json::parse(userConfig);
    //基于迭代器的rangFor
    for (auto it = j1["底盘"]["马达"].begin(); it != j1["底盘"]["马达"].end(); it++)
    {
        std::cout << it.key() << it.value()["端口"] << std::endl;
    }
    // ;
    for (auto &it : j1["底盘"]["马达"])
        std::cout << "= " << it["端口"] << std::endl;
}