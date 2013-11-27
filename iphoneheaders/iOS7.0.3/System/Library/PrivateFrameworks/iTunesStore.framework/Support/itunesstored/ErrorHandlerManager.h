/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface ErrorHandlerManager : NSObject {

	NSMutableArray* _clients;
	NSMutableDictionary* _completionBlocks;
	NSObject<OS_dispatch_queue>* _completionQueue;
	NSObject<OS_dispatch_queue>* _dispatchQueue;

}
+(void)observeXPCServer:(id)arg1 ;
+(void)connectHandlerWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)resolveSessionWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)errorHandlerManager;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(/*^block*/ id)arg3 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(/*^block*/ id)arg3 ;
-(void)_connectHandlerWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_resolveSessionWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)openSession:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)_clientForConnection:(id)arg1 ;
@end
