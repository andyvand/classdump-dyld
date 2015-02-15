/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/NSCoding.h>

@class NSMutableArray, MFEWSAccount, NSOperationQueue, NSDictionary, MFEWSConnection;

@interface MFEWSGateway : NSObject <NSCoding> {

	NSMutableArray* _offlineRequests;
	MFEWSAccount* _account;
	NSOperationQueue* _syncOperationQueue;
	NSDictionary* _savedOfflineToRealEWSIdStrings;

}

@property (nonatomic,__weak,readonly) MFEWSAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestResponseQueue; 
@property (nonatomic,readonly) unsigned long long maxRequestsToSend; 
@property (nonatomic,readonly) NSOperationQueue * syncOperationQueue;                  //@synthesize syncOperationQueue=_syncOperationQueue - In the implementation block
@property (nonatomic,readonly) MFEWSConnection * connection; 
@property (nonatomic,copy) NSDictionary * savedOfflineToRealEWSIdStrings;              //@synthesize savedOfflineToRealEWSIdStrings=_savedOfflineToRealEWSIdStrings - In the implementation block
+(id)newTemporaryItemId;
+(id)keyPathsForValuesAffectingRequestResponseQueue;
-(id)initWithAccount:(id)arg1 ;
-(void)playbackRequestsFromOfflineCacheWithConnection:(id)arg1 error:(id*)arg2 ;
-(id)fetchDistinguishedFolderIdsWithConnection:(id)arg1 ;
-(id)fetchCopyOfSyncIssuesEntryID;
-(id)syncFolderHierarchyWithSyncState:(id)arg1 ;
-(id)createMailboxWithParentEWSFolderIdString:(id)arg1 name:(id)arg2 mailboxType:(int)arg3 error:(id*)arg4 ;
-(char)renameMailboxWithEWSFolderIdString:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(char)moveMailboxWithEWSFolderIdString:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(char)deleteMailboxWithEWSFolderIdString:(id)arg1 error:(id*)arg2 ;
-(void)getOofSettings;
-(void)setOofState:(long long)arg1 internalReply:(id)arg2 externalReply:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 externalAudienceType:(long long)arg6 ;
-(unsigned long long)maxRequestsToSend;
-(NSOperationQueue *)requestResponseQueue;
-(void)sendMessage:(id)arg1 forRequest:(id)arg2 ;
-(id)resolvedIdStringForIdString:(id)arg1 ;
-(void)saveRequestToOfflineCache:(id)arg1 ;
-(void)addOfflineToRealEWSIdStrings:(id)arg1 forRequest:(id)arg2 ;
-(void)addRequest:(id)arg1 ;
-(char)writeMessageToOfflineCache:(id)arg1 data:(id)arg2 forItemIdString:(id)arg3 ;
-(void)retrieveMessageFromOfflineCache:(id*)arg1 data:(id*)arg2 forItemIdString:(id)arg3 ;
-(id)appendMessage:(id)arg1 withData:(id)arg2 toEWSFolderWithIdString:(id)arg3 messageType:(char)arg4 flags:(unsigned)arg5 sender:(id)arg6 recipientsByHeaderKey:(id)arg7 send:(char)arg8 errorHandler:(id)arg9 ;
-(void)addError:(id)arg1 withHandler:(id)arg2 ;
-(void)takeRequestOffline:(id)arg1 error:(id)arg2 ;
-(void)_addDeleteRequestToOfflineCache:(id)arg1 ;
-(void)_addCreateRequestToOfflineCache:(id)arg1 ;
-(void)_saveOfflineCache;
-(NSDictionary *)savedOfflineToRealEWSIdStrings;
-(id)_offlineCachePath;
-(void)removeMessageAndDataFromOfflineCacheForEWSItemIdString:(id)arg1 ;
-(void)setSavedOfflineToRealEWSIdStrings:(NSDictionary *)arg1 ;
-(id)_offlineCachePathForMessageWithItemIdString:(id)arg1 ;
-(id)_offlineCachePathForDataWithItemIdString:(id)arg1 ;
-(id)_syncFolderHierarchyWithSyncState:(id)arg1 includesLastItem:(char*)arg2 ;
-(NSOperationQueue *)syncOperationQueue;
-(void)cacheDataForLibraryMessages:(id)arg1 store:(id)arg2 folderIdString:(id)arg3 errorHandler:(id)arg4 ;
-(void)_saveData:(id)arg1 forMessage:(id)arg2 isPartial:(char)arg3 updateMetadata:(char)arg4 ;
-(void)_cacheDataForLibraryMessages:(id)arg1 store:(id)arg2 folderIdString:(id)arg3 errorHandler:(id)arg4 ;
-(void)_fetchMeetingRequestMessages:(id)arg1 errorHandler:(id)arg2 ;
-(void)_fetchMeetingCancellationMessages:(id)arg1 errorHandler:(id)arg2 ;
-(void)_chunkItemsToSend:(id)arg1 applyToBlock:(/*^block*/id)arg2 ;
-(id)_EWSItemTypesWithBodyDataForMessages:(id)arg1 errorHandler:(id)arg2 ;
-(void)undeleteMessageForFailedCreateEventResponse:(id)arg1 ;
-(void)addResponse:(id)arg1 ;
-(char)syncFolderItemsFromFolderIdString:(id)arg1 syncState:(id)arg2 forStore:(id)arg3 ;
-(id)fetchMimeDataForMessage:(id)arg1 errorHandler:(id)arg2 ;
-(void)deleteMessagesWithEWSItemIds:(id)arg1 fromFolderWithEWSIdString:(id)arg2 synchronously:(char)arg3 ;
-(void)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 inFolderWithEWSIdString:(id)arg3 errorHandler:(id)arg4 ;
-(id)copyMessagesWithEWSItemIds:(id)arg1 fromFolderWithIdString:(id)arg2 toFolderWithIdString:(id)arg3 synchronously:(char)arg4 errorHandler:(id)arg5 ;
-(void)sendResponseType:(char)arg1 forMeetingMessage:(id)arg2 inStore:(id)arg3 errorHandler:(id)arg4 ;
-(SCD_Struct_MF9)fetchUsageInfoForEWSFolderIdString:(id)arg1 ;
-(MFEWSConnection *)connection;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MFEWSAccount *)account;
@end
