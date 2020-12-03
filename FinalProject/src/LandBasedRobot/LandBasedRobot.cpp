//
// Created by amoghavarsha on 11/28/20.
//

#include "LandBasedRobot.h"

void fp::LandBasedRobot::setName(const std::string name) {
    name_ = name;
}

void fp::LandBasedRobot::setSpeed(double speed) {
    speed_ = speed;
}

void fp::LandBasedRobot::setWidth(double width) {
    width_ = width;
}

void fp::LandBasedRobot::setLength(double length) {
    length_ = length;
}

void fp::LandBasedRobot::setHeight(double height) {
    height_ = height;
}

void fp::LandBasedRobot::setCapacity(double capacity) {
    capacity_ = capacity;
}

void fp::LandBasedRobot::set_x_(int x) {
    x_ = x;
}

void fp::LandBasedRobot::set_y_(int y) {
    y_ = y;
}

void fp::LandBasedRobot::set_direction_(char direction) {
    direction_ = direction;
}

// Define Getters
const std::string &fp::LandBasedRobot::getName() const {
    return name_;
}

double fp::LandBasedRobot::getSpeed() const {
    return speed_;
}

double fp::LandBasedRobot::getWidth() const {
    return width_;
}

double fp::LandBasedRobot::getLength() const {
    return length_;
}

double fp::LandBasedRobot::getHeight() const {
    return height_;
}

double fp::LandBasedRobot::getCapacity() const {
    return capacity_;
}

int fp::LandBasedRobot::get_x_() const {
    return x_;
}

int fp::LandBasedRobot::get_y_() const {
    return y_;
}

char fp::LandBasedRobot::get_direction_() const {
    return direction_;
}