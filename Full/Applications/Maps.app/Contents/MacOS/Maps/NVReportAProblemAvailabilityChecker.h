/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface NVReportAProblemAvailabilityChecker : NSObject

@property (nonatomic,readonly) NSArray * allReportAProblemTypes; 
@property (nonatomic,readonly) NSArray * allReportAProblemTypeDescriptions; 
@property (nonatomic,readonly) NSArray * previousSearchResults; 
@property (nonatomic,readonly) NSArray * previousDirections; 
+(id)sharedChecker;
+(char)isFeatureVisible:(id)arg1 ;
+(char)shouldOfferNotificationsForPlace:(id)arg1 newPOI:(char)arg2 ;
-(NSArray *)previousSearchResults;
-(NSArray *)previousDirections;
-(NSArray *)allReportAProblemTypes;
-(NSArray *)allReportAProblemTypeDescriptions;
-(id)availableReportAProblemTypesFromMapsMenu;
-(id)availableReportAProblemTypesFromInfoCard:(id)arg1 ;
-(char)isReportAProblemAvailableForType:(unsigned long long)arg1 withPlace:(id)arg2 ;
-(char)hasPreviousSearchResults;
-(char)hasPreviousDirections;
-(id)GEOProblemTypesForRAPType:(unsigned long long)arg1 ;
@end
