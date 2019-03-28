//
// Created by dyf on 9/5/18.
//
#include<opencv2/opencv.hpp>
int main()
{
    cv::Mat img=cv::imread("/home/dyf/Documents/opencv3/learning-2/stuff.jpg");
    cv::namedWindow("input",cv::WINDOW_AUTOSIZE);
    cv::namedWindow("out",cv::WINDOW_AUTOSIZE);

    cv::imshow("input",img);

    cv::Mat out;
    //Gaussian smooth  5*5 高斯核  高斯核必须为奇数
    cv::GaussianBlur(img,out,cv::Size(5,5),3,3);
    cv::imshow("out",out);
    cv::GaussianBlur(out,out,cv::Size(5,5),3,3);
    cv::imshow("out1",out);
    cv::waitKey(0);
    return 0;
}
