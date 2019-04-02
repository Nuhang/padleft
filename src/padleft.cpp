
#include <iostream>



std::string pad_left(const std::string& str, int num_spaces)
{
    std::string out = str;
    std::string out1 = "";
    for (int i = 0; i < num_spaces; i++) {
        out1 = " " + out1; // this is rubbish ;)
    }
    out = out1 + out;
    return out;
   
}


int main(){
    const std::string str = "Hello";
    std::cout << pad_left(str, 3)<< std::endl;
}
