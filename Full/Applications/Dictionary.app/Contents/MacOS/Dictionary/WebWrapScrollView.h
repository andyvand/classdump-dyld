/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Dictionary.app/Contents/MacOS/Dictionary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dictionary/Dictionary-Structs.h>
#import <AppKit/NSScrollView.h>

@class WebView;

@interface WebWrapScrollView : NSScrollView {

	WebView* _webview;
	CGRect _lastSmartZoomTargetRect;

}
-(void)setupWebView:(id)arg1 ;
-(char)processKeyCommand:(SEL)arg1 ;
-(void)setScrollPositionToOffsetInPage:(float)arg1 ;
-(float)scrollPositionFromTopOfPage;
-(char)jumpToSelection;
-(void)scrollToOffset:(float)arg1 animate:(char)arg2 ;
-(void)reflectWebViewChangeWithResetScroll:(char)arg1 ;
-(void)_scrollViewDidEndLiveMagnify:(id)arg1 ;
-(void)_adjustInnerWebView:(char)arg1 ;
-(void)dealloc;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)smartMagnifyWithEvent:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(CGRect)_selectionRect;
@end

