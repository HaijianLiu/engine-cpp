//
//  Entity.hpp
//  Engine
//
//  Created by haijian on 2017/05/25.
//  Copyright © 2017 haijian. All rights reserved.
//

#ifndef Entity_hpp
#define Entity_hpp

#include <iostream>

class FSM;

class Entity{
public:
  Entity();
  virtual void Update();
};

#endif /* Entity_hpp */
