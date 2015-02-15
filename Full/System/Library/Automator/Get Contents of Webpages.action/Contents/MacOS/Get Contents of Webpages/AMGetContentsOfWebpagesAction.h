/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:56:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Get Contents of Webpages.action/Contents/MacOS/Get Contents of Webpages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSMutableArray;

@interface AMGetContentsOfWebpagesAction : AMBundleAction {

	NSMutableArray* _webViewLoadingErrors;
	char _webViewHasFinishedLoading;

}

@property (retain) NSMutableArray * webViewLoadingErrors;              //@synthesize webViewLoadingErrors=_webViewLoadingErrors - In the implementation block
@property (assign) char webViewHasFinishedLoading;                     //@synthesize webViewHasFinishedLoading=_webViewHasFinishedLoading - In the implementation block
-(void)setWebViewHasFinishedLoading:(char)arg1 ;
-(id)_webArchiveFromURL:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)webViewLoadingErrors;
-(char)webViewHasFinishedLoading;
-(void)setWebViewLoadingErrors:(NSMutableArray *)arg1 ;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)dealloc;
@end

