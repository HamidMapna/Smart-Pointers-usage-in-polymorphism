#include <iostream>
<<<<<<< HEAD
//#include "src/Composite.hpp"
=======
#include "src/Composite.hpp"
>>>>>>> a52f201155392cb7b92443d5c931413e5ad52c27
    
    int main(){//calculate expression ((10+2)-5)
       /* std::shared_ptr<composite> exp1 = std::make_shared<composite>
                                (std::make_shared<primitive>(10), 
                                std::make_shared<primitive>(2), &add);
        std::shared_ptr<composite> exp2 = std::make_shared<composite>(std::move(exp1), std::make_shared<primitive>(5), &subtract);
        double result = exp2->evaluate();*/
        std::cout<<"final result of expression="<<std::endl;
        return 0;   
    }