<h1>Rvalue Reference Usage</h1>
The main point of this small project lies in rvalue conceptual understanding, modeled in a composite design pattern.<Br/>
<Br/>I implemented mathematical expression calculation using composite design pattern which is based on polymorphism and calculate each part of expression in a recursive manner. 
<Br/> Example:
<Br/> <h1>((10+(2*6))-5) = 17</h1><Br/>
I choiced to pass the arguments as rvalue reference to composite constructor and realized the virtual method of base class can't be resolved in runtime causing segmentaion fault. That's because the temporary memory bound of rvalue arguments to constructor arguments get destroyed afterwards.<BR/>
Smart pointers are good solution for this problem, as they take ownership of thier object until they go out of thier scope. I used shared pointer to hold the ownership of composite instance.

A simple automatic test using google test framework was also implememted through github action workflow. You can find the YML file in .github/workflows path to find how to build a simple pipeline to manage build, test, atrifact creation and also publishing test results mechanisms. 


