
#include <opencv2/opencv.hpp>

int main(int argc, char **argv) {
  cv::Mat img = cv::imread(argv[1], -1);
  if (img.empty()) { std::cout<<"img empty\n"; return -1;}
  cv::namedWindow("PicShow", cv::WINDOW_AUTOSIZE);
  cv::imshow("PicShow", img);
  cv::waitKey(0);
  cv::destroyWindow("PicShow");
  return 0;
}
