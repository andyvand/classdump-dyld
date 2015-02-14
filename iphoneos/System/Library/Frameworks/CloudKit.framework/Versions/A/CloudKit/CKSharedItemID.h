/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@protocol NSSecureCodingNSCopying;
@class CKContainerID, NSObject;

@interface CKSharedItemID : NSObject <NSSecureCoding, NSCopying> {

	long long _itemType;
	long long _scope;
	CKContainerID* _containerID;
	NSObject*<NSSecureCoding>*<NSCopying> _itemIdentifier;

}

@property (assign,nonatomic) long long itemType;                                              //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) long long scope;                                                 //@synthesize scope=_scope - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;                                       //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSObject*<NSSecureCoding>*<NSCopying> itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(id)shareID;
-(CKContainerID *)containerID;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)initWithItemType:(long long)arg1 itemIdentifier:(id)arg2 containerID:(id)arg3 ;
-(id)initWithItemType:(long long)arg1 itemIdentifier:(id)arg2 ;
-(id)_itemTypeDescription;
-(id)UIDocumentIdentifier;
-(id)commentIdentifier;
-(void)setItemIdentifier:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(void)setItemType:(long long)arg1 ;
-(id)zoneID;
-(id)recordID;
-(long long)scope;
-(void)setScope:(long long)arg1 ;
-(id)init;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<NSSecureCoding>*<NSCopying>)itemIdentifier;
-(long long)itemType;
@end

