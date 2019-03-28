//
// Created by dyf on 9/5/18.
//

#include<opencv2/opencv.hpp>

int main()
{
    cv::Mat img=cv::imread("/home/dyf/Documents/opencv3/learning-2/stuff.jpg");
    cv::namedWindow("input",cv::WINDOW_AUTOSIZE);
    cv::imshow("input",img);
    cv::namedWindow("out",cv::WINDOW_AUTOSIZE);
    cv::Mat dst;
    cv::pyrDown(img,dst);//使用pyrDown创建一个新图像  高宽均为原来的一半
    cv::imshow("out",dst);
    cv::waitKey(0);
    return 0;
}