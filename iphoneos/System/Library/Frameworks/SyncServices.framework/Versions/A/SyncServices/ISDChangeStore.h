/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSMutableSet, NSMutableIndexSet;

@interface ISDChangeStore : NSObject {

	NSString* _path;
	NSMutableArray* _addChanges;
	NSMutableArray* _changes;
	NSMutableDictionary* _recordIdReferences;
	NSMutableSet* _enumeratedRecordIds;
	unsigned long long _flushCount;
	char _dirty;
	char _didSkipRecordsWhenEnumerating;
	id _dirtyCoderDelegate;
	NSMutableDictionary* _addedChangeIndex;
	NSMutableDictionary* _modifiedChangeIndex;
	NSMutableIndexSet* _deletedAddedRecordIdsIndex;

}
+(id)defaultFileName;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(void)flush;
-(void)compact;
-(id)initWithPath:(id)arg1 ;
-(void)resetState;
-(void)disableFlush;
-(void)enableFlush;
-(id)initWithDataDirectory:(id)arg1 ;
-(void)setDirtyCoderDelegate:(id)arg1 ;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 ;
-(void)clearSpuriousUnresolvedReferencesToPhantomsInIdMapper:(id)arg1 ;
-(void)removeAllChangesForEntityNames:(id)arg1 ;
-(void)appendChange:(id)arg1 ;
-(void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2 ;
-(id)dirtyCoderDelegate;
-(id)initWithDataDirectory:(id)arg1 delegate:(id)arg2 ;
-(void)addReferenceToChange:(id)arg1 forRecordId:(id)arg2 ;
-(void)indexRecordIds:(id)arg1 ;
-(id)changesWithReferenceToRecordId:(id)arg1 ;
-(void)enumerateChangesInArray:(id)arg1 forEntityNames:(id)arg2 asArgumentToFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(void)enumerateAddsForEntityNames:(id)arg1 asArgumentToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)appendAddChange:(id)arg1 ;
-(void)appendModifyChange:(id)arg1 ;
-(void)appendDeleteChange:(id)arg1 ;
-(void)_removeChangesForEntityNames:(id)arg1 fromArray:(id)arg2 ;
-(void)disableFlushAndLockImmediately;
-(char)enumerateAddsForEntityNames:(id)arg1 state:(long long*)arg2 maxToEnumerate:(long long)arg3 asArgumentToFunction:(/*function pointer*/void*)arg4 context:(void*)arg5 ;
-(void)enumerateChangesForEntityNames:(id)arg1 asArgumentToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(unsigned long long)removeEnumeratedChanges;
-(id)entityNamesOfAddedRecords;
-(unsigned)earliestFromGenerationOfAddedRecordsForEntityName:(id)arg1 ;
@end
