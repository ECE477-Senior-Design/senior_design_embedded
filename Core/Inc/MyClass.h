// Header file: MyClass.h

#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
private:
    int myPrivateVariable;

public:
    MyClass(); // Constructor
    ~MyClass(); // Destructor

    void setPrivateVariable(int value);
    int getPrivateVariable();
};

#endif
