/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface ABSimilarRecordMerger : NSObject {

	NSMutableArray* _importPeople;
	NSMutableArray* _destPeople;
	NSMutableArray* _importGroups;
	NSMutableArray* _destGroups;
	NSMutableArray* _recordsToDelete;
	NSMutableArray* _modifiedRecords;
	NSMutableArray* _recordsToIgnore;
	NSMutableDictionary* _mergedMapping;
	NSArray* _peopleFilters;
	NSArray* _groupFilters;

}
-(id)matchAndMergeRecords:(id)arg1 ;
-(id)initWithLocalRecords:(id)arg1 ;
-(void)splitRecords:(id)arg1 intoPeople:(id)arg2 groups:(id)arg3 ;
-(void)_validateRecords:(id)arg1 ;
-(void)separateMatchableRecords:(id)arg1 intoPeople:(id)arg2 groups:(id)arg3 ;
-(void)constructPeopleFilters;
-(void)applyPeopleFilters;
-(void)constructGroupFilters;
-(void)applyGroupFilters;
-(id)uniqueIdForLocalUniqueId:(id)arg1 ;
-(void)deleteRecords:(id)arg1 ;
-(/*^block*/id)makeRecordInInitialDataSetFilter;
-(id)bucketInHashTable:(id)arg1 forRecord:(id)arg2 ;
-(void)applyFilter:(id)arg1 importRecords:(id)arg2 destRecords:(id)arg3 ;
-(void)mergeIdenticalBucket:(id)arg1 ;
-(void)mergeSimilarBucket:(id)arg1 ;
-(void)mergeIdenticalGroupBucket:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

