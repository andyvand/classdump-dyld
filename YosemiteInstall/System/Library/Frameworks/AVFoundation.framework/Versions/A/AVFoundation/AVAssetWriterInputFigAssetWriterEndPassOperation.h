/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSError, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : NSObject {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	/*^block*/id _completionBlock;
	char _succeeded;
	NSError* _error;
	AVAssetWriterInputPassDescription* _nextPassDescription;

}

@property (nonatomic,copy) id completionBlock;                                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) char succeeded;                                                          //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInputPassDescription * descriptionForNextPass;              //@synthesize nextPassDescription=_nextPassDescription - In the implementation block
-(char)succeeded;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 trackID:(int)arg2 ;
-(AVAssetWriterInputPassDescription *)descriptionForNextPass;
-(void)_markOperationAsCompletedWithSuccess:(char)arg1 error:(id)arg2 ;
-(void)_notifyWhetherMorePassesAreNeeded:(char)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)start;
-(NSError *)error;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
@end
