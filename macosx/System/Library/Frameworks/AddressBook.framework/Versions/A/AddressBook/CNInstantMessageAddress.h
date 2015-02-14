/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/NSCopying.h>
#import <AddressBook/NSSecureCoding.h>

@class NSString;

@interface CNInstantMessageAddress : NSObject <NSCopying, NSSecureCoding> {

	NSString* _username;
	NSString* _service;

}

@property (nonatomic,copy,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * service;               //@synthesize service=_service - In the implementation block
+(char)supportsSecureCoding;
-(id)_cn_stringForSorting;
-(NSString *)username;
-(NSString *)service;
-(id)initWithUsername:(id)arg1 service:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

