/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCaptureCore/ICDevice.h>

@class NSArray, NSString, NSNumber;

@interface ICCameraDevice : ICDevice {

	id _cameraProperties;

}

@property (readonly) char batteryLevelAvailable; 
@property (readonly) unsigned long long batteryLevel; 
@property (readonly) unsigned long long contentCatalogPercentCompleted; 
@property (readonly) NSArray * contents; 
@property (readonly) NSArray * mediaFiles; 
@property (readonly) double timeOffset; 
@property (readonly) char isAccessRestrictedAppleDevice; 
@property (readonly) NSString * mountPoint; 
@property (assign) char tetheredCaptureEnabled; 
@property (readonly) unsigned long long estimatedCountOfMediafiles; 
@property (readonly) unsigned long long estimatedNumberOfDownloadableItems; 
@property (getter=mountPoint,readonly) NSString * mountPath; 
@property (readonly) NSString * buildVersion; 
@property (readonly) NSString * deviceClass; 
@property (readonly) NSString * deviceColor; 
@property (readonly) NSString * deviceEnclosureColor; 
@property (readonly) NSNumber * devicePairedState; 
@property (readonly) NSString * productType; 
@property (readonly) NSString * productVersion; 
@property (readonly) NSArray * supportedSidecarFiles; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSString *)productVersion;
-(void)removeContent;
-(char)handleCommandCompletion:(id)arg1 ;
-(char)updateProperties:(id)arg1 ;
-(char)deallocPhase;
-(void)setContentCatalogPercentCompleted:(unsigned long long)arg1 ;
-(char)batteryLevelAvailable;
-(char)hasTemporaryStore;
-(unsigned long long)estimatedCountOfMediafiles;
-(void)setEstimatedCountOfMediafiles:(unsigned long long)arg1 ;
-(char)tetheredCaptureEnabled;
-(void)setTetheredCaptureEnabled:(char)arg1 ;
-(NSArray *)supportedSidecarFiles;
-(void)initializeCameraProperties:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(void)registerForImageCaptureEventNotifications:(id)arg1 ;
-(void)unregisterForImageCaptureEventNotifications:(id)arg1 ;
-(void)handleContent:(id)arg1 ;
-(void)gotImage;
-(void)deletedImages;
-(void)addFolder:(id)arg1 ;
-(void)processImageCaptureNotification:(id)arg1 queued:(char)arg2 ;
-(void)addMediaFile:(id)arg1 ;
-(void)processQueuedImageCaptureNotification:(id)arg1 ;
-(void)removeFolder:(id)arg1 ;
-(NSNumber *)devicePairedState;
-(NSString *)deviceClass;
-(NSString *)deviceColor;
-(NSString *)deviceEnclosureColor;
-(id)filesOfType:(id)arg1 ;
-(void)requestSyncClock;
-(void)requestTakePicture;
-(void)requestEnableTethering;
-(void)requestDisableTethering;
-(void)requestPairDevice;
-(void)requestUnpairDevice;
-(void)requestEject;
-(void)requestUploadFile:(id)arg1 options:(id)arg2 uploadDelegate:(id)arg3 didUploadSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)requestReadDataFromFile:(id)arg1 atOffset:(long long)arg2 length:(long long)arg3 readDelegate:(id)arg4 didReadDataSelector:(SEL)arg5 contextInfo:(void*)arg6 ;
-(void)requestSendPTPCommand:(id)arg1 outData:(id)arg2 sendCommandDelegate:(id)arg3 didSendCommandSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)removeMediaFile:(id)arg1 ;
-(void)removeMediaFiles:(id)arg1 ;
-(void)registerForNotifications:(id)arg1 options:(id)arg2 ;
-(void)addToGetThumbnailQueue:(id)arg1 stageLargeThumbnail:(int)arg2 ;
-(void)addToGetMetadataQueue:(id)arg1 ;
-(void)gotThumbnail;
-(void)gotMetadata;
-(NSString *)mountPoint;
-(unsigned long long)batteryLevel;
-(void)getContent;
-(NSString *)buildVersion;
-(unsigned long long)contentCatalogPercentCompleted;
-(char)isAccessRestrictedAppleDevice;
-(void)requestOpenSession;
-(void)requestCloseSession;
-(void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(NSArray *)mediaFiles;
-(void)cancelDelete;
-(void)requestDeleteFiles:(id)arg1 ;
-(void)requestEjectOrDisconnect;
-(unsigned long long)estimatedNumberOfDownloadableItems;
-(NSString *)productType;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(NSArray *)contents;
-(double)timeOffset;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isLocked;
-(id)initWithDictionary:(id)arg1 ;
-(void)cancelDownload;
@end

