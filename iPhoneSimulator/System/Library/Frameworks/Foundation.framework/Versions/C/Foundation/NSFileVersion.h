/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/BUStarfieldTimelineItem.h>

@class NSURL, NSString, NSDate;

@interface NSFileVersion : NSObject <BUStarfieldTimelineItem> {

	NSURL* _fileURL;
	id _addition;
	id _deadVersionIdentifier;
	id _nonLocalVersion;
	NSURL* _contentsURL;
	char _isBackup;
	NSString* _localizedName;
	NSString* _localizedComputerName;
	NSDate* _modificationDate;
	char _isResolved;
	char _contentsURLIsAccessed;
	NSString* _clientID;
	NSString* _name;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long size; 
@property (getter=isUbiquitous,readonly) char ubiquitous; 
@property (copy,readonly) NSString * originalPOSIXName; 
@property (getter=_isBackup,readonly) char _isBackup; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * localizedName; 
@property (copy,readonly) NSString * localizedNameOfSavingComputer; 
@property (copy,readonly) NSDate * modificationDate; 
@property (retain,readonly) id<NSCoding> persistentIdentifier; 
@property (getter=isConflict,readonly) char conflict; 
@property (getter=isResolved) char resolved; 
@property (getter=isDiscardable) char discardable; 
@property (readonly) char hasLocalContents; 
@property (readonly) char hasThumbnail; 
+(void)_finishedWithBackupCollection:(void*)arg1 ;
+(void)_getBackupVersionsForURL:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(char)arg5 ;
+(id)_ubiquityOnlyVersionsOfItemAtURL:(id)arg1 includeSaved:(char)arg2 ;
+(void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 ;
+(char)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id*)arg2 ;
+(char)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2 ;
+(id)_makeTemporaryStorageIdentifier;
+(id)_temporaryStorageLocationForIdentifier:(id)arg1 ;
+(id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(char*)arg2 error:(id*)arg3 ;
+(NSObject*)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3 ;
+(NSObject*)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 ;
+(id)_supportedGenerationalStorageClientIDs;
+(char)unresolvedConflictsExistForItemAtURL:(id)arg1 ;
+(id)versionsOfItemAtURL:(id)arg1 ;
+(char)_conflictsExistForItemAtURL:(id)arg1 ;
+(void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2 ;
+(void*)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(/*^block*/id)arg2 ;
+(void)_removeConflictObserver:(void*)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(void)_removeTemporaryDirectoryAtURL:(id)arg1 ;
+(id)_autosaveDirectoryURLCreateIfNecessary:(char)arg1 ;
+(char)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 error:(id*)arg3 ;
+(id)otherVersionsOfItemAtURL:(id)arg1 ;
+(id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id*)arg5 error:(id*)arg6 ;
+(id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 temporaryStorageIdentifier:(id*)arg4 error:(id*)arg5 ;
+(char)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3 ;
+(void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 ;
+(id)currentVersionOfItemAtURL:(id)arg1 ;
+(id)unresolvedConflictVersionsOfItemAtURL:(id)arg1 ;
-(id)timelineItemDate;
-(unsigned long long)timelineItemType;
-(long long)_compareToVersion:(id)arg1 ;
-(id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2 ;
-(id)_initWithAddition:(id)arg1 ;
-(NSString *)originalPOSIXName;
-(char)isConflict;
-(char)hasLocalContents;
-(char)hasThumbnail;
-(void)setResolved:(char)arg1 ;
-(char)isResolved;
-(id)restoreOverItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(NSURL *)URL;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)size;
-(NSString *)localizedName;
-(id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)isUbiquitous;
-(id)_documentInfo;
-(void)_overrideModificationDateWithDate:(id)arg1 ;
-(NSDate *)modificationDate;
-(char)_setDocumentInfo:(id)arg1 ;
-(char)isDiscardable;
-(id<NSCoding>)persistentIdentifier;
-(void)setDiscardable:(char)arg1 ;
-(char)removeAndReturnError:(id*)arg1 ;
-(char)_preserveConflictVersionLocally;
-(char)_isBackup;
-(id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(char)arg6 revision:(id)arg7 ;
-(NSString *)localizedNameOfSavingComputer;
@end

