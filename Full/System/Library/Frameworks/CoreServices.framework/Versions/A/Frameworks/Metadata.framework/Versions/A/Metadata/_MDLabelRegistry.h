/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Metadata/Metadata-Structs.h>
@interface _MDLabelRegistry : NSObject {

	long long _generation;
	CFDictionaryRef _labelsByID;
	CFDictionaryRef _labelsByUUID;
	CFDictionaryRef _labelKinds;
	CFNotificationCenterRef _localCenter;
	dispatch_queue_sRef _localQueue;

}
-(CFArrayRef)copyLabelsWithKind:(CFStringRef)arg1 ;
-(id)syncWithLabelData:(CFDataRef)arg1 isFullSync:(char)arg2 ;
-(id)labelWithUUID:(CFUUIDRef)arg1 ;
-(void)internLabel:(id)arg1 ;
-(void)postNotification:(CFStringRef)arg1 forLabel:(id)arg2 ;
-(void)removeLabel:(id)arg1 ;
-(void)processLabelData:(CFDataRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CFArrayRef)copyLabelKinds;
-(void)enumerateLabelsMatchingExpression:(CFStringRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)labelWithID:(CFStringRef)arg1 ;
-(id)labelWithName:(CFStringRef)arg1 kind:(CFStringRef)arg2 ;
-(id)init;
-(void)dealloc;
-(char)synchronize;
@end

