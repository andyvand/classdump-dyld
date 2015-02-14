/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureDevice.h>

@class NSString, NSArray, AVCaptureDeviceFormat, NSLock, AVCaptureDeviceInputSource;

@interface AVCaptureDALDevice : AVCaptureDevice {

	NSString* _uniqueID;
	unsigned _connectionID;
	unsigned long long _flags;
	NSArray* _formats;
	AVCaptureDeviceFormat* _activeFormat;
	SCD_Struct_CM5 _activeMinFrameDuration;
	SCD_Struct_CM5 _activeMaxFrameDuration;
	char _suspended;
	NSLock* _propertiesLock;
	NSString* _localizedName;
	NSString* _modelID;
	NSString* _manufacturer;
	char _automaticallyAdjustsFeatureControls;
	dispatch_queue_sRef _transportPropertyObserverQueue;
	dispatch_queue_sRef _transportTimerQueue;
	long long _transportPropertyObserverCount;
	dispatch_source_sRef _transportPropertyObserverTimer;
	long long _focusMode;
	long long _exposureMode;
	long long _whiteBalanceMode;
	CGPoint _focusPointOfInterest;
	CGPoint _exposurePointOfInterest;
	char _transportControlsSupported;
	long long _transportControlsPlaybackMode;
	float _transportControlsSpeed;
	char _adjustingFocus;
	char _adjustingExposure;
	char _adjustingWhiteBalance;
	unsigned long long _transportType;
	NSArray* _inputSources;
	AVCaptureDeviceInputSource* _activeInputSource;
	OpaqueCMClockRef _deviceClock;

}

@property (assign,nonatomic) char transportControlsSupported;                                        //@synthesize transportControlsSupported=_transportControlsSupported - In the implementation block
@property (assign,nonatomic) long long transportControlsPlaybackMode;                                //@synthesize transportControlsPlaybackMode=_transportControlsPlaybackMode - In the implementation block
@property (assign,nonatomic) float transportControlsSpeed;                                           //@synthesize transportControlsSpeed=_transportControlsSpeed - In the implementation block
@property (assign,getter=isAdjustingFocus,nonatomic) char adjustingFocus;                            //@synthesize adjustingFocus=_adjustingFocus - In the implementation block
@property (assign,getter=isAdjustingExposure,nonatomic) char adjustingExposure;                      //@synthesize adjustingExposure=_adjustingExposure - In the implementation block
@property (assign,getter=isAdjustingWhiteBalance,nonatomic) char adjustingWhiteBalance;              //@synthesize adjustingWhiteBalance=_adjustingWhiteBalance - In the implementation block
+(void)_refreshDevices;
+(void)_putDeviceIntoInputModeIfPossible:(unsigned)arg1 ;
+(id)deviceWithUniqueID:(id)arg1 ;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
+(void)initialize;
+(id)devices;
-(int)transportType;
-(void)setConnectionID:(unsigned)arg1 ;
-(id)initWithUniqueID:(id)arg1 connectionID:(unsigned)arg2 ;
-(void)_removePropertyListeners;
-(void)_refreshProperties;
-(void)_postNotificationNamed:(id)arg1 ;
-(id)formats;
-(void)_refreshActiveFormat;
-(id)activeFormat;
-(id)inputSources;
-(void)_refreshStreams;
-(void)_refreshLocalizedName;
-(void)_refreshModelID;
-(void)_refreshManufacturer;
-(void)_refreshLinkedDevices;
-(void)_refreshSuspendedAttribute;
-(void)_refreshIsInUseByAnotherApplication;
-(void)_refreshInputSources;
-(void)_refreshFormats;
-(id)supportedFrameRateRangesForStream:(unsigned)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(id)deviceFormatForStream:(unsigned)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(SCD_Struct_CM5)activeVideoMinFrameDurationForStream:(unsigned)arg1 ;
-(SCD_Struct_CM5)activeVideoMaxFrameDurationForStream:(unsigned)arg1 ;
-(id)activeInputSource;
-(char)_retrieveTransportControlsSupported;
-(SCD_Struct_AV51)_retrieveTransportValues;
-(SCD_Struct_AV51)_retrieveAVCDeviceValues;
-(SCD_Struct_AV51)_retrieveRS422DeviceValues;
-(void)_startupTransportPropertyObserverTimerForPlaybackMode:(long long)arg1 ;
-(id)modelID;
-(opaqueCMSampleBufferRef)copyStillImageSampleBufferWithFormat:(id)arg1 error:(id*)arg2 ;
-(long long)deviceSystem;
-(unsigned)connectionUnitComponentSubType;
-(OpaqueCMClockRef)deviceClock;
-(void)setActiveFormat:(id)arg1 ;
-(SCD_Struct_CM5)activeVideoMinFrameDuration;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)activeVideoMaxFrameDuration;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_CM5)arg1 ;
-(char)supportsAVCaptureSessionPreset:(id)arg1 ;
-(void)setActiveInputSource:(id)arg1 ;
-(char)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(void)_handleDeviceIsAliveNotification:(id)arg1 ;
-(char)becomeDeviceMaster:(id*)arg1 ;
-(void)relinquishDeviceMaster;
-(char)transportControlsSupported;
-(long long)transportControlsPlaybackMode;
-(float)transportControlsSpeed;
-(char)_sendAVCDeviceOpcode:(unsigned char)arg1 playbackMode:(unsigned char)arg2 ;
-(void)_refreshIsInUseByAnotherApplicationFromCallback;
-(void)_refreshStreamsFromCallback;
-(void)_refreshFormatsFromCallback;
-(void)_refreshLinkedDevicesFromCallback;
-(void)_refreshSuspendedPropertyFromCallback;
-(void)_refreshInputSourcesFromCallback;
-(void)setAutomaticallyAdjustsFeatureControls:(char)arg1 ;
-(char)automaticallyAdjustsFeatureControls;
-(char)isHighResolutionCamera;
-(id)availableStillImageFormats;
-(void)setTransportControlsSupported:(char)arg1 ;
-(void)setTransportControlsPlaybackMode:(long long)arg1 ;
-(void)setTransportControlsSpeed:(float)arg1 ;
-(char)isAdjustingFocus;
-(void)setAdjustingFocus:(char)arg1 ;
-(char)isAdjustingExposure;
-(void)setAdjustingExposure:(char)arg1 ;
-(char)isAdjustingWhiteBalance;
-(void)setAdjustingWhiteBalance:(char)arg1 ;
-(char)isFocusModeSupported:(long long)arg1 ;
-(void)setFocusMode:(long long)arg1 ;
-(char)isExposureModeSupported:(long long)arg1 ;
-(long long)exposureMode;
-(void)setExposureMode:(long long)arg1 ;
-(char)isWhiteBalanceModeSupported:(long long)arg1 ;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(void)setTransportControlsPlaybackMode:(long long)arg1 speed:(float)arg2 ;
-(char)isSuspended;
-(id)manufacturer;
-(char)isInUseByAnotherApplication;
-(void)finalize;
-(void)dealloc;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(char)isConnected;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)localizedName;
-(unsigned)deviceID;
-(id)uniqueID;
-(unsigned)connectionID;
@end

