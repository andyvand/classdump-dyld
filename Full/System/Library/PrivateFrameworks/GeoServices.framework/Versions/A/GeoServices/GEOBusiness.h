/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOLatLng, NSString;

@interface GEOBusiness : PBCodable <NSCopying> {

	unsigned long long _uID;
	NSMutableArray* _attributeKeyValues;
	NSMutableArray* _attributions;
	NSMutableArray* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _localizedCategories;
	NSString* _mapsURL;
	NSString* _name;
	NSMutableArray* _openHours;
	NSString* _phoneticName;
	NSMutableArray* _photos;
	NSMutableArray* _ratings;
	NSMutableArray* _sources;
	NSMutableArray* _starRatings;
	NSString* _telephone;
	NSString* _uRL;
	char _isClosed;
	SCD_Struct_GE5 _has;

}

@property (getter=_isYelp,nonatomic,readonly) char yelp; 
@property (getter=_hasMUID,nonatomic,readonly) char hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) char hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) char hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) char hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) char hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) char hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) char hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) char goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) char hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) char takesReservations; 
@property (getter=_hasOperatingHours,nonatomic,readonly) char hasOperatingHours; 
@property (assign,nonatomic) char hasUID; 
@property (assign,nonatomic) unsigned long long uID;                                                                    //@synthesize uID=_uID - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                                                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                                                                   //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) char hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                                                                      //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,readonly) char hasURL; 
@property (nonatomic,retain) NSString * uRL;                                                                            //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) char hasIsClosed; 
@property (assign,nonatomic) char isClosed;                                                                             //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) char hasMapsURL; 
@property (nonatomic,retain) NSString * mapsURL;                                                                        //@synthesize mapsURL=_mapsURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * ratings;                                                                  //@synthesize ratings=_ratings - In the implementation block
@property (nonatomic,retain) NSMutableArray * categorys;                                                                //@synthesize categorys=_categorys - In the implementation block
@property (nonatomic,retain) NSMutableArray * photos;                                                                   //@synthesize photos=_photos - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeKeyValues;                                                       //@synthesize attributeKeyValues=_attributeKeyValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * openHours;                                                                //@synthesize openHours=_openHours - In the implementation block
@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                                                                        //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategories;                                                      //@synthesize localizedCategories=_localizedCategories - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                                                             //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * sources;                                                                  //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSMutableArray * starRatings;                                                              //@synthesize starRatings=_starRatings - In the implementation block
-(NSMutableArray *)attributions;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(unsigned long long)uID;
-(unsigned long long)attributionsCount;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)addSource:(id)arg1 ;
-(char)hasCenter;
-(void)setPhoneticName:(NSString *)arg1 ;
-(void)setTelephone:(NSString *)arg1 ;
-(void)setMapsURL:(NSString *)arg1 ;
-(void)setRatings:(NSMutableArray *)arg1 ;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(void)setAttributeKeyValues:(NSMutableArray *)arg1 ;
-(void)setOpenHours:(NSMutableArray *)arg1 ;
-(void)setLocalizedCategories:(NSMutableArray *)arg1 ;
-(void)setSources:(NSMutableArray *)arg1 ;
-(void)setStarRatings:(NSMutableArray *)arg1 ;
-(void)addRating:(id)arg1 ;
-(void)addPhoto:(id)arg1 ;
-(void)addAttributeKeyValue:(id)arg1 ;
-(void)addOpenHours:(id)arg1 ;
-(void)addLocalizedCategories:(id)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)addStarRating:(id)arg1 ;
-(unsigned long long)ratingsCount;
-(void)clearRatings;
-(id)ratingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)photosCount;
-(void)clearPhotos;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributeKeyValuesCount;
-(void)clearAttributeKeyValues;
-(id)attributeKeyValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)openHoursCount;
-(void)clearOpenHours;
-(id)openHoursAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)localizedCategoriesCount;
-(void)clearLocalizedCategories;
-(id)localizedCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sourcesCount;
-(void)clearSources;
-(id)sourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)starRatingsCount;
-(void)clearStarRatings;
-(id)starRatingAtIndex:(unsigned long long)arg1 ;
-(void)setHasUID:(char)arg1 ;
-(char)hasUID;
-(char)hasPhoneticName;
-(char)hasTelephone;
-(char)hasURL;
-(void)setIsClosed:(char)arg1 ;
-(void)setHasIsClosed:(char)arg1 ;
-(char)hasIsClosed;
-(char)hasMapsURL;
-(NSString *)phoneticName;
-(NSString *)telephone;
-(NSString *)uRL;
-(NSString *)mapsURL;
-(NSMutableArray *)ratings;
-(NSMutableArray *)categorys;
-(NSMutableArray *)photos;
-(NSMutableArray *)attributeKeyValues;
-(NSMutableArray *)openHours;
-(NSMutableArray *)localizedCategories;
-(NSMutableArray *)starRatings;
-(id)_attributionMapForResponse:(id)arg1 ;
-(char)_hasMUID;
-(unsigned long long)_muid;
-(char)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(char)_hasPriceRange;
-(unsigned)_priceRange;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(char)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(char)_hasAnyAmenities;
-(char)_hasDeliveryAmenity;
-(char)_hasDelivery;
-(char)_hasGoodForKidsAmenity;
-(char)_goodForKids;
-(char)_hasTakesReservationsAmenity;
-(char)_takesReservations;
-(char)_hasOperatingHours;
-(id)_currentOperatingHoursForTimeZone:(id)arg1 ;
-(char)_isYelp;
-(id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 ;
-(id)_allCategoriesForType:(unsigned)arg1 ;
-(id)_stringForAmenity:(id)arg1 ;
-(char)_hasAmenitiesContainingKeys:(id)arg1 ;
-(char)_booleanValueForAmenity:(id)arg1 ;
-(id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned)arg5 normalizedUserRatingScore:(float)arg6 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)center;
-(id)dictionaryRepresentation;
-(char)isClosed;
-(void)setURL:(NSString *)arg1 ;
-(NSMutableArray *)sources;
-(void)setUID:(unsigned long long)arg1 ;
-(void)addCategory:(id)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
@end

