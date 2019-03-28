//
// Created by dyf on 9/5/18.
//
#include<opencv2/opencv.hpp>
#include<iostream>

int main(){
    cv::namedWindow("input",cv::WINDOW_AUTOSIZE);
    cv::VideoCapture cap;
    cap.open(0);

    if(!cap.isOpened()){
        std::cerr<<"Could not open camera"<<std::endl;
        return -1;
    }
}
