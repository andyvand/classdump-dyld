/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _NSDatePickerArrowCell, NSButtonCell, NSDateComponents, NSColor, NSNumberFormatter, NSTimer, NSDate;

@interface _NSDatePickerCellExtraIvars : NSObject {

	_NSDatePickerArrowCell* _arrowLeftCell;
	_NSDatePickerArrowCell* _arrowRightCell;
	NSButtonCell* _returnToHomeMonthButtonCell;
	NSDateComponents* _calendarDisplayedMonthDateComponents;
	NSColor* _disabledTextColor;
	NSNumberFormatter* _numberFormatter;
	NSTimer* _changeMonthTimer;
	NSDate* _lastFireDateForChangeMonthTimer;

}
-(void)dealloc;
-(oneway void)releaseCalendarSpecificResources;
-(id)disabledTextColor;
-(void)setDisabledTextColor:(id)arg1 ;
-(id)arrowLeftCellForDatePickerCell:(id)arg1 ;
-(id)arrowRightCellForDatePickerCell:(id)arg1 ;
-(id)returnToHomeMonthButtonCellForDatePickerCell:(id)arg1 ;
-(id)calendarDisplayedMonthDateComponents;
@end

