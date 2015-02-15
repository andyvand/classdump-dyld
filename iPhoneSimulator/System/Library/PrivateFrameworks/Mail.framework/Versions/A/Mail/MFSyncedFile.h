/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSString;

@interface MFSyncedFile : NSObject <NSFilePresenter> {

	NSURL* _cloudURL;
	id _cloudURLLock;
	NSURL* _url;
	/*^block*/id _conflictResolver;
	unsigned long long _syncState;

}

@property (assign) unsigned long long syncState;                                         //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize url=_url - In the implementation block
@property (copy) id conflictResolver;                                                    //@synthesize conflictResolver=_conflictResolver - In the implementation block
@property (readonly) NSURL * cloudURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(id)syncedFileForURL:(id)arg1 withConflictResolver:(/*^block*/id)arg2 ;
+(id)_metadata;
+(id)_currentiCloudAccount;
+(id)_metadataURL;
+(void)stopPersistingSyncedFileForURL:(id)arg1 ;
+(void)initialize;
-(id)initWithURL:(id)arg1 withConflictResolver:(/*^block*/id)arg2 ;
-(id)synchronouslyReadPlistWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)synchronouslyWritePlist:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)readPlistWithOptions:(unsigned long long)arg1 ;
-(void)writePlist:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_handleIdentityChange:(id)arg1 ;
-(NSURL *)cloudURL;
-(char)_deleteFileLocallyPostingNotification:(char)arg1 error:(id*)arg2 ;
-(char)_syncWithCloudPostNotification:(char)arg1 error:(id*)arg2 ;
-(void)_resolveConflicts;
-(char)_writeData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)_writeDataToCloud:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)_writeDataLocally:(id)arg1 options:(unsigned long long)arg2 setMetadata:(char)arg3 postNotification:(char)arg4 error:(id*)arg5 ;
-(void)_setiCloudAccount;
-(id)_readPlistWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_clearMetadata;
-(id)_iCloudAccount;
-(char)_signedInState;
-(id)conflictResolver;
-(char)_fileExistsInCloud;
-(id)_ubiquitousFileURL;
-(id)_ubiquitousFileName;
-(void)_setCloudURL;
-(char)_writeDataAfterResolvingConflict:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)writeData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)readDataWithOptions:(unsigned long long)arg1 ;
-(void)setConflictResolver:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSURL *)URL;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(unsigned long long)syncState;
-(void)setSyncState:(unsigned long long)arg1 ;
-(void)deleteFile;
@end

