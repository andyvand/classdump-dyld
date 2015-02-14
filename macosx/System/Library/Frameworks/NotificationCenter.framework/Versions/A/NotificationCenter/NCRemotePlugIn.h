/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <libextension.dylib/NSExtensionContext.h>
#import <NotificationCenter/NSXPCListenerDelegate.h>

@protocol NCRemotePlugInClient;
@class NSUUID, NSXPCListener, NSExtension, NSString, NSImage, NSDate, NCRemoteHostExtensionContext;

@interface NCRemotePlugIn : NSExtensionContext <NSXPCListenerDelegate> {

	BOOL _pluginUsing;
	NSUUID* _extensionRequestIdentifier;
	NSXPCListener* _listener;
	BOOL _outOfBundle;
	int _activationType;
	id<NCRemotePlugInClient> _delegate;
	NSExtension* _extension;
	NSString* _name;
	NSImage* _image;
	NSString* _imagePath;
	NSString* _imageBundlePath;
	double _defaultHeight;
	NSString* _configurationDescription;
	NSDate* _modificationDate;
	NCRemoteHostExtensionContext* _extensionContext;
	CGSize _maxSize;

}

@property (__weak) id<NCRemotePlugInClient> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSExtension * extension;                                    //@synthesize extension=_extension - In the implementation block
@property (readonly) NSString * path; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (readonly) NSImage * image;                                            //@synthesize image=_image - In the implementation block
@property (readonly) NSString * imagePath;                                       //@synthesize imagePath=_imagePath - In the implementation block
@property (readonly) NSString * imageBundlePath;                                 //@synthesize imageBundlePath=_imageBundlePath - In the implementation block
@property (readonly) double defaultHeight;                                       //@synthesize defaultHeight=_defaultHeight - In the implementation block
@property (readonly) NSString * configurationDescription;                        //@synthesize configurationDescription=_configurationDescription - In the implementation block
@property (readonly) BOOL isLive; 
@property (readonly) int processIdentifier; 
@property (readonly) NSDate * modificationDate;                                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign) int activationType;                                           //@synthesize activationType=_activationType - In the implementation block
@property (readonly) BOOL outOfBundle;                                           //@synthesize outOfBundle=_outOfBundle - In the implementation block
@property (assign) CGSize maxSize;                                               //@synthesize maxSize=_maxSize - In the implementation block
@property (readonly) id<NCPlugInProtocol> proxyObject; 
@property (retain) NCRemoteHostExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSString *)imageBundlePath;
-(id)initWithExtension:(id)arg1 ;
-(void)setActivationType:(int)arg1 ;
-(id<NCPlugInProtocol>)proxyObject;
-(BOOL)_setupPlugIn;
-(void)_activatePlugIn;
-(void)_deactivatePlugIn;
-(void)_serviceDied;
-(void)_serviceAlive;
-(void)_notifyDelegateOfActiveStateChange:(BOOL)arg1 ;
-(NSString *)configurationDescription;
-(BOOL)outOfBundle;
-(BOOL)isLive;
-(void)setExtensionContext:(NCRemoteHostExtensionContext *)arg1 ;
-(NSExtension *)extension;
-(double)defaultHeight;
-(void)setDelegate:(id<NCRemotePlugInClient>)arg1 ;
-(NSString *)description;
-(NSString *)path;
-(NCRemoteHostExtensionContext *)extensionContext;
-(NSString *)name;
-(NSString *)identifier;
-(NSImage *)image;
-(id<NCRemotePlugInClient>)delegate;
-(CGSize)maxSize;
-(void)setMaxSize:(CGSize)arg1 ;
-(int)processIdentifier;
-(NSDate *)modificationDate;
-(int)activationType;
-(NSString *)imagePath;
@end

