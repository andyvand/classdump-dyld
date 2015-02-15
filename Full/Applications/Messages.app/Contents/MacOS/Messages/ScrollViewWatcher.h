/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <Messages/NSScrollViewDelegate.h>
#import <Messages/FezUserScrollEventDelegate.h>

@class NSScrollView, FezWebView, NSString;

@interface ScrollViewWatcher : NSObject <NSScrollViewDelegate, FezUserScrollEventDelegate> {

	char _isPinnedToBottom;
	char _watchingForBoundsChange;
	char _isWheelEvent;
	NSScrollView* _scrollView;
	FezWebView* _webView;
	double _lastScrollChange;
	double _lastDistanceFromBottom;

}

@property (assign,nonatomic) char isPinnedToBottom;                 //@synthesize isPinnedToBottom=_isPinnedToBottom - In the implementation block
@property (__weak) NSScrollView * scrollView;                       //@synthesize scrollView=_scrollView - In the implementation block
@property (__weak) FezWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (assign) double lastScrollChange;                         //@synthesize lastScrollChange=_lastScrollChange - In the implementation block
@property (assign) char watchingForBoundsChange;                    //@synthesize watchingForBoundsChange=_watchingForBoundsChange - In the implementation block
@property (assign) double lastDistanceFromBottom;                   //@synthesize lastDistanceFromBottom=_lastDistanceFromBottom - In the implementation block
@property (assign,nonatomic) char isWheelEvent;                     //@synthesize isWheelEvent=_isWheelEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_boundsChanged:(id)arg1 ;
-(char)isPinnedToBottom;
-(void)setIsPinnedToBottom:(char)arg1 ;
-(double)lastDistanceFromBottom;
-(void)setLastDistanceFromBottom:(double)arg1 ;
-(id)initWithScrollView:(id)arg1 webView:(id)arg2 ;
-(void)userPerformedScrollAction;
-(void)fezWebView:(id)arg1 userPerformedScrollEvent:(id)arg2 ;
-(void)_scrollEvent:(id)arg1 ;
-(void)_wheelEvent:(id)arg1 ;
-(void)setWatchingForBoundsChange:(char)arg1 ;
-(void)setLastScrollChange:(double)arg1 ;
-(double)_distanceFromBottom;
-(void)_watchForBoundsChange;
-(double)lastScrollChange;
-(char)watchingForBoundsChange;
-(char)isWheelEvent;
-(void)setIsWheelEvent:(char)arg1 ;
-(FezWebView *)webView;
-(void)setWebView:(FezWebView *)arg1 ;
-(void)dealloc;
-(NSScrollView *)scrollView;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(void)didEndScrollInScrollView:(id)arg1 ;
-(void)didBeginScrollInScrollView:(id)arg1 ;
-(void)didScrollInScrollView:(id)arg1 ;
@end
