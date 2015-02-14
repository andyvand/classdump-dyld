/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@protocol OS_dispatch_queue;
@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSObject;

@interface CKQueryOperation : CKDatabaseOperation {

	char _shouldFetchAssetContent;
	char _isFinishing;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	CKRecordZoneID* _zoneID;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCompletionBlock;
	NSArray* _results;
	CKQueryCursor* _resultsCursor;
	NSObject*<OS_dispatch_queue> _queryResultQueue;

}

@property (nonatomic,copy) CKQuery * query;                                              //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) CKQueryCursor * cursor;                                       //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                                      //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                        //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id queryCompletionBlock;                                      //@synthesize queryCompletionBlock=_queryCompletionBlock - In the implementation block
@property (nonatomic,retain) NSArray * results;                                          //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) CKQueryCursor * resultsCursor;                              //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;                               //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryResultQueue;              //@synthesize queryResultQueue=_queryResultQueue - In the implementation block
@property (assign,nonatomic) char isFinishing;                                           //@synthesize isFinishing=_isFinishing - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)initWithCursor:(id)arg1 ;
-(char)isFinishing;
-(id)recordFetchedBlock;
-(NSObject*<OS_dispatch_queue>)queryResultQueue;
-(id)queryCompletionBlock;
-(void)setResultsCursor:(CKQueryCursor *)arg1 ;
-(void)setIsFinishing:(char)arg1 ;
-(CKQueryCursor *)resultsCursor;
-(void)setQueryCompletionBlock:(id)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(NSArray *)desiredKeys;
-(char)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)setQueryResultQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CKRecordZoneID *)zoneID;
-(CKQuery *)query;
-(void)setQuery:(CKQuery *)arg1 ;
-(CKQueryCursor *)cursor;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(id)init;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end

