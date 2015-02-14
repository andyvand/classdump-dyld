/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSString, NSMutableDictionary;

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation {

	char _isDeleted;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	/*^block*/id _fetchRecordVersionsProgressBlock;
	/*^block*/id _fetchRecordVersionsCompletionBlock;
	NSMutableDictionary* _recordErrors;

}

@property (nonatomic,copy) NSArray * recordIDs;                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) NSString * minimumVersionETag;                      //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (nonatomic,copy) id fetchRecordVersionsProgressBlock;                //@synthesize fetchRecordVersionsProgressBlock=_fetchRecordVersionsProgressBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordVersionsCompletionBlock;              //@synthesize fetchRecordVersionsCompletionBlock=_fetchRecordVersionsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;               //@synthesize recordErrors=_recordErrors - In the implementation block
@property (assign,nonatomic) char isDeleted;                                   //@synthesize isDeleted=_isDeleted - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(NSArray *)desiredKeys;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(id)fetchRecordVersionsProgressBlock;
-(id)fetchRecordVersionsCompletionBlock;
-(void)setFetchRecordVersionsCompletionBlock:(id)arg1 ;
-(void)setFetchRecordVersionsProgressBlock:(id)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setIsDeleted:(char)arg1 ;
-(char)isDeleted;
@end

