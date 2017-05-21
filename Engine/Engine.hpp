//
//  Engine.hpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#ifndef Engine_hpp
#define Engine_hpp

#include <iostream>
#include "Input.hpp"
#include "FSM.hpp"

class Engine{
public:
  Engine();
  ~Engine();

  void Update (){
    std::cout << "Engine Update() is called" << '\n';
  }

  Input input;
  FSM fsm;
};

#endif /* Engine_hpp */
