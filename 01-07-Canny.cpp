//
// Created by dyf on 9/5/18.
//
#include<opencv2/opencv.hpp>
int main()
{
    cv::Mat img_rgb,img_gray,img_cny;
    cv::namedWindow("gray",cv::WINDOW_AUTOSIZE);
    cv::namedWindow("canny",cv::WINDOW_AUTOSIZE);

    img_rgb=cv::imread("/home/dyf/Documents/opencv3/learning-2/stuff.jpg");
    cv::cvtColor(img_rgb,img_gray,cv::COLOR_BGR2GRAY);
    cv::imshow("gray",img_gray);

    cv::Canny(img_gray,img_cny,10,100,3,true);
    cv::imshow("canny",img_cny);

    cv::waitKey(0);
    return 0;
}