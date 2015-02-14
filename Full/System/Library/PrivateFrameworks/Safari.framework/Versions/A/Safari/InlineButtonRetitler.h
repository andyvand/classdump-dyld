/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTextField.h>

@class NSButton;

@interface InlineButtonRetitler : NSTextField {

	NSButton* _button;
	double _horizontalPadding;

}

@property (readonly) NSButton * button;              //@synthesize button=_button - In the implementation block
+(Class)cellClass;
-(char)beginEditingButton:(id)arg1 withTitle:(id)arg2 ;
-(void)resizeToFitTextWithMaximumWidth:(double)arg1 ;
-(void)finishEditing;
-(void)cancelEditing;
-(id)init;
-(NSButton *)button;
-(void)_cleanUp;
@end

