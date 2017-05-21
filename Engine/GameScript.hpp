//
//  GameScript.hpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#ifndef GameScript_hpp
#define GameScript_hpp

#include <iostream>
#include "Engine.hpp"

class GameScript: public Engine{
public:
  GameScript();

  // Update is called once per frame
  void Update (){
    std::cout << "Game Update() is called" << '\n';

    if (input.WaitKey("a")) {
      std::cout << "WaitKey() returns a" << '\n';
      fsm.Load("GameScript");
    }else fsm.Load("Engine");
  }
};

#endif /* GameScript_hpp */
