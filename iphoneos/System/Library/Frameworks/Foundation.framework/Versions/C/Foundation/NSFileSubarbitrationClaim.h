/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFileAccessClaim.h>

@class NSArray, NSFileAccessNode, NSMutableSet, NSMutableDictionary;

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {

	NSArray* _readingURLs;
	unsigned long long _readingOptions;
	NSArray* _writingURLs;
	unsigned long long _writingOptions;
	/*^block*/id _messageSender;
	NSArray* _readingLocations;
	NSArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	NSMutableSet* _forwardedClaimIDs;
	NSMutableDictionary* _readRelinquishmentsByPresenterID;
	NSMutableDictionary* _writeRelinquishmentsByPresenterID;

}
-(id)initWithReadingURLs:(id)arg1 options:(unsigned long long)arg2 writingURLs:(id)arg3 options:(unsigned long long)arg4 claimer:(/*^block*/id)arg5 ;
-(void)granted;
-(void)invokeClaimer;
-(void)devalueSelf;
-(id)initWithClient:(xpc_connection_sRef)arg1 messageParameters:(id)arg2 replySender:(/*^block*/id)arg3 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(void)evaluateNewClaim:(id)arg1 ;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)revoked;
-(void)devalueOldClaim:(id)arg1 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(void)setMessageSender:(/*^block*/id)arg1 ;
-(/*^block*/id)messageSender;
-(void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenter:(id)arg3 usingReplySender:(/*^block*/id)arg4 ;
-(void)forwardReacquisitionMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenterForID:(id)arg3 usingReplySender:(/*^block*/id)arg4 ;
-(id)relinquishmentForMessageOfKind:(id)arg1 toPresenterForID:(id)arg2 ;
-(void)dealloc;
@end
