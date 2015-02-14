/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, EWSWorkingHours;

@interface EWSFreeBusyView : NSObject {

	int _FreeBusyViewType;
	NSString* _MergedFreeBusy;
	NSArray* _CalendarEventArray;
	EWSWorkingHours* _WorkingHours;

}

@property (assign,nonatomic) int FreeBusyViewType;                        //@synthesize FreeBusyViewType=_FreeBusyViewType - In the implementation block
@property (nonatomic,copy) NSString * MergedFreeBusy;                     //@synthesize MergedFreeBusy=_MergedFreeBusy - In the implementation block
@property (nonatomic,copy) NSArray * CalendarEventArray;                  //@synthesize CalendarEventArray=_CalendarEventArray - In the implementation block
@property (nonatomic,retain) EWSWorkingHours * WorkingHours;              //@synthesize WorkingHours=_WorkingHours - In the implementation block
+(id)definition;
-(void)setFreeBusyViewType:(int)arg1 ;
-(void)setMergedFreeBusy:(NSString *)arg1 ;
-(void)setCalendarEventArray:(NSArray *)arg1 ;
-(void)setWorkingHours:(EWSWorkingHours *)arg1 ;
-(void)dealloc;
-(NSArray *)CalendarEventArray;
-(int)FreeBusyViewType;
-(NSString *)MergedFreeBusy;
-(EWSWorkingHours *)WorkingHours;
@end

