
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  cv::namedWindow("Video", cv::WINDOW_AUTOSIZE);
  cv::VideoCapture cap;
  cap.open(std::string(argv[1]));
  cv::Mat frame;
  while(1) {
    cap >> frame;
    if (!frame.data) break;
    cv::imshow("Video", frame);
    if (cv::waitKey(33) >= 0) break;
  }
  return 0;
}
