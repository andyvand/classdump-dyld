/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/mds
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <mds/mds-Structs.h>
@class NSString;

@interface MDSDisk : NSObject {

	unsigned long long _volumePropertyFlags;
	int _device;
	stat _sb;
	short _volumeRefNum;
	int _spindle;
	statfs _sfsb;
	char _supports_getattrlist;
	vol_capabilities_attr _volumeCapabilities;
	vol_attributes_attr _volumeAttributes;
	char _capability_searchfs;
	char _capability_reverselookup;
	char _capability_dateadded;
	int _mountDepth;
	char _supportsFileIDs;
	char _supportsCatSearch;
	char _supportsVolFS;
	char _supportsCreationDate;
	char _supportsFSCompression;
	char _supportsBulkPermissions;
	char _isAuditVolume;
	char _isAutomount;
	char _isBootableFS;
	char _isCameraMedia;
	char _isDontBrowse;
	char _isLocal;
	char _isLowSeekTime;
	char _isReadOnly;
	char _isRemovable;
	char _isRootFS;
	char _isSingleVolume;
	char _isNeverIndexUnlessRootFS;
	char _isSyntheticMount;
	char _isWindowsBootableFS;
	char _isXsan;
	char _isMtmfs;
	char _previousLowDiskSpace;
	char _didRecoverFromLowDiskSpace;
	unsigned long long _lowDiskSpaceCycles;
	long long _timeLowDiskSpaceEnded;
	unsigned _objectCount;
	int _diskFd;
	CFUUIDRef _fsUUID;
	CFStringRef _mediaType;
	CFStringRef _physicalInterconnect;
	char _forceLowDiskSpace;
	NSString* _remountURL;

}

@property (readonly) int backupKind; 
@property (readonly) char isMobileBackups; 
@property (readonly) char isBackupVolume; 
@property (readonly) char isBackupDiskImage; 
@property (readonly) char isAuditVolume;                        //@synthesize isAuditVolume=_isAuditVolume - In the implementation block
@property (readonly) char isBootableVolume; 
@property (readonly) char isDiskImage; 
@property (readonly) char isEjectable; 
@property (readonly) char isExternal; 
@property (readonly) char isFileVault; 
@property (readonly) char isForcedLowDiskSpace; 
@property (readonly) char isInternal; 
@property (readonly) char isIPod; 
@property (readonly) char isLowDiskSpace; 
@property (readonly) char isLowSeekTime;                        //@synthesize isLowSeekTime=_isLowSeekTime - In the implementation block
@property (readonly) char isMediaDisc; 
@property (readonly) char isNetwork; 
@property (readonly) char isQuarantined; 
@property (readonly) char isRemovable; 
@property (readonly) char isSCHVolume; 
@property (readonly) char isSyntheticMount; 
@property (readonly) char isWindowsBootableVolume; 
@property (readonly) char isXsan;                               //@synthesize isXsan=_isXsan - In the implementation block
@property (readonly) char isMtmfs;                              //@synthesize isMtmfs=_isMtmfs - In the implementation block
@property (readonly) char isRootFS; 
-(FSRef)fsref;
-(char)testSupportsNewBulkPermissions:(const MDCredential*)arg1 ;
-(char)isBootableVolume;
-(char)isWindowsBootableVolume;
-(char*)copyCPath:(char*)arg1 ;
-(char)isMobileBackups;
-(char)isBackupVolume;
-(char)isRootFS;
-(id)initWithDADisk:(DADiskRef)arg1 andPathURL:(CFURLRef)arg2 synthetic:(char)arg3 ;
-(int)spindle;
-(short)volumeRefNum;
-(id)diskPath;
-(id)remountURL;
-(id)copyPartialPath:(id)arg1 ;
-(CFUUIDRef)copyFileSystemUUID;
-(CFStringRef)copyNetworkProtocol;
-(CFStringRef)copyPhysicalInterconnect;
-(char)isFreeSpaceAvailableByPercent:(double)arg1 ;
-(void)forceLowDiskSpace:(char)arg1 ;
-(int)backupKind;
-(char)isBackupDiskImage;
-(char)isFileVault;
-(char)isIPod;
-(char)isMediaDisc;
-(char)isQuarantined;
-(char)isSCHVolume;
-(char)isSyntheticMount;
-(char)isForcedLowDiskSpace;
-(char)updateLowDiskSpace;
-(char)isLowDiskSpace;
-(void)renamedWithPathURL:(CFURLRef)arg1 ;
-(char)supportsNewBulkPermissions;
-(int)fFsid0;
-(unsigned)objectCount;
-(BOOL)allowIndexUpgrade;
-(char)isAuditVolume;
-(char)isLowSeekTime;
-(char)isXsan;
-(char)isMtmfs;
-(id)volumeParams:(MDCredential*)arg1 transient:(BOOL)arg2 ;
-(SCD_Struct_MD21*)sivolumeParams:(MDCredential*)arg1 ;
-(char)isExternal;
-(char)isNetwork;
-(void)dealloc;
-(int)device;
-(char)isEjectable;
-(char)isDiskImage;
-(long long)freeSpace;
-(char)isRemovable;
-(char)isInternal;
@end
