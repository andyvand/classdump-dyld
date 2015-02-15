/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSWindowController.h>
#import <Safari/ReopensAtLaunch.h>

@class SpeedoView, NSTimer;

@interface FrameRateMeter : NSWindowController <ReopensAtLaunch> {

	SpeedoView* _drawingSpeedometer;
	SpeedoView* _updateSpeedometer;
	SpeedoView* _cpuSpeedometer;
	NSTimer* _updateTimer;
	double _lastRunloopTime;
	double _lastWebViewDisplayTime;
	Vector<double, 0, WTF::CrashOnOverflow>* _displayTimes;
	Vector<float, 0, WTF::CrashOnOverflow>* _updateRates;
	Vector<float, 0, WTF::CrashOnOverflow>* _cpuUsage;
	Vector<float, 0, WTF::CrashOnOverflow>* _filterWeights;

}
+(void)reopen;
+(id)existingSharedFrameRateMeter;
+(id)sharedFrameRateMeter;
-(void)webViewDidDraw;
-(void)computeFilterWeights;
-(void)updateTimerFired:(id)arg1 ;
-(double)smoothedDrawingFrameRate;
-(double)smoothedUpdateRate;
-(double)smoothedCPUUsage;
-(void)dealloc;
-(void)showWindow:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(id)windowNibName;
-(void)windowDidLoad;
-(void)setup;
@end

