/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Frameworks/PluginManager.framework/PluginManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PluginManager/PluginManager-Structs.h>
#import <PluginManager/PROPlugInDelegate.h>
#import <PluginManager/PROPlugInFirewallErrorHandler.h>
#import <PluginManager/PROAPIAccessing.h>

@protocol PROPlugInRegistering, PROBundleHandlerDelegate, PROVersionedAPIAccess;
@class NSBundle, NSMutableArray, NSMutableDictionary, NSArray, PROPlugInFirewall, NSString;

@interface PROBundleHandler : NSObject <PROPlugInDelegate, PROPlugInFirewallErrorHandler, PROAPIAccessing> {

	NSBundle* bundle;
	NSMutableArray* plugIns;
	NSMutableDictionary* groups;
	id<PROPlugInRegistering> principalClassInstance;
	struct {
		unsigned canCreateInstances : 1;
		unsigned askedAboutCreatingInstances : 1;
		unsigned  : 30;
	}  bundleFlags;
	NSArray* requestedProtocols;
	id<PROBundleHandlerDelegate> delegate;
	id<PROVersionedAPIAccess> apiManager;
	PROPlugInFirewall* apiAccessPoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)plugInCouldNotInitialize:(id)arg1 ;
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1 ;
-(void)addPlugIn:(id)arg1 ;
-(void)plugIn:(id)arg1 didError:(id)arg2 ;
-(char)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1 ;
-(id)apiManagerForPlugInInstances;
-(id)apiForProtocol:(id)arg1 ;
-(void)plugInFirewall:(id)arg1 receivedBadMessage:(SEL)arg2 ;
-(id)plugIns;
-(char)isEqualToBundleHandler:(id)arg1 ;
-(void)setAPIManager:(id)arg1 ;
-(id)principalClassInstance;
-(char)_plugInHasReservedUUID:(id)arg1 ;
-(char)isPrincipalClassAvailable;
-(id)apiManager;
-(void)registerPlugIns;
-(id)initWithBundle:(id)arg1 ;
-(id)groupsDictionary;
-(void)reportError:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)delegate;
@end
