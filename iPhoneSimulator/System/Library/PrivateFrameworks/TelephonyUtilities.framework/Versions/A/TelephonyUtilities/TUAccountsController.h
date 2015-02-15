/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSString;

@interface TUAccountsController : NSObject {

	int _outgoingRelayCallerIDChangedToken;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,copy,readonly) NSString * outgoingRelayCallerID; 
@property (nonatomic,copy,readonly) NSString * formattedOutgoingRelayCallerID; 
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) int outgoingRelayCallerIDChangedToken;                         //@synthesize outgoingRelayCallerIDChangedToken=_outgoingRelayCallerIDChangedToken - In the implementation block
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)_tearDownXPCConnection;
-(void)_setUpXPCConnection;
-(NSString *)outgoingRelayCallerID;
-(NSString *)formattedOutgoingRelayCallerID;
-(int)outgoingRelayCallerIDChangedToken;
-(void)setOutgoingRelayCallerIDChangedToken:(int)arg1 ;
-(id)init;
-(void)dealloc;
@end

