/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _directionsFeedbackCollections;
	NSMutableArray* _leaveNowFeedbackCollections;
	NSMutableArray* _mapsLaunchFeedbackCollections;
	NSMutableArray* _mapsUsageFeedbackCollections;
	NSMutableArray* _placeDataCacheFeedbackCollections;
	NSMutableArray* _stateTimingFeedbackCollections;
	NSMutableArray* _suggestionsFeedbackCollections;
	NSMutableArray* _trafficRerouteFeedbackCollections;
	NSMutableArray* _transitAppLaunchFeedbackCollections;
	NSMutableArray* _usageCollections;

}

@property (nonatomic,retain) NSMutableArray * usageCollections;                                 //@synthesize usageCollections=_usageCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * directionsFeedbackCollections;                    //@synthesize directionsFeedbackCollections=_directionsFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitAppLaunchFeedbackCollections;              //@synthesize transitAppLaunchFeedbackCollections=_transitAppLaunchFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * mapsUsageFeedbackCollections;                     //@synthesize mapsUsageFeedbackCollections=_mapsUsageFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestionsFeedbackCollections;                   //@synthesize suggestionsFeedbackCollections=_suggestionsFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * stateTimingFeedbackCollections;                   //@synthesize stateTimingFeedbackCollections=_stateTimingFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficRerouteFeedbackCollections;                //@synthesize trafficRerouteFeedbackCollections=_trafficRerouteFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * leaveNowFeedbackCollections;                      //@synthesize leaveNowFeedbackCollections=_leaveNowFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * mapsLaunchFeedbackCollections;                    //@synthesize mapsLaunchFeedbackCollections=_mapsLaunchFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeDataCacheFeedbackCollections;                //@synthesize placeDataCacheFeedbackCollections=_placeDataCacheFeedbackCollections - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)addUsageCollection:(id)arg1 ;
-(void)addPlaceDataCacheFeedbackCollection:(id)arg1 ;
-(void)addDirectionsFeedbackCollection:(id)arg1 ;
-(void)addSuggestionsFeedbackCollection:(id)arg1 ;
-(void)addMapsLaunchFeedbackCollection:(id)arg1 ;
-(void)addTransitAppLaunchFeedbackCollection:(id)arg1 ;
-(void)addMapsUsageFeedbackCollection:(id)arg1 ;
-(void)addStateTimingFeedbackCollection:(id)arg1 ;
-(void)addTrafficRerouteFeedbackCollection:(id)arg1 ;
-(void)addLeaveNowFeedbackCollection:(id)arg1 ;
-(void)setUsageCollections:(NSMutableArray *)arg1 ;
-(void)setDirectionsFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)setTransitAppLaunchFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)setMapsUsageFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)setSuggestionsFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)setStateTimingFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)setTrafficRerouteFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)setLeaveNowFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)setMapsLaunchFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)setPlaceDataCacheFeedbackCollections:(NSMutableArray *)arg1 ;
-(unsigned long long)usageCollectionsCount;
-(void)clearUsageCollections;
-(id)usageCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)directionsFeedbackCollectionsCount;
-(void)clearDirectionsFeedbackCollections;
-(id)directionsFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transitAppLaunchFeedbackCollectionsCount;
-(void)clearTransitAppLaunchFeedbackCollections;
-(id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mapsUsageFeedbackCollectionsCount;
-(void)clearMapsUsageFeedbackCollections;
-(id)mapsUsageFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)suggestionsFeedbackCollectionsCount;
-(void)clearSuggestionsFeedbackCollections;
-(id)suggestionsFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stateTimingFeedbackCollectionsCount;
-(void)clearStateTimingFeedbackCollections;
-(id)stateTimingFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficRerouteFeedbackCollectionsCount;
-(void)clearTrafficRerouteFeedbackCollections;
-(id)trafficRerouteFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)leaveNowFeedbackCollectionsCount;
-(void)clearLeaveNowFeedbackCollections;
-(id)leaveNowFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mapsLaunchFeedbackCollectionsCount;
-(void)clearMapsLaunchFeedbackCollections;
-(id)mapsLaunchFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeDataCacheFeedbackCollectionsCount;
-(void)clearPlaceDataCacheFeedbackCollections;
-(id)placeDataCacheFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)usageCollections;
-(NSMutableArray *)directionsFeedbackCollections;
-(NSMutableArray *)transitAppLaunchFeedbackCollections;
-(NSMutableArray *)mapsUsageFeedbackCollections;
-(NSMutableArray *)suggestionsFeedbackCollections;
-(NSMutableArray *)stateTimingFeedbackCollections;
-(NSMutableArray *)trafficRerouteFeedbackCollections;
-(NSMutableArray *)leaveNowFeedbackCollections;
-(NSMutableArray *)mapsLaunchFeedbackCollections;
-(NSMutableArray *)placeDataCacheFeedbackCollections;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

