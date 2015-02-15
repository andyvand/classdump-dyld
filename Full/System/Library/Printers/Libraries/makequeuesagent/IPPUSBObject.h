/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Printers/Libraries/makequeuesagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <makequeuesagent/MakequeuesPrinterObject.h>

@class NSString, NSDictionary, NSArray;

@interface IPPUSBObject : MakequeuesPrinterObject {

	NSString* registeredName;
	NSDictionary* txtDictionary;

}

@property (retain) NSString * registeredName; 
@property (retain) NSDictionary * txtDictionary; 
@property (readonly) NSArray * uris; 
@property (readonly) char supportsFax; 
+(id)ippUSBObjectWithRegisteredName:(id)arg1 ;
-(char)matchesIDDevice:(id)arg1 ;
-(id)deviceURI;
-(id)matchExistingQueues:(id)arg1 ;
-(id)driverInfo:(id)arg1 ;
-(id)driverList;
-(void)setRegisteredName:(NSString *)arg1 ;
-(id)initIPPUSBObjectWithRegisteredName:(id)arg1 ;
-(void)setTxtDictionary:(NSDictionary *)arg1 ;
-(NSString *)registeredName;
-(NSDictionary *)txtDictionary;
-(NSArray *)uris;
-(char)supportsFax;
-(id)matchExistingFaxQueue:(id)arg1 ;
-(void)dealloc;
-(id)name;
@end
