//
//  User.hpp
//  Engine
//
//  Created by haijian on 2017/05/25.
//  Copyright © 2017 haijian. All rights reserved.
//

#ifndef User_hpp
#define User_hpp

#include <iostream>
#include "Engine.hpp"

class User : public Entity{
  void Update(){
    std::cout << "User is called!" << '\n';
  }
};

#endif /* User_hpp */
