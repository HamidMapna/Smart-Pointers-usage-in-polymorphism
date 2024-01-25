#include "Composite.hpp"
using namespace std;

double add(double a, double b){
    return a + b;
}

double divide(double a, double b){
    return (b==0)? 0: a/b;
}

double multiply(double a, double b){
    return a * b;
}

double subtract(double a, double b){
    return a - b;
}

composite::composite(std::shared_ptr<base_object> _left, std::shared_ptr<base_object> _right, operation _op):
                    left(std::move(_left)), right(std::move(_right)), op(_op){                    
}

composite::composite(base_object *_left, base_object *_right, operation _op):left(_left), right(_right), op(_op){}
double composite::evaluate() {
                return op(left->evaluate(), right->evaluate());
}