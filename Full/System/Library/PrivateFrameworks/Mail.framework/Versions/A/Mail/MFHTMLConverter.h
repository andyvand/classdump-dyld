/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/NSPortDelegate.h>

@class NSPort, NSData, WebView, NSString;

@interface MFHTMLConverter : NSObject <NSPortDelegate> {

	NSPort* _replyPort;
	char _didHandlePortMessage;
	unsigned _sequenceNumber;
	NSData* _resultData;
	WebView* _webView;
	long long _mainThreadSelectorType;

}

@property (nonatomic,retain) NSData * resultData;                           //@synthesize resultData=_resultData - In the implementation block
@property (nonatomic,retain) WebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                       //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) char didHandlePortMessage;                     //@synthesize didHandlePortMessage=_didHandlePortMessage - In the implementation block
@property (assign,nonatomic) long long mainThreadSelectorType;              //@synthesize mainThreadSelectorType=_mainThreadSelectorType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(WebView *)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)setMainThreadSelectorType:(long long)arg1 ;
-(void)_loadWebViewOnMainThreadFromData:(id)arg1 withTextEncodingName:(id)arg2 orFromWebArchive:(id)arg3 ;
-(void)setDidHandlePortMessage:(char)arg1 ;
-(void)setResultData:(NSData *)arg1 ;
-(void)setWebView:(WebView *)arg1 ;
-(void)_setUpWebView;
-(char)didHandlePortMessage;
-(void)_stopLoadingWebView;
-(long long)mainThreadSelectorType;
-(id)_archivedAttributedStringFromLoadedDocument;
-(id)_archivedDataFromLoadedDocument;
-(id)_archivedHTMLStringWithInlinedStyleFromLoadedDocument;
-(void)webView:(id)arg1 locationChangeDone:(id)arg2 forDataSource:(id)arg3 ;
-(id)attributedStringFromWebArchive:(id)arg1 ;
-(id)junkStringFromHTMLData:(id)arg1 textEncodingName:(id)arg2 context:(id)arg3 ;
-(id)htmlStringWithInlinedStyleFromHTMLData:(id)arg1 textEncodingName:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(NSData *)resultData;
-(id)init;
-(void)dealloc;
-(unsigned)sequenceNumber;
-(void)handlePortMessage:(id)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
@end

