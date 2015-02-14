/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ScrollViewPlus.h>

@protocol SidebarScrollViewAccessibilityDelegate;
@class SidebarPocketView;

@interface SidebarScrollView : ScrollViewPlus {

	SidebarPocketView* _bottomPocketView;
	SidebarPocketView* _topPocketView;
	char _wantsBottomPocket;
	char _wantsTopPocket;
	id<SidebarScrollViewAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic) char wantsBottomPocket;                                                               //@synthesize wantsBottomPocket=_wantsBottomPocket - In the implementation block
@property (assign,nonatomic) char wantsTopPocket;                                                                  //@synthesize wantsTopPocket=_wantsTopPocket - In the implementation block
@property (assign,nonatomic,__weak) id<SidebarScrollViewAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
-(id<SidebarScrollViewAccessibilityDelegate>)accessibilityDelegate;
-(void)setAccessibilityDelegate:(id<SidebarScrollViewAccessibilityDelegate>)arg1 ;
-(void)setWantsBottomPocket:(char)arg1 ;
-(void)_updatePocketViews;
-(id)_accessibilityElements:(id)arg1 withDelegateChildren:(id)arg2 ;
-(void)setWantsTopPocket:(char)arg1 ;
-(char)wantsBottomPocket;
-(char)wantsTopPocket;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)reflectScrolledClipView:(id)arg1 ;
@end

