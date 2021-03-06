/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/blued
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <blued/blued-Structs.h>
@class NSObject, NSDictionary, NSMutableData, NSRunLoop, NSData, NSString;

@interface UserHIDDevice : NSObject {

	IOHIDUserDeviceRef _hidDevice;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _getReportSemaphore;
	unsigned char _getReportReportID;
	int _getReportType;
	int _getReportResult;
	int _setReportResult;
	/*^block*/id _writeHandler;
	/*^block*/id _readHandler;
	NSDictionary* _deviceProperties;
	NSMutableData* _getReportBuffer;
	NSRunLoop* _backgroundRunLoop;
	NSObject*<OS_dispatch_semaphore> _setReportSemaphore;

}

@property (readonly) NSData * reportDescriptor; 
@property (readonly) NSString * deviceName; 
@property (readonly) unsigned short productID; 
@property (readonly) unsigned short vendorID; 
@property (readonly) unsigned locationID; 
@property (copy) id writeHandler;                                                      //@synthesize writeHandler=_writeHandler - In the implementation block
@property (copy) id readHandler;                                                       //@synthesize readHandler=_readHandler - In the implementation block
@property (copy) NSDictionary * deviceProperties;                                      //@synthesize deviceProperties=_deviceProperties - In the implementation block
@property (readonly) NSObject*<OS_dispatch_semaphore> getReportSemaphore;              //@synthesize getReportSemaphore=_getReportSemaphore - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned char getReportReportID;                                    //@synthesize getReportReportID=_getReportReportID - In the implementation block
@property (assign) int getReportType;                                                  //@synthesize getReportType=_getReportType - In the implementation block
@property (retain) NSMutableData * getReportBuffer;                                    //@synthesize getReportBuffer=_getReportBuffer - In the implementation block
@property (assign) int getReportResult;                                                //@synthesize getReportResult=_getReportResult - In the implementation block
@property (retain) NSRunLoop * backgroundRunLoop;                                      //@synthesize backgroundRunLoop=_backgroundRunLoop - In the implementation block
@property (assign) int setReportResult;                                                //@synthesize setReportResult=_setReportResult - In the implementation block
@property (readonly) NSObject*<OS_dispatch_semaphore> setReportSemaphore;              //@synthesize setReportSemaphore=_setReportSemaphore - In the implementation block
-(void)setDeviceProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)deviceProperties;
-(unsigned char)getReportReportID;
-(int)getReportType;
-(NSMutableData *)getReportBuffer;
-(void)setGetReportResult:(int)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)getReportSemaphore;
-(void)setSetReportResult:(int)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)setReportSemaphore;
-(NSData *)reportDescriptor;
-(int)handleIncomingReport:(unsigned char)arg1 type:(int)arg2 data:(id)arg3 status:(int)arg4 ;
-(void)writeComplete:(int)arg1 ;
-(void)setGetReportReportID:(unsigned char)arg1 ;
-(void)setGetReportType:(int)arg1 ;
-(void)setGetReportBuffer:(NSMutableData *)arg1 ;
-(int)getReportResult;
-(NSRunLoop *)backgroundRunLoop;
-(void)setBackgroundRunLoop:(NSRunLoop *)arg1 ;
-(int)setReportResult;
-(unsigned short)productID;
-(void)disconnect;
-(void)setReadHandler:(id)arg1 ;
-(void)setWriteHandler:(id)arg1 ;
-(id)readHandler;
-(id)writeHandler;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithProperties:(id)arg1 ;
-(unsigned short)vendorID;
-(unsigned)locationID;
-(NSString *)deviceName;
@end

