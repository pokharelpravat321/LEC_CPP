#include<iostream>
namespace bct{
    int room=400;
    char subject[20]="math";
    void subject(){
        std::cout<<subject<<std::endl;

    }
    void room(){
        std::cout<<room<<std::endl;

    }
}

namespace BEI{
int class=401;
char subject [20]="electromagnetics";

void subject(){
    std::cout<<subject<<std::endl;

}
void class(){
    std::cout<<class<<std::end;
}

}

int main(){
    using namespace bct;

    using namespace BEI;
    subject();
    subject();
    return 0;

}