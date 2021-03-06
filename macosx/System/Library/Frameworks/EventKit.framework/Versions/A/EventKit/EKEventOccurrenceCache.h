/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKBackingStore, NSMutableOrderedSet, CalDefaultDictionary, NSObject;

@interface EKEventOccurrenceCache : NSObject {

	EKBackingStore* _backingStore;
	NSMutableOrderedSet* _binnedDates;
	CalDefaultDictionary* _binnedEvents;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (assign,nonatomic,__weak) EKBackingStore * backingStore;                 //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * binnedDates;                    //@synthesize binnedDates=_binnedDates - In the implementation block
@property (nonatomic,retain) CalDefaultDictionary * binnedEvents;                  //@synthesize binnedEvents=_binnedEvents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;              //@synthesize cacheQueue=_cacheQueue - In the implementation block
-(EKBackingStore *)backingStore;
-(void)setBackingStore:(EKBackingStore *)arg1 ;
-(id)allEvents;
-(id)initWithBackingStore:(id)arg1 ;
-(id)copyForBackingStore:(id)arg1 ;
-(void)rebinOccurrences:(id)arg1 ;
-(void)unbinOccurrences:(id)arg1 ;
-(id)pruneForRange:(id)arg1 localUIDs:(id)arg2 ;
-(void)binEvents:(id)arg1 ;
-(id)eventsInRange:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)unbinOccurrencesWithObjectIDs:(id)arg1 ;
-(void)rebinAllEvents;
-(CalDefaultDictionary *)binnedEvents;
-(void)setBinnedEvents:(CalDefaultDictionary *)arg1 ;
-(void)_binEvents:(id)arg1 ;
-(void)_binEvent:(id)arg1 ;
-(void)_binDate:(id)arg1 ;
-(unsigned long long)_startIndexForRange:(id)arg1 ;
-(id)_allBinnedOccurrences;
-(void)_rebinOccurrences:(id)arg1 ;
-(id)_cachedRange;
-(id)_nonNilEventOccurrences:(id)arg1 ;
-(id)_groupOccurrencesByUID:(id)arg1 ;
-(void)_rebinOccurrence:(id)arg1 ;
-(void)_unbinOccurrences:(id)arg1 ;
-(void)_unbinOccurrencesHelperWithOccurrenceTestBlock:(/*^block*/id)arg1 ;
-(id)eventsInRange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableOrderedSet *)binnedDates;
-(unsigned long long)_insertIndexForDate:(id)arg1 ;
-(void)setBinnedDates:(NSMutableOrderedSet *)arg1 ;
@end

