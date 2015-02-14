/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <Calendar/NSDatePickerCellDelegate.h>

@class CALGoToDayPicker, CALMainController, NSString;

@interface CALGoToDayDialogController : NSWindowController <NSDatePickerCellDelegate> {

	CALGoToDayPicker* _stdDateControl;
	CALMainController* _mainController;
	CALGoToDayDialogController* _retainSelf;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMainController:(id)arg1 ;
-(void)dateControlValidated:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)run;
-(void)cancel:(id)arg1 ;
-(void)apply:(id)arg1 ;
@end

