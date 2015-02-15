/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTImageBufferQueue, QTCAImageQueueBoss;

@interface QTCALayerRendererState : NSObject {

	opaque_pthread_mutex_t pendingImageQRunLoopMutex;
	opaque_pthread_cond_t pendingImageQRunLoopCondition;
	CFRunLoopRef pendingImageQRunLoop;
	CFRunLoopSourceRef pendingImageQRunLoopSource;
	CFRunLoopSourceRef pendingImageQStopRunLoopSource;
	CFRunLoopSourceRef pendingImageQHostTimeRunLoopSource;
	QTImageBufferQueue* pendingBufferQueue;
	int workLoopLock;
	char haveSignaledWorkLoop;
	QTCAImageQueueBoss* caImageQueueBoss;
	unsigned long long flushTime;

}

@property (nonatomic,retain) QTImageBufferQueue * pendingBufferQueue; 
@property (assign,nonatomic) char haveSignaledWorkLoop; 
@property (nonatomic,retain) QTCAImageQueueBoss * caImageQueueBoss; 
@property (assign,nonatomic) unsigned long long flushTime; 
-(CFRunLoopRef)pendingImageQRunLoop;
-(void)setPendingImageQRunLoop:(CFRunLoopRef)arg1 ;
-(CFRunLoopSourceRef)pendingImageQRunLoopSource;
-(void)setPendingImageQRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFRunLoopSourceRef)pendingImageQStopRunLoopSource;
-(void)setPendingImageQStopRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFRunLoopSourceRef)pendingImageQHostTimeRunLoopSource;
-(void)setPendingImageQHostTimeRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)lockWorkLoopLock;
-(void)unlockWorkLoopLock;
-(void)lockThreadLock;
-(void)unlockThreadLock;
-(void)waitOnThreadConditional;
-(void)broadcastThreadConditional;
-(char)isCAImageQueueAboveLowWaterLevel;
-(char)isAboveLowWaterLevel;
-(char)isBelowHighWaterLevel;
-(QTImageBufferQueue *)pendingBufferQueue;
-(void)setPendingBufferQueue:(QTImageBufferQueue *)arg1 ;
-(char)haveSignaledWorkLoop;
-(void)setHaveSignaledWorkLoop:(char)arg1 ;
-(QTCAImageQueueBoss *)caImageQueueBoss;
-(void)setCaImageQueueBoss:(QTCAImageQueueBoss *)arg1 ;
-(unsigned long long)flushTime;
-(void)setFlushTime:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
@end
