/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface ML3DispatchQueue : NSObject {

	NSString* _identifier;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isOnQueue; 
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
+(id)currentQueueIdentifier;
+(id)serialQueueWithIdentifierPrefix:(id)arg1 ;
-(id)init;
-(id)identifier;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 serial:(BOOL)arg2 ;
-(BOOL)isOnQueue;
-(void)dispatchSyncOrInvokeImmediately:(/*^block*/ id)arg1 ;
-(void)dispatchSync:(/*^block*/ id)arg1 ;
-(void)dispatchAsyncOrInvokeImmediately:(/*^block*/ id)arg1 ;
-(void)dispatchAsync:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end
