/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSRecurrencePatternBaseType, EWSRecurrenceRangeBaseType;

@interface EWSRecurrenceType : NSObject {

	EWSRecurrencePatternBaseType* _RecurrencePattern;
	EWSRecurrenceRangeBaseType* _RecurrenceRange;

}

@property (nonatomic,retain) EWSRecurrencePatternBaseType * RecurrencePattern;              //@synthesize RecurrencePattern=_RecurrencePattern - In the implementation block
@property (nonatomic,retain) EWSRecurrenceRangeBaseType * RecurrenceRange;                  //@synthesize RecurrenceRange=_RecurrenceRange - In the implementation block
+(id)definition;
-(void)dealloc;
-(id)description;
-(void)setRecurrencePattern:(EWSRecurrencePatternBaseType *)arg1 ;
-(EWSRecurrencePatternBaseType *)RecurrencePattern;
-(void)setRecurrenceRange:(EWSRecurrenceRangeBaseType *)arg1 ;
-(EWSRecurrenceRangeBaseType *)RecurrenceRange;
@end

