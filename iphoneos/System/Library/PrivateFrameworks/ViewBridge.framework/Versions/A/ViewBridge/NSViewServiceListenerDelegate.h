/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <ViewBridge/NSXPCListenerDelegate.h>
#import <ViewBridge/NSXPCSharedListenerDelegate.h>

@class NSXPCListener, NSString;

@interface NSViewServiceListenerDelegate : NSObject <NSXPCListenerDelegate, NSXPCSharedListenerDelegate> {

	NSXPCListener* _listener;

}

@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
@end

