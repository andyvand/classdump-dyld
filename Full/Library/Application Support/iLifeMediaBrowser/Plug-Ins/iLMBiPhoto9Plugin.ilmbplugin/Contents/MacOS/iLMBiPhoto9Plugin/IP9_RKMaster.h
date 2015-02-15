/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhoto9Plugin.ilmbplugin/Contents/MacOS/iLMBiPhoto9Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBiPhoto9Plugin/IP9_RKModel.h>

@class NSString, NSData, NSNumber;

@interface IP9_RKMaster : IP9_RKModel {

	NSString* m_name;
	NSString* m_projectUuid;
	NSString* m_fileVolumeUuid;
	NSString* m_importGroupUuid;
	NSString* m_fileName;
	NSString* m_fileType;
	NSString* m_fileSubtype;
	NSData* m_fileAliasData;
	NSString* m_imagePath;
	NSNumber* m_fileSize;
	NSNumber* m_duration;
	int m_faceDetectionState;

}
+(id)mastersForVersions:(id)arg1 where:(id)arg2 ;
+(id)mastersForLibrary;
+(id)mastersForVersions:(id)arg1 ;
+(id)referencedMastersForProject:(id)arg1 ;
+(char)isPathInApertureLibrary:(id)arg1 ;
+(id)masterUuidsForVersions:(id)arg1 ;
+(char)isPathInIPhotoLibrary:(id)arg1 ;
+(id)mastersOfFileType:(id)arg1 fromMasters:(id)arg2 ;
+(id)mastersForProject:(id)arg1 ;
+(id)allMastersForMasters:(id)arg1 ;
+(id)allMasterUuidsForVersions:(id)arg1 ;
+(void)prefetchRelationships:(id)arg1 forObjects:(id)arg2 ;
+(id)unratedOrBetterMasterUuidsForDatabase:(id)arg1 ;
+(unsigned long long)countOfReferencedFilesForMasters:(id)arg1 ;
-(id)masterNotInTrash;
-(id)userVisibleFilePath;
-(void)setRewroteMasterMetadata:(char)arg1 ;
-(int)faceDetectionState;
-(id)allManagedMasterDirectoryPaths;
-(long long)versionCounter;
-(char)isTrulyRaw;
-(id)oldestVersion;
-(id)managedPathByRemovingPathPrefix:(id)arg1 ;
-(id)relativeManagedImagePathWithPathPrefix:(id)arg1 ;
-(char)fileAliasDataIsLoaded;
-(void)cacheImportGroup:(id)arg1 ;
-(id)fileVolumeUuid;
-(id)durationAsNumber;
-(id)importGroupUuid;
-(id)masterFilePath;
-(void)cacheProjectUuid:(id)arg1 ;
-(void)cacheImportGroupUuid:(id)arg1 ;
-(void)cacheFileVolumeUuid:(id)arg1 ;
-(void)cacheFileIsReference:(char)arg1 ;
-(void)cacheIsExternallyEditable:(char)arg1 ;
-(void)cacheIsTrulyRaw:(char)arg1 ;
-(void)cacheHasAttachments:(char)arg1 ;
-(void)cacheDurationAsNumber:(id)arg1 ;
-(void)cacheFaceDetectionState:(int)arg1 ;
-(void)cacheFileAliasData:(id)arg1 ;
-(id)managedImagePathWithPathPrefix:(id)arg1 ;
-(id)managedImagePath;
-(char)isLikelyAvailable;
-(id)oldestVersionFromVersions:(id)arg1 ;
-(id)libraryRelativeFilePath;
-(void)clearVersionCache;
-(char)isReallyAvailable;
-(char)isExternallyEditable;
-(char)isBlankMaster;
-(id)fileAlias;
-(void)removeVersion:(id)arg1 ;
-(void)cacheVersions:(id)arg1 ;
-(id)importGroup;
-(id)fileVolume;
-(id)fileAliasData;
-(id)importGroupName;
-(char)isMissing;
-(id)allVersions;
-(id)projectUuid;
-(id)project;
-(void)cacheFileSize:(id)arg1 ;
-(void)cacheImagePath:(id)arg1 ;
-(char)isInTrash;
-(void)cacheHasNotes:(char)arg1 ;
-(void)cacheIsMissing:(char)arg1 ;
-(void)cacheSubtype:(id)arg1 ;
-(void)cacheFileName:(id)arg1 ;
-(void)cacheIsInTrash:(char)arg1 ;
-(void)cacheType:(id)arg1 ;
-(void)cacheName:(id)arg1 ;
-(char)isAudio;
-(id)thumbnailGroup;
-(id)anyVersion;
-(char)rewroteMasterMetadata;
-(char)flushModel;
-(void)addVersion:(id)arg1 ;
-(char)fileIsReference;
-(char)isMovie;
-(char)hasNotes;
-(id)extension;
-(char)isImage;
-(char)hasAttachments;
-(char)isAvailable;
-(void)dealloc;
-(double)duration;
-(id)name;
-(unsigned long long)size;
-(id)type;
-(id)subtype;
-(long long)compare:(id)arg1 ;
-(id)fileName;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)fileSize;
-(id)versions;
-(char)isOffline;
-(id)imagePath;
@end
