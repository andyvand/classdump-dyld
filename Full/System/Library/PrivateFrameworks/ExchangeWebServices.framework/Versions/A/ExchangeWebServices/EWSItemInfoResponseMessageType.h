/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray;

@interface EWSItemInfoResponseMessageType : EWSResponseMessageType {

	NSArray* _Items;

}

@property (nonatomic,copy) NSArray * Items;              //@synthesize Items=_Items - In the implementation block
+(id)definition;
-(void)setItems:(NSArray *)arg1 ;
-(void)dealloc;
-(NSArray *)Items;
@end
