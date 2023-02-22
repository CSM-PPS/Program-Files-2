

/*
   ********Important notes about "consructor in derived class"  ************

   1) We can use constructor in derived class
   2) If base class do not have any arguments, there is no need of any
   constructor in derived class
   3) But if there are one or more arguments in base class constructor
   then derived class need to pass arguments to the base class constructor
   4) If both base class and derived class have constructor then base class
   constructor is called first.
   5) In multilevel inhertance, Base classes are constructed in the order
   in which they appear in class declaration
   6) in multilevel inheritance, the constructors are executed in the order
   of inheritance.

   ******SPECIAL SYNTAX*********************
    1) C++ supports a special syntax for passing arguments to multiple base classes
    2) The constructor of the derived class receives all the arguments at once and then will pass the
    call to the respective base classes
    3)The body is called after the constructors is finished executing

     ******************SYNTAX EXAMPLE*******************
     Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
    {
    ….
    } Base 1-Constructor (arg1,arg2)


Special Case of Virtual Base Class

1)The constructors for virtual base classes are invoked before a non-virtual base class
2)If there are multiple virtual base classes, they are invoked in the order declared
3)Any non-virtual base class are then constructed before the derived class constructor is executed



*/

