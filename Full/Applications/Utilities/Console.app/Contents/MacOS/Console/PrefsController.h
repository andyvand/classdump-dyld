/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:14:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Console.app/Contents/MacOS/Console
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSButton, NSSlider;

@interface PrefsController : NSWindowController {

	NSButton* _autoShowCheckBox;
	NSSlider* _autoHideTimeSlider;
	NSButton* _notifyViaBounceCheckBox;
	id _numberOfTopsButton;

}
-(void)_notifyPrefChange;
-(void)notifyViaBounce:(id)arg1 ;
-(void)autoShow:(id)arg1 ;
-(void)takeAutoHideTimeFrom:(id)arg1 ;
-(void)setTopsNumber:(id)arg1 ;
-(id)init;
-(void)showWindow:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)windowDidLoad;
@end
