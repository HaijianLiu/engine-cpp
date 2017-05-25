//
//  FSM.cpp
//  Engine
//
//  Created by haijian on 2017/05/25.
//  Copyright © 2017 haijian. All rights reserved.
//

#include "FSM.hpp"


FSM::FSM(){
  std::cout << "FSM constructor is called" << '\n';
}

FSM::~FSM(){
  std::cout << "FSM destructor is called" << '\n';
  for (std::map<std::string, Entity*>::iterator iter = entityMap.begin();iter != entityMap.end(); iter++) {
    delete entityMap[iter->first];
  }
}

void FSM::Update(){
  for (std::map<std::string, Entity*>::iterator iter = entityMap.begin();iter != entityMap.end(); iter++) {
    entityMap[iter->first]->Update();
  }
}

void FSM::InitFSM(std::string name,Entity* entity){
  entityMap[name] = entity;
}
