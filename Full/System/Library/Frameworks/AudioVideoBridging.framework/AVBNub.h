/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AVBNub : NSObject {

	unsigned connection;

}

@property (readonly) unsigned long long myEntityID; 
+(id)sharedNub;
+(void)loadAVBNub;
-(char)add17221ACMPServiceToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)remove17221ACMPServiceFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)add17221AECPServiceToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)remove17221AECPServiceFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)nextAvailableDynamicEntityID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(char)releaseDynamicEntityID:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)myEntityID;
-(char)addAVBClientToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)addMVRPClientToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)addMSRPClientToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)add17221ADPServiceToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)addTimeSyncToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)add1722MAAPServiceToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)removeAVBClientFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)removeMVRPClientFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)removeMSRPClientFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)remove17221ADPServiceFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)removeTimeSyncFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)remove1722MAAPServiceFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)getMyEntityID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(char)addRequireTimeSyncToInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)removeRequireTimeSyncFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(char)nextAvailableDynamicEntityModelID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(char)releaseDynamicEntityModelID:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)wantsAudioDriverWithError:(id*)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
@end
