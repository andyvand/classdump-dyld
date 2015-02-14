/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseItemIdType.h>

@class NSString;

@interface EWSOccurrenceItemIdType : EWSBaseItemIdType {

	NSString* _RecurringMasterId;
	NSString* _ChangeKey;
	long long _InstanceIndex;

}

@property (nonatomic,copy) NSString * RecurringMasterId;              //@synthesize RecurringMasterId=_RecurringMasterId - In the implementation block
@property (nonatomic,copy) NSString * ChangeKey;                      //@synthesize ChangeKey=_ChangeKey - In the implementation block
@property (assign,nonatomic) long long InstanceIndex;                 //@synthesize InstanceIndex=_InstanceIndex - In the implementation block
+(id)definition;
-(long long)InstanceIndex;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChangeKey:(NSString *)arg1 ;
-(NSString *)ChangeKey;
-(void)setRecurringMasterId:(NSString *)arg1 ;
-(void)setInstanceIndex:(long long)arg1 ;
-(NSString *)RecurringMasterId;
@end

