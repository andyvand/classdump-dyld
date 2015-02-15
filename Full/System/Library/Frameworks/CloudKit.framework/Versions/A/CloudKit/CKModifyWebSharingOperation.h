/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CKModifyWebSharingOperation : CKDatabaseOperation {

	NSArray* _recordIDsToShareReadWrite;
	/*^block*/id _recordSharedBlock;
	/*^block*/id _recordUnsharedBlock;
	/*^block*/id _webShareRecordsCompletionBlock;
	NSArray* _recordIDsToShare;
	NSArray* _recordIDsToUnshare;
	NSMutableDictionary* _recordErrors;
	NSMutableArray* _sharedRecordIDs;
	NSMutableArray* _unsharedRecordIDs;

}

@property (nonatomic,retain) NSArray * recordIDsToShareReadWrite;              //@synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite - In the implementation block
@property (nonatomic,copy) id recordSharedBlock;                               //@synthesize recordSharedBlock=_recordSharedBlock - In the implementation block
@property (nonatomic,copy) id recordUnsharedBlock;                             //@synthesize recordUnsharedBlock=_recordUnsharedBlock - In the implementation block
@property (nonatomic,copy) id webShareRecordsCompletionBlock;                  //@synthesize webShareRecordsCompletionBlock=_webShareRecordsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToShare;                       //@synthesize recordIDsToShare=_recordIDsToShare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToUnshare;                     //@synthesize recordIDsToUnshare=_recordIDsToUnshare - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;               //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * sharedRecordIDs;                 //@synthesize sharedRecordIDs=_sharedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * unsharedRecordIDs;               //@synthesize unsharedRecordIDs=_unsharedRecordIDs - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)recordIDsToShare;
-(void)setRecordIDsToShare:(NSArray *)arg1 ;
-(NSArray *)recordIDsToUnshare;
-(void)setRecordIDsToUnshare:(NSArray *)arg1 ;
-(NSArray *)recordIDsToShareReadWrite;
-(void)setRecordIDsToShareReadWrite:(NSArray *)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(NSMutableArray *)sharedRecordIDs;
-(id)recordSharedBlock;
-(NSMutableArray *)unsharedRecordIDs;
-(id)recordUnsharedBlock;
-(id)webShareRecordsCompletionBlock;
-(void)setWebShareRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordSharedBlock:(id)arg1 ;
-(void)setRecordUnsharedBlock:(id)arg1 ;
-(id)initWithRecordIDsToWebShare:(id)arg1 recordIDsToUnshare:(id)arg2 ;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(void)setSharedRecordIDs:(NSMutableArray *)arg1 ;
-(void)setUnsharedRecordIDs:(NSMutableArray *)arg1 ;
@end

