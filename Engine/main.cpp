//
//  main.cpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#include <iostream>
#include "Engine.hpp"

#include "User1.cpp"
#include "User2.cpp"

int main(int argc, const char * argv[]) {

  FSM* fsm = new FSM();
  fsm->InitFSM("User1",new User1());
  fsm->InitFSM("User2",new User2());

  while (true) {
    fsm->Update();
  }

  delete fsm;

  return 0;
}
