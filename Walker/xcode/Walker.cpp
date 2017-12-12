//
//  Walker.cpp
//  Walker
//
//  Created by Kat Sullivan on 12/11/17.
//
//

#include "Walker.h"
#include "cinder/Rand.h"

using namespace ci;
using namespace ci::app;
using namespace std;

Walker::Walker() {
    x = cinder::app::getWindowWidth()/2;
    y = cinder::app::getWindowHeight()/2;
    goingUp = 1;
    goingRight = 1;
}

void Walker::display() {
    cinder::gl::color(1.0, 0.0, 0.0);
    cinder::gl::drawSolidEllipse(vec2(x,y), 1.0, 1.0);
}

void Walker::step() {
    // circles
    
    float stepX = randFloat(5);
    float stepY = randFloat(5);
    x += stepX * goingRight;
    y += stepY * goingUp;
    
    int choice = randInt(2);
    if (choice == 0) {
        goingUp *= -1;
    } else {
        goingRight *= -1;
    }
    
}
