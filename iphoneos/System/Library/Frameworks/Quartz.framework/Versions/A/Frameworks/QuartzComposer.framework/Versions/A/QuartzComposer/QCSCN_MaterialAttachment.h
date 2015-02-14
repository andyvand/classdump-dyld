/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSDictionary;

@interface QCSCN_MaterialAttachment : NSObject {

	unsigned glID;
	unsigned target;
	void* context;
	CGSize size;
	NSDictionary* options;

}

@property (assign) unsigned glID; 
@property (assign) unsigned target; 
@property (assign) void* context; 
@property (assign) CGSize size; 
@property (copy) NSDictionary * options; 
-(void)dealloc;
-(void*)context;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(CGSize)size;
-(NSDictionary *)options;
-(void)setSize:(CGSize)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(unsigned)glID;
-(void)setGlID:(unsigned)arg1 ;
-(void)setContext:(void*)arg1 ;
@end

