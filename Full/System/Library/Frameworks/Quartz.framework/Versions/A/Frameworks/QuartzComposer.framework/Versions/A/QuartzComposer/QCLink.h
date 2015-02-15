/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/GFConnection.h>

@interface QCLink : GFConnection {

	id _proExtension;
	void** _unused2[3];

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(char)accessInstanceVariablesDirectly;
-(void)dealloc;
-(id)initWithGraph:(id)arg1 sourcePort:(id)arg2 destinationPort:(id)arg3 arguments:(id)arg4 ;
-(void)connectionWillDeleteFromGraph;
-(id)parentPatch;
-(id)destinationPatch;
-(id)sourcePatch;
@end

