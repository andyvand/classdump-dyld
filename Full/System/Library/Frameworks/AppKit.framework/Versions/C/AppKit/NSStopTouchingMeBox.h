/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBox.h>

@class NSView;

@interface NSStopTouchingMeBox : NSBox {

	NSView* sibling1;
	NSView* sibling2;
	double offset;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)tile;
-(void)viewDidEndLiveResize;
-(void)setSibling1:(id)arg1 ;
-(void)setSibling2:(id)arg1 ;
-(void)setOffset:(double)arg1 ;
@end

