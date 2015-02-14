/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <GeoKit/NSComboBoxDelegate.h>
#import <GeoKit/NSComboBoxDataSource.h>

@class NSComboBox, GEOCity, NSArray, NSTimer, NSString;

@interface GEOCityPickerViewPrivController : NSViewController <NSComboBoxDelegate, NSComboBoxDataSource> {

	NSComboBox* comboBox;
	GEOCity* cityInComboBox;
	NSArray* citiesInComboMenu;
	char stopAutomaticCompletion;
	NSTimer* restartAutoCompletionTimer;
	NSTimer* showComboMenuTimer;
	char enabled;
	char retainedHostWindow;

}

@property (assign,nonatomic) NSComboBox * comboBox; 
@property (nonatomic,retain) GEOCity * cityInComboBox; 
@property (nonatomic,retain) NSArray * citiesInComboMenu; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)controlTextDidChange:(id)arg1 ;
-(long long)numberOfItemsInComboBox:(id)arg1 ;
-(id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2 ;
-(unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2 ;
-(void)comboBoxWillPopUp:(id)arg1 ;
-(void)comboBoxWillDismiss:(id)arg1 ;
-(void)comboBoxSelectionDidChange:(id)arg1 ;
-(void)_restartSearchTimerCallback;
-(char)_isComboBoxFirstResponder;
-(void)_showComboMenuTimerCallback;
-(void)_stopShowComboMenuTimer;
-(void)_stopRestartAutoCompletionTimer;
-(id)_citySelectedInComboMenu;
-(char)_isValidComboBoxSelection;
-(void)setComboBoxWithCity:(id)arg1 allCities:(id)arg2 ;
-(void)setCitiesInComboMenu:(NSArray *)arg1 ;
-(char)_doesUserInput:(id)arg1 matchString:(id)arg2 ;
-(id)_comboBoxStringValueOnTheLeftOfTheTextCursor;
-(char)_doesUserInput:(id)arg1 matchCityName:(id)arg2 ;
-(char)_doesUserInput:(id)arg1 matchCountryName:(id)arg2 ;
-(void)_autoCompleteComboBoxWithCity:(id)arg1 ;
-(void)_startShowComboMenuTimerWithTimeInterval:(double)arg1 ;
-(void)_searchByNameCallback:(id)arg1 returnedCityIDs:(id)arg2 ;
-(void)_startRestartAutoCompletionTimerWithTimeInterval:(double)arg1 ;
-(void)setCityInComboBox:(GEOCity *)arg1 ;
-(void)_setComboMenuToCities:(id)arg1 ;
-(void)comboSelectionWasFinalized:(id)arg1 ;
-(void)timeZoneFieldWasClicked:(id)arg1 ;
-(NSComboBox *)comboBox;
-(void)setComboBox:(NSComboBox *)arg1 ;
-(GEOCity *)cityInComboBox;
-(NSArray *)citiesInComboMenu;
@end

