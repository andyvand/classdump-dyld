/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CALOccurrencesCache : NSObject {

	NSMutableDictionary* _entityIndexes;

}
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)flushCacheForEntity:(id)arg1 ;
-(id)getOccurrenceForEntity:(id)arg1 occurrenceID:(id)arg2 ;
-(id)getOccurrencesForEntity:(id)arg1 forStartDates:(id)arg2 ;
-(id)occurrenceCacheForEntity:(id)arg1 ;
-(id)getOccurrenceForEntity:(id)arg1 forStartDate:(id)arg2 ;
-(void)removeCachedOccurrence:(id)arg1 forEntity:(id)arg2 ;
-(id)createOccurrenceForEntity:(id)arg1 startDate:(id)arg2 ;
-(void)addCachedOccurrence:(id)arg1 forEntity:(id)arg2 ;
-(id)cachedOccurrenceForEntity:(id)arg1 startDate:(id)arg2 ;
@end

