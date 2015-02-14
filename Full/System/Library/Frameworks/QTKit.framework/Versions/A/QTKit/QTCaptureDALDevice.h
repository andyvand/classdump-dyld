/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTCaptureDevice.h>

@class NSString, NSArray, NSMutableDictionary, NSLock, NSTimer;

@interface QTCaptureDALDevice : QTCaptureDevice {

	NSString* _uniqueID;
	unsigned _deviceID;
	unsigned long long _flags;
	NSArray* _formatDescriptions;
	NSMutableDictionary* _attributes;
	NSLock* _attributesLock;
	NSString* _localizedDisplayName;
	NSString* _modelUniqueID;
	NSTimer* _deviceAVCControllsPoller;
	char _automaticallyAdjustsFeatureControls;

}
+(void)_refreshDevices;
+(id)deviceWithUniqueID:(id)arg1 ;
+(id)devicesWithIOType:(int)arg1 ;
+(id)defaultInputDeviceWithMediaType:(id)arg1 ;
-(unsigned)transportType;
-(id)formatDescriptions;
-(void)_removePropertyListeners;
-(void)_postNotificationNamed:(id)arg1 ;
-(void)_refreshStreams;
-(void)_refreshSuspendedAttribute;
-(void)_refreshIsInUseByAnotherApplication;
-(long long)deviceSystem;
-(unsigned)connectionUnitComponentSubType;
-(char)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(void)_handleDeviceIsAliveNotification:(id)arg1 ;
-(char)_sendAVCDeviceOpcode:(unsigned char)arg1 playbackMode:(unsigned char)arg2 ;
-(void)_refreshIsInUseByAnotherApplicationFromCallback;
-(void)_refreshStreamsFromCallback;
-(void)setAutomaticallyAdjustsFeatureControls:(char)arg1 ;
-(char)automaticallyAdjustsFeatureControls;
-(char)isHighResolutionCamera;
-(id)availableStillImageFormats;
-(id)initWithUniqueID:(id)arg1 deviceID:(unsigned)arg2 ;
-(void)_refreshAttributes;
-(void)_refreshLinkedDevicesAttribute;
-(void)_retrieveAVCDeviceOpcode:(id)arg1 ;
-(void)_refreshFormatDescriptionsAttribute;
-(void)startDeviceAVCControlsPoller;
-(id)modelUniqueID;
-(id)stillImageSampleBufferWithFormat:(id)arg1 error:(id*)arg2 ;
-(id)deviceAttributes;
-(char)attributeIsReadOnly:(id)arg1 ;
-(void)_refreshFormatDescriptionsAttributeFromCallback;
-(void)_refreshLinkedDevicesAttributeFromCallback;
-(void)_refreshSuspendedAttributeFromCallback;
-(char)nativelySupportsCompressionOptions:(id)arg1 ;
-(char)isInUseByAnotherApplication;
-(void)finalize;
-(void)dealloc;
-(char)isConnected;
-(unsigned)deviceID;
-(id)uniqueID;
-(id)localizedDisplayName;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)attributeForKey:(id)arg1 ;
-(void)setDeviceID:(unsigned)arg1 ;
@end

