/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalUIPlacemarkRequesterProtocol;
@class NSMutableDictionary, NSCache, NSMutableArray, NSString;

@interface CalUILocationController : NSObject {

	NSMutableDictionary* _placemarkQueryResults;
	NSCache* _placemarkCache;
	NSMutableArray* _geocoders;
	id<CalUIPlacemarkRequesterProtocol> _requester;
	NSString* _requestTag;
	NSMutableArray* _locationRequesters;
	long long _unfinishedQueries;
	NSMutableArray* _requestCounts;

}

@property (retain) NSMutableDictionary * placemarkQueryResults;                //@synthesize placemarkQueryResults=_placemarkQueryResults - In the implementation block
@property (retain) NSCache * placemarkCache;                                   //@synthesize placemarkCache=_placemarkCache - In the implementation block
@property (retain) NSMutableArray * geocoders;                                 //@synthesize geocoders=_geocoders - In the implementation block
@property (retain) id<CalUIPlacemarkRequesterProtocol> requester;              //@synthesize requester=_requester - In the implementation block
@property (retain) NSString * requestTag;                                      //@synthesize requestTag=_requestTag - In the implementation block
@property (retain) NSMutableArray * locationRequesters;                        //@synthesize locationRequesters=_locationRequesters - In the implementation block
@property (assign) long long unfinishedQueries;                                //@synthesize unfinishedQueries=_unfinishedQueries - In the implementation block
@property (retain) NSMutableArray * requestCounts;                             //@synthesize requestCounts=_requestCounts - In the implementation block
+(id)locationController;
-(void)requestPlacemarksForQueries:(id)arg1 sender:(id)arg2 tag:(id)arg3 ;
-(void)setPlacemarkQueryResults:(NSMutableDictionary *)arg1 ;
-(void)setUnfinishedQueries:(long long)arg1 ;
-(void)setLocationRequesters:(NSMutableArray *)arg1 ;
-(void)setPlacemarkCache:(NSCache *)arg1 ;
-(NSCache *)placemarkCache;
-(void)setRequestCounts:(NSMutableArray *)arg1 ;
-(NSString *)requestTag;
-(NSMutableDictionary *)placemarkQueryResults;
-(long long)unfinishedQueries;
-(id)rateLimitedQueriesWithQueries:(id)arg1 ;
-(NSMutableArray *)geocoders;
-(void)setRequestTag:(NSString *)arg1 ;
-(void)countNewPlacemarkQueries:(unsigned long long)arg1 ;
-(void)acceptPlacemarks:(id)arg1 forQuery:(id)arg2 tag:(id)arg3 ;
-(unsigned long long)placemarkRequestRate;
-(NSMutableArray *)requestCounts;
-(unsigned long long)placemarkRequestRateWithNewQueryCount:(unsigned long long)arg1 ;
-(void)setGeocoders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locationRequesters;
-(id<CalUIPlacemarkRequesterProtocol>)requester;
-(void)setRequester:(id<CalUIPlacemarkRequesterProtocol>)arg1 ;
-(id)init;
@end

