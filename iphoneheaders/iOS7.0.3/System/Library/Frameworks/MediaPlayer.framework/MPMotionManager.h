/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, CMAttitude, CMMotionManager, NSOperationQueue;

@interface MPMotionManager : NSObject {

	NSMutableSet* _accelerometerHandlerClients;
	BOOL _accelerometerUpdatesActive;
	CMAttitude* _attitude;
	CMMotionManager* _motionManager;
	NSOperationQueue* _operationQueue;

}
+(id)sharedMotionManager;
-(id)addObserverWithAccelerometerHandler:(/*^block*/ id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_beginMotionUpdates;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void).cxx_destruct;
@end
