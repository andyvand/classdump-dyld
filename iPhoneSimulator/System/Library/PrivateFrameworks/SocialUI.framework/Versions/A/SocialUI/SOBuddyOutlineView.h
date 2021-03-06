/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSOutlineView.h>

@protocol SOBuddyOutlineViewMouseDelegate;
@interface SOBuddyOutlineView : NSOutlineView {

	unsigned _delegateRespondsToMouseUp : 1;
	unsigned _delegateRespondsToMouseDown : 1;
	id<SOBuddyOutlineViewMouseDelegate> _mouseDelegate;

}

@property (assign,nonatomic,__weak) id<SOBuddyOutlineViewMouseDelegate> mouseDelegate;              //@synthesize mouseDelegate=_mouseDelegate - In the implementation block
-(void)setMouseDelegate:(id<SOBuddyOutlineViewMouseDelegate>)arg1 ;
-(id<SOBuddyOutlineViewMouseDelegate>)mouseDelegate;
-(void)reloadData;
-(void)mouseDown:(id)arg1 ;
-(CGRect)frameOfOutlineCellAtRow:(long long)arg1 ;
@end

