/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKAssetEpub-Structs.h>
#import <BKAssetEpub/PRAMDSessionDelegate.h>
#import <BKAssetEpub/PTFSMonitorDelegate.h>

@class NSArray, PRAMDSession, BKBook, PTFSMonitor, BKEPubDevelopmentHostSessionDelegate, NSMutableDictionary, NSString;

@interface BKEPubDevelopmentManager : NSObject <PRAMDSessionDelegate, PTFSMonitorDelegate> {

	NSArray* _devices;
	/*^block*/id _updateBlock;
	PRAMDSession* _session;
	BKBook* _book;
	PTFSMonitor* _fsMonitor;
	BKEPubDevelopmentHostSessionDelegate* _hostSessionDelegate;
	NSMutableDictionary* _devicesByUUID;

}

@property (nonatomic,retain) NSArray * devices;                                                       //@synthesize devices=_devices - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                            //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,retain) PRAMDSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) BKBook * book;                                                           //@synthesize book=_book - In the implementation block
@property (nonatomic,retain) PTFSMonitor * fsMonitor;                                                 //@synthesize fsMonitor=_fsMonitor - In the implementation block
@property (nonatomic,retain) BKEPubDevelopmentHostSessionDelegate * hostSessionDelegate;              //@synthesize hostSessionDelegate=_hostSessionDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * devicesByUUID;                                     //@synthesize devicesByUUID=_devicesByUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBook:(BKBook *)arg1 ;
-(id)initWithBook:(id)arg1 ;
-(void)amdSessionDeviceAttached:(AMDeviceRef)arg1 ;
-(void)amdSessionDeviceDetached:(AMDeviceRef)arg1 ;
-(void)setSyncEnabled:(char)arg1 forEntry:(id)arg2 ;
-(PTFSMonitor *)fsMonitor;
-(char)_parseAndUpdateMetadata;
-(BKEPubDevelopmentHostSessionDelegate *)hostSessionDelegate;
-(void)_addToManifest:(id)arg1 files:(id)arg2 srcRootPath:(id)arg3 modifyType:(int)arg4 ;
-(void)_startAutoSync;
-(NSMutableDictionary *)devicesByUUID;
-(void)fsMonitor:(id)arg1 addedFiles:(id)arg2 deletedFiles:(id)arg3 modifiedFiles:(id)arg4 ;
-(void)_snapshotAndSync:(id)arg1 syncType:(int)arg2 ;
-(void)setDevicesByUUID:(NSMutableDictionary *)arg1 ;
-(id)_syncPath;
-(void)setFsMonitor:(PTFSMonitor *)arg1 ;
-(void)setHostSessionDelegate:(BKEPubDevelopmentHostSessionDelegate *)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(void)setSession:(PRAMDSession *)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(PRAMDSession *)session;
-(NSArray *)devices;
-(BKBook *)book;
@end

