/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <ViewBridge/NSViewBridge.h>

@class NSRemoteViewBase;

@interface NSViewRemoteBridge : NSViewBridge {

	NSRemoteViewBase* _remoteView;

}

@property (readonly) NSRemoteViewBase * remoteView;              //@synthesize remoteView=_remoteView - In the implementation block
-(id)initWithRemoteView:(id)arg1 ;
-(SCD_Struct_NS0)auditToken;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)processIdentifier;
-(NSRemoteViewBase *)remoteView;
-(void)registerKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3 ;
@end

