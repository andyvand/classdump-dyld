/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <Safari/SidebarTopBarViewDelegate.h>
#import <Safari/SafariViewDelegate.h>

@protocol SidebarContentViewControllerCustomKeyViewLoopSidebarContentFiltering;
@class NSViewController, SidebarContainerView, NSView, SidebarTopBarView, BookmarksSidebarViewController, AutomaticReadingListSidebarViewController, ReadingListSidebarViewController, NSString;

@interface SidebarViewController : NSViewController <SidebarTopBarViewDelegate, SafariViewDelegate> {

	NSViewController*<SidebarContentViewController>*<CustomKeyViewLoop>*<SidebarContentFiltering> _currentViewController;
	char _sidebarHasBeenInitialized;
	SidebarContainerView* _containerView;
	NSView* _contentView;
	SidebarTopBarView* _topBarView;
	BookmarksSidebarViewController* _bookmarksSidebarViewController;
	AutomaticReadingListSidebarViewController* _automaticReadingListSidebarViewController;
	ReadingListSidebarViewController* _readingListSidebarViewController;

}

@property (nonatomic,retain) BookmarksSidebarViewController * bookmarksSidebarViewController;                                    //@synthesize bookmarksSidebarViewController=_bookmarksSidebarViewController - In the implementation block
@property (nonatomic,retain) AutomaticReadingListSidebarViewController * automaticReadingListSidebarViewController;              //@synthesize automaticReadingListSidebarViewController=_automaticReadingListSidebarViewController - In the implementation block
@property (nonatomic,retain) ReadingListSidebarViewController * readingListSidebarViewController;                                //@synthesize readingListSidebarViewController=_readingListSidebarViewController - In the implementation block
@property (readonly) char bookmarksSidebarIsShowing; 
@property (readonly) char readingListSidebarIsShowing; 
@property (readonly) char socialLinksSidebarIsShowing; 
@property (nonatomic,retain) id currentSidebarModeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerDefaults;
+(void)setDefaultSidebarViewMode:(id)arg1 ;
+(char)canShowReadingListSidebar;
-(char)readingListSidebarIsShowing;
-(char)socialLinksSidebarIsShowing;
-(void)updateSidebarSelection;
-(ReadingListSidebarViewController *)readingListSidebarViewController;
-(AutomaticReadingListSidebarViewController *)automaticReadingListSidebarViewController;
-(char)bookmarksSidebarIsShowing;
-(BookmarksSidebarViewController *)bookmarksSidebarViewController;
-(void)updateSharedLinksSidebar;
-(void)setSidebarViewMode:(id)arg1 ;
-(void)sidebarWillOpen;
-(void)sidebarDidReveal;
-(void)sidebarWillClose;
-(char)isSidebarSearchField:(id)arg1 ;
-(CGRect)readingListTopBarButtonFrame;
-(CGRect)bookmarksTopBarButtonFrame;
-(void)delegatingViewDidMoveToWindow:(id)arg1 ;
-(id)childKeyViewsForDelegatingView:(id)arg1 ;
-(id)accessibilityChildrenForDelegatingView:(id)arg1 ;
-(void)sidebarTopBarView:(id)arg1 selectedTabIdentifierDidChange:(id)arg2 ;
-(CGRect)_topBarButtonFrameForTabWithIdentifier:(id)arg1 ;
-(void)_activateViewControllerWithIdentifier:(id)arg1 ;
-(id)currentSidebarModeIdentifier;
-(void)_installViewForActiveMode;
-(void)setCurrentSidebarModeIdentifier:(id)arg1 ;
-(void)setBookmarksSidebarViewController:(BookmarksSidebarViewController *)arg1 ;
-(void)setAutomaticReadingListSidebarViewController:(AutomaticReadingListSidebarViewController *)arg1 ;
-(void)setReadingListSidebarViewController:(ReadingListSidebarViewController *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
@end

