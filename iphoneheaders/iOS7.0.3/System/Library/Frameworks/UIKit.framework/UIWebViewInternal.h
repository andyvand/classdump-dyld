/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebViewDelegate;
@class UIScrollView, UIWebBrowserView, UICheckeredPatternView, , NSURLRequest, UIWebViewWebViewDelegate, UIWebPDFViewHandler;

@interface UIWebViewInternal : NSObject {

	UIScrollView* scroller;
	UIWebBrowserView* browserView;
	UICheckeredPatternView* checkeredPatternView;
	<UIWebViewDelegate>* delegate;
	unsigned scalesPageToFit : 1;
	unsigned isLoading : 1;
	unsigned hasOverriddenOrientationChangeEventHandling : 1;
	unsigned drawsCheckeredPattern : 1;
	unsigned webSelectionEnabled : 1;
	unsigned drawInWebThread : 1;
	unsigned inRotation : 1;
	NSURLRequest* request;
	int clickedAlertButtonIndex;
	UIWebViewWebViewDelegate* webViewDelegate;
	UIWebPDFViewHandler* pdfHandler;

}
@end
