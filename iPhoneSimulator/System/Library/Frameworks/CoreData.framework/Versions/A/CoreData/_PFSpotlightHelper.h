/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSLock, NSDictionary;

@interface _PFSpotlightHelper : NSObject {

	NSMutableSet* _registeredStores;
	NSLock* _storeListLock;
	NSMutableSet* _cachedStoreIDSForWrittenModelFiles;
	NSDictionary* _pendingObjects;
	char _waitingForPersistentDocumentToFinishSaving;
	char _isUbiquity;

}
+(int)lockExclusiveWriterFileAtPath:(id)arg1 ;
+(void)unlockExclusiveWriterFileDescriptor:(int)arg1 atPath:(id)arg2 ;
+(char)attemptFlockFD:(int)arg1 withFlag:(int)arg2 fileName:(const char*)arg3 ;
+(void)initialize;
-(void)unregisterStore:(id)arg1 ;
-(void)registerStore:(id)arg1 ;
-(void)processDidSaveNotification:(id)arg1 ;
-(void)processWillSaveFromPersistentDocumentNotification:(id)arg1 ;
-(void)processDidSaveFromPersistentDocumentNotification:(id)arg1 ;
-(id)objectsInRegisteredStores:(id)arg1 runningTotal:(unsigned long long*)arg2 ;
-(void)writeWorkFilesWithDictionary:(id)arg1 ;
-(void)_writeWorkFilesWithDictionary:(id)arg1 withStores:(id)arg2 ;
-(char)hasWrittenModelFileForStoreID:(id)arg1 ;
-(char)writeModelFileToSupportDirPath:(id)arg1 forStore:(id)arg2 ;
-(id)objectsInStore:(id)arg1 runningTotal:(unsigned long long*)arg2 ;
-(char)_writeWorkFileWithContents:(id)arg1 toDirectoryPath:(id)arg2 withFormat:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
@end

