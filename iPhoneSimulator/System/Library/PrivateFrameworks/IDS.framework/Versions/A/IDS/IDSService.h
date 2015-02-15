/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class _IDSService, NSSet, NSArray;

@interface IDSService : NSObject {

	_IDSService* _internal;

}

@property (nonatomic,copy,readonly) NSSet * accounts; 
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,retain,readonly) _IDSService * _internal; 
-(NSSet *)accounts;
-(char)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(void)removeDelegate:(id)arg1 ;
-(_IDSService *)_internal;
-(char)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(char)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(char)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)initWithService:(id)arg1 commands:(id)arg2 ;
-(char)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(char)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(char)cancelIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3 ;
-(id)serviceDomain;
-(id)iCloudAccount;
-(id)deviceForFromID:(id)arg1 ;
-(id)uriForFromID:(id)arg1 ;
-(void)setPreferInfraWiFi:(char)arg1 ;
-(id)initWithService:(id)arg1 serviceDomain:(id)arg2 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2 ;
-(SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg1 ;
-(SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg1 ;
-(char)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)initWithService:(id)arg1 ;
-(char)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(void)addDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)dealloc;
-(NSArray *)devices;
@end

