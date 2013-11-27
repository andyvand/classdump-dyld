/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSXPCConnectionDelegate.h>

@class NSError, _UIAsyncInvocation, NSString, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {

	int _terminationStateLock;
	NSError* _terminationError;
	/*^block*/ id _terminationHandler;
	BOOL _isTerminated;
	_UIAsyncInvocation* _terminateInvocation;
	NSString* _serviceBundleIdentifier;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceConnection;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}

@property (nonatomic,readonly) int servicePID; 
@property (nonatomic,readonly) SCD_Struct_UI27 serviceAuditToken; 
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/ id)arg3 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned)retainCount;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)disconnect;
-(id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(/*^block*/ id)arg3 ;
-(int)__automatic_invalidation_logic;
-(id)_terminateWithError:(id)arg1 ;
-(void)setTerminationHandler:(/*^block*/ id)arg1 ;
-(void)_terminateUnconditionallyThen:(/*^block*/ id)arg1 ;
-(int)servicePID;
-(SCD_Struct_UI27)serviceAuditToken;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI83)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3 ;
@end
