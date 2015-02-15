/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SHKSharingServiceDelegate;
#import <ShareKit/ShareKit-Structs.h>
@class NSSharingServiceDescription, NSDictionary, NSString, NSImage, SHKRemoteWindowController, NSProgress, NSExtension, SHKHostExtensionContext, NSUUID, NSArray, NSWindow, NSSharingService, NSURL;

@interface SHKSharingService : NSObject {

	NSSharingServiceDescription* _serviceDescription;
	id<SHKSharingServiceDelegate> _delegate;
	NSDictionary* _parameters;
	NSString* _identifier;
	NSString* _plugInIdentifier;
	NSString* _title;
	NSImage* _image;
	NSImage* _alternateImage;
	/*^block*/id _block;
	char _enabled;
	unsigned long long _mask;
	char _shouldDimSourceWindow;
	char _viewBased;
	SHKRemoteWindowController* _remoteWindowController;
	NSProgress* _debugProgressItem;
	NSDictionary* _identifierToProvider;
	unsigned _remoteCID;
	NSString* _subtitle;
	id _customDelegate;
	id _customInternalDelegate;
	NSExtension* _extension;
	SHKHostExtensionContext* _extensionContext;
	NSUUID* _uuid;
	NSArray* _sharedItems;
	/*^block*/id _restoreWindowStateBlock;
	/*^block*/id __cancelExtensionKillTimer;
	NSWindow* _sourceWindow;

}

