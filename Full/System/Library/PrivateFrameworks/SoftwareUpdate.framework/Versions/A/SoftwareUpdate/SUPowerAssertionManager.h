/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
@class NSMutableDictionary;

@interface SUPowerAssertionManager : NSObject {

	NSMutableDictionary* _assertionDict;

}
-(void)createPowerAssertionWithDescription:(id)arg1 ;
-(void)cancelPowerAssertionWithDescription:(id)arg1 ;
-(void)createPowerAssertionWithType:(CFStringRef)arg1 timeout:(double)arg2 andDescription:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

