/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>
#import <AVFoundation/AVAssetWriterFinishWritingHelperDelegate.h>

@class AVWeakReference, NSString;

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {

	dispatch_semaphore_sRef _finishedWritingNotificationSemaphore;
	AVWeakReference* _weakReferenceToHelper;
	AVWeakReference* _weakReferenceToSelf;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(char)arg1 error:(id)arg2 ;
-(char)shouldHelperPrepareInputs;
-(void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriterRef)arg2 ;
-(void)finishWritingHelperDidFail:(id)arg1 ;
-(void)finishWritingHelperDidCancelFinishWriting:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

