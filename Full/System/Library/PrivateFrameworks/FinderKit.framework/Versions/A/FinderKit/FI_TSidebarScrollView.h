/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSScrollView.h>

@class NSView;

@interface FI_TSidebarScrollView : NSScrollView {

	TNSRef<NSView *> _topBarMirrorView;

}

@property (nonatomic,retain) NSView * topBarMirrorView; 
-(NSView *)topBarMirrorView;
-(void)setTopBarMirrorView:(NSView *)arg1 ;
-(void)_handleBoundsChangeForSubview:(id)arg1 ;
@end

