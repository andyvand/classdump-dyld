/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Printers/Libraries/makequeuesagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MakequeuesPrinterObject : NSObject {

	NSString* _queueID;

}

@property (retain) NSString * queueID;                  //@synthesize queueID=_queueID - In the implementation block
@property (readonly) NSArray * driverList; 
-(id)softwareUpdateScanDeviceID;
-(char)matchesIDDevice:(id)arg1 ;
-(char)supportsPCL;
-(char)supportsPostscript;
-(id)deviceURI;
-(id)matchExistingQueues:(id)arg1 ;
-(id)driverInfo:(id)arg1 ;
-(NSArray *)driverList;
-(void)setQueueID:(NSString *)arg1 ;
-(NSString *)queueID;
-(void)dealloc;
-(id)name;
@end
