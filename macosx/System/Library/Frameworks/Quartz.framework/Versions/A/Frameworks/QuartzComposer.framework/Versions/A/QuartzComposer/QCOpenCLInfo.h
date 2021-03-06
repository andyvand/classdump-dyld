/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCIndexPort, QCStringPort, QCNumberPort;

@interface QCOpenCLInfo : QCPatch {

	QCIndexPort* inputDevices;
	QCIndexPort* outputDeviceCount;
	QCStringPort* outputDeviceType;
	QCStringPort* outputDeviceName;
	QCStringPort* outputDeviceVendor;
	QCStringPort* outputDeviceVersion;
	QCIndexPort* outputDeviceMaxComputeUnits;
	QCIndexPort* outputDeviceMaxWorkItemDimensions;
	QCIndexPort* outputDeviceMaxWorkGroupSize;
	QCIndexPort* outputDeviceMaxReadImageArgs;
	QCIndexPort* outputDeviceMaxWriteImageArgs;
	QCIndexPort* outputDeviceMaxSamplers;
	QCIndexPort* outputDeviceMaxConstantsArgs;
	QCIndexPort* outputDeviceMaxConstantBufferSize;
	QCNumberPort* outputDeviceGlobalMemSize;
	QCIndexPort* outputDeviceLocalMemSize;
	QCIndexPort* outputDeviceImage2DMaxWidth;
	QCIndexPort* outputDeviceImage2DMaxHeight;
	cl_device_id* _devices;
	unsigned long long _count;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(CFArrayRef)deviceNames;
-(void)_updateContextInfo:(id)arg1 ;
-(unsigned long long)deviceType:(unsigned long long)arg1 ;
-(id)deviceName:(unsigned long long)arg1 ;
-(id)deviceVendor:(unsigned long long)arg1 ;
-(id)deviceVersion:(unsigned long long)arg1 ;
-(unsigned)deviceMaxComputeUnits:(unsigned long long)arg1 ;
-(unsigned)deviceMaxWorkItemDimensions:(unsigned long long)arg1 ;
-(unsigned long long)deviceMaxWorkGroupSize:(unsigned long long)arg1 ;
-(unsigned)deviceMaxReadImageArgs:(unsigned long long)arg1 ;
-(unsigned)deviceMaxWriteImageArgs:(unsigned long long)arg1 ;
-(unsigned)deviceMaxSamplers:(unsigned long long)arg1 ;
-(unsigned)deviceMaxConstantsArgs:(unsigned long long)arg1 ;
-(unsigned long long)deviceMaxConstantBufferSize:(unsigned long long)arg1 ;
-(unsigned long long)deviceGlobalMemSize:(unsigned long long)arg1 ;
-(unsigned long long)deviceLocalMemSize:(unsigned long long)arg1 ;
-(unsigned long long)deviceImage2DMaxWidth:(unsigned long long)arg1 ;
-(unsigned long long)deviceImage2DMaxHeight:(unsigned long long)arg1 ;
@end

