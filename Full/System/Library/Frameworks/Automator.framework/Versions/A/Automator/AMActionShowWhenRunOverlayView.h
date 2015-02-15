/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>

@class NSButton, NSBezierPath, NSDictionary, NSGradient;

@interface AMActionShowWhenRunOverlayView : NSView {

	NSButton* _button;
	NSBezierPath* _buttonPath;
	NSBezierPath* _itemPath;
	NSDictionary* _showWhenRunItemDictionary;
	NSGradient* _gradient;

}

@property (retain) NSDictionary * showWhenRunItemDictionary;              //@synthesize showWhenRunItemDictionary=_showWhenRunItemDictionary - In the implementation block
-(void)setShowWhenRunItemDictionary:(NSDictionary *)arg1 ;
-(void)selectedChanged:(id)arg1 ;
-(NSDictionary *)showWhenRunItemDictionary;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)viewDidMoveToSuperview;
@end

