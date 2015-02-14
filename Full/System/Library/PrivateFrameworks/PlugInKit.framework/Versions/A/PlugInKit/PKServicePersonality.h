/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PlugInKit/PKPlugInCore.h>
#import <PlugInKit/PKCorePlugInProtocol.h>
#import <PlugInKit/PKSubsystemServicePersonality.h>

@class NSString, NSURL, NSUUID, NSDictionary, NSXPCConnection, NSUserDefaults;

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality> {

	id _plugInPrincipal;
	id _hostPrincipal;
	id _embeddedPrincipal;
	NSXPCConnection* _connection;
	NSUserDefaults* _preferences;

}

@property (retain) id plugInPrincipal;                                 //@synthesize plugInPrincipal=_plugInPrincipal - In the implementation block
@property (retain) id hostPrincipal;                                   //@synthesize hostPrincipal=_hostPrincipal - In the implementation block
@property (retain) id embeddedPrincipal;                               //@synthesize embeddedPrincipal=_embeddedPrincipal - In the implementation block
@property (retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (retain) NSUserDefaults * preferences;                       //@synthesize preferences=_preferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
-(void)setPreferences:(NSUserDefaults *)arg1 ;
-(id)plugInPrincipal;
-(id)hostPrincipal;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)description;
-(NSUserDefaults *)preferences;
-(void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)prepareUsing:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)beginUsingPlugIn:(id)arg1 ready:(/*^block*/id)arg2 ;
-(void)setEmbeddedContext:(id)arg1 ;
-(void)shutdownPlugIn;
-(void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(/*^block*/id)arg4 ;
-(void)setPlugInPrincipal:(id)arg1 ;
-(void)setEmbeddedPrincipal:(id)arg1 ;
-(id)embeddedPrincipal;
-(id)setupWithIdentifier:(id)arg1 ;
-(id)defaultPrincipalObject;
-(id)findProtocol:(id)arg1 ;
-(void)setHostPrincipal:(id)arg1 ;
@end

