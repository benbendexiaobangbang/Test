//
// Created by root on 9/5/18.
#include "opencv2/highgui/highgui.hpp"
#include<iostream>
using namespace std;
using namespace cv;
int main(){
    Mat img=imread("/home/dyf/Documents/opencv3/learning-2/timg.jpeg");
    if(img.empty()){
        cout<<"could not load"<<endl;
        return -1;
    }
    namedWindow("Example1",CV_WINDOW_AUTOSIZE);
    imshow("Example1",img);
    waitKey(0);
    destroyWindow("Example1");
    return 0;
}