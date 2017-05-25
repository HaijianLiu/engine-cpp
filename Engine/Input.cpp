//
//  Input.cpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#include "Input.hpp"

Input::Input(){
  std::cout << "Input constructor" << '\n';
};


bool Input::WaitButtonDown(std::string buttonName){
  std::string key;
  std::cin >> key;
  if (buttonName == key) {
    return true;
  }else return false;
}
