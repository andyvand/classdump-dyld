/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	char _atomic;
	char _shouldOnlySaveAssetContent;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	NSData* _clientChangeTokenData;
	long long _savePolicy;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;

}

@property (nonatomic,retain) NSArray * recordsToSave;                                       //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                   //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSData * clientChangeTokenData;                                //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (assign,nonatomic) char atomic;                                                   //@synthesize atomic=_atomic - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                          //@synthesize savePolicy=_savePolicy - In the implementation block
@property (assign,nonatomic) char shouldOnlySaveAssetContent;                               //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToDeleteToEtags;                         //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
+(char)supportsSecureCoding;
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
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

