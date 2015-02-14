/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>

@protocol AVAssetWriterFinishWritingHelperDelegate;
@class AVWeakReference;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {

	id<AVAssetWriterFinishWritingHelperDelegate> _delegate;
	OpaqueFigAssetWriterRef _figAssetWriter;
	dispatch_queue_sRef _figAssetWriterAccessQueue;
	AVWeakReference* _weakReferenceToSelf;

}
-(void)cancelWriting;
-(OpaqueFigAssetWriterRef)_retainedFigAssetWriter;
-(id)initWithConfigurationState:(id)arg1 figAssetWriter:(OpaqueFigAssetWriterRef)arg2 delegate:(id)arg3 ;
-(void)performFinishOperation;
-(void)finishOperationCompletedSuccessfully:(char)arg1 withError:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(long long)status;
@end

