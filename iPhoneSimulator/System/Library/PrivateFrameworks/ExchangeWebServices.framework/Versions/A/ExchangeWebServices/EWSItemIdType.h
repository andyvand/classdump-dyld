/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/ExchangeWebServices-Structs.h>
#import <ExchangeWebServices/EWSBaseItemIdType.h>
#import <ExchangeWebServices/NSCopying.h>

@class NSString;

@interface EWSItemIdType : EWSBaseItemIdType <NSCopying> {

	NSString* _Id;
	NSString* _ChangeKey;

}

@property (copy) NSString * Id;                     //@synthesize Id=_Id - In the implementation block
@property (copy) NSString * ChangeKey;              //@synthesize ChangeKey=_ChangeKey - In the implementation block
+(id)definition;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setChangeKey:(NSString *)arg1 ;
-(NSString *)Id;
-(NSString *)ChangeKey;
-(void)setId:(NSString *)arg1 ;
@end

