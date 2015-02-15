/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFileReactorProxy.h>

@class NSFileWatcher, NSMutableArray;

@interface NSFilePresenterProxy : NSFileReactorProxy {

	dispatch_queue_sRef _queue;
	NSFileWatcher* _watcher;
	unsigned long long _writingRelinquishmentCount;
	id _currentWriterPurposeID;
	NSMutableArray* _previousWriterPurposeIDs;
	char _didObserveMovingByWriter;
	char _didObserveVersionChangingByWriter;
	char _disconnected;
	char _inSubarbiter;

}

@property (readonly) char disconnected; 
@property (assign) char inSubarbiter;                //@synthesize inSubarbiter=_inSubarbiter - In the implementation block
+(id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2 ;
-(void)disconnect;
-(char)disconnected;
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3 ;
-(void)setItemLocation:(id)arg1 ;
-(void)observeMoveByWriterWithPurposeID:(id)arg1 ;
-(void)observeDisconnectionByWriterWithPurposeID:(id)arg1 ;
-(void)observeReconnectionByWriterWithPurposeID:(id)arg1 ;
-(void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2 ;
-(void)observeDisappearanceAtSubitemPath:(id)arg1 ;
-(void)observeChangeAtSubitemPath:(id)arg1 ;
-(void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4 ;
-(void)setInSubarbiter:(char)arg1 ;
-(char)inSubarbiter;
-(void)startWatchingWithQueue:(dispatch_queue_sRef)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(/*^block*/id)arg3 ;
-(void)forwardObservationMessageWithKind:(id)arg1 parameters:(id)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end
