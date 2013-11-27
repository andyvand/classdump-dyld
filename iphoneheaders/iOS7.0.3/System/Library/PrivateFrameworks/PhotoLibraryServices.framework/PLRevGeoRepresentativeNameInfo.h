/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableOrderedSet;

@interface PLRevGeoRepresentativeNameInfo : NSObject {

	BOOL _allEntriesAtHome;
	BOOL _allEntriesMatchHomeForOrderType;
	BOOL _addCountyIfNeeded;
	NSString* _name;
	unsigned _type;
	unsigned _matchingCount;
	NSMutableOrderedSet* _geoPlaces;
	NSMutableOrderedSet* _remainingGeoPlaces;
	NSString* _localizedName;

}

@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned matchingCount;                                  //@synthesize matchingCount=_matchingCount - In the implementation block
@property (assign,nonatomic) BOOL allEntriesAtHome;                                   //@synthesize allEntriesAtHome=_allEntriesAtHome - In the implementation block
@property (assign,nonatomic) BOOL allEntriesMatchHomeForOrderType;                    //@synthesize allEntriesMatchHomeForOrderType=_allEntriesMatchHomeForOrderType - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * geoPlaces;                       //@synthesize geoPlaces=_geoPlaces - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * remainingGeoPlaces;              //@synthesize remainingGeoPlaces=_remainingGeoPlaces - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                  //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) BOOL addCountyIfNeeded;                                  //@synthesize addCountyIfNeeded=_addCountyIfNeeded - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)localizedName;
-(void)setMatchingCount:(unsigned)arg1 ;
-(void)setAllEntriesAtHome:(BOOL)arg1 ;
-(void)setAllEntriesMatchHomeForOrderType:(BOOL)arg1 ;
-(id)geoPlaces;
-(void)addGeoPlaces:(id)arg1 ;
-(unsigned)matchingCount;
-(BOOL)allEntriesAtHome;
-(BOOL)allEntriesMatchHomeForOrderType;
-(id)_typeKeyForOrderType:(unsigned)arg1 countryCode:(id)arg2 ;
-(void)_addResourceKeys:(id)arg1 toTypeMap:(id)arg2 forOrderType:(unsigned)arg3 countryCode:(id)arg4 ;
-(BOOL)_administrativeAreaCode:(id)arg1 supportedForOrderType:(unsigned)arg2 ;
-(BOOL)_currentLanguageSupportsModifiersForOrderType:(unsigned)arg1 ;
-(id)_resourceKeysForOrderType:(unsigned)arg1 countryCode:(id)arg2 administrativeAreaCode:(id)arg3 ;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 ;
-(void)updateWithAddedNameInfo:(id)arg1 ;
-(void)addGeoPlace:(id)arg1 ;
-(void)clearGeoPlaces;
-(void)prepareRemainingGeoPlaces;
-(void)removeGeoPlacesFromRemaining:(id)arg1 ;
-(id)remainingGeoPlaces;
-(void)setLocalizedName:(id)arg1 ;
-(BOOL)addCountyIfNeeded;
-(void)setAddCountyIfNeeded:(BOOL)arg1 ;
@end
