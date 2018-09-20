#include "string"

#include "boost/algorithm/string.hpp"

using namespace std;
using namespace boost;
int main(){
    string s("gengjiawen");
    string t("geng");
    bool b = contains(s, t);
    cout << b << endl;
    return 0;
}

