/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailService.framework/Versions/A/MailService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailService/NSSecureCoding.h>

@interface MSCriterion : NSObject <NSSecureCoding> {

	char _allRequired;
	long long _type;
	long long _qualifier;
	id _expression;

}

@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long qualifier;              //@synthesize qualifier=_qualifier - In the implementation block
@property (nonatomic,copy) id expression;                      //@synthesize expression=_expression - In the implementation block
@property (assign,nonatomic) char allRequired;                 //@synthesize allRequired=_allRequired - In the implementation block
+(char)supportsSecureCoding;
-(id)expression;
-(void)setQualifier:(long long)arg1 ;
-(long long)qualifier;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setExpression:(id)arg1 ;
-(char)allRequired;
-(id)initWithType:(long long)arg1 qualifier:(long long)arg2 expression:(id)arg3 ;
-(void)setAllRequired:(char)arg1 ;
@end

