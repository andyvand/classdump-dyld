/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MediaLibrary.framework/Versions/A/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaLibrary/MediaLibrary-Structs.h>
@class MLPMRContextImpl;

@interface MLPMRContext : NSObject {

	MLPMRContextImpl* impl;

}
+(void)cleanupFromTerminate;
+(void)registerForCleanup;
+(void)initialize;
+(id)sharedInstance;
-(void*)instrument:(id)arg1 ;
-(id)logPath;
-(MLPMRInstrument*)cppInstrument:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)applicationName;
-(void)setParameters:(id)arg1 ;
@end

