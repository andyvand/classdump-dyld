/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKIrisListener, IKHardwareCapsChangeNotifier;

@interface IKCameraServices : NSObject {

	IKIrisListener* _irisListener;
	IKHardwareCapsChangeNotifier* _hardwareCapsChangeNotifier;
	int _observerCount;

}
+(id)sharedCameraServices;
-(void)irisOpened:(id)arg1 ;
-(void)irisClosed:(id)arg1 ;
-(void)cameraIsGone:(id)arg1 ;
-(char)irisClosed;
-(char)mirrorMode;
-(void)setMirrorMode:(char)arg1 ;
-(char)cameraAttached;
-(void)_logState;
-(void)addObserver;
-(void)removeObserver;
-(void)hardwareCapsDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

