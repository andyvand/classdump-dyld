/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVSampleBufferRenderSynchronizerInternal, NSArray;

@interface AVSampleBufferRenderSynchronizer : NSObject {

	AVSampleBufferRenderSynchronizerInternal* _synchronizerInternal;

}

@property (readonly) NSArray * renderers; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (assign,nonatomic) float rate; 
-(void)removeTimeObserver:(id)arg1 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_CM5)arg1 queue:(dispatch_queue_sRef)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setRate:(float)arg1 time:(SCD_Struct_CM5)arg2 ;
-(void)addRenderer:(id)arg1 ;
-(void)removeRenderer:(id)arg1 atTime:(SCD_Struct_CM5)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(dispatch_queue_sRef)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)renderers;
-(int)_initializeTimebase;
-(char)_addRenderer:(id)arg1 ;
-(id)_getTimebaseObserverForRenderer:(id)arg1 ;
-(/*^block*/id)_getClientCompletionHandlerForRenderer:(id)arg1 ;
-(void)_removeTimebaseObserverForRenderer:(id)arg1 ;
-(id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(SCD_Struct_CM5)arg2 ;
-(void)_storeObserver:(id)arg1 clientCompletionHandler:(/*^block*/id)arg2 forRenderer:(id)arg3 ;
-(char)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(SCD_Struct_CM5)arg2 withClientCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(OpaqueCMTimebaseRef)timebase;
@end

