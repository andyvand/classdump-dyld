/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray;

@interface CKFetchRecordChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	char _shouldFetchAssetContents;
	CKRecordZoneID* _recordZoneID;
	CKServerChangeToken* _previousServerChangeToken;
	NSArray* _desiredKeys;
	unsigned long long _resultsLimit;

}

@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                                //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContents;                                //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
+(char)supportsSecureCoding;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(NSArray *)desiredKeys;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(char)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

