/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/InternetAccounts-Structs.h>
#import <AppKit/NSTableRowView.h>

@class NSTrackingArea;

@interface IANewAccountTableRowView : NSTableRowView {

	char _mouseInside;
	char _mouseDown;
	NSTrackingArea* _trackingArea;

}

@property (assign) char mouseInside; 
@property (assign) char mouseDown;                //@synthesize mouseDown=_mouseDown - In the implementation block
-(void)windowResignedKey:(id)arg1 ;
-(void)setMouseInside:(char)arg1 ;
-(void)_ensureTrackingArea;
-(void)setMouseDown:(char)arg1 ;
-(void)undoMouseDown;
-(char)mouseDown;
-(char)mouseInside;
-(void)dealloc;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)drawBackgroundInRect:(CGRect)arg1 ;
-(void)drawSeparatorInRect:(CGRect)arg1 ;
@end

