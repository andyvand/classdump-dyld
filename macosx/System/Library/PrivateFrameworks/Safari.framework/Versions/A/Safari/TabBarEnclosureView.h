/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <Safari/RolloverTrackingButtonDelegate.h>

@class NewTabButton, NSString;

@interface TabBarEnclosureView : NSView <RolloverTrackingButtonDelegate> {

	NewTabButton* _newTabButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)collapsedHeight;
-(void)setDrawsBottomOfNewTabButton:(char)arg1 ;
-(void)rolloverTrackingButton:(id)arg1 didMouseDown:(id)arg2 ;
-(void)rolloverTrackingButton:(id)arg1 mouseDidEnterOrExit:(char)arg2 ;
-(void)rolloverTrackingButton:(id)arg1 didMouseUp:(id)arg2 ;
-(CGRect)_newTabButtonFrame;
-(void)drawRect:(CGRect)arg1 ;
-(void)_windowChangedKeyState;
@end

