/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ACDKeychain : NSObject
+(char)canAccessPasswordsWithPolicy:(id)arg1 ;
+(id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
+(void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 error:(id*)arg5 ;
+(void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
@end

