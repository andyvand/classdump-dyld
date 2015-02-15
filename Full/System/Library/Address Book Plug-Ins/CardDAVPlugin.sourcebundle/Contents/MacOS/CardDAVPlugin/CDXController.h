/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Address Book Plug-Ins/CardDAVPlugin.sourcebundle/Contents/MacOS/CardDAVPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CardDAVPlugin/CoreDAVLocalDBInfoProvider.h>
#import <CardDAVPlugin/CoreDAVLogDelegate.h>
#import <CardDAVPlugin/CoreDAVContainerQueryTaskDelegate.h>
#import <CardDAVPlugin/CoreDAVDiscoveryTaskGroupDelegate.h>
#import <CardDAVPlugin/CoreDAVGetAccountPropertiesTaskGroupDelegate.h>
#import <CardDAVPlugin/CoreDAVContainerInfoTaskGroupDelegate.h>
#import <CardDAVPlugin/CoreDAVPutTaskDelegate.h>
#import <CardDAVPlugin/CoreDAVGetTaskDelegate.h>
#import <CardDAVPlugin/CoreDAVOptionsTaskDelegate.h>
#import <CardDAVPlugin/CoreDAVMkcolTaskDelegate.h>
#import <CardDAVPlugin/CoreDAVDeleteTaskDelegate.h>
#import <CardDAVPlugin/CoreDAVPropPatchTaskDelegate.h>

@class CDXTaskManager, NSMutableArray, NSFileHandle, CDXAccount, NSError, NSMutableDictionary, NSSet, CDXLocalDB, NSMutableSet, NSString;

@interface CDXController : NSObject <CoreDAVLocalDBInfoProvider, CoreDAVLogDelegate, CoreDAVContainerQueryTaskDelegate, CoreDAVDiscoveryTaskGroupDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVMkcolTaskDelegate, CoreDAVDeleteTaskDelegate, CoreDAVPropPatchTaskDelegate> {

	CDXTaskManager* _taskManager;
	NSMutableArray* _outstandingActions;
	char _quickStop;
	NSFileHandle* _debugLogHandle;
	char _triedDebugLogHandle;
	NSFileHandle* _trafficLogHandle;
	char _triedTrafficLogHandle;
	CDXAccount* _account;
	NSError* _discoverServerError;
	NSMutableDictionary* _principalInfo;
	NSError* _principalPropertiesError;
	NSSet* _containers;
	NSError* _containersError;
	CDXLocalDB* _localDB;
	char _actionsOnlyIfSuccessfulAction;
	NSMutableDictionary* _imageGetPersonsByReference;
	NSMutableDictionary* _imageGetImageByReference;
	NSMutableDictionary* _imageReferenceByTaskURLString;
	NSMutableSet* _imageGetUnsubmittedTaskURLs;
	NSError* _imageGetError;
	unsigned long long _imageGetActiveTaskCount;
	unsigned long long _imageGetMaxActiveTaskCount;
	double _imageGetTaskTimeout;
	char _imageGetStopIfError;
	NSSet* _searchResults;
	NSError* _searchError;
	char _searchLimitReached;
	NSError* _createAddressBookError;
	NSError* _deleteError;
	NSError* _setDisplayNameError;
	char _compressRequests;
	NSError* _optionsError;
	NSMutableDictionary* _syncErrors;

}

