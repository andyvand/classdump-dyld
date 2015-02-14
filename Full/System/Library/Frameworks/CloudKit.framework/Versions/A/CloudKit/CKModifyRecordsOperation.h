/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordsOperation : CKDatabaseOperation {

	char _atomic;
	char _shouldOnlySaveAssetContent;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	long long _savePolicy;
	NSData* _clientChangeTokenData;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _modifyRecordsCompletionBlock;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	NSMutableArray* _savedRecords;
	NSMutableArray* _deletedRecordIDs;
	NSMutableDictionary* _recordsByRecordIDs;
	NSMutableDictionary* _recordErrors;
	NSMutableDictionary* _assetsByRecordIDAndRecordKey;

}

@property (nonatomic,copy) NSArray * recordsToSave;                                           //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordIDsToDelete;                                       //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                            //@synthesize savePolicy=_savePolicy - In the implementation block
@property (nonatomic,copy) NSData * clientChangeTokenData;                                    //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (assign,nonatomic) char atomic;                                                     //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                         //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                       //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id modifyRecordsCompletionBlock;                                   //@synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock - In the implementation block
@property (assign,nonatomic) char shouldOnlySaveAssetContent;                                 //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToDeleteToEtags;                           //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;                //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedRecords;                                   //@synthesize savedRecords=_savedRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordIDs;                               //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsByRecordIDs;                        //@synthesize recordsByRecordIDs=_recordsByRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                              //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsByRecordIDAndRecordKey;              //@synthesize assetsByRecordIDAndRecordKey=_assetsByRecordIDAndRecordKey - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(NSData *)clientChangeTokenData;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(NSArray *)recordsToSave;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(NSArray *)recordIDsToDelete;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(long long)savePolicy;
-(void)setSavePolicy:(long long)arg1 ;
-(char)shouldOnlySaveAssetContent;
-(void)setShouldOnlySaveAssetContent:(char)arg1 ;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(char)atomic;
-(void)setAtomic:(char)arg1 ;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)recordsByRecordIDs;
-(NSMutableDictionary *)assetsByRecordIDAndRecordKey;
-(id)perRecordProgressBlock;
-(NSMutableArray *)deletedRecordIDs;
-(NSMutableArray *)savedRecords;
-(id)perRecordCompletionBlock;
-(id)modifyRecordsCompletionBlock;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setSavedRecords:(NSMutableArray *)arg1 ;
-(void)setDeletedRecordIDs:(NSMutableArray *)arg1 ;
-(void)setRecordsByRecordIDs:(NSMutableDictionary *)arg1 ;
-(void)setAssetsByRecordIDAndRecordKey:(NSMutableDictionary *)arg1 ;
-(id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 ;
-(void)setModifyRecordsCompletionBlock:(id)arg1 ;
-(id)init;
@end

