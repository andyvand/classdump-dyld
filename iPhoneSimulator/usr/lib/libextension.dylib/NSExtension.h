/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/libextension.dylib-Structs.h>
#import <libextension.dylib/_NSExtensionContextHosting.h>

@protocol PKPlugIn;
@class NSString, NSDictionary, NSBundle, NSMutableDictionary, NSArray;

@interface NSExtension : NSObject <_NSExtensionContextHosting> {

	NSString* _identifier;
	NSString* _version;
	NSDictionary* _attributes;
	NSDictionary* _infoDictionary;
	NSString* _extensionPointIdentifier;
	/*^block*/id _requestCompletionBlock;
	/*^block*/id _requestCancellationBlock;
	/*^block*/id _requestInterruptionBlock;
	id<PKPlugIn> __plugIn;
	NSBundle* __extensionBundle;
	/*^block*/id __requestPostCompletionBlock;
	/*^block*/id __requestPostCompletionBlockWithItems;
	NSMutableDictionary* __extensionExpirationIdentifiers;
	NSMutableDictionary* __extensionServiceConnections;
	NSMutableDictionary* __extensionContexts;
	dispatch_queue_sRef __safePluginQueue;

}

@property (getter=_isMarkedNew,readonly) char _markedNew; 
@property (copy) NSString * identifier;                                                                                            //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * version;                                                                                               //@synthesize version=_version - In the implementation block
@property (copy) NSDictionary * attributes;                                                                                        //@synthesize attributes=_attributes - In the implementation block
@property (copy) NSDictionary * infoDictionary;                                                                                    //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (copy) NSString * extensionPointIdentifier;                                                                              //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (copy) NSArray * icons; 
@property (readonly) char optedIn; 
@property (copy) id requestCompletionBlock;                                                                                        //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (copy) id requestCancellationBlock;                                                                                      //@synthesize requestCancellationBlock=_requestCancellationBlock - In the implementation block
@property (copy) id requestInterruptionBlock;                                                                                      //@synthesize requestInterruptionBlock=_requestInterruptionBlock - In the implementation block
@property (setter=_setPlugIn:,retain) id<PKPlugIn> _plugIn;                                                                        //@synthesize _plugIn=__plugIn - In the implementation block
@property (setter=_setExtensionBundle:,retain) NSBundle * _extensionBundle;                                                        //@synthesize _extensionBundle=__extensionBundle - In the implementation block
@property (copy) id _requestPostCompletionBlock;                                                                                   //@synthesize _requestPostCompletionBlock=__requestPostCompletionBlock - In the implementation block
@property (copy) id _requestPostCompletionBlockWithItems;                                                                          //@synthesize _requestPostCompletionBlockWithItems=__requestPostCompletionBlockWithItems - In the implementation block
@property (setter=_setExtensionExpirationsIdentifiers:,retain) NSMutableDictionary * _extensionExpirationIdentifiers;              //@synthesize _extensionExpirationIdentifiers=__extensionExpirationIdentifiers - In the implementation block
@property (setter=_setExtensionServiceConnections:,retain) NSMutableDictionary * _extensionServiceConnections;                     //@synthesize _extensionServiceConnections=__extensionServiceConnections - In the implementation block
@property (setter=_setExtensionContexts:,retain) NSMutableDictionary * _extensionContexts;                                         //@synthesize _extensionContexts=__extensionContexts - In the implementation block
@property (setter=_setExtensionState:,getter=_extensionState,copy) NSDictionary * _extensionState; 
@property (assign) dispatch_queue_sRef _safePluginQueue;                                                                           //@synthesize _safePluginQueue=__safePluginQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(unsigned long long)numberOfNewItems;
+(void)endMatchingExtensions:(id)arg1 ;
+(char)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2 ;
+(void)initialize;
+(id)extensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2 ;
+(void)initializeFiltering;
+(char)_shouldLogExtensionDiscovery;
+(id)predicateForActivationRule:(id)arg1 ;
-(id<PKPlugIn>)_plugIn;
-(void)setRequestInterruptionBlock:(id)arg1 ;
-(void)setRequestCancellationBlock:(id)arg1 ;
-(id)_extensionContextForUUID:(id)arg1 ;
-(void)beginExtensionRequestWithInputItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelExtensionRequestWithIdentifier:(id)arg1 ;
-(NSArray *)icons;
-(id)requestCompletionBlock;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(void)_kill:(int)arg1 ;
-(void)set_requestPostCompletionBlockWithItems:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSDictionary *)infoDictionary;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(NSDictionary *)attributes;
-(NSBundle *)_extensionBundle;
-(NSString *)version;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(char)_isMarkedNew;
-(NSString *)extensionPointIdentifier;
-(char)optedIn;
-(NSDictionary *)_extensionState;
-(void)_setExtensionState:(id)arg1 ;
-(void)_didShowExtensionManagementInterface;
-(void)_didShowNewExtensionIndicator;
-(void)_resetExtensionState;
-(id)_initWithPKPlugin:(id)arg1 ;
-(id)requestInterruptionBlock;
-(void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_safelyBeginUsing:(/*^block*/id)arg1 ;
-(void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_requestPostCompletionBlock;
-(id)_requestPostCompletionBlockWithItems;
-(id)requestCancellationBlock;
-(id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2 ;
-(int)_plugInProcessIdentifier;
-(void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)attemptOptIn:(id*)arg1 ;
-(char)attemptOptOut:(id*)arg1 ;
-(int)pidForRequestIdentifier:(id)arg1 ;
-(char)_isPhotoServiceAccessGranted;
-(char)_isSystemExtension;
-(void)_safelyEndUsing:(/*^block*/id)arg1 ;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(void)setExtensionPointIdentifier:(NSString *)arg1 ;
-(void)_setPlugIn:(id)arg1 ;
-(void)_setExtensionBundle:(id)arg1 ;
-(void)set_requestPostCompletionBlock:(id)arg1 ;
-(NSMutableDictionary *)_extensionExpirationIdentifiers;
-(void)_setExtensionExpirationsIdentifiers:(id)arg1 ;
-(NSMutableDictionary *)_extensionServiceConnections;
-(void)_setExtensionServiceConnections:(id)arg1 ;
-(NSMutableDictionary *)_extensionContexts;
-(void)_setExtensionContexts:(id)arg1 ;
-(dispatch_queue_sRef)_safePluginQueue;
-(void)set_safePluginQueue:(dispatch_queue_sRef)arg1 ;
@end

