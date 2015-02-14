/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKRecordValue.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {

	unsigned long long _referenceAction;
	CKRecordID* _recordID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long referenceAction;              //@synthesize referenceAction=_referenceAction - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                               //@synthesize recordID=_recordID - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)_initBare;
-(id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2 ;
-(unsigned long long)referenceAction;
-(id)initWithRecord:(id)arg1 action:(unsigned long long)arg2 ;
-(CKRecordID *)recordID;
-(id)init;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

