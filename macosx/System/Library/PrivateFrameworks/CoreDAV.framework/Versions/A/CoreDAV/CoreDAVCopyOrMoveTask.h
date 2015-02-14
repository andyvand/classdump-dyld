/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {

	int _overwrite;
	NSURL* _destinationURL;

}

@property (assign,nonatomic) int overwrite;                       //@synthesize overwrite=_overwrite - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
+(id)stringFromOverwriteValue:(int)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setOverwrite:(int)arg1 ;
-(NSURL *)destinationURL;
-(id)requestBody;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3 ;
-(int)overwrite;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

