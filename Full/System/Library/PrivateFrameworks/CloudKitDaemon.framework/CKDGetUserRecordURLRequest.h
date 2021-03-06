/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecord;

@interface CKDGetUserRecordURLRequest : CKDURLRequest {

	/*^block*/id _recordFetchedBlock;
	CKRecord* _userRecord;

}

@property (nonatomic,copy) id recordFetchedBlock;                //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
-(CKRecord *)userRecord;
-(void)setUserRecord:(CKRecord *)arg1 ;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(id)recordFetchedBlock;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(int)operationType;
@end

