/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSItemType.h>

@class NSString;

@interface EWSDistributionListType : EWSItemType {

	NSString* _DisplayName;
	NSString* _FileAs;
	int _ContactSource;

}

@property (nonatomic,copy) NSString * FileAs;                   //@synthesize FileAs=_FileAs - In the implementation block
@property (nonatomic,copy) NSString * DisplayName;              //@synthesize DisplayName=_DisplayName - In the implementation block
@property (assign,nonatomic) int ContactSource;                 //@synthesize ContactSource=_ContactSource - In the implementation block
+(id)definition;
-(NSString *)FileAs;
-(void)setFileAs:(NSString *)arg1 ;
-(int)ContactSource;
-(void)setContactSource:(int)arg1 ;
-(void)dealloc;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)DisplayName;
@end

