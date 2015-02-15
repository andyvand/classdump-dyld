/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDDClientConnection, NSMutableDictionary, NSObject;

@interface CDSession : NSObject {

	CDDClientConnection* _cddClientConnection;
	NSMutableDictionary* _cachedAttributeIDs;
	NSMutableDictionary* _cachedBudgets;
	NSObject*<OS_dispatch_queue> _cacheSerializerQ;
	unsigned long long _clientId;
	char _verbose;
	char _enabledCaching;

}

@property (readonly) CDDClientConnection * cddClientConnection;                //@synthesize cddClientConnection=_cddClientConnection - In the implementation block
@property (assign) unsigned long long clientId;                                //@synthesize clientId=_clientId - In the implementation block
@property (retain) NSMutableDictionary * cachedAttributeIDs;                   //@synthesize cachedAttributeIDs=_cachedAttributeIDs - In the implementation block
@property (retain) NSMutableDictionary * cachedBudgets;                        //@synthesize cachedBudgets=_cachedBudgets - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> cacheSerializerQ;              //@synthesize cacheSerializerQ=_cacheSerializerQ - In the implementation block
@property (assign) char verbose;                                               //@synthesize verbose=_verbose - In the implementation block
@property (assign) char enabledCaching;                                        //@synthesize enabledCaching=_enabledCaching - In the implementation block
-(id)getDevices;
-(id)initWithClientId:(unsigned long long)arg1 ;
-(id)attributeForName:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(CDDClientConnection *)cddClientConnection;
-(id)initWithClientId:(unsigned long long)arg1 enableCaching:(char)arg2 ;
-(NSMutableDictionary *)cachedAttributeIDs;
-(NSObject*<OS_dispatch_queue>)cacheSerializerQ;
-(id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)cachedBudgets;
-(id)attributeComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)attributeFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)attributeNamesWithError:(id*)arg1 ;
-(id)budgetNamesWithError:(id*)arg1 ;
-(id)budgetForName:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id*)arg4 ;
-(char)deleteClientDataWithError:(id*)arg1 ;
-(id)attributeFromFullname:(id)arg1 error:(id*)arg2 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(char)setDevicesChangedHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)getDeviceFromDescription:(id)arg1 error:(id*)arg2 ;
-(char)broadcastSystemDataWithError:(id*)arg1 ;
-(void)setClientId:(unsigned long long)arg1 ;
-(void)setCachedAttributeIDs:(NSMutableDictionary *)arg1 ;
-(void)setCachedBudgets:(NSMutableDictionary *)arg1 ;
-(void)setCacheSerializerQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)enabledCaching;
-(void)setEnabledCaching:(char)arg1 ;
-(id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 ;
-(id)attributeNames;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(id)init;
-(unsigned long long)clientId;
@end
