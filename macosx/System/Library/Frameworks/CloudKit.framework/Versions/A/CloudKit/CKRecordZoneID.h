/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class NSString;

@interface CKRecordZoneID : NSObject <NSSecureCoding, NSCopying> {

	NSString* _zoneName;
	NSString* _ownerName;

}

@property (nonatomic,retain) NSString * zoneName;               //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,retain) NSString * ownerName;              //@synthesize ownerName=_ownerName - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(NSString *)zoneName;
-(NSString *)ownerName;
-(id)ckShortDescription;
-(id)sqliteRepresentation;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setOwnerName:(NSString *)arg1 ;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

