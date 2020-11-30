//
// Created by amoghavarsha on 11/28/20.
//

#include "LandBasedRobot.h"

void fp::LandBasedRobot::setName(const std::string name) {
    (*this).name_ = name;
}

void fp::LandBasedRobot::setSpeed(double speed) {
    (*this).speed_ = speed;
}

void fp::LandBasedRobot::setWidth(double width) {
    (*this).width_ = width;
}

void fp::LandBasedRobot::setLength(double length) {
    (*this).length_ = length;
}

void fp::LandBasedRobot::setHeight(double height) {
    (*this).height_ = height;
}

void fp::LandBasedRobot::setCapacity(double capacity) {
    (*this).capacity_ = capacity;
}

void fp::LandBasedRobot::set_x_(int x) {
    (*this).x_ = x;
}

void fp::LandBasedRobot::set_y_(int y) {
    (*this).y_ = y;
}

void fp::LandBasedRobot::set_direction_(char direction) {
    (*this).direction_ = direction;
}

// Define Getters
const std::string &fp::LandBasedRobot::getName() const {
    return (*this).name_;
}

double fp::LandBasedRobot::getSpeed() const {
    return (*this).speed_;
}

double fp::LandBasedRobot::getWidth() const {
    return (*this).width_;
}

double fp::LandBasedRobot::getLength() const {
    return (*this).length_;
}

double fp::LandBasedRobot::getHeight() const {
    return (*this).height_;
}

double fp::LandBasedRobot::getCapacity() const {
    return (*this).capacity_;
}

int fp::LandBasedRobot::get_x_() const {
    return (*this).x_;
}

int fp::LandBasedRobot::get_y_() const {
    return (*this).y_;
}

char fp::LandBasedRobot::get_direction_() const {
    return (*this).direction_;
}