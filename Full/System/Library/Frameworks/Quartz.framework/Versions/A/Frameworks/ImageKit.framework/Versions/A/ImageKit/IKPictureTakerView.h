/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageCropView.h>

@interface IKPictureTakerView : IKImageCropView {

	void* _ikReserved;

}
-(void)cropElementDidLiveUpdate:(id)arg1 ;
-(void)IKDVGrabberUpdated:(id)arg1 ;
-(char)isLiveCapturing;
-(void)irisOpened:(id)arg1 ;
-(void)irisClosed:(id)arg1 ;
-(void)cameraIsGone:(id)arg1 ;
-(char)isIrisClosed;
-(void)startListeningForCameraEvents;
-(void)stopLiveCapture;
-(void)stopListeningForCameraEvents;
-(void)setDisableCountDown:(char)arg1 ;
-(void)takePicture;
-(char)isTakingPicture;
-(char)startLiveCapture;
-(void)setDisableFlash:(char)arg1 ;
-(void)setCountdownDelegate:(id)arg1 ;
-(void)pickerViewCommonInit;
-(void)disposeAudio;
-(void)cameraPictureNotification:(id)arg1 ;
-(char)isRoomWellLit;
-(void)stopSequenceGrabber;
-(void)directTakePicture;
-(void)scheduleCameraPictureNotificationAfterDelay:(double)arg1 ;
-(short)setupAudio;
-(char)startSequenceGrabber;
-(void)fireNextCameraSequence;
-(char)__isRoomWellLit:(char*)arg1 size:(CGSize)arg2 bpr:(int)arg3 skipFirstComponent:(char)arg4 spp:(int)arg5 ;
-(void)abortTakePicture;
-(id)cameraOffImage;
-(id)cameraNotConnectedText;
-(id)cameraOffText;
-(void)drawIrisClosedInRect:(CGRect)arg1 ;
-(void)_finalizeDirectTakePicture;
-(void)drawPositioningCircle;
-(void)setFlashRiseTime:(float)arg1 ;
-(void)setFlashSustainTime:(float)arg1 ;
-(void)setFlashFallTime:(float)arg1 ;
-(void)setFlashSaturation:(float)arg1 ;
-(void)setFlashColor:(id)arg1 ;
-(void)setCameraCaptureDelay:(float)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)resetCursorRects;
@end

