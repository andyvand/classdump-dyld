/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperture31Plugin.ilmbplugin/Contents/MacOS/iLMBAperture31Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperture31Plugin/iLMBAperture31Plugin-Structs.h>
#import <iLifeMediaBrowser/ILMediaManager.h>
#import <iLMBAperture31Plugin/ILMediaManagerPlugin_MustImplement.h>

@class NSLock, NSRecursiveLock, NSImage, NSString, NSMutableArray, AP31_RKDatabase, ILMB_APERTURE_HgRidList, NSMutableDictionary, NSMutableSet, NSDictionary, AP31_RKAlbum, AP31_ILMediaGroupOperationCanceler, ILPerfLoggerAperture31, NSCondition;

@interface ILAperture31Plugin : ILMediaManager <ILMediaManagerPlugin_MustImplement> {

	NSLock* _watchedPathChangedLock;
	NSRecursiveLock* _appIconLock;
	NSImage* _appIcon;
	NSString* _apertureAppVersionString;
	NSMutableArray* _folderPaths;
	id _reserved4;
	id _reserved5;
	id _reserved6;
	AP31_RKDatabase* _database;
	ILMB_APERTURE_HgRidList* _versionIdList;
	NSMutableDictionary* _versionUuidForId;
	ILMB_APERTURE_HgRidList* _audioVersionIdList;
	ILMB_APERTURE_HgRidList* _videoVersionIdList;
	ILMB_APERTURE_HgRidList* _imageVersionIdList;
	NSMutableSet* _seenFolderUuids;
	NSMutableDictionary* _masterImageList;
	NSMutableArray* _allProjectGroups;
	NSDictionary* _topLevelContainerOrder;
	NSDictionary* _countryCodesByName;
	NSDictionary* _englishCountryNames;
	AP31_RKAlbum* _allPhotosAlbum;
	AP31_ILMediaGroupOperationCanceler* _queryCanceler;
	ILPerfLoggerAperture31* _perfLogger;
	NSCondition* _faceRectangleInfoCondition;
	NSMutableDictionary* _faceInfoByVersionUuid;
	long long _schemaMajorVersion;
	long long _schemaMinorVersion;

}

