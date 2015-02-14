/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBasePagingType.h>

@class NSString;

@interface EWSContactsViewType : EWSBasePagingType {

	NSString* _InitialName;
	NSString* _FinalName;

}

@property (nonatomic,copy) NSString * InitialName;              //@synthesize InitialName=_InitialName - In the implementation block
@property (nonatomic,copy) NSString * FinalName;                //@synthesize FinalName=_FinalName - In the implementation block
+(id)definition;
-(NSString *)InitialName;
-(void)setInitialName:(NSString *)arg1 ;
-(NSString *)FinalName;
-(void)setFinalName:(NSString *)arg1 ;
-(void)dealloc;
@end

