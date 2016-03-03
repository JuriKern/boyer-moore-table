#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  wstring t = L"roadrunner";
  int t_length = t.length();

  map<wchar_t,int> t_map;

  for (int i = 0; i < t_length; i++) {
    wchar_t ch = t[i];
    t_map[ch] = t_length - 1 - i;
  }

  for (map<wchar_t,int>::iterator it = t_map.begin(); it != t_map.end(); it++) {
    wcout << it->first << ":" << it->second  << ":" << int(it->first) << endl;
  }

  return 0;
}
