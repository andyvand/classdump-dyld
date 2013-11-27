/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAlbumList.h>
#import <PhotoLibraryServices/PLAlbumContainer.h>
#import <PhotoLibraryServices/PLDerivedAlbumListOrigin.h>
#import <PhotoLibraryServices/PLIndexMappersDataOrigin.h>

@protocol PLIndexMappingCache;
@class NSString, NSObject, NSMutableOrderedSet;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin> {

	NSObject<PLIndexMappingCache>* _derivedAlbumLists[5];
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (assign,nonatomic) int albumListType; 
@property (nonatomic,readonly) NSMutableOrderedSet * albums; 
@property (nonatomic,readonly) BOOL hasAtLeastOneAlbum; 
@property (nonatomic,readonly) BOOL canEditAlbums; 
@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (nonatomic,readonly) unsigned containersCount; 
@property (nonatomic,readonly) unsigned albumsCount; 
@property (nonatomic,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned unreadAlbumsCount; 
@property (nonatomic,readonly) NSString * _prettyDescription; 
@property (nonatomic,readonly) NSString * _typeDescription; 
+(void)initialize;
+(id)albumListInPhotoLibrary:(id)arg1 ;
+(id)importListInPhotoLibrary:(id)arg1 ;
+(id)eventListInPhotoLibrary:(id)arg1 ;
+(id)facesAlbumListInPhotoLibrary:(id)arg1 ;
+(BOOL)isValidPathForPersistence:(id)arg1 ;
+(void)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2 ;
+(id)allStreamedAlbumsListInPhotoLibrary:(id)arg1 ;
+(id)placesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(id)albumListInManagedObjectContext:(id)arg1 ;
+(id)importListInManagedObjectContext:(id)arg1 ;
+(id)eventListInManagedObjectContext:(id)arg1 ;
+(id)allStreamedAlbumsListInManagedObjectContext:(id)arg1 ;
+(id)_albumListWithType:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_singletonListWithType:(int)arg1 library:(id)arg2 ;
+(id)_typeDescriptionForAlbumListType:(int)arg1 ;
+(unsigned)_priorityForAlbumKind:(int)arg1 ;
+(BOOL)isValidTypeForPersistence:(int)arg1 ;
+(void)persistAlbumListUUIDs:(id)arg1 type:(int)arg2 allowsOverwrite:(BOOL)arg3 ;
+(id)wallpaperAlbumListInPhotoLibrary:(id)arg1 ;
+(id)facesAlbumListInManagedObjectContext:(id)arg1 ;
+(id)placesAlbumListInManagedObjectContext:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)_typeDescription;
-(id)albums;
-(void)awakeFromInsert;
-(void)didSave;
-(BOOL)isRegisteredForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(void)registerForChanges;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(void)unregisterForChanges;
-(unsigned)albumsCount;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(id)_prettyDescription;
-(void)unregisterAllDerivedAlbums;
-(void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg1 ;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(void)enumerateDerivedIndexMappers:(/*^block*/ id)arg1 ;
-(BOOL)hasDerivedIndexMappers;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned)containersCount;
-(id)_albumsCountFetchRequest;
-(int)albumListType;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)canEditAlbums;
-(/*^block*/ id)albumsSortingComparator;
-(void)enumerateDerivedAlbumLists:(/*^block*/ id)arg1 ;
-(BOOL)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(unsigned)unreadAlbumsCount;
-(void)registerDerivedAlbumList:(NSObject*)arg1 ;
-(void)setAlbumListType:(int)arg1 ;
-(int)filter;
@end
