/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Speech.prefPane/Contents/MacOS/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTextField.h>

@interface ComApplePreferenceSpeechKeyCaptureTextField : NSTextField {

	short _pressedKeyCombo;

}
-(void)setPressedKeyCombo:(short)arg1 ;
-(void)setPressedKeyCode:(int)arg1 withModifierFlags:(unsigned)arg2 ;
-(short)pressedKeyCombo;
-(char)performKeyEquivalent:(id)arg1 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
@end
