/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTabView;

@interface NSTabViewButtons : NSView {

	NSTabView* _tabView;

}

@property (assign) NSTabView * tabView;              //@synthesize tabView=_tabView - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(char)isFlipped;
-(char)wantsUpdateLayer;
-(char)allowsVibrancy;
-(id)_vibrancyFilter;
-(NSTabView *)tabView;
-(void)setTabView:(NSTabView *)arg1 ;
@end

