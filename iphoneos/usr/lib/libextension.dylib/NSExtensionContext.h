/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/libextension.dylib-Structs.h>
#import <libextension.dylib/NSSecureCoding.h>
#import <libextension.dylib/NSCopying.h>
#import <libextension.dylib/NSXPCListenerDelegate.h>
#import <libextension.dylib/_NSExtensionAuxHostingBase.h>

@protocol _NSExtensionContextHosting, _NSExtensionContextVending;
@class NSArray, NSUUID, NSXPCConnection, NSXPCListener, NSString;

@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase> {

	NSArray* _inputItems;
	NSUUID* __UUID;
	/*^block*/id __requestCleanUpBlock;
	id<_NSExtensionContextHosting> __extensionHostProxy;
	id<_NSExtensionContextVending> __extensionVendorProxy;
	NSXPCConnection* __auxiliaryConnection;
	NSXPCListener* __auxiliaryListener;
	id __principalObject;

}

@property (copy) NSArray * inputItems;                                                                                 //@synthesize inputItems=_inputItems - In the implementation block
@property (copy) NSUUID * _UUID;                                                                                       //@synthesize _UUID=__UUID - In the implementation block
@property (setter=_setRequestCleanUpBlock:,copy) id _requestCleanUpBlock;                                              //@synthesize _requestCleanUpBlock=__requestCleanUpBlock - In the implementation block
@property (setter=_setExtensionHostProxy:,retain) id<_NSExtensionContextHosting> _extensionHostProxy;                  //@synthesize _extensionHostProxy=__extensionHostProxy - In the implementation block
@property (setter=_setExtensionVendorProxy:,retain) id<_NSExtensionContextVending> _extensionVendorProxy;              //@synthesize _extensionVendorProxy=__extensionVendorProxy - In the implementation block
@property (setter=_setAuxiliaryConnection:,retain) NSXPCConnection * _auxiliaryConnection;                             //@synthesize _auxiliaryConnection=__auxiliaryConnection - In the implementation block
@property (setter=_setAuxiliaryListener:,retain) NSXPCListener * _auxiliaryListener;                                   //@synthesize _auxiliaryListener=__auxiliaryListener - In the implementation block
@property (setter=_setPrincipalObject:) id _principalObject;                                                           //@synthesize _principalObject=__principalObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(void)initialize;
+(char)supportsSecureCoding;
+(id)_extensionContextHostProtocolAllowedClassesForItems;
+(id)_extensionContextVendorProtocol;
+(id)_extensionContextHostProtocol;
+(id)_extensionContextForIdentifier:(id)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCConnection *)_auxiliaryConnection;
-(void)cancelRequestWithError:(id)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)_principalObject;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)_UUID;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)inputItems;
-(id)initWithInputItems:(id)arg1 ;
-(void)_setExtensionVendorProxy:(id)arg1 ;
-(NSXPCListener *)_auxiliaryListener;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setExtensionHostProxy:(id)arg1 ;
-(void)_willPerformHostCallback:(/*^block*/id)arg1 ;
-(void)_setPrincipalObject:(id)arg1 ;
-(void)___nsx_pingHost:(/*^block*/id)arg1 ;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(id)initWithInputItems:(id)arg1 contextUUID:(id)arg2 ;
-(void)_completeRequestReturningItemsSecondHalf:(/*^block*/id)arg1 ;
-(char)_isHost;
-(void)didConnectToVendor:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadItemForPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setInputItems:(id)arg1 ;
-(void)set_UUID:(NSUUID *)arg1 ;
-(id)_requestCleanUpBlock;
-(void)_setRequestCleanUpBlock:(/*^block*/id)arg1 ;
-(id<_NSExtensionContextHosting>)_extensionHostProxy;
-(id<_NSExtensionContextVending>)_extensionVendorProxy;
-(void)_setAuxiliaryConnection:(id)arg1 ;
-(void)_setAuxiliaryListener:(id)arg1 ;
@end

