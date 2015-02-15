/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
@class ILMediaGroup, NSMutableDictionary, ILPluginLoadManager, NSLock, NSMutableArray, NSBundle, NSString, NSDate, ILChangeManager;

@interface ILMediaManager : NSObject {

	ILMediaGroup* _rootMediaGroup;
	NSMutableDictionary* _mediaGroupsDict;
	NSMutableDictionary* _mediaObjectsDict;
	ILPluginLoadManager* _loadState;
	NSLock* _mediaDictsAccessLock;
	char _reserved7;
	char _reserved8;
	NSMutableDictionary* _reserved9;
	char _reserved10;
	char _reserved11;
	NSMutableArray* _reserved12;
	char _reserved13;
	char _reserved14;
	NSMutableDictionary* _extendedAttributes;
	double _loadThreadPriority;
	NSBundle* _pluginBundle;
	NSString* _pluginSourceIdentifier;
	NSDate* _modificationDate;
	char _reserved15;
	char _reserved16;
	char _reserved17;
	ILChangeManager* _changeManager;
	id _reserved1;
	id _reserved2;
	id _reserved3;

}
+(char)isManagedMediaSource;
+(id)supportedPasteboardTypes;
+(id)photoStreamEnabledServices;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)rootMediaGroup;
-(id)mediaObjects;
-(id)pluginIdentifier;
-(id)pluginBundle;
-(id)localizedString:(id)arg1 ;
-(id)changeManager;
-(void)setLoadState:(int)arg1 ;
-(id)mediaObjectsProviderForGroup:(id)arg1 ;
-(char)isFolderSourcePlugin;
-(char)isPhotosPlugin;
-(char)isiPhotoPlugin;
-(char)isAperturePlugin;
-(char)isiTunesPlugin;
-(char)isiMoviePlugin;
-(char)isGarageBandPlugin;
-(char)isFolderPlugin;
-(char)isMoviesFolderPlugin;
-(char)isPhotoBoothPlugin;
-(char)isAppDefFolderPlugin;
-(char)isEmbeddedPlugin;
-(char)canLoadData;
-(unsigned long long)displayMediaTypesForBrowserType:(unsigned long long)arg1 ;
-(char)isApplePlugin;
-(id)mediaGroups;
-(id)rootMediaGroupIcon;
-(id)iconForMediaGroupType:(unsigned long long)arg1 ;
-(id)contextMenuForMediaGroup:(id)arg1 ;
-(char)mediaGroupSupportsSkimming:(id)arg1 ;
-(char)writeMediaObjects:(id)arg1 toPasteboard:(id)arg2 ;
-(id)mediaGroupForID:(id)arg1 ;
-(id)defaultLoadingMessage;
-(id)defaultNoDataMessage:(id)arg1 ;
-(id)newMediaGroupWithTypeIdentifier:(id)arg1 groupID:(id)arg2 ;
-(id)displayItemCountStringForMediaGroups:(id)arg1 withItemCount:(unsigned long long)arg2 ;
-(void)cancelMediaGroupLoadingExcludingMediaGroups:(id)arg1 ;
-(id)contextMenuForMediaObject:(id)arg1 inMediaGroup:(id)arg2 ;
-(id)searchOptions:(id)arg1 ;
-(void)watchedQueryChanged:(id)arg1 ;
-(void)watchedQueryChanged:(id)arg1 queryScope:(id)arg2 ;
-(void)volumeDidMount:(id)arg1 ;
-(void)volumeWillUnmount:(id)arg1 ;
-(char)isLoadingDisabled;
-(char)needsReload;
-(void)cancelLoadData;
-(void)setNeedsReload:(char)arg1 ;
-(void)_loadDataThreaded;
-(char)isAutoReloadEnabled;
-(void)_unloadDataThreaded;
-(void)setAutoReloadEnabled:(char)arg1 ;
-(char)isCancelLoadRequestPending;
-(void)_recursiveToCollectSubTreeInfoForMediaGroup:(id)arg1 objsSet:(id)arg2 groupsSet:(id)arg3 groupsArray:(id)arg4 ;
-(id)newMediaObjectWithType:(unsigned long long)arg1 name:(id)arg2 objectID:(id)arg3 objectClass:(Class)arg4 ;
-(char)checkAndCreateRootMediaGroup:(char)arg1 ;
-(void)_resetObjectsAndGroupsDictionaries;
-(id)performLoadData;
-(void)setRootMediaGroup:(id)arg1 ;
-(double)loadThreadPriority;
-(void)_performLoadData;
-(void)stopWatchingMediaGroupAndChildGroups:(id)arg1 ;
-(void)setRootMediaGroupInternal:(id)arg1 ;
-(void)setMediaGroupsDict:(id)arg1 ;
-(void)setMediaObjectsDict:(id)arg1 ;
-(void)_recursiveToCollectSubTreeInfoForMediaGroup:(id)arg1 objsDict:(id)arg2 groupsDict:(id)arg3 ;
-(id)rootMediaGroupTitle;
-(id)_recursiveMediaGroup:(id)arg1 toFindMediaGroupID:(id)arg2 ;
-(id)_recursiveMediaGroup:(id)arg1 toFindMediaObjectID:(id)arg2 ;
-(void)_loadDataIfNeeded;
-(void)unloadData;
-(char)firstTimeCallingLoadData;
-(id)mediaObjectForID:(id)arg1 ;
-(void)changeID:(id)arg1 forMediaGroup:(id)arg2 ;
-(id)newMediaObjectWithType:(unsigned long long)arg1 name:(id)arg2 objectID:(id)arg3 ;
-(void)removeMediaGroupFromIDMap:(id)arg1 ;
-(void)setExtendedAttributes:(id)arg1 ;
-(id)extendedAttributeForKey:(id)arg1 ;
-(id)mediaLibraryAttributes;
-(void)setLoadThreadPriority:(double)arg1 ;
-(void)setLoadingDisabled:(char)arg1 ;
-(long long)maxRating;
-(id)iconNamed:(id)arg1 ;
-(void)addMediaGroup:(id)arg1 ;
-(void)removeMediaGroup:(id)arg1 ;
-(id)badgeInfoForMediaObject:(id)arg1 inMediaGroups:(id)arg2 thumbnailRect:(CGRect)arg3 ;
-(id)thumbnailOverlayForMediaObject:(id)arg1 inMediaGroups:(id)arg2 atSize:(CGSize)arg3 ;
-(id)badgeIconForMediaGroup:(id)arg1 inMode:(unsigned long long)arg2 ;
-(unsigned long long)mediaTypesSupported;
-(id)searchOptionsMenu:(id)arg1 ;
-(char)writeMediaGroups:(id)arg1 toPasteboard:(id)arg2 ;
-(id)mediaGroupsFromPasteboard:(id)arg1 ;
-(id)mediaObjectsFromPasteboard:(id)arg1 ;
-(id)iconForMediaGroupTypeIdentifier:(id)arg1 ;
-(char)shouldDisplayMediaObject:(id)arg1 forBrowserType:(unsigned long long)arg2 ;
-(void)signalQueryCancelerForMediaGroup:(id)arg1 ;
-(char)shouldCancelMediaObjectsLoadingForGroup:(id)arg1 ;
-(char)mediaObjectsLoadingWasCanceled:(id)arg1 ;
-(void)resetQueryCanceler;
-(id)filteredMediaObjectsOfMediaGroup:(id)arg1 forBrowserType:(unsigned long long)arg2 ;
-(char)hasMediaObjectsInMediaGroup:(id)arg1 forBrowserType:(unsigned long long)arg2 ;
-(char)shouldDisplayChildGroupsForMediaGroup:(id)arg1 ;
-(id)photoStreamLibraryId;
-(void)setLoading:(char)arg1 ;
-(int)loadState;
-(char)isLoading;
-(id)applicationVersion;
-(char)appInstalled;
-(id)init;
-(void)dealloc;
-(char)_loadData;
-(char)isLoaded;
-(void)reloadData;
-(id)modificationDate;
-(id)uniqueID;
-(void)addOperation:(id)arg1 ;
-(void)setModificationDate:(id)arg1 ;
-(void)loadData;
@end

