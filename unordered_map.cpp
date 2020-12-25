#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    //创建并初始化一个 unordered_map 容器，其存储的 <string,string> 类型的键值对
    std::unordered_map<std::string, std::string> testMap{
        {"Rookie","从头而来"},
        {"C++","面向对象"},
        {"C语言","h面向过程"} };
    //查找指定键对应的值，效率比关联式容器高
    string str = testMap.at("Rookie");
    cout << "str = " << str << endl;

    //使用迭代器遍历哈希容器，效率不如关联式容器
    for (auto iter = testMap.begin(); iter != testMap.end(); ++iter)
    {
        //pair 类型键值对分为 2 部分
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}