/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMDeviceOrientationManagerInternal : NSObject {

	int fSampleLock;
	Dispatcher* fDeviceOrientationDispatcher;
	/*^block*/ id fDeviceOrientationHandler;
	NSOperationQueue* fDeviceOrientationQueue;
	NSObject<OS_dispatch_semaphore>* fDeviceOrientationSemaphore;
	BOOL fDidSignalSemaphore;
	int fOrientationCallbackMode;
	Sample fLatestDeviceOrientationSample;

}
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
@end
