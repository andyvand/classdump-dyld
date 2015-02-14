/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCPlugIn;

@interface QCPlugInPatch : QCPatch {

	QCPlugIn* _plugIn;
	unsigned long long _executionLevel;
	CFDictionaryRef _inputValueCache;
	CFDictionaryRef _propertyPorts;

}
+(char)shouldCreateIvarPorts;
+(id)attributesWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setUndoManager:(id)arg1 ;
-(void)enable:(id)arg1 ;
-(void)disable:(id)arg1 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3 ;
-(id)_addInputPortWithClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 ;
-(id)_addOutputPortWithClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 ;
-(id)plugIn;
@end

