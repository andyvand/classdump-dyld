/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCRunLoopPatch.h>

@class QCStructurePort, NSString, QCStructure;

@interface QCBonjourServices : QCRunLoopPatch {

	QCStructurePort* outputServices;
	NSString* _serviceType;
	char _keylessStructures;
	CFNetServiceBrowserRef _browser;
	CFDictionaryRef _serviceList;
	opaque_pthread_mutex_t _serviceMutex;
	QCStructure* _serviceStructure;

}
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)setServiceType:(id)arg1 ;
-(char)keylessStructures;
-(id)serviceType;
-(CFDictionaryRef)_serviceList;
-(void)_setStructure:(id)arg1 ;
@end

