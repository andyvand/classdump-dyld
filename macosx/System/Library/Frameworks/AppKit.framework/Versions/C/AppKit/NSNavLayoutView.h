/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSNavFlippedView.h>

@interface NSNavLayoutView : NSNavFlippedView {

	char _needsLayout;
	id _delegate;

}

@property (assign) char needsLayout;              //@synthesize needsLayout=_needsLayout - In the implementation block
@property (assign) id delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setNeedsLayout:(char)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewWillDraw;
-(char)needsLayout;
@end

