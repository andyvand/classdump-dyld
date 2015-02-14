/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <CloudKit/NSSecureCoding.h>

@class CKShareID, NSString, CKSharedItemID;

@interface CKCommentNotification : CKNotification <NSSecureCoding> {

	CKShareID* _shareID;
	NSString* _commentID;
	CKSharedItemID* _commentedItemID;
	NSString* _commenterID;
	NSString* _message;

}

@property (nonatomic,copy) CKShareID * shareID;                           //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,copy) NSString * commentID;                          //@synthesize commentID=_commentID - In the implementation block
@property (nonatomic,copy) CKSharedItemID * commentedItemID;              //@synthesize commentedItemID=_commentedItemID - In the implementation block
@property (nonatomic,copy) NSString * commenterID;                        //@synthesize commenterID=_commenterID - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSString *)commentID;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setCommentID:(NSString *)arg1 ;
-(void)setCommenterID:(NSString *)arg1 ;
-(CKSharedItemID *)commentedItemID;
-(NSString *)commenterID;
-(void)setCommentedItemID:(CKSharedItemID *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end

