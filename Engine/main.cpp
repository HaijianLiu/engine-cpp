//
//  main.cpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#include <iostream>
#include "GameScript.hpp"
#include "Engine.hpp"
#include "FSM.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    FSM* fsm = new FSM();

    GameScript* gameScript = new GameScript();

    while (true) {
      gameScript->Update();
    }

    delete fsm;

    return 0;
}
