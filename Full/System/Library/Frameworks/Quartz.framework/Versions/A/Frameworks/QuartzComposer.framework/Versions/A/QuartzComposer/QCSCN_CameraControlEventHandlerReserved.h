/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCSCN_Node;

@interface QCSCN_CameraControlEventHandlerReserved : NSObject {

	QCSCN_Node* _freeViewCameraNode;
	CGPoint _initialPoint;
	C3DMatrix4x4 _initialMatrix;
	double _initialZoom;
	double _savedZfar;
	double _savedZnear;
	double _originalFovX;
	double _originalFovY;
	double _originalMagX;
	double _originalMagY;
	double _zoomFactor;
	SCNVector3 _clickOrigin;
	char _stickyMove;
	CGPoint _stickyDirection;
	CGPoint _lastDragLocation;
	double _lastDragTime;
	int _cameraStickyAxis;
	C3DSphere _viewedObjectSphere;
	char _hasCheckedIfViewingAnObject;
	char _isViewingAnObject;
	char _isViewedObjectSphereComputed;
	char _alternateMode;
	int _mode;
	char _upDirIsSet;
	SCNVector3 _gimbalLockVector;
	char _gimbalLockMode;
	SCNVector3 _upDir;
	char _automaticCameraTarget;
	SCNVector3 _cameraTarget;
	char _inertia;
	double _friction;
	CGPoint _totalDragWithInertia;
	CGPoint _inertiaVelocity;
	double _lastSimulationTime;
	char _inertiaRunning;

}
-(void)finalize;
-(void)dealloc;
@end

