/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSError;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation {

	char _isFetchAllRecordZonesOperation;
	char _ignorePCSFailures;
	NSArray* _recordZoneIDs;
	/*^block*/id _fetchRecordZonesCompletionBlock;
	NSArray* _recordZones;
	NSMutableDictionary* _recordZonesByZoneID;
	NSMutableDictionary* _recordZoneErrors;
	NSError* _fetchAllRecordZonesError;

}

@property (nonatomic,copy) NSArray * recordZoneIDs;                                  //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) id fetchRecordZonesCompletionBlock;                       //@synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordZones;                                  //@synthesize recordZones=_recordZones - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneID;              //@synthesize recordZonesByZoneID=_recordZonesByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                 //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
@property (nonatomic,retain) NSError * fetchAllRecordZonesError;                     //@synthesize fetchAllRecordZonesError=_fetchAllRecordZonesError - In the implementation block
@property (assign,nonatomic) char isFetchAllRecordZonesOperation;                    //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) char ignorePCSFailures;                                 //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
+(id)fetchAllRecordZonesOperation;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSMutableDictionary *)recordZoneErrors;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
-(void)setIsFetchAllRecordZonesOperation:(char)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(char)isFetchAllRecordZonesOperation;
-(char)ignorePCSFailures;
-(void)setIgnorePCSFailures:(char)arg1 ;
-(id)fetchRecordZonesCompletionBlock;
-(void)setFetchAllRecordZonesError:(NSError *)arg1 ;
-(NSMutableDictionary *)recordZonesByZoneID;
-(NSError *)fetchAllRecordZonesError;
-(void)setFetchRecordZonesCompletionBlock:(id)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 ;
-(NSArray *)recordZones;
-(void)setRecordZones:(NSArray *)arg1 ;
-(void)setRecordZonesByZoneID:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
