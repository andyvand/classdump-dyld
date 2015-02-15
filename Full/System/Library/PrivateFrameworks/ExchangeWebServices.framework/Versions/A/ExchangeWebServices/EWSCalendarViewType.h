/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBasePagingType.h>

@class NSDateComponents;

@interface EWSCalendarViewType : EWSBasePagingType {

	NSDateComponents* _StartDate;
	NSDateComponents* _EndDate;

}

@property (setter=tartDate,nonatomic,retain) NSDateComponents * StartDate;              //@synthesize StartDate=_StartDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * EndDate;                                //@synthesize EndDate=_EndDate - In the implementation block
+(id)definition;
-(void)setStartDate:(NSDateComponents *)arg1 ;
-(void)dealloc;
-(void)setEndDate:(NSDateComponents *)arg1 ;
-(NSDateComponents *)EndDate;
-(NSDateComponents *)StartDate;
@end

