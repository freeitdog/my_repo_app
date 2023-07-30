#include <iostream>
#include <nlohmann/json.hpp>   //引入json.hpp，该文件已经放在系统默认路径：/usr/local/include/nlohmann/json.hpp
using namespace std;
// for convenience
using json = nlohmann::json;

int main() 
{
  auto config_json = json::parse(R"({"happy": true, "pi": 3.141})");  //构建json对象
  cout << config_json << endl;   //输出json对象值
  return 0;
}