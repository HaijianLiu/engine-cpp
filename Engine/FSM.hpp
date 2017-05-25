//
//  FSM.hpp
//  Engine
//
//  Created by haijian on 2017/05/25.
//  Copyright © 2017 haijian. All rights reserved.
//

#ifndef FSM_hpp
#define FSM_hpp

#include <iostream>
#include <vector>

#include "Entity.hpp"


class FSM{
public:
  FSM();
  ~FSM();
  Entity* entity = new Entity;
  std::vector<Entity*> fsm;
};

#endif /* FSM_hpp */
