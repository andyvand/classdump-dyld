/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@class NSArray, NSDictionary, NSSet;

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	char _isFetchCurrentUserOperation;
	char _shouldFetchAssetContent;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSDictionary* _recordIDsToVersionETags;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _signaturesOfAssetsByRecordIDAndKey;
	NSSet* _assetFieldNamesToPublishURLs;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                            //@synthesize recordIDs=_recordIDs - In the implementation block
@property (assign,nonatomic) char isFetchCurrentUserOperation;                               //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                          //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                         //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,retain) NSDictionary * desiredPackageFileIndices;                       //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;                                   //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSDictionary * signaturesOfAssetsByRecordIDAndKey;              //@synthesize signaturesOfAssetsByRecordIDAndKey=_signaturesOfAssetsByRecordIDAndKey - In the implementation block
@property (nonatomic,retain) NSSet * assetFieldNamesToPublishURLs;                           //@synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                                //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                                  //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
+(char)supportsSecureCoding;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(char)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(unsigned long long)requestedTTL;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(unsigned long long)URLOptions;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(void)setIsFetchCurrentUserOperation:(char)arg1 ;
-(char)isFetchCurrentUserOperation;
-(NSDictionary *)recordIDsToVersionETags;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredPackageFileIndices;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(NSDictionary *)signaturesOfAssetsByRecordIDAndKey;
-(void)setSignaturesOfAssetsByRecordIDAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(NSSet *)assetFieldNamesToPublishURLs;
-(void)setAssetFieldNamesToPublishURLs:(NSSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

