/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CalUIPopupWindowState : NSObject {

	char _allowsMultipleMonthlyDayButtons;
	char _allowsYearlyIntervalChange;
	char _allowsMultipleYearlyMonthButtons;
	char _yearlyByDaySwitch;
	unsigned short _weeklyDayButtons;
	int _frequencySelectorValue;
	int _monthlyRuleType;
	int _monthlyOrdinalValue;
	int _monthlyOrdinalDayValue;
	int _yearlyOrdinalValue;
	int _yearlyOrdinalDayValue;
	long long _dailyIntervalValue;
	long long _weeklyIntervalValue;
	long long _monthlyIntervalValue;
	NSMutableArray* _monthlyDayButtons;
	long long _yearlyIntervalValue;
	NSMutableArray* _yearlyMonthButtons;

}

@property (assign) int frequencySelectorValue;                         //@synthesize frequencySelectorValue=_frequencySelectorValue - In the implementation block
@property (assign) long long dailyIntervalValue;                       //@synthesize dailyIntervalValue=_dailyIntervalValue - In the implementation block
@property (assign) long long weeklyIntervalValue;                      //@synthesize weeklyIntervalValue=_weeklyIntervalValue - In the implementation block
@property (assign) unsigned short weeklyDayButtons;                    //@synthesize weeklyDayButtons=_weeklyDayButtons - In the implementation block
@property (assign) long long monthlyIntervalValue;                     //@synthesize monthlyIntervalValue=_monthlyIntervalValue - In the implementation block
@property (retain) NSMutableArray * monthlyDayButtons;                 //@synthesize monthlyDayButtons=_monthlyDayButtons - In the implementation block
@property (assign) char allowsMultipleMonthlyDayButtons;               //@synthesize allowsMultipleMonthlyDayButtons=_allowsMultipleMonthlyDayButtons - In the implementation block
@property (assign) int monthlyRuleType;                                //@synthesize monthlyRuleType=_monthlyRuleType - In the implementation block
@property (assign) int monthlyOrdinalValue;                            //@synthesize monthlyOrdinalValue=_monthlyOrdinalValue - In the implementation block
@property (assign) int monthlyOrdinalDayValue;                         //@synthesize monthlyOrdinalDayValue=_monthlyOrdinalDayValue - In the implementation block
@property (assign) long long yearlyIntervalValue;                      //@synthesize yearlyIntervalValue=_yearlyIntervalValue - In the implementation block
@property (assign) char allowsYearlyIntervalChange;                    //@synthesize allowsYearlyIntervalChange=_allowsYearlyIntervalChange - In the implementation block
@property (retain) NSMutableArray * yearlyMonthButtons;                //@synthesize yearlyMonthButtons=_yearlyMonthButtons - In the implementation block
@property (assign) char allowsMultipleYearlyMonthButtons;              //@synthesize allowsMultipleYearlyMonthButtons=_allowsMultipleYearlyMonthButtons - In the implementation block
@property (assign) char yearlyByDaySwitch;                             //@synthesize yearlyByDaySwitch=_yearlyByDaySwitch - In the implementation block
@property (assign) int yearlyOrdinalValue;                             //@synthesize yearlyOrdinalValue=_yearlyOrdinalValue - In the implementation block
@property (assign) int yearlyOrdinalDayValue;                          //@synthesize yearlyOrdinalDayValue=_yearlyOrdinalDayValue - In the implementation block
-(unsigned short)weeklyDayButtons;
-(void)setWeeklyDayButtons:(unsigned short)arg1 ;
-(NSMutableArray *)monthlyDayButtons;
-(NSMutableArray *)yearlyMonthButtons;
-(void)setAllowsMultipleMonthlyDayButtons:(char)arg1 ;
-(void)setAllowsMultipleYearlyMonthButtons:(char)arg1 ;
-(void)setAllowsYearlyIntervalChange:(char)arg1 ;
-(void)setFrequencySelectorValue:(int)arg1 ;
-(void)setDailyIntervalValue:(long long)arg1 ;
-(void)setWeeklyIntervalValue:(long long)arg1 ;
-(void)setMonthlyIntervalValue:(long long)arg1 ;
-(void)setMonthlyOrdinalValue:(int)arg1 ;
-(void)setMonthlyOrdinalDayValue:(int)arg1 ;
-(void)setMonthlyRuleType:(int)arg1 ;
-(void)setYearlyIntervalValue:(long long)arg1 ;
-(void)setYearlyOrdinalValue:(int)arg1 ;
-(void)setYearlyOrdinalDayValue:(int)arg1 ;
-(void)setYearlyByDaySwitch:(char)arg1 ;
-(int)frequencySelectorValue;
-(char)yearlyByDaySwitch;
-(long long)dailyIntervalValue;
-(long long)weeklyIntervalValue;
-(int)monthlyRuleType;
-(char)allowsMultipleMonthlyDayButtons;
-(long long)monthlyIntervalValue;
-(int)monthlyOrdinalDayValue;
-(int)monthlyOrdinalValue;
-(char)allowsYearlyIntervalChange;
-(long long)yearlyIntervalValue;
-(int)yearlyOrdinalDayValue;
-(int)yearlyOrdinalValue;
-(char)allowsMultipleYearlyMonthButtons;
-(void)setMonthlyDayButtons:(NSMutableArray *)arg1 ;
-(void)setYearlyMonthButtons:(NSMutableArray *)arg1 ;
-(id)init;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(void)reset;
@end

