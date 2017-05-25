//
//  main.cpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#include <iostream>
#include "Engine.hpp"



int main(int argc, const char * argv[]) {

  FSM* fsm = new FSM();


  // while (true) {
  // }

  std::cout << "main while is called!" << '\n';


  delete fsm;

  return 0;
}
