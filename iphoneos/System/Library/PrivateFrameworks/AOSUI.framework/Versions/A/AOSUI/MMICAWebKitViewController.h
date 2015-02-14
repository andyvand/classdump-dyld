/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AOSUI/MMWebKitControllerDelegate.h>
#import <AOSUI/InternetAccountExports.h>

@protocol ICAUIDelegate, ICAWebKitViewControllerDelegate;
@class NSDictionary, JSValue, MMWebKitController, NSView, NSWindow, MMJSDialogController, JSContext, NSString, WebView;

@interface MMICAWebKitViewController : NSObject <MMWebKitControllerDelegate, InternetAccountExports> {

	id<ICAUIDelegate> _icaUIDelegate;
	id<ICAWebKitViewControllerDelegate> _icaWebKitViewControllerDelegate;
	MMWebKitController* _webKitController;
	NSView* _parentView;
	NSWindow* _parentWindow;
	MMJSDialogController* _mmJSDialogController;
	JSContext* _jsContext;
	NSString* _accountID;
	NSString* _location;
	NSDictionary* _buttonBarDict;
	NSDictionary* _workflowDict;
	char _supportsWindowResize;
	unsigned long long _gsType;
	struct {
		unsigned delegateDidEnd : 1;
		unsigned delegateDidFinishLoading : 1;
		unsigned delegateDidFail : 1;
		unsigned delegateDidChangePassword : 1;
		unsigned padding : 4;
	}  _flags;

}