@property (retain) CDXAccount * account;                            //@synthesize account=_account - In the implementation block
@property (retain) CDXTaskManager * taskManager;                    //@synthesize taskManager=_taskManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)principalPropertiesAtURL:(id)arg1 withTimeout:(double)arg2 error:(id*)arg3 ;
-(id)trafficLogPath;
-(id)logPathForFile:(id)arg1 ;
-(void)handleWebAuthRequestAtURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)supportsRequestCompressionAtURL:(id)arg1 withTimeout:(double)arg2 error:(id*)arg3 ;
-(id)debugLogPath;
-(void)cancelActions;
-(id)debugLogHandle;
-(void)getUncachedImagesInAddressBook:(id)arg1 maxSimultGets:(unsigned long long)arg2 withTimeout:(double)arg3 error:(id*)arg4 ;
-(void)_runRunLoopUntilFinished;
-(void)createAddressBookAtURL:(id)arg1 withDisplayName:(id)arg2 withDescription:(id)arg3 error:(id*)arg4 ;
-(void)setDisplayName:(id)arg1 ofItemWithURL:(id)arg2 error:(id*)arg3 ;
-(void)stopNewUncachedImageGets;
-(char)_startImageGets;
-(void)successfulActionInContainerWithPath:(id)arg1 ;
-(id)containersAtURLs:(id)arg1 directoryGatewayURLs:(id)arg2 withDepth:(int)arg3 withTimeout:(double)arg4 error:(id*)arg5 ;
-(void)getUncachedImagesForPerson:(id)arg1 ;
-(id)_limitBulkRequestResources:(id)arg1 forKey:(id)arg2 maxResources:(long long)arg3 ;
-(id)_limitBulkRequestResources:(id)arg1 maxBulkImportResources:(long long)arg2 maxBulkCRUDResources:(long long)arg3 ;
-(void)discoverServerWithHttpPorts:(id)arg1 withHttpsPorts:(id)arg2 withPaths:(id)arg3 withTimeout:(double)arg4 error:(id*)arg5 ;
-(id)urlForPerson:(id)arg1 homeInfo:(id)arg2 ;
-(void)_syncContainerInfos:(id)arg1 containerActions:(id)arg2 multiGetBatchSize:(unsigned long long)arg3 maxSimultRequestsPerFolder:(unsigned long long)arg4 usePostIfAvailable:(char)arg5 useSyncReportIfAvailable:(char)arg6 maxBulkImportResources:(long long)arg7 maxBulkCRUDResources:(long long)arg8 useBulkChangePrecondition:(char)arg9 withTimeout:(double)arg10 errors:(id*)arg11 ;
-(id)_newFileHandleAtPath:(id)arg1 ;
-(id)trafficLogHandle;
-(void)deleteItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)syncContainerInfos:(id)arg1 inLocalDatabase:(id)arg2 multiGetBatchSize:(unsigned long long)arg3 maxSimultRequestsPerFolder:(unsigned long long)arg4 maxSimultImageGets:(unsigned long long)arg5 actionsOnlyIfSuccessfulAction:(char)arg6 useActionsAndCTag:(char)arg7 usePostIfAvailable:(char)arg8 useSyncReportIfAvailable:(char)arg9 maxBulkImportResources:(long long)arg10 maxBulkCRUDResources:(long long)arg11 useBulkChangePrecondition:(char)arg12 withTimeout:(double)arg13 errors:(id*)arg14 ;
-(void)updateDistantMeCardWithURL:(id)arg1 homeInfo:(id)arg2 error:(id*)arg3 ;
-(id)search:(id)arg1 forTerms:(id)arg2 withLimit:(unsigned long long)arg3 withTimeout:(double)arg4 limitReached:(char*)arg5 error:(id*)arg6 ;
-(void)renewPushSubscriptionAtURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CDXTaskManager *)taskManager;
-(void)shutdown;
-(void)setTaskManager:(CDXTaskManager *)arg1 ;
-(CDXAccount *)account;
-(void)setAccount:(CDXAccount *)arg1 ;
-(void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2 ;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg1 ;
-(char)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(char)syncPostTask:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(char)syncDeleteTask:(id)arg1 error:(id)arg2 ;
-(char)syncBulkChangeTask:(id)arg1 error:(id)arg2 ;
-(void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3 ;
-(void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6 ;
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
-(long long)coreDAVLogLevel;
-(long long)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2 ;
-(char)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3 ;
-(void)containerQueryTask:(id)arg1 completedWithFoundItems:(id)arg2 limitReached:(char)arg3 error:(id)arg4 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(void)optionsTask:(id)arg1 error:(id)arg2 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
@end
