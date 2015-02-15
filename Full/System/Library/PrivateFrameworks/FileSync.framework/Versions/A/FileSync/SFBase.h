/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FileSync.framework/Versions/A/FileSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FileSync/IPCProxyObject.h>

@class SFSyncSetPrivates;

@interface SFBase : IPCProxyObject {

	id _private;

}

@property (retain) SFSyncSetPrivates * priv;              //@synthesize private=_private - In the implementation block
+(Class)classForRefString:(id)arg1 ;
+(char)accessInstanceVariablesDirectly;
-(void)sendAsynchronousIPCPropertyList:(id)arg1 ;
-(id)sendSynchronousIPCPropertyList:(id)arg1 ;
-(SFSyncSetPrivates *)priv;
-(void)setPriv:(SFSyncSetPrivates *)arg1 ;
-(id)description;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

