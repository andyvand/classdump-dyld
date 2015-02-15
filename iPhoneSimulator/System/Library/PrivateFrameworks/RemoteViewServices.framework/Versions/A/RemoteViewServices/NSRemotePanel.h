/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteViewServices/RemoteViewServices-Structs.h>
#import <RemoteViewServices/NSRemoteServiceConnectionDelegate.h>

@class NSRemoteWindowController, NSRemoteServiceConnection, NSRemotePanelOrderingContext, NSView, NSAccessoryWindow, NSString, NSError;

@interface NSRemotePanel : NSObject <NSRemoteServiceConnectionDelegate> {

	NSRemoteWindowController* _windowController;
	NSRemoteServiceConnection* _serviceConnection;
	unsigned long long _state;
	dispatch_queue_sRef _serviceQueue;
	dispatch_semaphore_sRef _semaphore;
	/*^block*/id _completionHandler;
	NSRemotePanelOrderingContext* _orderingContext;
	NSView* _accessoryView;
	NSAccessoryWindow* _accessoryWindow;
	id _delegate;
	NSString* _prompt;
	NSString* _title;
	NSString* _alertMessage;
	NSString* _alertInformationMessage;
	NSError* _currentErrorBeingHandled;
	struct {
		unsigned isFloating : 1;
		unsigned becomesKeyOnlyIfNeeded : 1;
		unsigned worksWhenModal : 1;
		unsigned isSheet : 1;
		unsigned useAlertStyle : 1;
		unsigned mainThreadKVOIsActive : 1;
		unsigned reserved : 26;
	}  _rpFlags;

}

@property (assign) id delegate;                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * prompt;                                                                   //@synthesize prompt=_prompt - In the implementation block
@property (retain) NSString * title;                                                                    //@synthesize title=_title - In the implementation block
@property (assign) char isSheet; 
@property (retain) NSView * accessoryView; 
@property (readonly) NSRemoteWindowController * controller;                                             //@synthesize windowController=_windowController - In the implementation block
@property (readonly) char isRunning; 
@property (copy) id completionHandler;                                                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSRemotePanelOrderingContext * orderingContext;                                      //@synthesize orderingContext=_orderingContext - In the implementation block
@property (setter=_setUseAlertStyle:,getter=_useAlertStyle) char useAlertStyle; 
@property (setter=_setAlertMessage:,retain) NSString * alertMessage;                                    //@synthesize alertMessage=_alertMessage - In the implementation block
@property (setter=_setAlertInformativeMessage:,retain) NSString * alertInformationMessage;              //@synthesize alertInformationMessage=_alertInformationMessage - In the implementation block
+(id)keyPathsForPanelSettings;
+(id)getURLsForCompletionHandlerRequest:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)_setDefaultSettings;
-(void)_invalidatePBOXRemotePanelSession;
-(NSRemotePanelOrderingContext *)orderingContext;
-(void)setOrderingContext:(NSRemotePanelOrderingContext *)arg1 ;
-(char)_initRemotePanelSession;
-(char)asyncSelectFirstResponderWithDirection:(unsigned long long)arg1 ;
-(unsigned long long)_panelType;
-(void)_sendPanelCompletionRequest:(unsigned long long)arg1 ;
-(void)_registerForKVOStateChange;
-(id)_accessibilityRequestTokensWithParent:(id)arg1 ;
-(void)_accessibilityApplyReplyTokens:(id)arg1 windowElement:(id)arg2 ;
-(char)_createAuxiliaryConnection;
-(void)setIsSheet:(char)arg1 ;
-(void)_runOrderingOperationWithContext:(id)arg1 ;
-(NSString *)alertMessage;
-(NSString *)alertInformationMessage;
-(void)_accessibilityHandleEnhancedUserInterfaceValueChanged:(id)arg1 ;
-(void)_accessibilityRemotePanelCompleted;
-(void)_unregisterForKVOStateChange;
-(void)_handleShouldEnableURLDelegate:(id)arg1 ;
-(void)_handlePanelWillExpandDelegate:(id)arg1 ;
-(void)_attemptRecoveryFromErrorForRequest:(id)arg1 ;
-(void)_handlePanelComplete:(id)arg1 ;
-(void)_handleAccessoryViewResignedFirstResponder:(id)arg1 ;
-(void)_handleKVOStateDidChange:(id)arg1 ;
-(void)_handlePerformKeyEquivalent:(id)arg1 ;
-(void)_handleSetPresentationOptions:(id)arg1 ;
-(void)tellRemotePanelAccessoryViewBecameFirstResponder;
-(void)controller:(id)arg1 hasWindowAvailable:(id)arg2 ;
-(id)getObservedkeyPathsForPanelSettings;
-(char)mainThreadKVOActive;
-(id)dictionaryForObservedValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)serializeSettings;
-(void)panelCompletedWithRequest:(id)arg1 ;
-(void)panelCompletedWithNewDocumentRequest;
-(void)setMainThreadKVOActive:(char)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSRemoteWindowController *)controller;
-(id)contentView;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)orderOut:(id)arg1 ;
-(char)isSheet;
-(id)delegate;
-(long long)runModal;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAccessoryView:(NSView *)arg1 ;
-(NSView *)accessoryView;
-(char)worksWhenModal;
-(char)isRunning;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setWorksWhenModal:(char)arg1 ;
-(void)setFloatingPanel:(char)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setBecomesKeyOnlyIfNeeded:(char)arg1 ;
-(void)ok:(id)arg1 ;
-(void)_setAlertMessage:(id)arg1 ;
-(void)_setAlertInformativeMessage:(id)arg1 ;
-(void)_setUseAlertStyle:(char)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isFloatingPanel;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3 ;
-(char)becomesKeyOnlyIfNeeded;
-(char)_useAlertStyle;
-(void)_accessoryViewFrameDidChange:(id)arg1 ;
-(void)_didPresentErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(void)cleanup;
@end

