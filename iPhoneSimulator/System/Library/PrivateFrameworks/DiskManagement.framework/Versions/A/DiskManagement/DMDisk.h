/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DiskManagement.framework/Versions/A/DiskManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DMDisk : NSObject {

	NSString* _bsd;
	NSString* _vol;
	NSString* _mnt;

}
-(id)initWithBSD:(id)arg1 VOL:(id)arg2 MNT:(id)arg3 ;
-(id)wholeDiskName;
-(char)isRAIDSlice;
-(char)isRAIDSpare;
-(char)isRAIDMaster;
-(void)dealloc;
-(id)description;
@end

