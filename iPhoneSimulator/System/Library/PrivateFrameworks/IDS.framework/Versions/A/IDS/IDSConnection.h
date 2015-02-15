/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class _IDSConnection, IDSAccount;

@interface IDSConnection : NSObject {

	_IDSConnection* _internal;

}

@property (nonatomic,retain,readonly) IDSAccount * account; 
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,retain,readonly) _IDSConnection * _internal; 
-(void)removeDelegate:(id)arg1 ;
-(_IDSConnection *)_internal;
-(id)initWithAccount:(id)arg1 commands:(id)arg2 ;
-(char)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(char)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(char)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)_initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(char)arg3 ;
-(char)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(void)addDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(void)dealloc;
-(char)isActive;
-(IDSAccount *)account;
@end