@property (retain,readonly) NSSharingService * nsSharingService; 
@property (readonly) id<PKPlugIn> plugIn; 
@property (assign,nonatomic) id<SHKSharingServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * plugInIdentifier;                                     //@synthesize plugInIdentifier=_plugInIdentifier - In the implementation block
@property (retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name; 
@property (copy,readonly) NSURL * plugInURL; 
@property (nonatomic,copy) NSDictionary * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (retain) NSImage * image;                                               //@synthesize image=_image - In the implementation block
@property (retain) NSImage * alternateImage;                                      //@synthesize alternateImage=_alternateImage - In the implementation block
@property (assign) unsigned long long mask;                                       //@synthesize mask=_mask - In the implementation block
@property (copy) id block;                                                        //@synthesize block=_block - In the implementation block
@property (getter=isEnabled) char enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (retain) id customDelegate;                                             //@synthesize customDelegate=_customDelegate - In the implementation block
@property (retain) id customInternalDelegate;                                     //@synthesize customInternalDelegate=_customInternalDelegate - In the implementation block
@property (retain) NSExtension * extension;                                       //@synthesize extension=_extension - In the implementation block
@property (retain) SHKHostExtensionContext * extensionContext;                    //@synthesize extensionContext=_extensionContext - In the implementation block
@property (retain) NSSharingServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (copy) NSString * subtitle;                                             //@synthesize subtitle=_subtitle - In the implementation block
@property (assign) char shouldDimSourceWindow;                                    //@synthesize shouldDimSourceWindow=_shouldDimSourceWindow - In the implementation block
@property (assign) char viewBased;                                                //@synthesize viewBased=_viewBased - In the implementation block
@property (assign) unsigned remoteCID;                                            //@synthesize remoteCID=_remoteCID - In the implementation block
@property (copy) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSArray * sharedItems;                                         //@synthesize sharedItems=_sharedItems - In the implementation block
@property (nonatomic,copy) id restoreWindowStateBlock;                            //@synthesize restoreWindowStateBlock=_restoreWindowStateBlock - In the implementation block
@property (nonatomic,copy) id _cancelExtensionKillTimer;                          //@synthesize _cancelExtensionKillTimer=__cancelExtensionKillTimer - In the implementation block
@property (__weak) NSWindow * sourceWindow;                                       //@synthesize sourceWindow=_sourceWindow - In the implementation block
@property (readonly) char disableServiceWindowPresentation; 
+(id)serviceDictionariesFromBundle:(id)arg1 matchingUserDict:(id)arg2 ;
+(id)sharingServicesWithIdentifier:(id)arg1 attributes:(id)arg2 itemTypes:(id)arg3 matchingDictionary:(id)arg4 itemAttributes:(id)arg5 ;
+(id)sharingServiceWithIdentifier:(id)arg1 provider:(id)arg2 title:(id)arg3 image:(id)arg4 alternateImage:(id)arg5 ;
+(id)activePlugInForIdentifier:(id)arg1 ;
+(char)overridesForServiceIdentifier:(id)arg1 supportsSharingAttachments:(char)arg2 body:(char)arg3 ;
+(char)serviceIsEnabledForSharingServiceDict:(id)arg1 ;
+(void)populateDescription:(id)arg1 withAttributes:(id)arg2 forAppIdentifier:(id)arg3 ;
+(id)imageForBundlePath:(id)arg1 ;
+(id)serviceIdentifierWithBundle:(id)arg1 serviceDictionary:(id)arg2 multiplexed:(char)arg3 ;
+(char)matchingDictionary:(id)arg1 isSupportedByServiceIdentifier:(id)arg2 ;
+(id)reorderdListOfExtensions:(id)arg1 getLegacyPlugInDict:(id*)arg2 ;
+(id)extensionForSharingServiceName:(id)arg1 ;
+(char)shouldAutoEnableServiceWithIdentifier:(id)arg1 ;
+(id)descriptionForSharingServiceDict:(id)arg1 bundle:(id)arg2 itemAttributes:(id)arg3 ;
+(void)addServicesFromDescriptions:(id)arg1 toServices:(id)arg2 withExtension:(id)arg3 ;
+(void)addServicesFromPlugIns:(id)arg1 compatibleWithUserDict:(id)arg2 toServices:(id)arg3 ;
+(unsigned long long)_newServicesCountForExtensions:(id)arg1 consumeCount:(char)arg2 cacheInvalidated:(char)arg3 ;
+(char)isShareKitPlugInService;
+(id)attributesForItems:(id)arg1 ;
+(id)sortedServicesForServices:(id)arg1 mask:(unsigned long long)arg2 ;
+(void)saveDefaultDisplayOrder:(id)arg1 domain:(CFStringRef)arg2 ;
+(id)_sortedServicesForServices:(id)arg1 displayOrderDictionary:(id)arg2 ;
+(void)registerBundlePlugIns;
+(unsigned long long)_newServicesCount;
+(void)electPlugInForSharingServiceName:(id)arg1 ;
+(id)sharingServiceNamed:(id)arg1 ;
+(id)sharingServiceWithTitle:(id)arg1 image:(id)arg2 alternateImage:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)sharingServicesForItems:(id)arg1 mask:(unsigned long long)arg2 ;
+(void)addRecentEmailServiceToDefaultsWithSubject:(id)arg1 recipients:(id)arg2 ;
+(id)sharingServicesForItems:(id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setSourceWindow:(NSWindow *)arg1 ;
-(NSWindow *)sourceWindow;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)unregister;
-(void)hideView;
-(char)isRegistered;
-(void)invalidateRemoteWindowControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)isInNotificationCenter;
-(void)setExtensionContext:(SHKHostExtensionContext *)arg1 ;
-(void)setPlugInIdentifier:(NSString *)arg1 ;
-(void)setCustomDelegate:(id)arg1 ;
-(void)setServiceDescription:(NSSharingServiceDescription *)arg1 ;
-(NSString *)plugInIdentifier;
-(char)shouldDimSourceWindow;
-(void)setShouldDimSourceWindow:(char)arg1 ;
-(char)viewBased;
-(void)setViewBased:(char)arg1 ;
-(id)initWithExtension:(id)arg1 description:(id)arg2 ;
-(NSSharingServiceDescription *)serviceDescription;
-(void)setCustomInternalDelegate:(id)arg1 ;
-(void)unregisterPotentiallyAndRemoveReferenceToCustomDelegate:(char)arg1 ;
-(void)setSharedItems:(NSArray *)arg1 ;
-(char)debugRunningServices;
-(char)disableServiceWindowPresentation;
-(char)hasNarrowLayout;
-(NSSharingService *)nsSharingService;
-(/*^block*/id)executeHandler:(/*^block*/id)arg1 onTimeoutInSeconds:(float)arg2 ;
-(id)_cancelExtensionKillTimer;
-(void)invalidateRemoteWindowController;
-(void)set_cancelExtensionKillTimer:(id)arg1 ;
-(void)_windowWillDoSomethingThatShouldCancelCurrentSharing:(id)arg1 ;
-(char)isCustomService;
-(void)_runActionBlockWithItems:(id)arg1 ;
-(id)nsSharingItemFromSHKSharingItem:(id)arg1 fromItems:(id)arg2 delegate:(id)arg3 ;
-(id)customDelegate;
-(void)registerPotentially;
-(void)unregisterPotentially;
-(/*^block*/id)executeHandler:(/*^block*/id)arg1 onQueue:(id)arg2 onTimeoutInSeconds:(float)arg3 ;
-(void)observeAllAncestorWindowForSomethingThatWillCancelSharingWithSourceWindow:(id)arg1 ;
-(id)appID;
-(void)setRestoreWindowStateBlock:(id)arg1 ;
-(void)killExtensionIfNoResponseWithTimeout:(float)arg1 ;
-(void)requestCompletedWithItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_plugInDeactivated;
-(void)serviceDoneWithStatus:(unsigned long long)arg1 error:(id)arg2 parameters:(id)arg3 outputItems:(id)arg4 ;
-(id)restoreWindowStateBlock;
-(void)registerWithItems:(id)arg1 ;
-(void)cancelExtensionKillTimer;
-(void)cancelRemoteServiceUI;
-(void)serviceDoneWithStatus:(unsigned long long)arg1 error:(id)arg2 parameters:(id)arg3 outputItems:(id)arg4 completion:(/*^block*/id)arg5 ;
-(NSArray *)sharedItems;
-(void)_addObjects:(id)arg1 toArray:(id)arg2 ;
-(NSURL *)plugInURL;
-(id)customInternalDelegate;
-(unsigned)remoteCID;
-(void)setRemoteCID:(unsigned)arg1 ;
-(NSExtension *)extension;
-(id)block;
-(id)bundle;
-(id)init;
-(void)setDelegate:(id<SHKSharingServiceDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(SHKHostExtensionContext *)extensionContext;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<SHKSharingServiceDelegate>)delegate;
-(long long)compare:(id)arg1 ;
-(NSImage *)alternateImage;
-(void)setAlternateImage:(NSImage *)arg1 ;
-(unsigned long long)mask;
-(void)setMask:(unsigned long long)arg1 ;
-(char)canPerformWithItems:(id)arg1 ;
-(void)performWithItems:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)preProcessingJavaScriptURL;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id<PKPlugIn>)plugIn;
-(void)setExtension:(NSExtension *)arg1 ;
@end

