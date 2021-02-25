#include <iostream>
using namespace std;

class tovar{
    public:
    void set_cost(int x);
    int get_cost();
    private:
    int cost;
};

void tovar::set_cost(int x){
    this->cost = x;
}

int tovar::get_cost(){
    return this->cost;
}

int main()
{
    tovar aaa;
aaa.set_cost(3000);
cout << aaa.get_cost() << endl;
}
