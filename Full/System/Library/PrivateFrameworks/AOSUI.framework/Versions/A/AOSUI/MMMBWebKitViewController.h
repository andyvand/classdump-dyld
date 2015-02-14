/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AOSUI/MMWebKitControllerDelegate.h>

@protocol MBUIDelegate, MBWebKitViewControllerDelegate;
@class MMWebKitController, NSView, MMJSDialogController, NSString, NSDictionary, WebView;

@interface MMMBWebKitViewController : NSObject <MMWebKitControllerDelegate> {

	id<MBUIDelegate> _mbUIDelegate;
	id<MBWebKitViewControllerDelegate> _mbWebKitViewControllerDelegate;
	MMWebKitController* _webKitController;
	NSView* _parentView;
	MMJSDialogController* _mmJSDialogController;
	NSString* _accountID;
	NSString* _password;
	NSDictionary* _delegatePlist;
	OpaqueJSValueRef _leftButtonCallback;
	OpaqueJSValueRef _rightButtonCallback;
	char _supportsWindowResize;
	struct {
		unsigned delegateSetWindowTitle : 1;
		unsigned delegateSetWindowMessage : 1;
		unsigned delegateSetLeftButtonTitle : 1;
		unsigned delegateSetLeftButtonEnabled : 1;
		unsigned delegateSetRightButtonTitle : 1;
		unsigned delegateSetRightButtonEnabled : 1;
		unsigned delegateSaveFile : 1;
		unsigned delegateShowTerms : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidSucceed : 1;
		unsigned delegateDidFinishLoading : 1;
		unsigned delegateDidFail : 1;
		unsigned padding : 5;
	}  _flags;

}

@property (assign,nonatomic) id<MBUIDelegate> mbUIDelegate;                                                  //@synthesize mbUIDelegate=_mbUIDelegate - In the implementation block
@property (assign,nonatomic) id<MBWebKitViewControllerDelegate> mbWebKitViewControllerDelegate;              //@synthesize mbWebKitViewControllerDelegate=_mbWebKitViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) WebView * webView; 
@property (nonatomic,retain) NSView * parentView;                                                            //@synthesize parentView=_parentView - In the implementation block
@property (nonatomic,copy) NSString * accountID;                                                             //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * password;                                                              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSDictionary * delegatePlist;                                                     //@synthesize delegatePlist=_delegatePlist - In the implementation block
@property (assign,nonatomic) char supportsWindowResize;                                                      //@synthesize supportsWindowResize=_supportsWindowResize - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef leftButtonCallback;                                            //@synthesize leftButtonCallback=_leftButtonCallback - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef rightButtonCallback;                                           //@synthesize rightButtonCallback=_rightButtonCallback - In the implementation block
@property (nonatomic,retain) MMWebKitController * webKitController;                                          //@synthesize webKitController=_webKitController - In the implementation block
@property (nonatomic,retain) MMJSDialogController * mmJSDialogController;                                    //@synthesize mmJSDialogController=_mmJSDialogController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(WebView *)webView;
-(void)setWebKitController:(MMWebKitController *)arg1 ;
-(void)setSupportsWindowResize:(char)arg1 ;
-(MMWebKitController *)webKitController;
-(void)loadURLRequest:(id)arg1 ;
-(void)mmWebView:(id)arg1 setFrame:(CGRect)arg2 ;
-(void)mmWebKitControllerConfigureForFrame:(id)arg1 ;
-(void)mmWebKitControllerDidCancel:(id)arg1 ;
-(void)mmWebKitControllerDidSucceed:(id)arg1 ;
-(void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2 ;
-(void)mmWebKitControllerDidFinishLoading:(id)arg1 ;
-(MMJSDialogController *)mmJSDialogController;
-(void)setMmJSDialogController:(MMJSDialogController *)arg1 ;
-(char)supportsWindowResize;
-(void)setMbUIDelegate:(id<MBUIDelegate>)arg1 ;
-(OpaqueJSValueRef)leftButtonCallback;
-(void)setLeftButtonCallback:(OpaqueJSValueRef)arg1 ;
-(OpaqueJSValueRef)rightButtonCallback;
-(void)setRightButtonCallback:(OpaqueJSValueRef)arg1 ;
-(void)_window:(id)arg1 setFrame:(CGRect)arg2 ;
-(id<MBWebKitViewControllerDelegate>)mbWebKitViewControllerDelegate;
-(id)initMBWebKitViewControllerInView:(id)arg1 mbUIDelegate:(id)arg2 ;
-(void)leftNavigationButtonClicked:(id)arg1 ;
-(void)rightNavigationButtonClicked:(id)arg1 ;
-(void)setMbWebKitViewControllerDelegate:(id<MBWebKitViewControllerDelegate>)arg1 ;
-(id<MBUIDelegate>)mbUIDelegate;
-(NSDictionary *)delegatePlist;
-(void)setDelegatePlist:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(NSView *)parentView;
-(void)setParentView:(NSView *)arg1 ;
@end

