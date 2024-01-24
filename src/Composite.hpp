#pragma once
#include <memory>
typedef int (*operation)(int, int);

    int add(int a, int b);
    int subtract(int a, int b);
    
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
            int evaluate() override{
               return value; 
            }
    };
    
    class composite: public base_object{
        private:
            std::shared_ptr<base_object> left,right;
            operation op;
        public:
         composite() = delete;
         composite(std::shared_ptr<base_object> _left, std::shared_ptr<base_object> _right, operation _op);
         composite(base_object *_left, base_object *_right, operation _op);
         int evaluate() override;
    };