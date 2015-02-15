/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface CalUIVibrantView : NSView {

	NSColor* _backgroundColor;

}

@property (retain) NSColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)allowsVibrancy;
-(NSColor *)backgroundColor;
@end
