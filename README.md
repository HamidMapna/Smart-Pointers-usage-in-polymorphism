<h1>Rvalue Reference Usage</h1>
The main point of this small project lies in rvalue conceptual understanding, modeled in a composite design pattern.<Br/>
<Br/>I implemented mathematical expression calculation using composite design pattern which is based on polymorphism and calculate each part of expression in a recursive manner. 
<Br/> Example:
<Br/> <h1>((10+(2*6))-5)</h1><Br/>
I choiced to pass the arguments as rvalue reference to composite constructor and realized the virtual method of base class can't resolve in runtime causing segmentaion fault. That's because the temporary memory bound to constructor arguments get destroyed afterwards.<BR/>
Smart pointers are good solution for this problem, as they take ownership of thier object until they go out of scope. I used shared pointer to hold the ownership of composite instance.


