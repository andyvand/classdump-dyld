/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class GEOCityPickerView, NSComboBox;

@interface CalUITimeZoneSheetController : NSWindowController {

	GEOCityPickerView* _cityPicker;
	NSComboBox* _comboBox;

}
+(void)showTimeZoneMapPickerOnWindow:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)showTimeZoneMapPickerOnWindow:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_okButtonClicked:(id)arg1 ;
-(void)_cancelButtonClicked:(id)arg1 ;
@end

