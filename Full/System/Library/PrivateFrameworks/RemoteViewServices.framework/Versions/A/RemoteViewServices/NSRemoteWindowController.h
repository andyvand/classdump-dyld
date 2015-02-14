/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObjectNSRemoteWindowControllerDelegate;
#import <RemoteViewServices/RemoteViewServices-Structs.h>
@class NSRemoteServiceConnection, NSLocalWindowWrappingRemoteWindow, NSString, NSPanel;

@interface NSRemoteWindowController : NSObject {

	NSRemoteServiceConnection* _connection;
	NSLocalWindowWrappingRemoteWindow* _localProxyWindow;
	unsigned _remoteConnectionID;
	unsigned _remoteWindowID;
	unsigned long long _windowRights;
	id<NSObject><NSRemoteWindowControllerDelegate> _delegate;
	dispatch_queue_sRef _delegateQueue;
	char _isSheet;
	unsigned long long _styleMask;
	char _canBecomeKeyWindow;
	char _canBecomeMainWindow;
	char _windowRightsGrantRetried;
	NSString* _pendingingWindowRightsGrantToken;
	/*^block*/id _pendingGrantOfferedBlock;
	NSString* _remoteWindowClass;
	unsigned _remoteOrderPlaceRequestsAccepted : 1;
	unsigned _disableAutomaticTermination : 1;

}

@property (assign) id delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) dispatch_queue_sRef delegateQueue; 
@property (retain,readonly) NSPanel * window;                                    //@synthesize localProxyWindow=_localProxyWindow - In the implementation block
@property (assign) char isSheet;                                                 //@synthesize isSheet=_isSheet - In the implementation block
@property (retain,readonly) NSRemoteServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) char canBecomeKeyWindow;                                      //@synthesize canBecomeKeyWindow=_canBecomeKeyWindow - In the implementation block
@property (assign) char canBecomeMainWindow;                                     //@synthesize canBecomeMainWindow=_canBecomeMainWindow - In the implementation block
@property (copy) NSString * remoteWindowClass;                                   //@synthesize remoteWindowClass=_remoteWindowClass - In the implementation block
@property (assign) unsigned disableAutomaticTermination;                         //@synthesize disableAutomaticTermination=_disableAutomaticTermination - In the implementation block
+(Class)localWindowClass;
-(void)setCanBecomeKeyWindow:(char)arg1 ;
-(void)setCanBecomeMainWindow:(char)arg1 ;
-(void)connection:(id)arg1 didReceiveError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)sendSynchronousRequest:(id)arg1 ;
-(char)asyncSelectFirstResponderWithDirection:(unsigned long long)arg1 ;
-(void)setIsSheet:(char)arg1 ;
-(id)initWithRemotePanel:(id)arg1 remoteServiceReply:(id)arg2 rights:(unsigned long long)arg3 ;
-(void)setDisableAutomaticTermination:(unsigned)arg1 ;
-(char)initializeRemoteWindow;
-(char)_performKeyEquivalentWithRequest:(id)arg1 ;
-(char)blacklistedSelector:(SEL)arg1 ;
-(id)initWithConnection:(id)arg1 rights:(unsigned long long)arg2 ;
-(void)setRemoteWindowClass:(NSString *)arg1 ;
-(void)_clearPendingWindowRightsGrant;
-(void)_handleReplySetupSharedWindow:(id)arg1 ;
-(id)findAccessibilityChildWindow:(id)arg1 ;
-(id)createAccessibilityChildWindow:(id)arg1 withStyle:(id)arg2 ;
-(int)_completeWindowRightsGrant:(const SCD_Struct_NS5*)arg1 ;
-(void)_handleReplyActivateSharedWindow:(id)arg1 ;
-(NSString *)remoteWindowClass;
-(void)_handleModalSession:(id)arg1 ;
-(void)_handleUserValueChanged:(id)arg1 ;
-(void)_handleRequestUpdateSharedWindowFrame:(id)arg1 ;
-(void)_thisWindowShouldChange:(id)arg1 ;
-(void)_sharedWindowShouldChange:(id)arg1 ;
-(void)hideSharedWindow:(char)arg1 atLocation:(CGPoint)arg2 ;
-(void)setDelegateQueue:(dispatch_queue_sRef)arg1 ;
-(NSRemoteServiceConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(NSPanel *)window;
-(char)isSheet;
-(id)delegate;
-(void)sendEvent:(id)arg1 ;
-(char)canBecomeMainWindow;
-(unsigned)disableAutomaticTermination;
-(char)acceptsFirstResponder;
-(char)canBecomeKeyWindow;
-(dispatch_queue_sRef)delegateQueue;
-(void)cleanup;
@end

