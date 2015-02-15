/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapService : NSObject
+(id)sharedService;
-(id)searchURL;
-(id)ticketForMUIDs:(id)arg1 includeETA:(char)arg2 traits:(id)arg3 ;
-(void)applyRAPUpdatedMapItems:(id)arg1 ;
-(int)localSearchProviderID;
-(id)directionsURL;
-(int)defaultLocalSearchProviderID;
-(id)_ticketForSearchQuery:(id)arg1 hint:(id)arg2 maxResults:(unsigned)arg3 suppressResultsRequiringAttribution:(char)arg4 traits:(id)arg5 ;
-(id)_ticketForMUIDs:(id)arg1 traits:(id)arg2 ;
-(id)_ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_ticketForReverseGeocodeCoordinate:(SCD_Struct_GE15)arg1 includeEntryPoints:(char)arg2 shiftLocationsIfNeeded:(char)arg3 traits:(id)arg4 ;
-(id)_ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(char)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 traits:(id)arg5 ;
-(id)_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 suppressResultsRequiringAttribution:(char)arg4 traits:(id)arg5 ;
-(id)_ticketForAutoCompleteFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4 ;
-(id)defaultTraits;
-(id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE15)arg1 includeEntryPoints:(char)arg2 shiftLocationsIfNeeded:(char)arg3 includeETA:(char)arg4 traits:(id)arg5 ;
-(id)_searchable_ticketForReverseGeocodeCoordinate:(SCD_Struct_GE15)arg1 includeEntryPoints:(char)arg2 shiftLocationsIfNeeded:(char)arg3 includeETA:(char)arg4 traits:(id)arg5 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE15)arg1 includeETA:(char)arg2 shiftLocationsIfNeeded:(char)arg3 traits:(id)arg4 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(char)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 suppressResultsRequiringAttribution:(char)arg4 includeETA:(char)arg5 traits:(id)arg6 ;
-(id)_ticketForFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4 ;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(void)trackMapItem:(id)arg1 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(char)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(char)arg2 traits:(id)arg3 ;
-(id)ticketForMerchantCode:(id)arg1 paymentNetwork:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 traits:(id)arg3 ;
-(id)ticketForOptInToProblemSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 includeETA:(char)arg4 traits:(id)arg5 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForRefinementFromCoordinate:(SCD_Struct_GE15)arg1 address:(id)arg2 placeName:(id)arg3 traits:(id)arg4 ;
-(id)ticketForURLQuery:(id)arg1 coordinate:(SCD_Struct_GE15)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)ticketForInterleavedInstantSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedAddressSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSectionedInstantSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSectionedAddressSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2 ;
-(void)submitUsageForTraits:(id)arg1 ;
-(void)submitUsageForTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(void)_geoMapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_geoMapItemForData:(id)arg1 ;
-(id)_geoMapItemForData:(id)arg1 withSource:(unsigned long long)arg2 ;
-(id)_geoMapItemsForUpdatedPlacesInResolution:(id)arg1 ;
@end
