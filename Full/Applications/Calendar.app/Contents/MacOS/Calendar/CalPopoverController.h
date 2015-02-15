/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Calendar/NSPopoverDelegate.h>

@class NSPopover, NSView, CALMainController, NSString;

@interface CalPopoverController : NSViewController <NSPopoverDelegate> {

	NSPopover* _popover;
	NSView* _popoverButton;
	CALMainController* _mainController;

}

@property (retain) NSPopover * popover;                                              //@synthesize popover=_popover - In the implementation block
@property (__weak) NSView * popoverButton;                                           //@synthesize popoverButton=_popoverButton - In the implementation block
@property (assign,nonatomic,__weak) CALMainController * mainController;              //@synthesize mainController=_mainController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CALMainController *)mainController;
-(void)setMainController:(CALMainController *)arg1 ;
-(id)initWithPopoverButton:(id)arg1 mainController:(id)arg2 ;
-(NSView *)popoverButton;
-(void)showPopoverRestoreState:(char)arg1 ;
-(void)hidePopoverNow;
-(void)setPopoverButton:(NSView *)arg1 ;
-(void)showPopover;
-(void)hidePopover;
-(char)isShown;
-(NSPopover *)popover;
-(void)setPopover:(NSPopover *)arg1 ;
-(void)cleanup;
@end
