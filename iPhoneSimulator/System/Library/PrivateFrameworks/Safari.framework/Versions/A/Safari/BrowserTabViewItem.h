/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTabViewItem.h>

@class NSString, BrowserWKView, ContinuousReadingListViewController, ScrollableTabBarView, ScrollableTabButton, TabContentView, NSSet;

@interface BrowserTabViewItem : NSTabViewItem {

	NSString* _urlFromScript;
	BrowserWKView* _wkView;
	RefPtr<Safari::BrowserTab>* m_browserTab;
	char _firedOpenEvent;
	char _firedCloseEvent;
	ContinuousReadingListViewController* _continuousReadingListViewController;
	ScrollableTabBarView* _scrollableTabBarView;
	ScrollableTabButton* _scrollableTabButton;

}

@property (nonatomic,retain,readonly) ContinuousReadingListViewController * continuousReadingListViewController;              //@synthesize continuousReadingListViewController=_continuousReadingListViewController - In the implementation block
@property (retain) TabContentView * view; 
@property (nonatomic,copy,readonly) NSSet * allWKViews; 
@property (assign,nonatomic,__weak) ScrollableTabBarView * scrollableTabBarView;                                              //@synthesize scrollableTabBarView=_scrollableTabBarView - In the implementation block
@property (assign,nonatomic,__weak) ScrollableTabButton * scrollableTabButton;                                                //@synthesize scrollableTabButton=_scrollableTabButton - In the implementation block
-(BrowserContentViewController*)browserContentViewController;
-(void)setURLString:(id)arg1 ;
-(id)URLString;
-(char)isInContinuousMode;
-(id)currentContinuousReadingListPageItem;
-(void)exitContinuousMode;
-(void)loadContinuousReadingListPageItem:(id)arg1 ;
-(ContinuousReadingListViewController *)continuousReadingListViewController;
-(id)handleDoJavaScriptCommand:(id)arg1 ;
-(id)handleSearchTheWebCommand:(id)arg1 ;
-(id)handleEmailContentsCommand:(id)arg1 ;
-(NSSet *)allWKViews;
-(id)wkView;
-(BrowserTab*)browserTab;
-(ScrollableTabButton *)scrollableTabButton;
-(id)cachedWKViewInContinuousMode;
-(void)updateLabelNow;
-(id)initWithScrollableTabBarView:(id)arg1 browserTab:(BrowserTab*)arg2 ;
-(char)canBeClosed;
-(void)updateLabelSoon;
-(void)rememberCurrentURLString;
-(char)continuousPageViewIsHandlingPageTransition;
-(ScrollableTabBarView *)scrollableTabBarView;
-(void)setScrollableTabBarView:(ScrollableTabBarView *)arg1 ;
-(void)setScrollableTabButton:(ScrollableTabButton *)arg1 ;
-(void)dealloc;
-(id)title;
-(char)isVisible;
-(id)objectSpecifier;
-(void)setView:(TabContentView *)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)handleCloseScriptCommand:(id)arg1 ;
-(id)source;
-(id)text;
-(unsigned)orderedIndex;
@end

