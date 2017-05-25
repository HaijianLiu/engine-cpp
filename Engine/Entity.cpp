//
//  Entity.cpp
//  Engine
//
//  Created by haijian on 2017/05/25.
//  Copyright © 2017 haijian. All rights reserved.
//

#include "Entity.hpp"

Entity::Entity(){
  std::cout << "Entity constructor is called!" << '\n';
}

void Entity::Update(){
  std::cout << "Entity Update is called!" << '\n';
}
