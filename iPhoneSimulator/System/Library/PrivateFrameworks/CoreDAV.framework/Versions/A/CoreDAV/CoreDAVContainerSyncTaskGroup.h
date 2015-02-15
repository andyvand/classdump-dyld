/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVDeleteTaskDelegate.h>
#import <CoreDAV/CoreDAVPutTaskDelegate.h>
#import <CoreDAV/CoreDAVGetTaskDelegate.h>

@class NSURL, NSString, NSMutableArray, NSDictionary, NSMutableSet, NSMutableDictionary, NSArray;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {

	int _phase;
	NSURL* _folderURL;
	NSString* _previousCTag;
	NSString* _nextCTag;
	char _ensureUpdatedCTag;
	char _useSyncCollection;
	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	NSMutableArray* _actions;
	unsigned long long _multiGetBatchSize;
	NSMutableArray* _unsubmittedTasks;
	unsigned long long _maxIndependentTasks;
	NSURL* _addMemberURL;
	char _useMultiGet;
	NSDictionary* _bulkRequests;
	NSString* _bulkChangeCheckCTag;
	NSMutableSet* _syncReportDeletedURLs;
	NSMutableDictionary* _urlToETag;
	Class _appSpecificDataItemClass;
	char _syncItemOrder;
	NSMutableArray* _localItemURLOrder;
	NSMutableDictionary* _remainingUUIDsToAddActions;
	NSMutableDictionary* _remainingHREFsToModDeleteActions;
	char _actionsOnly;

}

@property (nonatomic,readonly) NSURL * folderURL;                                  //@synthesize folderURL=_folderURL - In the implementation block
@property (nonatomic,retain) NSString * previousCTag;                              //@synthesize previousCTag=_previousCTag - In the implementation block
@property (nonatomic,retain) NSString * previousSyncToken;                         //@synthesize previousSyncToken=_previousSyncToken - In the implementation block
@property (assign,nonatomic) char useSyncCollection;                               //@synthesize useSyncCollection=_useSyncCollection - In the implementation block
@property (assign,nonatomic) unsigned long long multiGetBatchSize;                 //@synthesize multiGetBatchSize=_multiGetBatchSize - In the implementation block
@property (assign,nonatomic) char useMultiGet;                                     //@synthesize useMultiGet=_useMultiGet - In the implementation block
@property (assign,nonatomic) id<CoreDAVLocalDBInfoProvider> delegate; 
@property (assign,nonatomic) unsigned long long maxIndependentTasks;               //@synthesize maxIndependentTasks=_maxIndependentTasks - In the implementation block
@property (nonatomic,retain) NSURL * addMemberURL;                                 //@synthesize addMemberURL=_addMemberURL - In the implementation block
@property (nonatomic,retain) NSDictionary * bulkRequests;                          //@synthesize bulkRequests=_bulkRequests - In the implementation block
@property (nonatomic,retain) NSString * bulkChangeCheckCTag;                       //@synthesize bulkChangeCheckCTag=_bulkChangeCheckCTag - In the implementation block
@property (assign,nonatomic) char actionsOnly;                                     //@synthesize actionsOnly=_actionsOnly - In the implementation block
@property (nonatomic,readonly) NSArray * localItemURLOrder;                        //@synthesize localItemURLOrder=_localItemURLOrder - In the implementation block
@property (assign,nonatomic) char ensureUpdatedCTag;                               //@synthesize ensureUpdatedCTag=_ensureUpdatedCTag - In the implementation block
@property (nonatomic,retain) NSString * nextCTag;                                  //@synthesize nextCTag=_nextCTag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(NSURL *)folderURL;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)cancelTaskGroup;
-(NSString *)nextCTag;
-(NSDictionary *)bulkRequests;
-(void)setAddMemberURL:(NSURL *)arg1 ;
-(void)setBulkRequests:(NSDictionary *)arg1 ;
-(NSURL *)addMemberURL;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)bailWithError:(id)arg1 ;
-(void)_tearDownAllUnsubmittedTasks;
-(unsigned long long)_submitTasks;
-(void)_getETags;
-(id)dataContentType;
-(id)copyPostTaskWithPayloadItem:(id)arg1 forAction:(id)arg2 ;
-(id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2 ;
-(void)_getCTag;
-(Class)bulkChangeTaskClass;
-(void)_pushActions;
-(void)_sendNextBatch;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetEtagTaskWithPropertiesToFind:(id)arg1 ;
-(void)_getDataPayloads;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(void)_configureMultiGet:(id)arg1 ;
-(void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4 ;
-(char)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3 ;
-(void)deleteResourceURLs:(id)arg1 ;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(void)_bulkChange;
-(char)isWhitelistedError:(id)arg1 ;
-(void)applyAdditionalPropertiesFromPutTask:(id)arg1 ;
-(void)applyAdditionalPropertiesFromPostTask:(id)arg1 ;
-(void)setPreviousSyncToken:(NSString *)arg1 ;
-(void)setUseSyncCollection:(char)arg1 ;
-(char)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
-(void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2 ;
-(void)_getOrder;
-(void)setBulkChangeCheckCTag:(NSString *)arg1 ;
-(void)_postTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_bulkChangeTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setNextCTag:(NSString *)arg1 ;
-(char)shouldFetchMoreETags;
-(void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(char)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 ;
-(void)syncAway;
-(unsigned long long)multiGetBatchSize;
-(void)setMultiGetBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)maxIndependentTasks;
-(void)setMaxIndependentTasks:(unsigned long long)arg1 ;
-(char)useMultiGet;
-(void)setUseMultiGet:(char)arg1 ;
-(NSString *)previousCTag;
-(void)setPreviousCTag:(NSString *)arg1 ;
-(char)ensureUpdatedCTag;
-(void)setEnsureUpdatedCTag:(char)arg1 ;
-(NSString *)previousSyncToken;
-(char)useSyncCollection;
-(NSArray *)localItemURLOrder;
-(NSString *)bulkChangeCheckCTag;
-(char)actionsOnly;
-(void)setActionsOnly:(char)arg1 ;
@end

