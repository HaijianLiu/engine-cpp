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
#include <map>

#include "Entity.hpp"



class FSM{
public:
  FSM();
  ~FSM();
  void InitFSM(std::string,Entity*);
  void Update();

private:
  std::map<std::string, Entity*> entityMap;
};

#endif /* FSM_hpp */
