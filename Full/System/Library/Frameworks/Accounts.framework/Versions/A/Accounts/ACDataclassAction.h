/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accounts/NSSecureCoding.h>

@interface ACDataclassAction : NSObject <NSSecureCoding> {

	char _isDestructive;
	long long _type;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char isDestructive;              //@synthesize isDestructive=_isDestructive - In the implementation block
+(id)actionWithType:(long long)arg1 ;
+(id)destructiveActionWithType:(long long)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithType:(long long)arg1 destructivity:(char)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(char)isDestructive;
@end

