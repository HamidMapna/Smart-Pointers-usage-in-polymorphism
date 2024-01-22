#include "Composite.hpp"
using namespace std;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

composite::composite(std::shared_ptr<base_object> _left, std::shared_ptr<base_object> _right, operation _op):
                    left(std::move(_left)), right(std::move(_right)), op(_op){                    
}

composite::composite(base_object *_left, base_object *_right, operation _op):left(_left), right(_right), op(_op){}
int composite::evaluate() {
                return op(left->evaluate(), right->evaluate());
}