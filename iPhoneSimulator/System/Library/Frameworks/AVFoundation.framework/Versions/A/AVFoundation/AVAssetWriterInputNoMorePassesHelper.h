/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;

}
-(void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_sRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)isReadyForMoreMediaData;
-(char)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(char)canPerformMultiplePasses;
-(id)currentPassDescription;
-(char)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM5)arg2 ;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(id)initWithWritingHelper:(id)arg1 ;
-(void)dealloc;
-(long long)status;
@end

