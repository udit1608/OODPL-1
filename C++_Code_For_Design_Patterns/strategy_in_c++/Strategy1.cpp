#include <iostream>
#include "Strategy1.h"


//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Strategy1::Strategy1() {
  std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Strategy1::~Strategy1() {
  std::cout << std::endl << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// displayComponents
//-----------------------------------------------------------------------------
void Strategy1::displayComponents() {
  if (true == getComponent1()) {
    displayComponent1();
  }
  if (true == getComponent2()) {
   displayComponent2();
  }
  if (true == getComponent3()) {
    displayComponent3();
  }
}

//-----------------------------------------------------------------------------
// displayComponent1
//-----------------------------------------------------------------------------
void Strategy1::displayComponent1() {
  std::cout << "Displaying a text." << std::endl;
}

//-----------------------------------------------------------------------------
// displayComponent2
//-----------------------------------------------------------------------------
void Strategy1::displayComponent2() {
  std::cout << "Displaying an image." << std::endl;
}

//-----------------------------------------------------------------------------
// displayComponent3
//-----------------------------------------------------------------------------
void Strategy1::displayComponent3() {
  std::cout << "Displaying a video." << std::endl;
}

//-----------------------------------------------------------------------------
// setComponent1
//-----------------------------------------------------------------------------
void Strategy1::setComponent1(bool b) {
  _visibilityComponent1 = b;
}

//-----------------------------------------------------------------------------
// setComponent2
//-----------------------------------------------------------------------------
void Strategy1::setComponent2(bool b) {
  _visibilityComponent2 = b;
}

//-----------------------------------------------------------------------------
// setComponent3
//-----------------------------------------------------------------------------
void Strategy1::setComponent3(bool b) {
  _visibilityComponent3 = b;
}

//-----------------------------------------------------------------------------
// getComponent1
//-----------------------------------------------------------------------------
const bool Strategy1::getComponent1() const {
  return _visibilityComponent1;
}

//-----------------------------------------------------------------------------
// getComponent2
//-----------------------------------------------------------------------------
const bool Strategy1::getComponent2() const {
  return _visibilityComponent2;
}

//-----------------------------------------------------------------------------
// getComponent3
//-----------------------------------------------------------------------------
const bool Strategy1::getComponent3() const {
  return _visibilityComponent3;
}
