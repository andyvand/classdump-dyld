/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/CalUIOccurrenceModel.h>
#import <Calendar/CalUIOccurrenceListDataSource.h>

@class NSMutableDictionary, NSMutableSet, NSArray, NSSet, NSString;

@interface CalUIOccurrenceSearchIndex : CalUIOccurrenceModel <CalUIOccurrenceListDataSource> {

	NSMutableDictionary* _index;
	unsigned long long occurrenceCount;
	NSMutableSet* _occurrenceIDs;
	char _isSortedDateIndexInvalid;
	NSArray* _sortedDateIndex;

}

@property (retain) NSSet * occurrenceIDs;                           //@synthesize occurrenceIDs=_occurrenceIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addOccurrence:(id)arg1 ;
-(char)hasOccurrences;
-(char)rebuildIsPending;
-(id)firstEventOnOrAfterDate:(id)arg1 ;
-(id)firstEventOnOrBeforeDate:(id)arg1 ;
-(void)setOccurrenceIDs:(NSSet *)arg1 ;
-(id)_dateInIndexOnOrAfterDate:(id)arg1 ;
-(id)firstEventOccurrenceForDate:(id)arg1 ;
-(id)_dateInIndexOnOrBeforeDate:(id)arg1 ;
-(id)_sortedDateIndex;
-(void)addOccurrencesFromArray:(id)arg1 ;
-(unsigned long long)occurrenceCount;
-(id)init;
-(NSSet *)occurrenceIDs;
-(char)containsDate:(id)arg1 ;
-(id)occurrencesForDate:(id)arg1 ;
-(id)datesWithOccurrences;
@end

