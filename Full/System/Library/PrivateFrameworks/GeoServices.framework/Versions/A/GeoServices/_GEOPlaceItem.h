/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapItemPrivate.h>

@class GEOPlace, GEOPDPlace, GEOMapItemClientAttributes, NSData, NSArray, GEOPDFlyover, NSString, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOFeatureStyleAttributes, GEOPlaceResult, GEOMapServiceTraits, NSMapTable, GEOMapRegion, GEOAddress, NSDictionary, NSDate;

@interface _GEOPlaceItem : NSObject <GEOMapItemPrivate> {

	GEOPlaceResult* _placeResult;
	GEOPlace* _place;
	GEOMapServiceTraits* _traits;
	NSMapTable* _attributionInfoMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) char disputed; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) SCD_Struct_GE15 coordinate; 
@property (nonatomic,readonly) SCD_Struct_GE15 centerCoordinate; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSString * timezone; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) char contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) char isEventAllDay; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_placeAsData,nonatomic,readonly) NSData * placeAsData; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) char hasResolvablePartialInformation; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasSessionGUID,nonatomic,readonly) char hasSessionGUID; 
@property (getter=_sessionGUID,nonatomic,readonly) SCD_Struct_GE2 sessionGUID; 
@property (getter=_sequenceNumber,nonatomic,readonly) unsigned sequenceNumber; 
@property (getter=_hasResultProviderID,nonatomic,readonly) char hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_hasFlyover,nonatomic,readonly) char hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_hasFlyoverAnnouncementMessage,nonatomic,readonly) char hasFlyoverAnnouncement; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncement; 
@property (getter=_hasMUID,nonatomic,readonly) char hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) char hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
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
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) char hasCurrentOperatingHours; 
@property (getter=_operatingHours,nonatomic,readonly) NSArray * operatingHours; 
@property (getter=_hasTelephone,nonatomic,readonly) char hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openState,nonatomic,readonly) unsigned openState; 
@property (getter=_needsAttribution,nonatomic,readonly) char needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
-(NSString *)contactName;
-(SCD_Struct_GE15)centerCoordinate;
-(SCD_Struct_GE15)coordinate;
-(id)_styleAttributes;
-(id)_flyover;
-(id)_roadAccessPoints;
-(NSString *)timezone;
-(GEOMapRegion *)displayMapRegion;
-(id)_telephone;
-(unsigned)_sequenceNumber;
-(char)isDisputed;
-(id)_place;
-(SCD_Struct_GE2)_sessionGUID;
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
-(id)_attributionInfoForDisplayRequirement:(int)arg1 ;
-(id)_attributionForInfo:(id)arg1 ;
-(id)_urlForPhotoWithUID:(id)arg1 ;
-(id)_webURL;
-(id)_urlForType:(int)arg1 withUID:(id)arg2 writeAReview:(char)arg3 isYelp:(char)arg4 ;
-(id)_yelpID;
-(id)_spokenAddressForLocale:(id)arg1 ;
-(int)_recommendedTransportType;
-(unsigned)_travelTimeForTransportType:(int)arg1 ;
-(unsigned)_travelDistanceForTransportType:(int)arg1 ;
-(id)_arrivalMapRegionForTransportType:(int)arg1 ;
-(id)_urlForReviewWithUID:(id)arg1 ;
-(id)_urlForWritingAReview;
-(id)_mapItemByStrippingOptionalData;
-(id)_placeData;
-(id)_clientAttributes;
-(id)_placeAsData;
-(id)_placeDataAsData;
-(char)_hasResolvablePartialInformation;
-(int)_placeType;
-(char)_hasSessionGUID;
-(char)_hasResultProviderID;
-(int)_resultProviderID;
-(char)_hasFlyover;
-(char)_hasFlyoverAnnouncementMessage;
-(id)_flyoverAnnouncementMessage;
-(char)_hasAreaInMeters;
-(double)_areaInMeters;
-(id)_businessURL;
-(char)_hasCurrentOperatingHours;
-(id)_operatingHours;
-(char)_hasTelephone;
-(id)_disambiguationName;
-(unsigned)_openState;
-(char)_needsAttribution;
-(id)_providerURL;
-(id)_vendorID;
-(id)_attribution;
-(id)_photosAttribution;
-(id)_reviewsAttribution;
-(id)_poiSurveyURLString;
-(unsigned long long)_customIconID;
-(id)_additionalPlaceInfos;
-(id)spokenNameForLocale:(id)arg1 ;
-(NSData *)encodedData;
-(GEOMapRegion *)geoFenceMapRegion;
-(GEOAddress *)geoAddress;
-(NSArray *)areasOfInterest;
-(int)contactAddressType;
-(NSString *)contactSpokenName;
-(char)contactIsMe;
-(NSString *)eventName;
-(NSDate *)eventDate;
-(char)isEventAllDay;
-(id)initWithPlaceResult:(id)arg1 response:(id)arg2 traits:(id)arg3 ;
-(id)initWithPlace:(id)arg1 traits:(id)arg2 ;
-(char)_showAttributionForRequirement:(int)arg1 ;
-(char)_hasMoreForRequirement:(int)arg1 ;
-(char)_showAddForRequirement:(int)arg1 ;
-(id)_displayNameForRequirement:(int)arg1 ;
-(id)_logoPathForRequirement:(int)arg1 scale:(double)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(char)isValid;
-(NSDictionary *)addressDictionary;
@end

