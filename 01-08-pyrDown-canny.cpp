//
// Created by dyf on 9/5/18.
//

#include<opencv2/opencv.hpp>
#include<iostream>

int main(){
    cv::Mat img_rgb,img_gray,img_pyr,img_pyr2,img_cny;
    img_rgb=cv::imread("/home/dyf/Documents/opencv3/learning-2/stuff.jpg");
    cv::namedWindow("input",cv::WINDOW_AUTOSIZE);
    cv::imshow("input",img_rgb);
    cv::cvtColor(img_rgb,img_gray,cv::COLOR_BGR2GRAY);
    cv::pyrDown(img_gray,img_pyr);
    cv::pyrDown(img_pyr,img_pyr2);
    cv::Canny(img_pyr2,img_cny,10,100,3,true);
    cv::namedWindow("Canny",cv::WINDOW_AUTOSIZE);


    int x=16,y=32;
    cv::Vec3b intensity=img_rgb.at<cv::Vec3b>(y,x);

    uchar blue=intensity[0];
    uchar green=intensity[1];
    uchar red=intensity[2];

    std::cout<<"At(x,y)=("<<x<<","<<y<<"):(blue,green,red)=("<<(unsigned int)blue<<","<<(unsigned int)green<<
    ","<<(unsigned int)red<<")"<<std::endl;
    std::cout<<"Gray pixel there is:"<<(unsigned int)img_gray.at<uchar>(y,x)<<std::endl;

    x/=4;
    y/=4;
    std::cout<<"Pyramid2 pixel there is: "<<(unsigned int)img_pyr2.at<uchar>(y,x)<<std::endl;
    img_cny.at<uchar>(x,y)=128;
    cv::imshow("Canny",img_cny);


    cv::waitKey(0);
    return 0;
}