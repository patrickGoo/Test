#include <iostream>
#include <fstream>
#include <string>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/videoio/videoio.hpp"
#include "opencv2/highgui/highgui.hpp"


using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    string inputfilename;
    string outputfilename;

    if(argc == 1){
      const char* usage = "////////////////////////////////////////////////////////\n"
                          "// USAGE: ./stabilizer <filename>                     //\n"
                          "////////////////////////////////////////////////////////\n";

      cout << usage << endl;
    }else if(argc > 1)
    {
      inputfilename = argv[1];
    }

    if(inputfilename.length() < =0){
      cout << "ERROR : invalid filename" << endl;
      exit(0);
    }

    VideoCapture cap;
    cap.open(inputfilename.c_str());

    if( !cap.isOpened() )
    {
        cout << "Could not initialize capturing..." << endl;
        return 0;
    }



}
