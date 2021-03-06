/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LUIViewController.h>

@class LUIWindowController, NSTextView, LUIPinFieldView, NSDate, NSTimer;

@interface LUIFMMViewController : LUIViewController {

	LUIWindowController* _windowController;
	NSTextView* _promptView;
	LUIPinFieldView* _pinView;
	NSDate* _unlockDate;
	int _promptType;
	NSTimer* _unlockCountDownTimer;

}
+(id)identifier;
+(id)controllerWithStyle:(int)arg1 ;
-(void)clearPIN;
-(id)PINString;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 ;
-(void)setWindowController:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)_layoutContent;
-(void)_refreshTimerString:(id)arg1 ;
-(void)setPINLength:(int)arg1 ;
-(void)setPINEntryEnabled:(char)arg1 ;
-(void)setPINEntryHidden:(char)arg1 ;
-(void)setPINPromptString:(int)arg1 withUnlockDate:(id)arg2 ;
-(id)_promptStringForType:(int)arg1 ;
-(void)_pinEntered:(id)arg1 ;
-(id)_promptFontAttributes:(char)arg1 ;
-(void)refresh;
@end

