//
//  FSM.hpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017 haijian. All rights reserved.
//

#ifndef FSM_hpp
#define FSM_hpp

#include <iostream>

class FSM{
public:
  FSM();
  void Load(std::string);
  // std::string GetScriptName(){
  //   return scriptName;
  // }
  std::string scriptName = "GameScript";

};

#endif /* FSM_hpp */
