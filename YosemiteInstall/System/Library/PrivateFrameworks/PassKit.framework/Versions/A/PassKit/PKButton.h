/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <AppKit/NSButton.h>

@class NSColor;

@interface PKButton : NSButton {

	NSColor* _textColor;
	NSColor* _passBackgroundColor;

}

@property (nonatomic,retain) NSColor * textColor;                        //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSColor * passBackgroundColor;              //@synthesize passBackgroundColor=_passBackgroundColor - In the implementation block
-(NSColor *)passBackgroundColor;
-(void)setPassBackgroundColor:(NSColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTextColor:(NSColor *)arg1 ;
-(NSColor *)textColor;
@end

