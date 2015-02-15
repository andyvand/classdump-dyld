/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSTouchDevice : NSObject {

	unsigned long long _deviceID;
	long long _reserved1;
	double _reserved2;
	long long _flags;
	CGSize _surfaceSize;
	id _reserved3[3];

}

@property (readonly) unsigned long long deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (readonly) CGSize surfaceSize;                       //@synthesize surfaceSize=_surfaceSize - In the implementation block
+(void)initialize;
+(id)touchDevices;
+(id)_touchDeviceFromTrueDeviceID:(unsigned long long)arg1 ;
+(void)_touchDeviceAdded:(id)arg1 ;
+(void)_touchDeviceRemoved:(id)arg1 ;
+(id)_touchDeviceWithIOHIDDictionary:(id)arg1 ;
+(id)touchDeviceFromDeviceID:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_touchingTouches;
-(id)_cancelledTouches;
-(CGSize)surfaceSize;
-(unsigned long long)deviceID;
-(id)_initWithIOHIDDictionary:(id)arg1 ;
-(unsigned long long)_trueDeviceID;
-(long long)deviceType;
-(id)_deviceInfo;
@end

