/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@protocol CKCommenting;
@class CKShareID, NSObject, NSString, CKSharedItemID;

@interface CKCommentQuery : NSObject <NSSecureCoding, NSCopying> {

	CKShareID* _shareID;
	NSObject*<CKCommenting> _owner;
	NSString* _context;
	long long _resultsOrdering;
	CKSharedItemID* _creatorID;

}

@property (nonatomic,retain) CKShareID * shareID;                        //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) NSObject*<CKCommenting> owner;              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * context;                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long resultsOrdering;                  //@synthesize resultsOrdering=_resultsOrdering - In the implementation block
@property (nonatomic,retain) CKSharedItemID * creatorID;                 //@synthesize creatorID=_creatorID - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(id)initWithShareID:(id)arg1 ;
-(void)setCreatorID:(CKSharedItemID *)arg1 ;
-(CKSharedItemID *)creatorID;
-(long long)resultsOrdering;
-(void)setResultsOrdering:(long long)arg1 ;
-(id)description;
-(NSString *)context;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOwner:(NSObject*<CKCommenting>)arg1 ;
-(NSObject*<CKCommenting>)owner;
-(void)setContext:(NSString *)arg1 ;
@end

