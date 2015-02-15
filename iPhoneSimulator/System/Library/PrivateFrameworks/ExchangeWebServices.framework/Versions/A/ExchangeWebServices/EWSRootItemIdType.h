/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseItemIdType.h>

@class NSString;

@interface EWSRootItemIdType : EWSBaseItemIdType {

	NSString* _RootItemId;
	NSString* _RootItemChangeKey;

}

@property (nonatomic,copy) NSString * RootItemId;                     //@synthesize RootItemId=_RootItemId - In the implementation block
@property (nonatomic,copy) NSString * RootItemChangeKey;              //@synthesize RootItemChangeKey=_RootItemChangeKey - In the implementation block
+(id)definition;
-(void)setRootItemId:(NSString *)arg1 ;
-(void)setRootItemChangeKey:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)RootItemChangeKey;
-(NSString *)RootItemId;
@end

