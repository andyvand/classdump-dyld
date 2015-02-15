/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QTImageConsumer;
#import <QTKit/QTKit-Structs.h>
@class NSObject, QTFigTimeImageQueue, NSCondition;

@interface QTFigVisualContextImageProviderInternal : NSObject {

	OpaqueFigVisualContextRef visualContext;
	OpaqueCMTimebaseRef timebase;
	int timebaseLock;
	NSObject*<QTImageConsumer> imageConsumer;
	int imageConsumerLock;
	id delegate;
	int delegateLock;
	int mutex;
	QTFigTimeQueueRef pendingImageTimes;
	long long lastNonZeroDirection;
	SCD_Struct_QT36 highWater;
	SCD_Struct_QT36 lowWater;
	char needToFlush;
	QTFigTimeImageQueue* inFlightImages;
	QTFigTimeImageQueue* replayImages;
	char inFlightFlushSourceNeedsScheduling;
	CVBufferRef mostRecentlyDisplayedImageBuffer;
	SCD_Struct_QT36 mostRecentlyDisplayedImageTime;
	CFRunLoopRef runLoop;
	NSCondition* runLoopExistenceCondition;
	CFRunLoopTimerRef workLoopTimer;
	CFRunLoopSourceRef flushSource;
	CFRunLoopSourceRef inFlightImageDumpSource;
	CFRunLoopSourceRef mostRecentlyDisplayedImageReenqueueSource;
	CFRunLoopSourceRef workLoopSource;
	CFRunLoopSourceRef inFlightFlushSource;
	CFRunLoopSourceRef stopRunLoopSource;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)tearDown;
@end
