/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSDate, NSCalendar, NSLocale, NSTimeZone, NSColor;

@interface NSDatePickerCell : NSActionCell {

	double _timeInterval;
	NSDate* _minDate;
	NSDate* _maxDate;
	struct {
		unsigned elements : 16;
		unsigned controlStyle : 3;
		unsigned controlMode : 2;
		unsigned trackingHand : 2;
		unsigned reserved2 : 4;
		unsigned drawsBackground : 1;
		unsigned digitsEntered : 2;
		unsigned forcesLeadingZeroes : 1;
		unsigned wrapsDateComponentArithmetic : 1;
	}  _dcFlags;
	id _delegate;
	NSCalendar* _calendar;
	NSLocale* _locale;
	NSTimeZone* _timeZone;
	NSColor* _backgroundColor;
	NSColor* _textColor;
	int _indexOfSelectedSubfield;
	int _reserved0;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;

}

@property (assign) unsigned long long datePickerStyle; 
@property (assign) char drawsBackground; 
@property (copy) NSColor * backgroundColor; 
@property (copy) NSColor * textColor; 
@property (assign) unsigned long long datePickerMode; 
@property (assign) unsigned long long datePickerElements; 
@property (copy) NSCalendar * calendar; 
@property (copy) NSLocale * locale; 
@property (copy) NSTimeZone * timeZone; 
@property (copy) NSDate * dateValue; 
@property (assign) double timeInterval; 
@property (copy) NSDate * minDate; 
@property (copy) NSDate * maxDate; 
@property (assign) id<NSDatePickerCellDelegate> delegate; 
+(void)initialize;
+(id)_sharedDateFormatter;
+(id)_calendarWeekDayHeaderFont;
+(id)_calendarHeaderFont;
+(id)_calendarHeaderFontOfSize:(double)arg1 ;
+(double)_calendarHeaderFontSize;
-(id)init;
-(void)setDelegate:(id<NSDatePickerCellDelegate>)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(id<NSDatePickerCellDelegate>)delegate;
-(id)initTextCell:(id)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setTextColor:(NSColor *)arg1 ;
-(CGSize)cellSize;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(NSColor *)textColor;
-(NSColor *)backgroundColor;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)setDrawsBackground:(char)arg1 ;
-(char)drawsBackground;
-(void)setObjectValue:(id)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(char)startTrackingAt:(CGPoint)arg1 inView:(id)arg2 ;
-(char)continueTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 ;
-(void)drawFocusRingMaskWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)focusRingMaskBoundsForFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)stopTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 mouseIsUp:(char)arg4 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(char)keyDown:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)accessibilitySetValueAttribute:(id)arg1 ;
-(unsigned long long)datePickerStyle;
-(void)setDatePickerStyle:(unsigned long long)arg1 ;
-(unsigned long long)datePickerElements;
-(CGRect)_subfieldsFrame;
-(unsigned long long)datePickerMode;
-(void)setDatePickerMode:(unsigned long long)arg1 ;
-(void)setDatePickerElements:(unsigned long long)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSLocale *)locale;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)dateValue;
-(void)setDateValue:(NSDate *)arg1 ;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(NSDate *)minDate;
-(void)setMinDate:(NSDate *)arg1 ;
-(NSDate *)maxDate;
-(void)setMaxDate:(NSDate *)arg1 ;
-(void)_selectFirstSubfield;
-(void)_selectLastSubfield;
-(void)_finishPendingEdit;
-(void)_getTextAreaFrame:(CGRect*)arg1 stepperCellFrame:(CGRect*)arg2 forDatePickerCellFrame:(CGRect)arg3 ;
-(id)_stepperCell;
-(id)_clockAndCalendarAdvanceMonthCell;
-(id)_clockAndCalendarRetreatMonthCell;
-(void)_clockAndCalendarGetClockFrame:(CGRect*)arg1 calendarFrame:(CGRect*)arg2 retreatMonthCellFrame:(CGRect*)arg3 advanceMonthCellFrame:(CGRect*)arg4 returnToHomeMonthButtonCellFrame:(CGRect*)arg5 forDatePickerCellFrame:(CGRect)arg6 ;
-(id)_stepper;
-(id)_disabledTextColor;
-(void)_setDisabledTextColor:(id)arg1 ;
-(char)_forcesLeadingZeroes;
-(void)_setForcesLeadingZeroes:(char)arg1 ;
-(char)_wrapsDateComponentArithmetic;
-(void)_setWrapsDateComponentArithmetic:(char)arg1 ;
-(void)_createSubfields;
-(void)_registerForDatePreferencesChanges;
-(void)_unregisterForDatePreferencesChanges;
-(char)_fixUpDatePickerElementFlags;
-(void)_clockAndCalendarTakeDisplayedMonthFromDateValue;
-(id)_numberFormatter;
-(void)_updateSubfieldStringsForDateChange;
-(char)_constrainAndSetDateValue:(id)arg1 timeInterval:(double)arg2 sendActionIfChanged:(char)arg3 beepIfNoChange:(char)arg4 returnCalendarToHomeMonth:(char)arg5 preserveFractionalSeconds:(char)arg6 ;
-(CGSize)_textFieldWithStepperCellSize;
-(CGSize)_textFieldCellSize;
-(CGSize)_clockAndCalendarCellSize;
-(void)_drawTextFieldWithStepperWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_drawClockAndCalendarWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)_hitTestTextFieldWithStepper:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(unsigned long long)_hitTestClockAndCalendar:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(char)_textFieldWithStepperTrackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(char)_clockAndCalendarTrackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(char)_clockAndCalendarStartTrackingAt:(CGPoint)arg1 inView:(id)arg2 ;
-(char)_clockAndCalendarContinueTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 ;
-(void)_clockAndCalendarStopTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 mouseIsUp:(char)arg4 ;
-(char)_textFieldWithStepperKeyDown:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(char)_clockAndCalendarKeyDown:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(long long)_indexOfSelectedSubfield;
-(char)_allocateDatePickerCellExtraIvars;
-(id)_effectiveLocale;
-(id)_componentsOfInterestToDatePickerFromDate:(id)arg1 ;
-(id)_effectiveCalendar;
-(id)_dateFromComponents:(id)arg1 ;
-(id)_adjustDate:(id)arg1 byEras:(long long)arg2 years:(long long)arg3 months:(long long)arg4 days:(long long)arg5 hours:(long long)arg6 minutes:(long long)arg7 seconds:(long long)arg8 ;
-(char)_dateIsAM:(id)arg1 ;
-(void)_adjustDatePickerElement:(int)arg1 by:(long long)arg2 returnCalendarToHomeMonth:(char)arg3 ;
-(id)_constrainDateValue:(id)arg1 timeInterval:(double*)arg2 ;
-(void)_commitSubfieldFieldChanges;
-(void)_cancelUserEditTimer;
-(id)_textColorBasedOnEnabledState;
-(id)_calenderHeaderTextColorBasedOnEnabledState;
-(id)_calenderWeekdayHeaderTextColorBasedOnEnabledState;
-(id)_dateFormatter;
-(void)_invalidateDateFormatter;
-(void)_clampDayToValidRangeInDateComponents:(id)arg1 ;
-(long long)_dayOfWeekForDate:(id)arg1 ;
-(NSRange)_rangeOfDaysForMonth:(long long)arg1 year:(long long)arg2 ;
-(long long)_digitForLocalizedDigitCharacter:(unsigned short)arg1 ;
-(void)_toggleAMPM;
-(void)_datePreferencesDidChange:(id)arg1 ;
-(void)_adjustLayoutForTextAreaFrame:(CGRect)arg1 ;
-(long long)_indexOfSubfieldAtPoint:(CGPoint)arg1 inTextAreaFrame:(CGRect)arg2 ;
-(char)_shouldShowFocusRingInView:(id)arg1 ;
-(char)_hasFocusRingInView:(id)arg1 ;
-(CGSize)_desiredTextAreaSize;
-(double)_stepperCellTopAndBottomTrim;
-(id)_subfieldDefs;
-(void)_addStaticSubfieldWithString:(id)arg1 ;
-(void)_addEditableSubfieldForElement:(int)arg1 dateFormat:(id)arg2 ;
-(void)_notifyDelegateIndexOfSelectedSubfieldDidChange;
-(id)_referenceDatesForElement:(int)arg1 ;
-(void)_addSubfieldForElement:(int)arg1 withDateFormat:(id)arg2 referenceStrings:(id)arg3 ;
-(char)_NSDatePickerCellUseChineseSetting;
-(id)_NSDatePickerFormatGregorianYearWithDate:(id)arg1 ;
-(id)_stringForDatePickerElement:(int)arg1 usingDateFormat:(id)arg2 ;
-(id)_concoctUnholyAbominationOfADateFormatThatMakesAMockeryOfLocalization;
-(void)_decrementSelectedSubfield;
-(void)_incrementSelectedSubfield;
-(void)_selectNextSubfield;
-(void)_selectPreviousSubfield;
-(void)_setPM:(char)arg1 ;
-(void)_deleteDigit;
-(void)_insertDigit:(long long)arg1 ;
-(void)_userEditExpired:(id)arg1 ;
-(void)_resetUserEditTimer;
-(void)_stepperCellValueChanged:(id)arg1 ;
-(void)_cancelSubfieldFieldChanges;
-(id)_subfields;
-(void)_setStepper:(id)arg1 ;
-(void)_clockAndCalendarLeftArrowClicked:(id)arg1 ;
-(void)_clockAndCalendarRightArrowClicked:(id)arg1 ;
-(void)_clockAndCalendarReturnToHomeMonth:(id)arg1 ;
-(id)_calendarDateComponentsOfFirstDayOfDisplayedMonthOffset:(long long)arg1 ;
-(id)_calendarFirstDayOfDisplayedMonthDateComponents;
-(NSRange)_calendarRangeOfAllDaysForDisplayedMonthOffset:(long long)arg1 ;
-(char)_calendarIsRTL;
-(long long)_calendarFirstWeekday;
-(id)_calendarDayNamesStringForFirstWeekday:(long long)arg1 ;
-(NSRange)_calendarRangeOfAllDaysForDisplayedMonth;
-(void)_clockAndCalendarFillDayCellRange:(NSRange)arg1 withColor:(id)arg2 inFrame:(CGRect)arg3 inView:(id)arg4 ;
-(NSRange)_calendarRangeOfSelectedDaysForDisplayedMonthOffset:(long long)arg1 ;
-(void)_clockAndCalendarFillDayCell:(long long)arg1 withColor:(id)arg2 inFrame:(CGRect)arg3 inView:(id)arg4 ;
-(id)_calendarContentAttributedStringWithSelectedDayCells:(NSRange)arg1 ;
-(id)_clockAndCalendarReturnToHomeMonthButtonCell;
-(void)_drawAnalogClockWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)_analogClockTrackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(id)_calendarDateComponentsForPoint:(CGPoint)arg1 inCalendarRect:(CGRect)arg2 ;
-(CGRect)_calendarDaysFrameForDatePickerCellFrame:(CGRect)arg1 ;
-(void)_clockAndCalendarRetreatMonth;
-(void)_clockAndCalendarAdvanceMonth;
-(void)_autoAdvanceCalendar:(id)arg1 ;
-(char)_clockAndCalendarIsTargetMonthLeapMonth:(id)arg1 offset:(long long)arg2 ;
-(void)_clockAndCalendarTakeDisplayedMonthFromTodaysDate;
-(char)_calendarDateRangeValueContainsAnyPartOfEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 ;
-(id)accessibilityMinValueAttribute;
-(char)accessibilityIsMinValueAttributeSettable;
-(id)accessibilityMaxValueAttribute;
-(char)accessibilityIsMaxValueAttributeSettable;
-(id)accessibilityDateTimeComponentsAttribute;
-(char)accessibilityIsDateTimeComponentsAttributeSettable;
@end

