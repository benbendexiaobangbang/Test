//
// Created by root on 9/5/18.
//
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
int main(){
    cv::namedWindow("Example3",cv::WINDOW_AUTOSIZE);
    cv::VideoCapture cap;
    cap.open("/home/dyf/Documents/opencv3/learning-2/test.avi");
    cv::Mat frame;
    for(;;)
    {
        cap>>frame;
        if(frame.empty())break;
        cv::imshow("Example3",frame);
        if(cv::waitKey(33)>=0)break;
    }
    return 0;
}
//#include "3opencv2/highgui/highgui.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
//
//int main()
//{
//    cv::namedWindow("Example3",cv::WINDOW_AUTOSIZE);
//    cv::VideoCapture cap;
//    cap.open("/home/dyf/Documents/opencv3/01.ts");
//    cv::Mat frame;
//    for(;;){
//        cap>>frame;
//        if(frame.empty()) break;
//        cv::imshow("Example3",frame);
//        if(cv::waitKey(33)>=0)break;
//    }
//    return 0;
//}