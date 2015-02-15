/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSBox.h>

@class NSColor;

@interface AMGroupBox : NSBox {

	char _showBorder;
	NSColor* _borderColor;

}
-(char)hasTesting;
-(char)inTesting;
-(char)showBorder;
-(void)setShowBorder:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)borderColor;
-(void)setBorderColor:(id)arg1 ;
-(void)_commonInit;
@end

