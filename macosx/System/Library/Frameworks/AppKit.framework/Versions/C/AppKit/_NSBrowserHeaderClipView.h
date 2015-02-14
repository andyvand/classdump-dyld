/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSClipView.h>

@class NSView;

@interface _NSBrowserHeaderClipView : NSClipView {

	NSView* _headerView;

}

@property (nonatomic,retain) NSView * headerView;              //@synthesize headerView=_headerView - In the implementation block
-(void)dealloc;
-(void)setHeaderView:(NSView *)arg1 ;
-(NSView *)headerView;
-(void)_handleFrameChangeForSubview:(id)arg1 ;
-(void)_selfBoundsChanged;
-(void)_pinDocRect;
-(CGRect)_currentDocViewFrame;
@end

