#include<opencv2\opencv.hpp>
#include <opencv2/core/core.hpp> 
#include<iostream>
#include<opencv2/nonfree/features2d.hpp>
#include<opencv2/nonfree/nonfree.hpp>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv; 
int main()
{
	/*
	Mat img = imread("001.JPG");
	cvtColor(img,img,CV_BGR2GRAY);
	Mat contours;
	Canny(img,contours,125,350);
	threshold(contours,contours,125,255,THRESH_BINARY);
	namedWindow("Ç©Ãû");
	imshow("Ç©Ãû",contours);
    if(img.empty())
    {
		cout<<"error";
        return -1;
    }
    imshow("Ç©ÃûÍ¼",img);
    waitKey();
    return 0;
	*/
	char*path = "f:\\1111.jpg";
	IplImage*frame = cvLoadImage(path);
	if(!frame)return 0;
	cvNamedWindow("frame",1);
	cvShowImage("frame",frame);
	cvSmooth(frame,frame,CV_MEDIAN);
	IplImage*gray=cvCreateImage(cvGetSize(frame),frame->depth,1);
	cvCvtColor(frame,gray,CV_BGR2GRAY);
	cvNamedWindow("gray",1);
	cvShowImage("gray",gray);
	waitKey();
}