/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <iLifeMediaBrowser/NSCopying.h>

@class NSString, NSImage, NSURL, NSDate, NSDictionary, NSMutableArray;

@interface ILMediaGroup : NSObject <NSCopying> {

	NSString* _ID;
	NSString* _name;
	NSImage* _icon;
	NSURL* _url;
	NSDate* _modificationDate;
	NSDictionary* _attributes;
	NSMutableArray* _childGroups;
	id _reserved4;
	NSString* _parentID;
	unsigned long long _type;
	char _dynamicMediaObjects;
	id _reserved1;
	id _reserved2;
	id _reserved3;

}
+(id)identifierForMediaGroupType:(unsigned long long)arg1 ;
+(id)modDateForFile:(id)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)addChildGroup:(id)arg1 ;
-(id)childGroups;
-(void)removeChildGroup:(id)arg1 ;
-(void)setChildGroups:(id)arg1 ;
-(void)insertChildGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)mediaObjects;
-(void)setTypeIdentifier:(id)arg1 ;
-(char)_isiTunesPlaylist;
-(char)_isiPhotoAlbum;
-(id)sourcePluginIdentifier;
-(id)_pluginIdentifier;
-(void)_setPluginIdentifier:(id)arg1 ;
-(id)mediaObjectsProvider;
-(id)_mediaObjectsProvider;
-(id)_changeManager;
-(void)_setMediaObjectsProvider:(id)arg1 ;
-(void)setParentID:(id)arg1 ;
-(void)setDynamicMediaObjects:(char)arg1 ;
-(void)removeFromObserve:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_stateLock;
-(id)_IDNoLock;
-(void)_setURLNoLock:(id)arg1 ;
-(unsigned long long)mediaGroupTypeForIdentifier:(id)arg1 ;
-(id)_typeIdentifierNoLock;
-(id)_allMediaObjectsNoLock;
-(id)mediaObjectsAsync;
-(id)allMediaObjects_SearchedGroups:(id)arg1 ;
-(id)_childGroupsNoLock;
-(id)iMovieGroupAllMediaObjects;
-(void)setMediaObjects:(id)arg1 ;
-(void)addMediaObjects:(id)arg1 ;
-(void)addToObserve:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_nameNoLock;
-(id)_URLNoLock;
-(id)localMediaObjects;
-(unsigned long long)mediaObjectsCount;
-(char)containsMediaObjectsWithMediaTypeMask:(unsigned long long)arg1 ;
-(id)_childGroupForPath:(id)arg1 alreadySearched:(id)arg2 ;
-(void)replaceGroupAtIndex:(long long)arg1 withGroup:(id)arg2 ;
-(char)updateChildGroup:(id)arg1 ;
-(void)_insertChildGroup:(id)arg1 atIndex:(id)arg2 ;
-(void)removeMediaObject:(id)arg1 ;
-(void)setSourcePluginIdentifier:(id)arg1 ;
-(void)setLoading;
-(void)cancelMediaObjectsLoading;
-(id)initWithPlugin:(id)arg1 typeIdentifier:(id)arg2 ;
-(id)allMediaObjects;
-(id)internalMediaObjectsArray;
-(void)setInternalMediaObjectsArray:(id)arg1 ;
-(void)addChildGroups:(id)arg1 ;
-(char)isDynamicMediaObjects;
-(id)parentID;
-(char)_isApertureAlbum;
-(char)_isiMovieGroup;
-(char)_isGarageBandGroup;
-(char)shouldHideCountTextField;
-(id)mediaObjectsCountNumber;
-(long long)iTunesFoldersBeforePlaylistsDisplayOrder;
-(long long)iTunesPlaylistDisplayOrder;
-(id)_childGroupForPath:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(void)setID:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(char)isLoading;
-(void)dealloc;
-(id)description;
-(id)path;
-(void)setName:(id)arg1 ;
-(id)URL;
-(char)isEqual:(id)arg1 ;
-(long long)caseInsensitiveCompare:(id)arg1 ;
-(id)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIcon:(id)arg1 ;
-(id)icon;
-(unsigned long long)type;
-(id)objectSpecifier;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(char)isLoaded;
-(void)setLoaded:(char)arg1 ;
-(void)setPath:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)modificationDate;
-(void)setURL:(id)arg1 ;
-(id)properties;
-(id)attributes;
-(id)typeIdentifier;
-(void)setAttributes:(id)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(id)ID;
-(void)setModificationDate:(id)arg1 ;
@end

