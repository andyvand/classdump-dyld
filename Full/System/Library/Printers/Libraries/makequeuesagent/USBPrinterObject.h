/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Printers/Libraries/makequeuesagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <makequeuesagent/MakequeuesPrinterObject.h>

@class NSString;

@interface USBPrinterObject : MakequeuesPrinterObject {

	unsigned _location;
	unsigned char _interfaceNumber;
	unsigned short _vendorID;
	unsigned short _productID;
	NSString* _deviceID;

}

@property (assign) unsigned location;                          //@synthesize location=_location - In the implementation block
@property (assign) unsigned char interfaceNumber;              //@synthesize interfaceNumber=_interfaceNumber - In the implementation block
@property (assign) unsigned short vendorID;                    //@synthesize vendorID=_vendorID - In the implementation block
@property (assign) unsigned short productID;                   //@synthesize productID=_productID - In the implementation block
@property (retain) NSString * deviceID;                        //@synthesize deviceID=_deviceID - In the implementation block
+(id)usbPrinterObjectWithLocation:(unsigned)arg1 interfaceNumber:(unsigned char)arg2 vendorID:(unsigned short)arg3 productID:(unsigned short)arg4 deviceID:(id)arg5 ;
-(id)softwareUpdateScanDeviceID;
-(char)matchesIDDevice:(id)arg1 ;
-(id)make;
-(char)supportsPCL;
-(char)supportsPostscript;
-(id)deviceURI;
-(id)matchExistingQueues:(id)arg1 ;
-(id)driverInfo:(id)arg1 ;
-(id)driverList;
-(id)initUSBPrinterObjectWithLocation:(unsigned)arg1 interfaceNumber:(unsigned char)arg2 vendorID:(unsigned short)arg3 productID:(unsigned short)arg4 deviceID:(id)arg5 ;
-(void)setInterfaceNumber:(unsigned char)arg1 ;
-(unsigned char)interfaceNumber;
-(unsigned short)productID;
-(void)setVendorID:(unsigned short)arg1 ;
-(void)setProductID:(unsigned short)arg1 ;
-(id)serialNumber;
-(id)model;
-(void)dealloc;
-(id)description;
-(id)name;
-(NSString *)deviceID;
-(unsigned short)vendorID;
-(unsigned)location;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setLocation:(unsigned)arg1 ;
@end
