/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DiskManagement.framework/Versions/A/DiskManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DiskManagement/DiskManagement-Structs.h>
@interface DMAppleRAID : NSObject {

	id _instPriv;

}
-(id)DADiskToUUID:(DADiskRef)arg1 lookupMembers:(char)arg2 lookupSpares:(char)arg3 ;
-(id)raidMembers:(id)arg1 returnMembers:(char)arg2 returnSpares:(char)arg3 master:(id*)arg4 ;
-(int)deleteRAIDSetUUID:(id)arg1 ;
-(int)removeFromRAIDSetUUID:(id)arg1 memberUUID:(id)arg2 ;
-(int)addToRAIDSetUUID:(id)arg1 newDisk:(DADiskRef)arg2 type:(id)arg3 ;
-(int)addToRAIDSet:(DADiskRef)arg1 newDisk:(DADiskRef)arg2 type:(id)arg3 ;
-(id)DADiskToUUID:(DADiskRef)arg1 ;
-(DADiskRef)UUIDToDADisk:(id)arg1 ;
-(char)isRAIDSet:(DADiskRef)arg1 ;
-(char)isRAIDMember:(DADiskRef)arg1 ;
-(id)childrenOfRAID:(DADiskRef)arg1 ;
-(int)createRAIDSetWithDisks:(id)arg1 setType:(id)arg2 name:(id)arg3 format:(id)arg4 options:(id)arg5 ;
-(int)enableRAIDSetWithDisk:(DADiskRef)arg1 setType:(id)arg2 options:(id)arg3 ;
-(int)deleteRAIDSet:(DADiskRef)arg1 ;
-(int)removeFromRAIDSet:(DADiskRef)arg1 disk:(DADiskRef)arg2 ;
-(int)repairRAIDSetUUID:(id)arg1 newDisk:(DADiskRef)arg2 ;
-(int)repairRAIDSet:(DADiskRef)arg1 newDisk:(DADiskRef)arg2 ;
-(int)updateRAIDSetParameters:(DADiskRef)arg1 setKey:(id)arg2 value:(id)arg3 ;
-(id)initWithManager:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

