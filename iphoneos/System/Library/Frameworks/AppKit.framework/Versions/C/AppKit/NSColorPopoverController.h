/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <AppKit/NSColorPickerMatrixViewDelegate.h>

@class NSColorPickerMatrixView, NSButton, NSPopover, NSString;

@interface NSColorPopoverController : NSViewController <NSColorPickerMatrixViewDelegate> {

	NSColorPickerMatrixView* _colorMatrixView;
	NSButton* _colorPanelButton;
	NSPopover* _popover;
	id _delegate;

}

@property (assign) NSColorPickerMatrixView * colorMatrixView;              //@synthesize colorMatrixView=_colorMatrixView - In the implementation block
@property (assign) NSButton * colorPanelButton;                            //@synthesize colorPanelButton=_colorPanelButton - In the implementation block
@property (assign) NSPopover * popover;                                    //@synthesize popover=_popover - In the implementation block
@property (assign) id delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)_loadViewIfNecessary;
-(void)matrixColorPicker:(id)arg1 selectedColor:(id)arg2 ;
-(void)_showColorPanel:(id)arg1 ;
-(NSColorPickerMatrixView *)colorMatrixView;
-(NSButton *)colorPanelButton;
-(void)setColorMatrixView:(NSColorPickerMatrixView *)arg1 ;
-(void)setColorPanelButton:(NSButton *)arg1 ;
-(NSPopover *)popover;
-(void)setPopover:(NSPopover *)arg1 ;
@end

