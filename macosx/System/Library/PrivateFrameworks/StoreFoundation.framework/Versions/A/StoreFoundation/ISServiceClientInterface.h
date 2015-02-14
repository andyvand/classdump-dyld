/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISServiceProxy.h>
#import <StoreFoundation/ISServiceRemoteObject.h>

@class NSLock, NSXPCConnection, ISServiceDelegate, NSString;

@interface ISServiceClientInterface : ISServiceProxy <ISServiceRemoteObject> {

	NSLock* _serviceProxyLock;
	NSXPCConnection* _conn;
	ISServiceDelegate* _delegate;

}

@property (readonly) NSXPCConnection * conn;                                           //@synthesize conn=_conn - In the implementation block
@property (__weak) ISServiceDelegate * delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)primaryAccount;
-(NSXPCConnection *)conn;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setDelegate:(ISServiceDelegate *)arg1 ;
-(ISServiceDelegate *)delegate;
-(id)remoteObjectProtocol;
-(id)exportedObjectInterface;
-(id)exportedObjectProtocol;
-(id)valueForURLBagKey:(id)arg1 ;
-(void)setStoreFrontID:(id)arg1 ;
-(void)displayDialog:(id)arg1 ;
-(void)startService;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(char)authIsExpired;
-(id)accountWithDSID:(id)arg1 ;
-(id)urlForURLBagKey:(id)arg1 ;
-(char)urlIsTrustedByURLBag:(id)arg1 ;
-(char)loadURLBagWithType:(long long)arg1 returningError:(id*)arg2 ;
-(id)httpHeadersForURL:(id)arg1 withDSID:(id)arg2 ;
-(char)shouldSendGUIDWithRequestForURL:(id)arg1 ;
-(id)storeURLSchemeForAmbiguousURL:(id)arg1 ;
-(char)copyAccountID:(id*)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id*)arg3 ;
-(void)signURLRequest:(id)arg1 service:(id)arg2 ;
@end

