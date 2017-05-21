//
//  main.cpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#include <iostream>
#include "Engine.hpp"

#include "GameScript.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    // FSM* fsm = new FSM();

    // fsm->Add(new GameScript());
    GameScript gameScript;

    // FSM* fsm = new FSM();

    // Engine engine(fsm);

    while (true) {
      // std::cout << "fsm->scriptName" <<  fsm->scriptName '\n';
      gameScript.Update();
      // std::cout << "state " << state << '\n';
      // if (state == "GameScript") {
      //   gameScript.Update();
      // }else engine.Update();
    }

    // delete fsm;

    return 0;
}
