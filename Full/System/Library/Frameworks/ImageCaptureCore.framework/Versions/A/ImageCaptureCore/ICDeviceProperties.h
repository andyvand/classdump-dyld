/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSNumber, NSString, NSMutableSet, NSDictionary, NSMutableDictionary;

@interface ICDeviceProperties : NSObject {

	id _delegate;
	NSNumber* _deviceRef;
	NSNumber* _connectionID;
	NSNumber* _deviceID;
	NSNumber* _remoteDeviceID;
	NSNumber* _sessionID;
	unsigned long long _type;
	NSString* _name;
	NSString* _productKind;
	CGImageRef _icon;
	NSMutableSet* _capabilities;
	double _softwareInstallPercentDone;
	char _canCancelSoftwareInstallation;
	NSString* _modulePath;
	NSString* _moduleVersion;
	int _moduleExecutableArchitecture;
	char _remote;
	char _shared;
	char _hasConfigurableWiFiInterface;
	NSString* _transportType;
	NSString* _iconPath;
	NSMutableSet* _clients;
	int _usbLocationID;
	int _usbProductID;
	int _usbVendorID;
	int _usbIntefaceClass;
	int _usbInterfaceSubClass;
	int _usbInterfaceProtocol;
	long long _fwGUID;
	NSString* _UUIDString;
	NSString* _persistentIDString;
	NSString* _serialNumberString;
	NSString* _autolaunchApplicationPath;
	NSString* _bonjourServiceType;
	NSString* _bonjourServiceName;
	NSString* _locationDescription;
	NSDictionary* _bonjourTXTRecord;
	NSString* _ipAddress;
	int _ipPort;
	char _autoOpenSession;
	char _openSessionPending;
	char _closeSessionPending;
	char _preferred;
	double _preferredTimeStamp;
	NSString* _buttonPressed;
	char _proxy;
	NSMutableDictionary* _userData;
	char _ready;
	NSString* _softwareUpdateQueryString;
	unsigned long long _deviceSoftwareInstallPercentCompleted;
	char _installSoftwareRequested;
	NSDictionary* _lastSoftwareInstallStatus;
	id _userObject;
	unsigned _assertionID;

}

