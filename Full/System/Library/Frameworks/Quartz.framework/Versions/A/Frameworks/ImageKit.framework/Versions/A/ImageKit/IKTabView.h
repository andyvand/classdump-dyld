/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSArray, NSString;

@interface IKTabView : NSView {

	id _delegate;
	NSArray* _tabs;
	NSString* _selectedTabTitle;

}

@property (assign) id delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSArray * tabs;                         //@synthesize tabs=_tabs - In the implementation block
@property (copy) NSString * selectedTabTitle;              //@synthesize selectedTabTitle=_selectedTabTitle - In the implementation block
-(NSArray *)tabs;
-(void)adjustDisplayModes:(long long)arg1 ;
-(void)setTabs:(NSArray *)arg1 ;
-(NSString *)selectedTabTitle;
-(void)selectionChanged:(id)arg1 ;
-(id)nonSelectedColor;
-(id)selectedTabTextColor;
-(id)nonSelectedTabTextColor;
-(void)drawTab:(CGRect)arg1 title:(id)arg2 enabled:(char)arg3 ;
-(void)setSelectedTabTitle:(NSString *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)delegate;
-(void)mouseDown:(id)arg1 ;
-(id)selectedColor;
-(void)setup;
@end

