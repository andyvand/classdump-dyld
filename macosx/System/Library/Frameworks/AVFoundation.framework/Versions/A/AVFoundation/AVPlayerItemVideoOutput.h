/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {

	AVPlayerItemVideoOutputInternal* _videoOutputInternal;

}

@property (nonatomic,readonly) id<AVPlayerItemOutputPullDelegate> delegate; 
@property (nonatomic,readonly) dispatch_queue_sRef delegateQueue; 
-(void)setDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)setSuppressesPlayerRendering:(char)arg1 ;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(char)hasNewPixelBufferForItemTime:(SCD_Struct_CM5)arg1 ;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_CM5)arg1 itemTimeForDisplay:(SCD_Struct_CM5*)arg2 ;
-(void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1 ;
-(char)suppressesPlayerRendering;
-(OpaqueFigVisualContextRef)_visualContext;
-(id)_pixelBufferAttributes;
-(char)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(void)_dispatchOutputMediaDataWillChange;
-(void)_stopObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_startObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_setTagBuffersWithConversionInformation;
-(void)_dispatchOutputSequenceWasFlushed;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id<AVPlayerItemOutputPullDelegate>)delegate;
-(dispatch_queue_sRef)delegateQueue;
@end

