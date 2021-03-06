/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <libextension.dylib/NSExtensionContext.h>

@protocol NSSharingExtensionContextSessionCompletionDelegate, SHKHostExtensionContextProtocol;
@class NSMutableDictionary, NSProgress, NSDictionary;

@interface NSSharingExtensionContext : NSExtensionContext {

	NSMutableDictionary* _parameters;
	id<NSSharingExtensionContextSessionCompletionDelegate> _sessionCompletionDelegate;
	NSProgress* _progress;
	unsigned long long _status;
	NSDictionary* _options;
	id<SHKHostExtensionContextProtocol> _host;

}

@property (retain) NSProgress * progress;                                 //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned long long status;                             //@synthesize status=_status - In the implementation block
@property (retain) NSDictionary * options;                                //@synthesize options=_options - In the implementation block
@property (retain) id<SHKHostExtensionContextProtocol> host;              //@synthesize host=_host - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(void)assertBundleInformationIsComplete;
+(void)load;
-(id)displayState;
-(id)serviceDictionary;
-(void)cancelRequestWithError:(id)arg1 ;
-(id)extensionItem;
-(void)closeServiceWindowWithSuccess:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)performServiceWithOptionsDictionaryData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelServiceUI;
-(void)startSessionTeardownByCallingContinuationBlock:(/*^block*/id)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)handleSharingOptions:(id)arg1 ;
-(void)performService;
-(CGRect)sourceWindowFrame;
-(void)serviceDidCompleteWithSuccess:(char)arg1 error:(id)arg2 items:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopProgressImmediately:(char)arg1 ;
-(void)storeParameterValue:(id)arg1 forKey:(id)arg2 ;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)SHK_invalidate;
-(id)sessionCompletionDelegate;
-(char)clientAppIsBackgroundOnly;
-(long long)sharingContentScope;
-(char)hasSourceWindow;
-(char)sourceWindowIsFullscreen;
-(id)clientAppID;
-(void)setSessionCompletionDelegate:(id)arg1 ;
-(id)startProgress;
-(void)setHost:(id<SHKHostExtensionContextProtocol>)arg1 ;
-(NSDictionary *)options;
-(unsigned long long)status;
-(NSProgress *)progress;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setDisplayState:(id)arg1 ;
-(id<SHKHostExtensionContextProtocol>)host;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)parameters;
-(void)setStatus:(unsigned long long)arg1 ;
@end

