//
// Created by root on 9/5/18.
//
#include<opencv2/opencv.hpp>
#include<iostream>
int main()
{
    cv::Mat img=cv::imread("/home/dyf/Documents/opencv3/learning-2/timg.jpeg");
    if(img.empty()){
        std::cout<<"could not load image"<<std::endl;
        return -1;
    }
    cv::namedWindow("Example1",cv::WINDOW_AUTOSIZE);
    cv::imshow("Example1",img);
    cv::waitKey(0);
    cv::destroyWindow("Example1");
    return 0;
}
