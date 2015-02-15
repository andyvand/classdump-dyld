/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/DMAsyncDelegate.h>

@interface TEncryptionController : NSObject <DMAsyncDelegate> {

	TRef<__DADisk *, TRetainReleasePolicy<DADiskRef> >* _volumeDiskRef;
	TRef<__CFRunLoop *, TRetainReleasePolicy<CFRunLoopRef> >* _runLoop;
	TNSRef<DMCoreStorage *> _coreStorageManager;
	TString* _passwordUUID;
	TRef<dispatch_source_s *, TRetainReleasePolicy<dispatch_source_t> >* _conversionProgressTimerSource;
	double _percentComplete;
	BOOL _inProgress;
	TMutex _lock;

}

@property (assign) BOOL inProgress;                     //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
+(void)encryptDecryptVolumeCommon:(const TFENode*)arg1 password:(const TString*)arg2 hint:(const TString*)arg3 isEncrypt:(BOOL)arg4 ;
+(BOOL)isEncryptedVolume:(const TFENode*)arg1 inProgress:(BOOL*)arg2 ;
+(void)encryptVolume:(const TFENode*)arg1 password:(const TString*)arg2 hint:(const TString*)arg3 ;
+(void)decryptVolume:(const TFENode*)arg1 password:(const TString*)arg2 ;
-(int)encryptDecryptVolumeCommon:(const TFENode*)arg1 volumeDiskRef:(DADiskRef)arg2 password:(const TString*)arg3 hint:(const TString*)arg4 isEncrypt:(BOOL)arg5 ;
-(DADiskRef)volumeDiskRef;
-(void)_cancelConversionProgressTimerSource;
-(void)clearPasswordUUID;
-(void)setVolumeDiskRef:(DADiskRef)arg1 ;
-(id)_coreStorageManager;
-(void)_startConversionProgressTimerSource;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(void)dmAsyncStartedForDisk:(DADiskRef)arg1 ;
-(void)dmAsyncProgressForDisk:(DADiskRef)arg1 barberPole:(char)arg2 percent:(float)arg3 ;
-(void)dmAsyncMessageForDisk:(DADiskRef)arg1 string:(id)arg2 dictionary:(id)arg3 ;
-(void)dmAsyncFinishedForDisk:(DADiskRef)arg1 mainError:(int)arg2 detailError:(int)arg3 dictionary:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(double)percentComplete;
-(void)setPercentComplete:(double)arg1 ;
@end
