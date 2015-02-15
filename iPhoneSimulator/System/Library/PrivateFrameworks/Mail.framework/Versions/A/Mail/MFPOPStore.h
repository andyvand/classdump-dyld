/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFMessageStore.h>
#import <Mail/MFPOPConnectionDelegate.h>
#import <Mail/MFRouterStore.h>

@class NSMutableSet, NSMutableIndexSet, NSString;

@interface MFPOPStore : MFMessageStore <MFPOPConnectionDelegate, MFRouterStore> {

	NSMutableSet* _skippedMessageIds;
	NSMutableIndexSet* _messageNumbersToDelete;
	char _lastConnectionFailed;
	char _routerCancelled;

}

@property (assign) char routerCancelled;                            //@synthesize routerCancelled=_routerCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 readOnly:(char)arg2 createEmptyStore:(char)arg3 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 allowPartial:(char)arg4 ;
-(void)writeUpdatedMessageDataToDisk;
-(id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 ;
-(id)_defaultRouterDestination;
-(void)fetchSynchronously;
-(char)isOpened;
-(id)messageForMessageID:(id)arg1 ;
-(void)_handleStoreFinishedFirstTimeSync:(id)arg1 ;
-(void)messageFlagsDidChange:(id)arg1 flags:(id)arg2 ;
-(void)_setNeedsAutosave;
-(void)_cancelAutosave;
-(void)messagesWillBeRouted:(id)arg1 ;
-(void)messagesWereRouted:(id)arg1 ;
-(char)connectionShouldPrefetchMessages;
-(long long)connection:(id)arg1 willRetrieveMessageNumber:(unsigned long long)arg2 header:(id)arg3 size:(unsigned long long)arg4 ;
-(void)connection:(id)arg1 receivedNumberOfBytes:(unsigned long long)arg2 ;
-(void)connection:(id)arg1 didRetrieveData:(id)arg2 forMessageNumber:(unsigned long long)arg3 ;
-(id)_messageIDForNumber:(unsigned long long)arg1 serverIdsByNumber:(id)arg2 connection:(id)arg3 ;
-(char)_closeConnection:(id)arg1 ;
-(void)_deleteMessagesMarkedForDeletionUsingManager:(id)arg1 ;
-(char)_createDirectoryIfNeeded;
-(id)_authenticatedConnection;
-(char)_firstAndLast:(unsigned long long)arg1 onConnection:(id)arg2 alreadySeen:(id)arg3 ;
-(void)setRouterCancelled:(char)arg1 ;
-(char)_shouldDeleteSeenMessage:(id)arg1 messageID:(id)arg2 deletionPolicy:(long long)arg3 cutoffDate:(id)arg4 url:(id)arg5 inbox:(id)arg6 ;
-(void)_addMessageNumberToDelete:(unsigned long long)arg1 ;
-(id)_copyMessageNumbersToDelete;
-(void)_removeDeletedMessagesWithNumbers:(id)arg1 fromSeenMessageManager:(id)arg2 connection:(id)arg3 ;
-(void)_clearMessageNumbersToDelete;
-(void)_backgroundFetchFailed:(id)arg1 ;
-(char)routerCancelled;
-(id)init;
-(void)cancel;
-(id)displayName;
-(id)account;
-(id)mailbox;
-(void)deleteMessages:(id)arg1 ;
@end

