//
//  Input.hpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#ifndef Input_hpp
#define Input_hpp

#include <iostream>

class Input{
public:
  Input();
  static bool WaitButtonDown(std::string);
};

#endif /* Input_hpp */
