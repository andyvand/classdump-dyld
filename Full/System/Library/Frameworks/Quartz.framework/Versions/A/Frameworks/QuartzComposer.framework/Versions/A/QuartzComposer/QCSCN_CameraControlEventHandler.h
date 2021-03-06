/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCSCN_EventHandler.h>

@interface QCSCN_CameraControlEventHandler : QCSCN_EventHandler {

	id _dReserved;

}

@property (assign) char gimbalLockMode; 
@property (assign) SCNVector3 gimbalLockVector; 
@property (assign) char enableInertia; 
@property (assign) double friction; 
@property (assign) char automaticCameraTarget; 
@property (assign) SCNVector3 cameraTarget; 
-(id)init;
-(void)dealloc;
-(void)viewWillDraw;
-(char)scrollWheel:(id)arg1 ;
-(char)mouseDown:(id)arg1 ;
-(char)mouseDragged:(id)arg1 ;
-(char)mouseUp:(id)arg1 ;
-(char)magnifyWithEvent:(id)arg1 ;
-(char)rotateWithEvent:(id)arg1 ;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(void)setFriction:(double)arg1 ;
-(double)friction;
-(char)wantsRedraw;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(void)setEnableInertia:(char)arg1 ;
-(void)rotateOf:(double)arg1 ;
-(void)sceneWillChange;
-(void)sceneDidChange;
-(void)updateCameraTargetIfNeeded;
-(char)_freeCameraActivated;
-(C3DSphere)viewedObjectSphere;
-(void)_switchToFreeViewCamera;
-(void)zoomBy:(float)arg1 animate:(char)arg2 ;
-(float)_translationCoef;
-(void)_resetFreeViewCamera;
-(void)_stopInertiaIfNeeded;
-(void)_rotateWithDrag:(CGPoint)arg1 mode:(int)arg2 stickyAxis:(int)arg3 ;
-(void)_onInertiaTimer;
-(void)endDraggingWithVelocity:(CGPoint)arg1 ;
-(SCNVector3)frontVector;
-(SCNVector3)cameraTarget;
-(SCNVector3)gimbalLockVector;
-(float)_scrollWheelMultiplier;
-(void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)_beginTranslateAtLocation:(CGPoint)arg1 ;
-(void)_startBrowsingIfNeeded:(CGPoint)arg1 ;
-(void)_computeStickyAxisIfNeeded:(CGPoint)arg1 ;
-(void)_didDragTo:(CGPoint)arg1 ;
-(void)_translateTo:(CGPoint)arg1 ;
-(void)endDragging;
-(char)enableInertia;
-(char)gimbalLockMode;
-(void)setGimbalLockMode:(char)arg1 ;
-(void)setGimbalLockVector:(SCNVector3)arg1 ;
-(char)automaticCameraTarget;
-(void)setAutomaticCameraTarget:(char)arg1 ;
-(void)setCameraTarget:(SCNVector3)arg1 ;
-(char)isViewingAnObject;
-(void)zoomBy:(float)arg1 ;
@end