@property (assign,nonatomic) id<ICAUIDelegate> icaUIDelegate;                                                  //@synthesize icaUIDelegate=_icaUIDelegate - In the implementation block
@property (assign,nonatomic) id<ICAWebKitViewControllerDelegate> icaWebKitViewControllerDelegate;              //@synthesize icaWebKitViewControllerDelegate=_icaWebKitViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) WebView * webView; 
@property (nonatomic,retain) JSContext * jsContext;                                                            //@synthesize jsContext=_jsContext - In the implementation block
@property (assign,nonatomic) NSView * parentView;                                                              //@synthesize parentView=_parentView - In the implementation block
@property (assign,nonatomic) NSWindow * parentWindow;                                                          //@synthesize parentWindow=_parentWindow - In the implementation block
@property (assign,nonatomic) char supportsWindowResize;                                                        //@synthesize supportsWindowResize=_supportsWindowResize - In the implementation block
@property (assign,nonatomic) unsigned long long gsType;                                                        //@synthesize gsType=_gsType - In the implementation block
@property (nonatomic,retain) NSDictionary * buttonBarDict;                                                     //@synthesize buttonBarDict=_buttonBarDict - In the implementation block
@property (nonatomic,retain) NSDictionary * workflowDict;                                                      //@synthesize workflowDict=_workflowDict - In the implementation block
@property (retain) MMWebKitController * webKitController;                                                      //@synthesize webKitController=_webKitController - In the implementation block
@property (retain) MMJSDialogController * mmJSDialogController;                                                //@synthesize mmJSDialogController=_mmJSDialogController - In the implementation block
@property (nonatomic,copy) NSString * accountID;                                                               //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * location;                                                                //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long protocolVersion; 
@property (nonatomic,readonly) NSDictionary * environment; 
@property (nonatomic,readonly) NSDictionary * account; 
@property (setter=icaSetButtonBar:,getter=icaButtonBar,nonatomic,retain) JSValue * buttonBar; 
@property (nonatomic,readonly) NSDictionary * workflow; 
-(NSDictionary *)workflow;
-(NSDictionary *)environment;
-(WebView *)webView;
-(id)logLevel;
-(void)reload;
-(unsigned long long)protocolVersion;
-(id)authToken;
-(id)osBuild;
-(void)setWebKitController:(MMWebKitController *)arg1 ;
-(void)setIcaUIDelegate:(id<ICAUIDelegate>)arg1 ;
-(void)setSupportsWindowResize:(char)arg1 ;
-(id)initWebKitViewControllerInView:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 location:(id)arg4 ;
-(void)setWorkflowDict:(NSDictionary *)arg1 ;
-(void)setIcaWebKitViewControllerDelegate:(id<ICAWebKitViewControllerDelegate>)arg1 ;
-(JSContext *)jsContext;
-(void)endWebKitViewController;
-(MMWebKitController *)webKitController;
-(void)loadURLRequest:(id)arg1 ;
-(id)webViewURL;
-(void)setJsContext:(JSContext *)arg1 ;
-(id<ICAWebKitViewControllerDelegate>)icaWebKitViewControllerDelegate;
-(int)osMajorVersion;
-(int)osMinorVersion;
-(int)osRevision;
-(id)dateFieldsOrder;
-(char)differentiateWithoutColorEnabled;
-(id)clientVersion;
-(id)timezoneRegion;
-(id<ICAUIDelegate>)icaUIDelegate;
-(id)theme;
-(id)dsid;
-(id)appleIDGSID;
-(id)iCloudGSID;
-(id)anisetteMID;
-(id)anisetteOTP;
-(id)getMASAccount;
-(id)getiBooksAccount;
-(id)getiTunesAccount;
-(id)apnsPushToken;
-(id)altDSID;
-(NSDictionary *)workflowDict;
-(void)setButtonBarDict:(NSDictionary *)arg1 ;
-(void)icaSetButtonBar:(id)arg1 ;
-(NSDictionary *)buttonBarDict;
-(void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3 ;
-(void)exitWebView:(id)arg1 ;
-(void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5 ;
-(void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5 ;
-(id)getCroppedImageFromServerForDSID:(id)arg1 ;
-(void)retriveFromServer:(id)arg1 callback:(id)arg2 fallBackToLocal:(char)arg3 dsid:(id)arg4 ;
-(void)showNativeAddFamilyMember;
-(void)showSpinnerWithLabelOnNativeScreen:(id)arg1 ;
-(unsigned long long)gsType;
-(void)reauthenticateAlways:(id)arg1 callback:(id)arg2 ;
-(void)getLocalContactInfo:(id)arg1 callback:(id)arg2 retrieveFromServer:(char)arg3 dsid:(id)arg4 ;
-(void)getContactInfo:(id)arg1 callback:(id)arg2 ;
-(void)mmWebKitControllerDidCreateJavaScriptContext:(id)arg1 forFrame:(id)arg2 ;
-(void)mmWebKitControllerDidCancel:(id)arg1 ;
-(void)mmWebKitControllerDidSucceed:(id)arg1 ;
-(void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2 ;
-(void)mmWebKitControllerDidFinishLoading:(id)arg1 ;
-(void)log:(id)arg1 message:(id)arg2 ;
-(void)webClientIsReady;
-(void)showAlert:(id)arg1 callback:(id)arg2 ;
-(void)goToView:(id)arg1 section:(id)arg2 ;
-(void)refreshView:(id)arg1 section:(id)arg2 ;
-(void)webClientDidUpdatePassword:(id)arg1 newPassword:(id)arg2 appleID:(id)arg3 ;
-(void)getPhotoForContact:(id)arg1 orFirstName:(id)arg2 orLastName:(id)arg3 callback:(id)arg4 ;
-(void)getContactInfoNew:(id)arg1 callback:(id)arg2 retrieveFromServer:(char)arg3 preferServerVersionToLocal:(char)arg4 dsid:(id)arg5 ;
-(void)reauthenticate:(id)arg1 callback:(id)arg2 ;
-(void)getNASToken:(id)arg1 ;
-(void)openExternalURL:(id)arg1 ;
-(void)openHelp:(id)arg1 ;
-(void)webClientHasLoaded;
-(id)icaButtonBar;
-(id)initWebKitViewControllerInWindow:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 location:(id)arg4 ;
-(id)initWebKitViewControllerInView:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 ;
-(id)initWebKitViewControllerInWindow:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 ;
-(id)initWebKitViewControllerInView:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 inviteDict:(id)arg4 ;
-(id)initWebKitViewControllerInView:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 workflowDict:(id)arg4 ;
-(void)loadHTMLContent:(id)arg1 withParentURL:(id)arg2 ;
-(char)willChangeToLocation:(id)arg1 toSection:(id)arg2 withContext:(id)arg3 ;
-(void)didChangeToLocation:(id)arg1 toSection:(id)arg2 withContext:(id)arg3 ;
-(void)wasNotifiedOfDataChange:(id)arg1 ;
-(char)_isTransactionSuccessful:(AOSTransactionCRef)arg1 ;
-(id)_errorFromTransaction:(AOSTransactionCRef)arg1 ;
-(MMJSDialogController *)mmJSDialogController;
-(void)setMmJSDialogController:(MMJSDialogController *)arg1 ;
-(char)supportsWindowResize;
-(void)setGsType:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSWindow *)parentWindow;
-(void)endSheet:(id)arg1 ;
-(id)firstName;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(id)client;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)accountID;
-(NSDictionary *)account;
-(id)lastName;
-(void)setAccountID:(NSString *)arg1 ;
-(NSView *)parentView;
-(void)setParentView:(NSView *)arg1 ;
@end

