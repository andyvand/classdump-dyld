/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface EWSEmailAddress : NSObject {

	NSString* _Name;
	NSString* _Address;
	NSString* _RoutingType;

}

@property (nonatomic,copy) NSString * Name;                     //@synthesize Name=_Name - In the implementation block
@property (nonatomic,copy) NSString * Address;                  //@synthesize Address=_Address - In the implementation block
@property (nonatomic,copy) NSString * RoutingType;              //@synthesize RoutingType=_RoutingType - In the implementation block
+(id)definition;
-(NSString *)Address;
-(NSString *)RoutingType;
-(void)setRoutingType:(NSString *)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)Name;
-(void)setAddress:(NSString *)arg1 ;
@end
