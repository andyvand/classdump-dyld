/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:31:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/SystemConfiguration/PrinterNotifications.bundle/Contents/MacOS/PrinterNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PrinterNotifications/PrinterNotifications-Structs.h>
@class NSString, NSMutableSet, NSNumber, NSArray, NSMutableDictionary, NSDictionary;

@interface USBDevice : NSObject {

	int _eSCLInterfaceCount;
	int _ippUSBInterfaceCount;
	int _port;
	NSString* _pendingName;
	DNSServiceRef_tRef _flagshipRef;
	DNSServiceRef_tRef _ippRef;
	DNSServiceRef_tRef _usbRef;
	DNSServiceRef_tRef _scanRef;
	NSMutableSet* _deviceIDs;
	NSString* _vendorName;
	NSString* _productName;
	NSString* _serialNumber;
	NSNumber* _locationID;
	NSNumber* _vendorID;
	NSNumber* _productID;
	NSArray* _icons;
	NSString* _note;
	NSMutableDictionary* _defaultsSettings;
	NSDictionary* _printerTxtDictionary;
	NSDictionary* _scannerTxtDictionary;

}

@property (nonatomic,retain) NSString * registeredName; 
@property (nonatomic,retain) NSString * pendingName;                        //@synthesize pendingName=_pendingName - In the implementation block
@property (nonatomic,readonly) NSString * preferredName; 
@property (assign,nonatomic) DNSServiceRef_tRef flagshipRef;                //@synthesize flagshipRef=_flagshipRef - In the implementation block
@property (assign,nonatomic) DNSServiceRef_tRef ippRef;                     //@synthesize ippRef=_ippRef - In the implementation block
@property (assign,nonatomic) DNSServiceRef_tRef usbRef;                     //@synthesize usbRef=_usbRef - In the implementation block
@property (assign,nonatomic) DNSServiceRef_tRef scanRef;                    //@synthesize scanRef=_scanRef - In the implementation block
@property (nonatomic,retain) NSMutableSet * deviceIDs;                      //@synthesize deviceIDs=_deviceIDs - In the implementation block
@property (assign,nonatomic) int eSCLInterfaceCount;                        //@synthesize eSCLInterfaceCount=_eSCLInterfaceCount - In the implementation block
@property (assign,nonatomic) int ippUSBInterfaceCount;                      //@synthesize ippUSBInterfaceCount=_ippUSBInterfaceCount - In the implementation block
@property (assign,nonatomic) int port;                                      //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * vendorName;                         //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,retain) NSString * productName;                        //@synthesize productName=_productName - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                       //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSNumber * locationID;                         //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSArray * supportedURIs; 
@property (nonatomic,readonly) NSDictionary * smJobDictionary; 
@property (nonatomic,readonly) char supportsESCL; 
@property (nonatomic,readonly) char supportsIPPEverywhere; 
@property (retain) NSNumber * vendorID;                                     //@synthesize vendorID=_vendorID - In the implementation block
@property (retain) NSNumber * productID;                                    //@synthesize productID=_productID - In the implementation block
@property (readonly) char supports1284IPPE; 
@property (readonly) char supports1284ESCL; 
@property (readonly) char useCache; 
@property (readonly) NSString * uuid; 
@property (readonly) NSString * ty; 
@property (readonly) NSString * adminURL; 
@property (retain) NSArray * icons;                                         //@synthesize icons=_icons - In the implementation block
@property (retain) NSString * note;                                         //@synthesize note=_note - In the implementation block
@property (retain) NSMutableDictionary * defaultsSettings;                  //@synthesize defaultsSettings=_defaultsSettings - In the implementation block
@property (retain) NSDictionary * printerTxtDictionary;                     //@synthesize printerTxtDictionary=_printerTxtDictionary - In the implementation block
@property (retain) NSDictionary * scannerTxtDictionary;                     //@synthesize scannerTxtDictionary=_scannerTxtDictionary - In the implementation block
+(id)USBDeviceWithProperties:(id)arg1 ;
+(id)componentForDeviceID:(id)arg1 forKeys:(id)arg2 ;
-(int)eSCLInterfaceCount;
-(DNSServiceRef_tRef)scanRef;
-(DNSServiceRef_tRef)usbRef;
-(char)supports1284IPPE;
-(void)setPrinterTxtDictionary:(NSDictionary *)arg1 ;
-(id)initUSBDeviceWithProperties:(id)arg1 ;
-(void)setDefaultsSettings:(NSMutableDictionary *)arg1 ;
-(int)ippUSBInterfaceCount;
-(void)setScannerTxtDictionary:(NSDictionary *)arg1 ;
-(char)useCache;
-(char)supportsESCL;
-(NSString *)ty;
-(NSDictionary *)smJobDictionary;
-(void)setVendorName:(NSString *)arg1 ;
-(NSMutableSet *)deviceIDs;
-(NSArray *)supportedURIs;
-(void)updateCacheDictionary;
-(void)setScanRef:(DNSServiceRef_tRef)arg1 ;
-(NSString *)registeredName;
-(void)setUsbRef:(DNSServiceRef_tRef)arg1 ;
-(void)setPendingName:(NSString *)arg1 ;
-(void)setFlagshipRef:(DNSServiceRef_tRef)arg1 ;
-(NSString *)preferredName;
-(void)setESCLInterfaceCount:(int)arg1 ;
-(void)setRegisteredName:(NSString *)arg1 ;
-(NSDictionary *)scannerTxtDictionary;
-(void)setIppUSBInterfaceCount:(int)arg1 ;
-(id)iconURIs:(ipp_attribute_sRef)arg1 ;
-(int)printerTxtRecord:(_TXTRecordRef_t*)arg1 ;
-(char)isNameLocallyAvailable:(id)arg1 ;
-(NSString *)adminURL;
-(int)ippusbTxtRecord:(_TXTRecordRef_t*)arg1 ;
-(int)scannerTxtRecord:(_TXTRecordRef_t*)arg1 ;
-(NSDictionary *)printerTxtDictionary;
-(char)supportsIPPEverywhere;
-(void)setDeviceIDs:(NSMutableSet *)arg1 ;
-(char)supports1284ESCL;
-(NSMutableDictionary *)defaultsSettings;
-(NSString *)pendingName;
-(void)setIppRef:(DNSServiceRef_tRef)arg1 ;
-(DNSServiceRef_tRef)ippRef;
-(DNSServiceRef_tRef)flagshipRef;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)uuid;
-(NSString *)vendorName;
-(NSNumber *)productID;
-(void)setVendorID:(NSNumber *)arg1 ;
-(void)setProductID:(NSNumber *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(void)setNote:(NSString *)arg1 ;
-(NSArray *)icons;
-(void)setIcons:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSNumber *)vendorID;
-(NSString *)label;
-(NSString *)note;
-(NSNumber *)locationID;
-(void)setLocationID:(NSNumber *)arg1 ;
-(int)port;
-(void)setPort:(int)arg1 ;
@end

