#include "inc/col/ColCircle.h"

ColCircle::ColCircle(sf::Vector2f *position, float radius){
		this->position = position;
		this->radius = radius;
}

sf::Vector2f ColCircle::getPosition(){
    return *position;
}