@property (nonatomic,retain) AP31_RKDatabase * database;              //@synthesize database=_database - In the implementation block
+(id)groupTypeIdentifierForObject:(id)arg1 ;
+(void)warmDatabaseFile:(id)arg1 ;
+(id)humanReadableFileType:(id)arg1 ;
+(id)supportedPasteboardTypes;
-(void)_finishedLoading:(id)arg1 ;
-(char)_startWatchingLibraryPath;
-(id)placesGroup;
-(void)_warmLibrary:(id)arg1 ;
-(void)photoStreamConfigChanged:(id)arg1 ;
-(id)facesGroup;
-(id)albumOrFolderForGroup:(id)arg1 ;
-(id)mediaGroupWithDictionary:(id)arg1 ;
-(id)photoStreamGroup;
-(id)iLifeSharedPath;
-(void)unloadMasterImageList;
-(id)_libraryPath;
-(id)iconForCountryPlace:(id)arg1 ;
-(id)englishCountryNames;
-(char)_seenThisFolder:(id)arg1 ;
-(id)mediaObjectsForAlbum:(id)arg1 ;
-(id)mediaObjectsForFolder:(id)arg1 inGroup:(id)arg2 ;
-(id)versionUuidsForVersionIds:(id)arg1 ;
-(id)masterImageList;
-(id)apertureApplicationVersion;
-(id)timeStampFilePath;
-(id)childProjectPictures:(id)arg1 ;
-(id)childPictures:(id)arg1 ;
-(void)_recursiveForMediaGroup:(id)arg1 objsSet:(id)arg2 groupsSet:(id)arg3 groupsArray:(id)arg4 ;
-(id)customSortVersionUuids:(id)arg1 forAlbum:(id)arg2 ;
-(id)mediaObjectsForVersionUuids:(id)arg1 sortForAlbum:(id)arg2 ;
-(void)_addModelIdToGroup:(id)arg1 attributes:(id)arg2 container:(id)arg3 ;
-(id)childGroupsForFolder:(id)arg1 parentGroup:(id)arg2 ;
-(char)shouldDeferMediaObjectsRetrievalForContainer:(id)arg1 ;
-(id)mediaObjectsForAlbumOrFolder:(id)arg1 inGroup:(id)arg2 ;
-(void)addPasteboardAttributesAndKeyPhotoForContainer:(id)arg1 toGroup:(id)arg2 keyPhotoUuid:(id)arg3 ;
-(id)mediaGroupForContainer:(id)arg1 parentID:(id)arg2 ;
-(id)_faceRectangleForFace:(id)arg1 index:(id)arg2 inPhoto:(id)arg3 ;
-(void)addFaceData:(id)arg1 fromFaceName:(id)arg2 toMediaObject:(id)arg3 mediaLibraryMode:(long long)arg4 ;
-(void)recursiveSortChildGroupsAndMediaObjectsOfGroup:(id)arg1 usingDescriptors:(id)arg2 ;
-(char)photoStreamAttachedToThisLibrary;
-(void)fixBlueFolderInternalDictionary:(id)arg1 ;
-(void)obtainMediaObjectsForChildren:(id)arg1 inArray:(id)arg2 async:(char)arg3 ;
-(unsigned long long)mediaObjectsCountForGroup:(id)arg1 withMediaTypeMask:(unsigned long long)arg2 ;
-(id)_libraryPathToWatch;
-(void)_stopWatchingLibraryPath;
-(void)setApertureApplicationVersion:(id)arg1 ;
-(id)rootGroup;
-(id)_loadFaceDataFromXML;
-(id)projectGroups;
-(id)allPhotos;
-(id)albums;
-(AP31_RKDatabase *)database;
-(id)mediaObjectsProviderForGroup:(id)arg1 ;
-(id)identifierForMediaGroupType:(unsigned long long)arg1 ;
-(char)canLoadData;
-(unsigned long long)displayMediaTypesForBrowserType:(unsigned long long)arg1 ;
-(id)mediaGroups;
-(id)rootMediaGroupIcon;
-(id)contextMenuForMediaGroup:(id)arg1 ;
-(char)mediaGroupSupportsSkimming:(id)arg1 ;
-(char)writeMediaObjects:(id)arg1 toPasteboard:(id)arg2 ;
-(id)defaultLoadingMessage;
-(id)displayItemCountStringForMediaGroups:(id)arg1 withItemCount:(unsigned long long)arg2 ;
-(void)cancelMediaGroupLoadingExcludingMediaGroups:(id)arg1 ;
-(id)contextMenuForMediaObject:(id)arg1 inMediaGroup:(id)arg2 ;
-(void)contextMenuOpen:(id)arg1 ;
-(void)removeFolderPath:(id)arg1 ;
-(void)contextMenuReveal:(id)arg1 ;
-(void)watchedPathChanged:(id)arg1 fileChangedEventFlags:(unsigned long long)arg2 ;
-(void)volumeDidMount:(id)arg1 ;
-(void)volumeWillUnmount:(id)arg1 ;
-(id)performLoadData;
-(id)rootMediaGroupTitle;
-(id)photoStreamEnabledServices;
-(void)unloadData;
-(id)badgeInfoForMediaObject:(id)arg1 inMediaGroups:(id)arg2 thumbnailRect:(CGRect)arg3 ;
-(id)badgeIconForMediaGroup:(id)arg1 inMode:(unsigned long long)arg2 ;
-(unsigned long long)mediaTypesSupported;
-(char)writeMediaGroups:(id)arg1 toPasteboard:(id)arg2 ;
-(id)mediaGroupsFromPasteboard:(id)arg1 ;
-(id)mediaObjectsFromPasteboard:(id)arg1 ;
-(id)iconForMediaGroupTypeIdentifier:(id)arg1 ;
-(void)signalQueryCancelerForMediaGroup:(id)arg1 ;
-(char)shouldCancelMediaObjectsLoadingForGroup:(id)arg1 ;
-(char)mediaObjectsLoadingWasCanceled:(id)arg1 ;
-(void)resetQueryCanceler;
-(char)shouldDisplayChildGroupsForMediaGroup:(id)arg1 ;
-(CGPoint)originForFlagBadgeImage:(id)arg1 inPreviewImageWithSize:(CGSize)arg2 ;
-(id)dictionaryWithAlbums:(id)arg1 ;
-(id)dBasePath;
-(id)albumsInDictionary:(id)arg1 ;
-(id)dictionaryWithPhotos:(id)arg1 ;
-(id)photosInDictionary:(id)arg1 ;
-(id)displayImage;
-(void)setDatabase:(AP31_RKDatabase *)arg1 ;
-(id)applicationVersion;
-(char)appInstalled;
-(id)init;
-(void)dealloc;
-(id)displayName;
-(id)uniqueID;
-(void)loadData;
@end

