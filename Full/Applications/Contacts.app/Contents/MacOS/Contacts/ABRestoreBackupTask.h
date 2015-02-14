/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABRestoreBackupDelegate;
@class NSString, ABAddressBook, ABPersistentStoreCoordinatorCache;

@interface ABRestoreBackupTask : NSObject {

	id<ABRestoreBackupDelegate> _delegate;
	NSString* _path;
	ABAddressBook* _addressBook;
	ABPersistentStoreCoordinatorCache* _coordinatorCache;
	char _worked;

}

@property (copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(id)initWithPath:(id)arg1 addressBook:(id)arg2 coordinatorCache:(id)arg3 delegate:(id)arg4 ;
-(void)removeImagesFolder;
-(void)removeLastImportGroup;
-(void)removeMailRecentsDatabase;
-(void)removeMainDatabase;
-(void)removeMetadataDirectory;
-(void)copyMetadataDirectory;
-(void)copyMainDatabase;
-(void)copyMailRecents;
-(void)copyImagesFolder;
-(void)copySourcesDirectory;
-(void)restoreFromMetadataIfNeeded;
-(void)resetSyncAnchorsIfNeeded;
-(void)forceSyncServicesSync;
-(void)forceServerSync;
-(void)stopMetaDataController;
-(void)removeExistingFiles;
-(void)copyOverNewFiles;
-(void)resetAddressBook;
-(void)restoreBackup;
-(void)startMetadataController;
-(void)forceASync;
-(id)init;
-(void)dealloc;
-(NSString *)path;
-(void)run;
@end

