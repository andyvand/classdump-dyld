/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/CalPopoverController.h>
#import <Calendar/NSPopoverDelegate.h>
#import <Calendar/CalUISuggestionsFieldDelegate.h>

@class EKCalendar, NSView, CalUISuggestionsField, NSString;

@interface CalQuickEventPopoverController : CalPopoverController <NSPopoverDelegate, CalUISuggestionsFieldDelegate> {

	EKCalendar* _calendarForEventCreation;
	NSView* _wrapperView;
	CalUISuggestionsField* _quickEntryField;

}

@property (retain) EKCalendar * calendarForEventCreation;                //@synthesize calendarForEventCreation=_calendarForEventCreation - In the implementation block
@property (retain) NSView * wrapperView;                                 //@synthesize wrapperView=_wrapperView - In the implementation block
@property (retain) CalUISuggestionsField * quickEntryField;              //@synthesize quickEntryField=_quickEntryField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showPopoverWithCalendar:(id)arg1 ;
-(id)initWithPopoverButton:(id)arg1 mainController:(id)arg2 ;
-(EKCalendar *)calendarForEventCreation;
-(NSView *)wrapperView;
-(void)setCalendarForEventCreation:(EKCalendar *)arg1 ;
-(void)setWrapperView:(NSView *)arg1 ;
-(CalUISuggestionsField *)quickEntryField;
-(void)setQuickEntryField:(CalUISuggestionsField *)arg1 ;
-(void)showPopover;
-(void)queryStringUpdatedToString:(id)arg1 suggestionsFoundHandler:(/*^block*/id)arg2 ;
-(id)viewForSuggestion:(id)arg1 ;
-(void)suggestionSelected:(id)arg1 ;
-(id)view;
-(char)popoverShouldClose:(id)arg1 ;
@end

