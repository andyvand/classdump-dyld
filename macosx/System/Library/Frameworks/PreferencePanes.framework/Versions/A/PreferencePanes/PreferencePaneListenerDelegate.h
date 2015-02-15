/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencePanes/PreferencePanes-Structs.h>
#import <PreferencePanes/NSXPCListenerDelegate.h>
#import <PreferencePanes/NSXPCSharedListenerDelegate.h>

@class NSString;

@interface PreferencePaneListenerDelegate : NSObject <NSXPCListenerDelegate, NSXPCSharedListenerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)shouldAcceptNewConnection:(xpc_connection_sRef)arg1 ;
@end
