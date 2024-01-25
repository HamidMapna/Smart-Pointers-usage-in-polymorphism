#pragma once
#include <memory>
typedef double (*operation)(double, double);

    double add(double a, double b);
    double subtract(double a, double b);
    double divide(double a, double b);
    double multiply(double a, double b);

    
    class base_object{
        public:
            virtual double evaluate() = 0;
            virtual ~base_object(){}
    };
    class primitive: public base_object{
        private:
            double value;
        public:
            primitive(double _value): value(_value){}          
            double evaluate() override{
               return value; 
            }
    };
    
    class composite: public base_object{
        private:
            std::shared_ptr<base_object> left;
            std::shared_ptr<base_object> right;
            operation op;
        public:
         composite() = delete;
         composite(std::shared_ptr<base_object> _left, std::shared_ptr<base_object> _right, operation _op);
         composite(base_object *_left, base_object *_right, operation _op);
         double evaluate() override;
    };