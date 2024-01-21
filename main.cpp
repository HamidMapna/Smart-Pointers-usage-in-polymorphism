#include <iostream>
#include <memory>
using namespace std;
typedef int (*operation)(int, int);
int add(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
    class base_object{
        public:
            virtual int evaluate() = 0;
            virtual ~base_object(){}
    };
    class primitive: public base_object{
        private:
            int value;
        public:
            primitive(int _value): value(_value){}
            primitive(primitive&& primitive):value(std::move(primitive.value)){}
            int evaluate() override{
               return value; 
            }
    };
    
    class composite: public base_object{
        private:
            std::shared_ptr<base_object> left,right;
            operation op;
        public:
         explicit composite() = delete;
         composite(std::shared_ptr<base_object> _left, std::shared_ptr<base_object> _right, operation _op):
                    left(std::move(_left)), right(std::move(_right)), op(_op){
                    std::cout<<"composite moving constructor was called"<<std::endl;
         }
         composite(base_object *_left, base_object *_right, operation _op):left(_left), right(_right), op(_op){}
         int evaluate() override{
                return op(left->evaluate(), right->evaluate());
         }
    };
int main(){//calculate expression ((10+2)-5)
    std::shared_ptr<composite> exp1 = std::make_shared<composite>
                               (std::make_shared<primitive>(10), 
                               std::make_shared<primitive>(2), &add);
    std::shared_ptr<composite> exp2 = std::make_shared<composite>(std::move(exp1), std::make_shared<primitive>(5), &subtract);
    int result = exp2->evaluate();
    std::cout<<"final result of expression="<<result<<std::endl;
    return 0;   
}