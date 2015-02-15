/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface AMCache : NSObject {

	NSURL* _cacheFileURL;
	NSArray* _actionLocations;
	NSArray* _cacheLocationEntries;
	char _didLoadAllActions;
	char _cacheIsDirty;

}

@property (retain) NSURL * cacheFileURL;                        //@synthesize cacheFileURL=_cacheFileURL - In the implementation block
@property (retain) NSArray * cacheLocationEntries;              //@synthesize cacheLocationEntries=_cacheLocationEntries - In the implementation block
@property (retain) NSArray * actionLocations;                   //@synthesize actionLocations=_actionLocations - In the implementation block
@property (assign) char didLoadAllActions;                      //@synthesize didLoadAllActions=_didLoadAllActions - In the implementation block
@property (assign) char cacheIsDirty;                           //@synthesize cacheIsDirty=_cacheIsDirty - In the implementation block
+(unsigned long long)_actionDiscoveryDomainMaskForActionDomain:(int)arg1 ;
+(id)_automatorLibraryFolderURLsForDomainMask:(unsigned long long)arg1 ;
+(id)_cacheFileURLWithCacheFileName:(id)arg1 inDomain:(unsigned long long)arg2 ;
+(id)cacheFileURLForDomain:(int)arg1 ;
+(id)readOnlySystemCacheFileURL;
+(id)actionLocationsForDomain:(int)arg1 ;
-(NSURL *)cacheFileURL;
-(void)setCacheFileURL:(NSURL *)arg1 ;
-(id)dateAddedForActionWithBundleIdentifier:(id)arg1 ;
-(void)setActionLocations:(NSArray *)arg1 ;
-(NSArray *)actionLocations;
-(id)_cacheLocationEntriesFromCacheFileURL:(id)arg1 expectedActionLocationURLs:(id)arg2 shouldDirtyCache:(char*)arg3 ;
-(void)setCacheLocationEntries:(NSArray *)arg1 ;
-(NSArray *)cacheLocationEntries;
-(id)_currentLanguages;
-(char)validateCacheFileData:(id)arg1 error:(id*)arg2 ;
-(id)_dataFromCacheFileAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_cacheLocationEntryURLsFromCacheFileData:(id)arg1 error:(id*)arg2 ;
-(id)_validCacheLocationEntriesFromCacheFileURL:(id)arg1 expectedActionLocationURLs:(id)arg2 shouldDirtyCache:(char*)arg3 ;
-(void)loadAllActionsIfNeededForActionType:(id)arg1 ;
-(id)actionsForActionType:(id)arg1 ;
-(id)actionWithBundleIdentifier:(id)arg1 ;
-(id)_cacheFileDataForCacheLocationEntries:(id)arg1 error:(id*)arg2 ;
-(char)cacheIsDirty;
-(char)_writeCacheFileForLocationEntries:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithCacheFileURL:(id)arg1 actionLocations:(id)arg2 ;
-(void)writeUpdatedCacheFileIfNeeded;
-(char)didLoadAllActions;
-(void)setDidLoadAllActions:(char)arg1 ;
-(void)setCacheIsDirty:(char)arg1 ;
-(void)dealloc;
-(id)description;
@end

