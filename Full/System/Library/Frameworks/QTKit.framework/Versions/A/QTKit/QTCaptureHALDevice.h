/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTCaptureDevice.h>

@class NSString, NSArray, NSMutableDictionary, NSLock;

@interface QTCaptureHALDevice : QTCaptureDevice {

	NSString* _uniqueID;
	int _IOType;
	unsigned _deviceID;
	NSString* _localizedDisplayName;
	NSString* _modelUniqueID;
	NSArray* _formatDescriptions;
	NSMutableDictionary* _attributes;
	NSLock* _attributesLock;

}
+(id)deviceWithUniqueID:(id)arg1 ;
+(void)_refreshDevicesFromCallback;
+(id)devicesWithIOType:(int)arg1 ;
+(void)_refreshDevicesWithIOType:(int)arg1 ;
+(id)defaultInputDeviceWithMediaType:(id)arg1 ;
-(unsigned)transportType;
-(id)formatDescriptions;
-(void)_postNotificationNamed:(id)arg1 ;
-(long long)deviceSystem;
-(unsigned)connectionUnitComponentSubType;
-(char)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(void)_handleDeviceIsAliveNotification:(id)arg1 ;
-(void)_refreshAttributes;
-(void)_refreshFormatDescriptionsAttribute;
-(id)modelUniqueID;
-(id)deviceAttributes;
-(char)attributeIsReadOnly:(id)arg1 ;
-(void)_refreshFormatDescriptionsAttributeFromCallback;
-(id)initWithUniqueID:(id)arg1 deviceID:(unsigned)arg2 IOType:(int)arg3 ;
-(int)IOType;
-(void)_refreshInputSourceAttributes;
-(void)_refreshInputSourceAttributesFromCallback;
-(char)isInUseByAnotherApplication;
-(id)init;
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

