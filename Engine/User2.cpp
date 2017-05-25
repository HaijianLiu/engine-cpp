//
//  User2.cpp
//  Engine
//
//  Created by haijian on 2017/05/26.
//  Copyright © 2017 haijian. All rights reserved.
//

#include <iostream>
#include "Engine.hpp"

class User2 : public Entity{
public:
  void Update(){
    std::cout << "User2 Update is called!" << '\n';
    if (Input::WaitButtonDown("a")) {
      i ++;
    }
    std::cout << "User2 : i = " << i << '\n';
  }
private:
  int i = 0;
};
