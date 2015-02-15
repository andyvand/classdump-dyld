/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/NSSecureCoding.h>

@class NSString, NSArray;

@interface CalMeCard : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSArray* _emailAddresses;
	NSString* _uniqueID;
	long long _version;

}

@property (retain,readonly) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (retain,readonly) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (retain,readonly) NSString * uniqueID;                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign) long long version;                              //@synthesize version=_version - In the implementation block
+(char)supportsSecureCoding;
+(id)cardFromPath:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(NSString *)displayName;
-(NSString *)uniqueID;
-(long long)version;
-(id)preferredEmailAddress;
-(NSArray *)emailAddresses;
-(char)isEqualToMeCard:(id)arg1 ;
-(char)writeToPath:(id)arg1 ;
-(id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3 ;
@end

