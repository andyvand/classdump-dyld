/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/CalPreferencesCustomFieldEditor.h>
#import <Calendar/CalCalendarPopupTarget.h>

@class NSView, CALPreferencesDelegatesController, CalDefaultApplicationPopUpButton, CalCalendarPopUpButton, NSPopUpButton, NSButton, NSString;

@interface CALPreferencesGeneralPaneController : NSObject <CalPreferencesCustomFieldEditor, CalCalendarPopupTarget> {

	NSView* generalView;
	NSView* accountsView;
	NSView* advancedView;
	NSView* alertsView;
	CALPreferencesDelegatesController* accountsFieldEditorDelegate;
	id startHourPopup;
	id endHourPopup;
	id dayStartPopup;
	id weekViewScrollByPopup;
	CalDefaultApplicationPopUpButton* defaultCalendaringApplicationButton;
	CalCalendarPopUpButton* defaultCalendarButton;
	char _validateClose;
	NSPopUpButton* _overlayCalendarPicker;
	NSButton* _overlayCalendarCheckbox;

}

@property (retain) NSPopUpButton * overlayCalendarPicker;              //@synthesize overlayCalendarPicker=_overlayCalendarPicker - In the implementation block
@property (retain) NSButton * overlayCalendarCheckbox;                 //@synthesize overlayCalendarCheckbox=_overlayCalendarCheckbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)includeEventCalendars;
-(void)panesController:(id)arg1 willDesactivatePaneWithIdentifier:(id)arg2 ;
-(void)panesController:(id)arg1 didActivatePaneWithIdentifier:(id)arg2 ;
-(id)viewForPaneWithIdentifiers:(id)arg1 ;
-(id)titleForPaneWithIdentifiers:(id)arg1 ;
-(id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2 withIdentifier:(id)arg3 ;
-(id)imageForPaneWithIdentifiers:(id)arg1 ;
-(void)_generateHoursOfDayInPopup:(id)arg1 morning:(char)arg2 ;
-(void)_generateDayOfWeekInPopUp:(id)arg1 ;
-(void)_generateWeekViewScollByInPopup:(id)arg1 ;
-(void)_setupOverlayCalendarButton;
-(void)_updateCalendarPopups;
-(NSButton *)overlayCalendarCheckbox;
-(void)overlayCheckboxChecked:(id)arg1 ;
-(NSPopUpButton *)overlayCalendarPicker;
-(void)overlayCalendarSelected:(id)arg1 ;
-(void)showGeneralHelp:(id)arg1 ;
-(void)setOverlayCalendarPicker:(NSPopUpButton *)arg1 ;
-(void)setOverlayCalendarCheckbox:(NSButton *)arg1 ;
-(void)calendarSelected:(id)arg1 ;
-(id)init;
-(void)awakeFromNib;
@end

