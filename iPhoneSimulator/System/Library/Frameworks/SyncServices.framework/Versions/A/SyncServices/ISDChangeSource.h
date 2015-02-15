/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ISDChangeSource <NSObject>
@required
-(void)rollbackChanges;
-(void)compact;
-(void)disableFlush;
-(void)enableFlush;
-(void)releaseState;
-(void)setDirtyCoderDelegate:(id)arg1;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2;
-(void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2;
-(id)dirtyCoderDelegate;
-(void)enumerateAddsForEntityNames:(id)arg1 asArgumentToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3;
-(void)disableFlushAndLockImmediately;
-(char)enumerateAddsForEntityNames:(id)arg1 state:(long long*)arg2 maxToEnumerate:(long long)arg3 asArgumentToFunction:(/*function pointer*/void*)arg4 context:(void*)arg5;
-(void)enumerateChangesForEntityNames:(id)arg1 asArgumentToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3;
-(unsigned long long)removeEnumeratedChanges;
-(id)entityNamesOfAddedRecords;
-(unsigned)earliestFromGenerationOfAddedRecordsForEntityName:(id)arg1;
-(id)commonClientId;
-(char)isConflictManager;
-(char)isUndoManager;
-(id)unacceptedRecordIdsForEntityName:(id)arg1;
-(char)enumerateChangesForEntityNames:(id)arg1 changeType:(int*)arg2 state:(long long*)arg3 maxToEnumerate:(long long)arg4 asArgumentToFunction:(/*function pointer*/void*)arg5 context:(void*)arg6;
-(void)updateChangePropertiesForChange:(id)arg1;
-(id)newSetOfDeletedRecordIdsForEntityNames:(id)arg1;
-(void)recycleDatabaseConnection;

@end

