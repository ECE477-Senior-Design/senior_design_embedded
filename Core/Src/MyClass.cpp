// Source file: MyClass.cpp

#include "MyClass.h"

MyClass::MyClass() {
    // Constructor
    myPrivateVariable = 0;
}

MyClass::~MyClass() {
    // Destructor
}

void MyClass::setPrivateVariable(int value) {
    myPrivateVariable = value;
}

int MyClass::getPrivateVariable() {
    return myPrivateVariable;
}
