/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <AppKit/NSView.h>

@interface SCTMenuView : NSView {

	char shouldDrawVerticalSeparator;
	double verticalSeparatorOffset;

}

@property (assign) char shouldDrawVerticalSeparator; 
@property (assign) double verticalSeparatorOffset; 
-(void)setShouldDrawVerticalSeparator:(char)arg1 ;
-(void)setVerticalSeparatorOffset:(double)arg1 ;
-(char)shouldDrawVerticalSeparator;
-(double)verticalSeparatorOffset;
-(void)drawRect:(CGRect)arg1 ;
-(char)allowsVibrancy;
-(void)viewDidMoveToWindow;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
@end

