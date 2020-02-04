#ifndef CAMERA_H_
#define CAMERA_H_

#include <cameraserver/CameraServer.h>

class Camera 
{
    //camera 0
	cs::UsbCamera camera0 = frc::CameraServer::GetInstance()->StartAutomaticCapture();

    //camera 1
	cs::UsbCamera camera1 = frc::CameraServer::GetInstance()->StartAutomaticCapture();

};

#endif