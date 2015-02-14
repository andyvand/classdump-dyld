/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class NSString, CKSharedItemID, NSDate, CKContainerID;

@interface CKComment : NSObject <NSSecureCoding, NSCopying> {

	NSString* _commentID;
	CKSharedItemID* _commentedItemID;
	NSString* _message;
	NSString* _context;
	NSString* _commenterID;
	NSDate* _creationDate;
	NSString* _localID;
	CKContainerID* _containerID;

}

@property (nonatomic,copy) NSString * commentID;                          //@synthesize commentID=_commentID - In the implementation block
@property (nonatomic,copy) CKSharedItemID * commentedItemID;              //@synthesize commentedItemID=_commentedItemID - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * commenterID;                        //@synthesize commenterID=_commenterID - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * localID;                            //@synthesize localID=_localID - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;                   //@synthesize containerID=_containerID - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)sharedItemID;
-(CKContainerID *)containerID;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(NSString *)commentID;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)_initBare;
-(void)setCommentID:(NSString *)arg1 ;
-(void)setCommenterID:(NSString *)arg1 ;
-(CKSharedItemID *)commentedItemID;
-(NSString *)commenterID;
-(void)setCommentedItemID:(CKSharedItemID *)arg1 ;
-(id)_initWithMessage:(id)arg1 itemID:(id)arg2 ;
-(NSString *)localID;
-(void)setLocalID:(NSString *)arg1 ;
-(id)initWithMessage:(id)arg1 item:(id)arg2 ;
-(id)init;
-(id)description;
-(NSString *)context;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setContext:(NSString *)arg1 ;
@end

