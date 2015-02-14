/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SOServerPageDelegate;
@class WebView, NSString, NSAlert;

@interface SOServerPage : NSObject {

	id<SOServerPageDelegate> _delegate;
	WebView* _view;
	NSString* _name;
	NSString* _leftButtonCallback;
	NSString* _rightButtonCallback;
	NSString* _resizeFinishedCallback;
	NSString* _authenticationID;
	NSString* _authenticationToken;
	NSString* _resultPlayerID;
	NSString* _resultAppleID;
	NSString* _resultProfileID;
	NSString* _resultToken;
	NSString* _resultPassword;
	NSAlert* _alert;
	NSString* _alertOkAction;
	NSString* _alertCancelAction;
	long long _resultStatus;
	unsigned _loadingBag : 1;

}
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(void)leftButtonClicked:(id)arg1 ;
-(void)rightButtonClicked:(id)arg1 ;
-(void)alertFinishedWithResult:(long long)arg1 ;
-(void)resizeFinished;
-(void)_adjustFrameViewWidth;
-(void)_performCallback:(id)arg1 withArgument:(id)arg2 ;
-(void)_dispatchAlert:(id)arg1 okAction:(id)arg2 cancelAction:(id)arg3 ;
-(id)_fakeSchemeForURL:(id)arg1 ;
-(id)_parametersForURL:(id)arg1 ;
-(void)_handleNavBarCommand:(id)arg1 ;
-(void)_handleAlertCommand:(id)arg1 ;
-(void)_handleConfirmCommand:(id)arg1 ;
-(void)_handlePromptCommand:(id)arg1 ;
-(void)_handleHandoffCommand:(id)arg1 ;
-(void)_handleResizeCommand:(id)arg1 ;
-(void)_cancelLoadingBag;
-(void)_handleServerBagFinishedLoading:(id)arg1 ;
-(char)_handleURL:(id)arg1 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)scrollerStyleChanged:(id)arg1 ;
-(char)_boolForParameter:(id)arg1 ;
-(void)setAuthenticationID:(id)arg1 authenticationToken:(id)arg2 ;
-(id)authenticationID;
-(id)authenticationToken;
-(long long)resultStatus;
-(id)resultPlayerID;
-(id)resultAppleID;
-(id)resultPassword;
-(id)resultToken;
-(id)resultProfileID;
-(unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2 ;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(id)view;
-(id)delegate;
-(void)load;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
@end

