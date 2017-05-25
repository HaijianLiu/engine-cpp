//
//  User.hpp
//  Engine
//
//  Created by haijian on 2017/05/25.
//  Copyright © 2017 haijian. All rights reserved.
//

#include <iostream>
#include "Engine.hpp"

class User1 : public Entity{
public:
  void Update(){
    std::cout << "User1 Update is called!" << '\n';
    if (Input::WaitKey("a")) {
      i ++;
    }
    std::cout << "User1 : i = " << i << '\n';
  }
private:
  int i = 0;
};
