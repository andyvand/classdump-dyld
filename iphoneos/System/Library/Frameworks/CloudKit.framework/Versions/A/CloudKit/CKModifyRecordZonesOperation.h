/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation {

	char _markZonesAsUserPurged;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	/*^block*/id _modifyRecordZonesCompletionBlock;
	NSMutableArray* _savedRecordZones;
	NSMutableArray* _deletedRecordZoneIDs;
	NSMutableDictionary* _recordZonesByZoneIDs;
	NSMutableDictionary* _recordZoneErrors;

}

@property (nonatomic,copy) NSArray * recordZonesToSave;                               //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                           //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifyRecordZonesCompletionBlock;                       //@synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock - In the implementation block
@property (assign,nonatomic) char markZonesAsUserPurged;                              //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedRecordZones;                       //@synthesize savedRecordZones=_savedRecordZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordZoneIDs;                   //@synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneIDs;              //@synthesize recordZonesByZoneIDs=_recordZonesByZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                  //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
-(NSArray *)recordZonesToSave;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(char)markZonesAsUserPurged;
-(void)setMarkZonesAsUserPurged:(char)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSMutableDictionary *)recordZonesByZoneIDs;
-(NSMutableDictionary *)recordZoneErrors;
-(NSMutableArray *)deletedRecordZoneIDs;
-(NSMutableArray *)savedRecordZones;
-(id)modifyRecordZonesCompletionBlock;
-(void)setModifyRecordZonesCompletionBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setSavedRecordZones:(NSMutableArray *)arg1 ;
-(void)setDeletedRecordZoneIDs:(NSMutableArray *)arg1 ;
-(void)setRecordZonesByZoneIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

