/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <Foundation/NSSortDescriptor.h>
#import <CloudKit/NSSecureCoding.h>

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding> {

	CLLocation* _relativeLocation;

}

@property (nonatomic,copy) CLLocation * relativeLocation;              //@synthesize relativeLocation=_relativeLocation - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(CLLocation *)relativeLocation;
-(void)setRelativeLocation:(CLLocation *)arg1 ;
-(id)initWithKey:(id)arg1 relativeLocation:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
@end

