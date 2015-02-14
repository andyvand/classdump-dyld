/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue;

@interface MFMessageContext : NSObject {

	NSOperationQueue* _filesystemQueue;
	NSOperationQueue* _waitingQueue;

}

@property (nonatomic,readonly) NSOperationQueue * filesystemQueue;              //@synthesize filesystemQueue=_filesystemQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * waitingQueue;                 //@synthesize waitingQueue=_waitingQueue - In the implementation block
+(id)sharedContext;
-(id)async_setFlagWithKey:(id)arg1 state:(char)arg2 forMessages:(id)arg3 ;
-(id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 ;
-(NSOperationQueue *)waitingQueue;
-(NSOperationQueue *)filesystemQueue;
-(id)async_cacheHeaderAndBodyForMessage:(id)arg1 monitor:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

