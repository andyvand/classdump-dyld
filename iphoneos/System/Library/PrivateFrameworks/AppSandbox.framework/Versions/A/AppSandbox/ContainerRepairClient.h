/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppSandbox.framework/Versions/A/AppSandbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ContainerRepairClient : NSObject {

	NSString* _containerName;
	char* _logMessage;
	int _repairAttemptsCount;
	unsigned long long _result;

}
+(char)isNonRepairableError:(id)arg1 ;
-(id)initWithContainerName:(id)arg1 ;
-(unsigned long long)doRepair;
-(char)updateError:(id*)arg1 ;
-(void)doMessageTrace;
-(void)dealloc;
@end

