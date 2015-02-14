/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRecursiveLock, NSCondition, NSMutableDictionary, NSMutableArray, NSString;

@interface IMAPConnectionPool : NSObject {

	NSRecursiveLock* _connectionPoolLock;
	NSCondition* _availabilityCondition;
	NSMutableDictionary* _idleConnectionsByMailbox;
	NSMutableDictionary* _activeConnectionsByMailbox;
	NSMutableArray* _suspendedGateways;
	unsigned long long _maximumConnectionCount;
	NSString* _defaultIdleMailboxName;

}

@property (assign) unsigned long long maximumConnectionCount;              //@synthesize maximumConnectionCount=_maximumConnectionCount - In the implementation block
@property (copy) NSString * defaultIdleMailboxName;                        //@synthesize defaultIdleMailboxName=_defaultIdleMailboxName - In the implementation block
+(void)initialize;
-(void)setMaximumConnectionCount:(unsigned long long)arg1 ;
-(void)resetMaximumConnectionCount;
-(void)updateConnectionsShouldUseIdle:(id)arg1 ;
-(void)setDefaultIdleMailboxName:(NSString *)arg1 ;
-(unsigned long long)connectionCount;
-(id)checkOutGatewayForExistingConnectionToMailbox:(id)arg1 ;
-(id)checkOutNewGatewayWithConnection:(id)arg1 ;
-(unsigned long long)maximumConnectionCount;
-(id)checkOutGatewayForMailbox:(id)arg1 ;
-(id)checkOutGatewayForMailbox:(id)arg1 newConnection:(id)arg2 highPriority:(char)arg3 waitIndefinitely:(char)arg4 ;
-(void)checkInNewConnection:(id)arg1 ;
-(void)closeAllConnectionsAndCompact:(char)arg1 ;
-(void)removeInvalidConnections;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)connections;
-(NSString *)defaultIdleMailboxName;
-(void)_removeAllConnectionsInDictionary:(id)arg1 ;
-(void)_sealSuspendedGateways;
-(void)_removeInvalidConnectionsInDictionary:(id)arg1 ;
-(void)_suspendGateway:(id)arg1 allowNetworking:(char)arg2 ;
-(void)_setConnection:(id)arg1 forMailbox:(id)arg2 clear:(char)arg3 inDictionary:(id)arg4 ;
-(id)_closeAllConnectionsAndCompact:(char)arg1 inDictionary:(id)arg2 ;
-(void)_removeSuspendedGateway:(id)arg1 ;
-(char)_removeConnection:(id)arg1 fromDictionary:(id)arg2 ;
-(void)_makeConnectionAvailable:(id)arg1 ;
-(void)_removeDisconnectedConnection:(id)arg1 shouldRecover:(char)arg2 ;
-(id)_checkOutNewGatewayWithConnection:(id)arg1 forMailbox:(id)arg2 ;
-(id)_keyForMailboxName:(id)arg1 ;
-(id)_suspendedGatewayForMailbox:(id)arg1 ;
-(id)_gatewayToCheckOutConnection:(id)arg1 defaultGateway:(id)arg2 mailboxName:(id)arg3 newGateway:(char*)arg4 ;
-(char)_validateAndCheckOutGateway:(id)arg1 forMailbox:(id)arg2 allowReconnect:(char)arg3 newGateway:(char)arg4 ;
-(id)_anyConnectionFromDictionary:(id)arg1 selectedOnly:(char)arg2 mailbox:(id*)arg3 ;
-(id)_suspendGatewayOfConnection:(id)arg1 mailbox:(id)arg2 forMailbox:(id)arg3 resumingGateway:(id)arg4 ;
-(id)_suspendFirstIdleConnectionForMailbox:(id)arg1 resumingGateway:(id)arg2 totalSecondsWaited:(double*)arg3 mightBeSuccessful:(char*)arg4 ;
-(id)_suspendedGatewayWithWorkRequireSelected:(char)arg1 ;
-(id)_suspendFirstIdleConnectionInIdleConnections:(id)arg1 forMailbox:(id)arg2 resumingGateway:(id)arg3 ;
-(id)_newGatewayForConnection:(id)arg1 mailboxName:(id)arg2 ;
-(char)checkInConnection:(id)arg1 forGateway:(id)arg2 ;
-(char)tryToResumeGateway:(id)arg1 ;
-(void)sealGatewayShutIfNoChanceOfResuming:(id)arg1 ;
-(char)yieldGateway:(id)arg1 ;
-(char)suspendGateway:(id)arg1 withOperation:(id)arg2 ;
-(char)_connectionIsContained:(id)arg1 forMailbox:(id)arg2 inDictionary:(id)arg3 ;
@end

