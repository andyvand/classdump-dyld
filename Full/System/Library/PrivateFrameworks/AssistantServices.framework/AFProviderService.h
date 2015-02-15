/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFProviderService <NSObject>
@required
-(oneway void)doCommandForServicePath:(id)arg1 className:(id)arg2 infoDictionary:(id)arg3 reply:(/*^block*/id)arg4;
-(oneway void)beginSyncForServicePath:(id)arg1 className:(id)arg2 key:(id)arg3 anchor:(id)arg4 validity:(id)arg5 reply:(/*^block*/id)arg6;
-(oneway void)clearDomainObjectsForServicePath:(id)arg1 className:(id)arg2;
-(oneway void)preheatBundleForServicePath:(id)arg1;

@end
