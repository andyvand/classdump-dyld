/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FindMyDevice/FindMyDevice-Structs.h>
@class NSXPCConnection;

@interface FMDFMMManager : NSObject {

	NSXPCConnection* _xpcConnection;
	AuthorizationOpaqueRefRef _authRef;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) AuthorizationOpaqueRefRef authRef;              //@synthesize authRef=_authRef - In the implementation block
+(id)sharedInstance;
-(char)isFMMEnabled;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)_destroyXPCConnection;
-(AuthorizationOpaqueRefRef)authRef;
-(void)setAuthRef:(AuthorizationOpaqueRefRef)arg1 ;
-(id)_adminAuthDataForRight:(const char*)arg1 ;
-(id)currentXPCConnection;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(void)addFMMAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeFMMAccountWithUsername:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)retrieveFMMAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_createAuthRight;
-(id)addFMMAccount:(id)arg1 ;
-(id)removeFMMAccountWithUsername:(id)arg1 ;
-(id)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2 ;
-(id)retrieveFMMAccount:(id*)arg1 ;
-(id)init;
-(void)dealloc;
@end

