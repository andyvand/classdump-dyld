/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray, NSLock;

@interface MKMapService : NSObject {

	NSArray* _activeInputModeLanguages;
	NSLock* _activeInputModesLock;

}
+(id)sharedService;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapRegion:(id)arg2 zoomLevel:(double)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 flyoverAnimationID:(unsigned long long)arg2 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 ;
-(id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2 ;
-(void)_mapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 ;
-(id)defaultTraitsWithTraits:(id)arg1 ;
-(id)_activeInputModeLanguages;
-(id)_ticketForReverseGeocodeCoordinate:(CGPoint)arg1 includeEntryPoints:(char)arg2 includeETA:(char)arg3 traits:(id)arg4 ;
-(void)_invalidateActiveInputModeLanguages;
-(id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeCoordinate:(CGPoint)arg1 includeETA:(char)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(CGPoint)arg1 traits:(id)arg2 ;
-(id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 traits:(id)arg3 ;
-(id)mapItemsForUpdatedPlacesInResolution:(id)arg1 ;
-(id)ticketForMUIDs:(id)arg1 includeETA:(char)arg2 traits:(id)arg3 ;
-(id)defaultTraits;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(char)arg2 traits:(id)arg3 ;
-(id)ticketForMerchantCode:(id)arg1 paymentNetwork:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 includeETA:(char)arg4 traits:(id)arg5 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForURLQuery:(id)arg1 coordinate:(CGPoint)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(void)submitUsageForTraits:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

