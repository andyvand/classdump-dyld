/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterFinishWritingHelperDelegate.h>

@class NSString;

@interface AVAssetWriterDoNothingFinishWritingDelegate : NSObject <AVAssetWriterFinishWritingHelperDelegate> {

	/*^block*/id _handler;
	int _handlerCalled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(char)shouldHelperPrepareInputs;
-(void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriterRef)arg2 ;
-(void)finishWritingHelperDidFail:(id)arg1 ;
-(void)finishWritingHelperDidCancelFinishWriting:(id)arg1 ;
-(void)_callHandlerIfNotCalled;
-(void)dealloc;
@end

