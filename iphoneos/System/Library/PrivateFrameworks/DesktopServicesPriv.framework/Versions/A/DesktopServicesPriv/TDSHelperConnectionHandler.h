/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DesktopServicesPriv/DesktopServicesPriv-Structs.h>
@interface TDSHelperConnectionHandler : NSObject {

	TDSHelperContext* _helper;
	TDSMutex* _mutex;

}
-(id)initWithHelper:(TDSHelperContext*)arg1 ;
-(void)handleHelperEvent:(void*)arg1 ;
-(void)clearHelper;
@end

