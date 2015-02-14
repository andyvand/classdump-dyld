/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSArray, CKShareID;

@interface CKFetchLikesOperationInfo : CKOperationInfo {

	NSArray* _itemIDs;
	CKShareID* _shareID;
	unsigned long long _resultsLimit;

}

@property (nonatomic,retain) NSArray * itemIDs;                            //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                          //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)itemIDs;
-(void)setItemIDs:(NSArray *)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