@property (assign) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSNumber * deviceRef;                                  //@synthesize deviceRef=_deviceRef - In the implementation block
@property (retain) NSNumber * connectionID;                               //@synthesize connectionID=_connectionID - In the implementation block
@property (retain) NSNumber * deviceID;                                   //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSNumber * remoteDeviceID;                             //@synthesize remoteDeviceID=_remoteDeviceID - In the implementation block
@property (retain) NSNumber * sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) unsigned long long type;                               //@synthesize type=_type - In the implementation block
@property (retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (retain) NSString * productKind;                                //@synthesize productKind=_productKind - In the implementation block
@property (assign) CGImageRef icon; 
@property (retain) NSMutableSet * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (assign) double softwareInstallPercentDone;                     //@synthesize softwareInstallPercentDone=_softwareInstallPercentDone - In the implementation block
@property (assign) char canCancelSoftwareInstallation;                    //@synthesize canCancelSoftwareInstallation=_canCancelSoftwareInstallation - In the implementation block
@property (retain) NSString * modulePath;                                 //@synthesize modulePath=_modulePath - In the implementation block
@property (retain) NSString * moduleVersion;                              //@synthesize moduleVersion=_moduleVersion - In the implementation block
@property (assign) int moduleExecutableArchitecture;                      //@synthesize moduleExecutableArchitecture=_moduleExecutableArchitecture - In the implementation block
@property (assign) char remote;                                           //@synthesize remote=_remote - In the implementation block
@property (assign) char shared;                                           //@synthesize shared=_shared - In the implementation block
@property (assign) char hasConfigurableWiFiInterface;                     //@synthesize hasConfigurableWiFiInterface=_hasConfigurableWiFiInterface - In the implementation block
@property (retain) NSString * transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (retain) NSString * iconPath;                                   //@synthesize iconPath=_iconPath - In the implementation block
@property (retain) NSMutableSet * clients;                                //@synthesize clients=_clients - In the implementation block
@property (assign) int usbLocationID;                                     //@synthesize usbLocationID=_usbLocationID - In the implementation block
@property (assign) int usbProductID;                                      //@synthesize usbProductID=_usbProductID - In the implementation block
@property (assign) int usbVendorID;                                       //@synthesize usbVendorID=_usbVendorID - In the implementation block
@property (assign) int usbIntefaceClass;                                  //@synthesize usbIntefaceClass=_usbIntefaceClass - In the implementation block
@property (assign) int usbInterfaceSubClass;                              //@synthesize usbInterfaceSubClass=_usbInterfaceSubClass - In the implementation block
@property (assign) int usbInterfaceProtocol;                              //@synthesize usbInterfaceProtocol=_usbInterfaceProtocol - In the implementation block
@property (assign) long long fwGUID;                                      //@synthesize fwGUID=_fwGUID - In the implementation block
@property (retain) NSString * UUIDString;                                 //@synthesize UUIDString=_UUIDString - In the implementation block
@property (retain) NSString * persistentIDString;                         //@synthesize persistentIDString=_persistentIDString - In the implementation block
@property (retain) NSString * serialNumberString;                         //@synthesize serialNumberString=_serialNumberString - In the implementation block
@property (retain) NSString * autolaunchApplicationPath;                  //@synthesize autolaunchApplicationPath=_autolaunchApplicationPath - In the implementation block
@property (retain) NSString * bonjourServiceType;                         //@synthesize bonjourServiceType=_bonjourServiceType - In the implementation block
@property (retain) NSString * bonjourServiceName;                         //@synthesize bonjourServiceName=_bonjourServiceName - In the implementation block
@property (retain) NSDictionary * bonjourTXTRecord;                       //@synthesize bonjourTXTRecord=_bonjourTXTRecord - In the implementation block
@property (retain) NSString * locationDescription;                        //@synthesize locationDescription=_locationDescription - In the implementation block
@property (retain) NSString * ipAddress;                                  //@synthesize ipAddress=_ipAddress - In the implementation block
@property (assign) int ipPort;                                            //@synthesize ipPort=_ipPort - In the implementation block
@property (assign) char autoOpenSession;                                  //@synthesize autoOpenSession=_autoOpenSession - In the implementation block
@property (assign) char openSessionPending;                               //@synthesize openSessionPending=_openSessionPending - In the implementation block
@property (assign) char closeSessionPending;                              //@synthesize closeSessionPending=_closeSessionPending - In the implementation block
@property (assign) char preferred;                                        //@synthesize preferred=_preferred - In the implementation block
@property (assign) double preferredTimeStamp;                             //@synthesize preferredTimeStamp=_preferredTimeStamp - In the implementation block
@property (copy) NSString * buttonPressed;                                //@synthesize buttonPressed=_buttonPressed - In the implementation block
@property (assign) char proxy;                                            //@synthesize proxy=_proxy - In the implementation block
@property (retain) NSMutableDictionary * userData;                        //@synthesize userData=_userData - In the implementation block
@property (assign) char ready;                                            //@synthesize ready=_ready - In the implementation block
@property (retain) NSString * softwareUpdateQueryString;                  //@synthesize softwareUpdateQueryString=_softwareUpdateQueryString - In the implementation block
@property (assign) char installSoftwareRequested;                         //@synthesize installSoftwareRequested=_installSoftwareRequested - In the implementation block
@property (retain) NSDictionary * lastSoftwareInstallStatus;              //@synthesize lastSoftwareInstallStatus=_lastSoftwareInstallStatus - In the implementation block
@property (retain) id userObject;                                         //@synthesize userObject=_userObject - In the implementation block
@property (assign) unsigned assertionID;                                  //@synthesize assertionID=_assertionID - In the implementation block
-(NSString *)iconPath;
-(void)setShared:(char)arg1 ;
-(char)ready;
-(char)shared;
-(NSString *)UUIDString;
-(double)preferredTimeStamp;
-(char)preferred;
-(void)setPreferred:(char)arg1 ;
-(void)setPreferredTimeStamp:(double)arg1 ;
-(void)setButtonPressed:(NSString *)arg1 ;
-(void)initPowerAssertion;
-(void)releasePowerAssertion;
-(void)setDeviceRef:(NSNumber *)arg1 ;
-(void)setRemoteDeviceID:(NSNumber *)arg1 ;
-(void)setProductKind:(NSString *)arg1 ;
-(void)setModulePath:(NSString *)arg1 ;
-(void)setModuleVersion:(NSString *)arg1 ;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)setUUIDString:(NSString *)arg1 ;
-(void)setPersistentIDString:(NSString *)arg1 ;
-(void)setSerialNumberString:(NSString *)arg1 ;
-(void)setBonjourServiceType:(NSString *)arg1 ;
-(void)setBonjourServiceName:(NSString *)arg1 ;
-(void)setBonjourTXTRecord:(NSDictionary *)arg1 ;
-(void)setLocationDescription:(NSString *)arg1 ;
-(void)setSoftwareUpdateQueryString:(NSString *)arg1 ;
-(void)takePowerAssertion:(id)arg1 ;
-(NSNumber *)deviceRef;
-(NSNumber *)remoteDeviceID;
-(void)setSoftwareInstallPercentDone:(double)arg1 ;
-(void)setCanCancelSoftwareInstallation:(char)arg1 ;
-(NSString *)moduleVersion;
-(int)moduleExecutableArchitecture;
-(void)setModuleExecutableArchitecture:(int)arg1 ;
-(char)hasConfigurableWiFiInterface;
-(void)setHasConfigurableWiFiInterface:(char)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(int)usbVendorID;
-(void)setUsbVendorID:(int)arg1 ;
-(int)usbIntefaceClass;
-(void)setUsbIntefaceClass:(int)arg1 ;
-(int)usbInterfaceSubClass;
-(void)setUsbInterfaceSubClass:(int)arg1 ;
-(int)usbInterfaceProtocol;
-(void)setUsbInterfaceProtocol:(int)arg1 ;
-(long long)fwGUID;
-(void)setFwGUID:(long long)arg1 ;
-(NSString *)bonjourServiceType;
-(NSString *)bonjourServiceName;
-(NSDictionary *)bonjourTXTRecord;
-(int)ipPort;
-(void)setIpPort:(int)arg1 ;
-(char)autoOpenSession;
-(void)setAutoOpenSession:(char)arg1 ;
-(char)openSessionPending;
-(void)setOpenSessionPending:(char)arg1 ;
-(char)closeSessionPending;
-(void)setCloseSessionPending:(char)arg1 ;
-(NSString *)buttonPressed;
-(void)setProxy:(char)arg1 ;
-(void)setReady:(char)arg1 ;
-(NSString *)softwareUpdateQueryString;
-(char)installSoftwareRequested;
-(void)setInstallSoftwareRequested:(char)arg1 ;
-(NSDictionary *)lastSoftwareInstallStatus;
-(void)setLastSoftwareInstallStatus:(NSDictionary *)arg1 ;
-(id)userObject;
-(void)setUserObject:(id)arg1 ;
-(unsigned)assertionID;
-(void)setAssertionID:(unsigned)arg1 ;
-(char)remote;
-(NSString *)transportType;
-(void)setConnectionID:(NSNumber *)arg1 ;
-(void)setCapabilities:(NSMutableSet *)arg1 ;
-(NSString *)serialNumberString;
-(void)setIconPath:(NSString *)arg1 ;
-(void)setRemote:(char)arg1 ;
-(void)setTransportType:(NSString *)arg1 ;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSString *)ipAddress;
-(double)softwareInstallPercentDone;
-(char)canCancelSoftwareInstallation;
-(NSString *)persistentIDString;
-(NSString *)locationDescription;
-(NSString *)modulePath;
-(NSString *)productKind;
-(NSString *)autolaunchApplicationPath;
-(void)setAutolaunchApplicationPath:(NSString *)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)delegate;
-(void)setIcon:(CGImageRef)arg1 ;
-(CGImageRef)icon;
-(unsigned long long)type;
-(NSMutableDictionary *)userData;
-(void)setType:(unsigned long long)arg1 ;
-(NSNumber *)deviceID;
-(char)proxy;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)connectionID;
-(NSNumber *)sessionID;
-(void)setSessionID:(NSNumber *)arg1 ;
-(NSMutableSet *)capabilities;
-(NSMutableSet *)clients;
-(void)setUserData:(NSMutableDictionary *)arg1 ;
@end

